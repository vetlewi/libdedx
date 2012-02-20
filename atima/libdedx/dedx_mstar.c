/*
    This file is part of libdedx.

    libdedx is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libdedx is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libdedx.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "dedx_mstar.h"


void _dedx_convert_energy_to_mstar(stopping_data * in, stopping_data * out,char state, float * energy)
{
	int err = 0;
	if(state == 'a' || state == 'b')
	{
		if(_dedx_target_is_gas(in->target,&err))
		{
			if(state == 'a')
				state = 'g';
			else
				state = 'h';

		}
		else{
			if(state=='a')
			{
				state = 'c';
			}
			else
			{
				state = 'd';
			}
		}
	}
	int n = in->length;
	int i;
	for(i = 0; i < n; i++)
	{
		energy[i] = energy[i]/4.0;
	}
	for(i = 0; i < n; i++)
	{
		out->data[i] = _dedx_calculate_mspaul_coef(state, in->ion, in->target, energy[i])*in->data[i]*1000;
	}
	out->length = in->length;
	out->target = in->target;
	out->ion = in->ion;
}
