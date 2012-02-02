#ifndef DEDX_PROGRAM_CONST_H_INCLUDED
#define DEDX_PROGRAM_CONST_H_INCLUDED

/* ok, this is a bit overkill... */

/* Hey Jakob, whats the purpose with  "" placeholder ? */
const char dedx_program_table[110][20] = {
  "(N/A)","ASTAR","PSTAR","ESTAR","MSTAR","ICRU73_OLD","ICRU73","ICRU49","","ICRU", // 0 - 9
  "","","","","","","","","","",  // 10-19
  "","","","","","","","","","",  // 20-29
  "","","","","","","","","","",  // 30-39
  "","","","","","","","","","",  // 40-49
  "","","","","","","","","","",  // 50-59
  "","","","","","","","","","",  // 60-69
  "","","","","","","","","","",  // 70-79
  "","","","","","","","","","",  // 80-89
  "","","","","","","","","","",  // 90-99
  "BETHE","","","","","","","","",""   // 100-109
};
const char dedx_program_version[110][20] = {
  "(N/A)","1.2","1.2","ESTAR","3.12","2005/06","2005/06-REV","ICRU Report 49 D","","1.0", // 0 - 9
  "","","","","","","","","","",  // 10-19
  "","","","","","","","","","",  // 20-29
  "","","","","","","","","","",  // 30-39
  "","","","","","","","","","",  // 40-49
  "","","","","","","","","","",  // 50-59
  "","","","","","","","","","",  // 60-
  "","","","","","","","","","",  // 70-79
  "","","","","","","","","","",  // 80-89
  "","","","","","","","","","",  // 90-99
  "1.0","","","","","","","","",""   // 100-109
};

const int dedx_available_programs[20] = {
  DEDX_ASTAR, DEDX_PSTAR,
  DEDX_ESTAR, DEDX_MSTAR,
  DEDX_ICRU73_OLD, DEDX_ICRU73,
  DEDX_ICRU49, DEDX_ICRU,
  DEDX_BETHE, -1};

const int dedx_program_available_ions[110][20] = {
  // currently excluding BETHE, which can do any ion
  {-1}, // none, empty placeholder
  {2,-1}, // ASTAR
  {1,-1}, // PSTAR
  {1001,-1}, // ESTAR
  {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1}, // MSTAR
  {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1}, // ICRU73_OLD
  {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1}, // ICRU73
  {1,2,-1}, // ICRU49
  {-1}, // Jakobs magic placeholder 
  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1} // ICRU
};
const int dedx_program_available_materials[110][290] = {
  // currently excluding BETHE, which can do any material
  {-1}, // none
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // ASTAR
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // PSTAR
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
   100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,
   120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,
   140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
   160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,
   180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,
   200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,
   220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
   240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,
   260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,906,
   -1}, // ESTAR
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // MSTAR
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // ICRU73_OLD
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // ICRU73
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // ICRU49
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}, 
  {-1}, // Jakobs magic placeholder 
  {1,2,4,5,6,7,8,10,13,14,18,22,26,28,29,32,36,40,42,47,50,54,64, // ICRU
   73,74,78,79,82,92,99,101,103,104,106,111,119,120,126,130,134,138,139,
   141,155,160,169,179,185,189,191,197,200,201,202,203,204,209,213,215,216,219,
   221,222,223,225,226,227,232,238,245,252,255,263,264,266,276,277,906,-1}
};

const char dedx_material_table[1000][40] = {
  "(N/A)",
  "HYDROGEN", "HELIUM", "LITHIUM", "BERYLLIUM", "BORON", "CARBON",
  "NITROGEN", "OXYGEN", "FLUORINE", "NEON", "SODIUM", "MAGNESIUM",
  "ALUMINUM", "SILICON", "PHOSPHORUS", "SULFUR", "CHLORINE", "ARGON",
  "POTASSIUM", "CALCIUM", "SCANDIUM", "TITANIUM", "VANADIUM", "CHROMIUM",
  "MANGANESE", "IRON", "COBALT", "NICKEL", "COPPER", "ZINC", "GALLIUM",
  "GERMANIUM", "ARSENIC", "SELENIUM", "BROMINE", "KRYPTON", "RUBIDIUM",
  "STRONTIUM", "YTTRIUM", "ZIRCONIUM", "NIOBIUM", "MOLYBDENUM", "TECHNETIUM",
  "RUTHENIUM", "RHODIUM", "PALLADIUM", "SILVER", "CADMIUM", "INDIUM", "TIN",
  "ANTIMONY", "TELLURIUM", "IODINE", "XENON", "CESIUM", "BARIUM", "LANTHANUM",
  "CERIUM", "PRASEODYMIUM", "NEODYMIUM", "PROMETHIUM", "SAMARIUM", "EUROPIUM",
  "GADOLINIUM", "TERBIUM", "DYSPROSIUM", "HOLMIUM", "ERBIUM", "THULIUM",
  "YTTERBIUM", "LUTETIUM", "HAFNIUM", "TANTALUM", "TUNGSTEN", "RHENIUM",
  "OSMIUM", "IRIDIUM", "PLATINUM", "GOLD", "MERCURY", "THALLIUM", "LEAD",
  "BISMUTH", "POLONIUM", "ASTATINE", "RADON", "FRANCIUM", "RADIUM", "ACTINIUM",
  "THORIUM","PROTACTINIUM", "URANIUM", "NEPTUNIUM", "PLUTONIUM", "AMERICIUM",
  "CURIUM", "BERKELIUM", "CALIFORNIUM", 
  "A150_TISSUE_EQUIVALENT_PLASTIC", "ACETONE", "ACETYLENE",
  "ADENINE", "ADIPOSETISSUE_ICRP", "AIR", "ALANINE", "ALUMINUMOXIDE", "AMBER",
  "AMMONIA", "ANILINE", "ANTHRACENE", "B100", "BAKELITE", "BARIUMFLUORIDE",
  "BARIUMSULFATE", "BENZENE", "BERYLLIUMOXIDE", "BISMUTHGERMANIUMOXIDE",
  "BLOOD_ICRP", "BONE_COMPACT_ICRU", "BONE_CORTICAL_ICRP", "BORONCARBIDE",
  "BORONOXIDE", "BRAIN_ICRP", "BUTANE", "N_BUTYLALCOHOL", "C552",
  "CADMIUMTELLURIDE", "CADMIUMTUNGSTATE", "CALCIUMCARBONATE",
  "CALCIUMFLUORIDE", "CALCIUMOXIDE", "CALCIUMSULFATE", "CALCIUMTUNGSTATE",
  "CARBONDIOXIDE", "CARBONTETRACHLORIDE", "CELLULOSEACETATE_CELLOPHANE",
  "CELLULOSEACETATEBUTYRATE", "CELLULOSENITRATE",
  "CERICSULFATEDOSIMETERSOLUTION", "CESIUMFLUORIDE", "CESIUMIODIDE",
  "CHLOROBENZENE", "CHLOROFORM", "CONCRETE_PORTLAND", "CYCLOHEXANE",
  "DICHLOROBENZENE", "DICHLORODIETHYLETHER", "DICHLOROETHANE", "DIETHYLETHER",
  "N_N_DIMETHYLFORMAMIDE", "DIMETHYLSULFOXIDE", "ETHANE", "ETHYLALCOHOL",
  "ETHYLCELLULOSE", "ETHYLENE", "EYELENS_ICRP", "FERRICOXIDE", "FERROBORIDE",
  "FERROUSOXIDE", "FERROUSSULFATEDOSIMETERSOLUTION", "FREON_12", "FREON_12B2",
  "FREON_13", "FREON_13B1", "FREON_13I1", "GADOLINIUMOXYSULFIDE",
  "GALLIUMARSENIDE", "GELINPHOTOGRAPHICEMULSION", 
  "GLASS_PYREX", "GLASS_LEAD", "GLASS_PLATE",  /* 169, 170, 171 */
  "GLUCOSE", "GLUTAMINE", "GLYCEROL", "GUANINE",
  "GYPSUM_PLASTEROFPARIS", "N_HEPTANE", "N_HEXANE", "KAPTONPOLYIMIDEFILM",
  "LANTHANUMOXYBROMIDE", "LANTHANUMOXYSULFIDE", "LEADOXIDE",
  "LITHIUMAMIDE", "LITHIUMCARBONATE", "LITHIUMFLUORIDE", "LITHIUMHYDRIDE",
  "LITHIUMIODIDE", "LITHIUMOXIDE", "LITHIUMTETRABORATE", "LUNG_ICRP", "M3WAX",
  "MAGNESIUMCARBONATE", "MAGNESIUMFLUORIDE", "MAGNESIUMOXIDE",
  "MAGNESIUMTETRABORATE", "MERCURICIODIDE", "METHANE", "METHANOL", "MIXDWAX",
  "MS20TISSUESUBSTITUTE", "MUSCLE_SKELETAL", "MUSCLE_STRIATED",
  "MUSCLE_EQUIVALENTLIQUID_SUCROSE", "MUSCLE_EQUIVALENTLIQUID_NOSUCROSE",
  "NAPHTHALENE", "NITROBENZENE", "NITROUSOXIDE",
  "NYLON_DUPONTELVAMIDE8062", "NYLON_TYPE6AND6_6", "NYLON_TYPE6_10",
  "NYLON_TYPE11_RILSAN", "OCTANE_LIQUID", "PARAFFINWAX", "N_PENTANE",
  "PHOTOGRAPHICEMULSION", "PLASTICSCINTILLATOR_VINYLTOLUENEBASED",
  "PLUTONIUMDIOXIDE", "POLYACRYLONITRILE", "POLYCARBONATE_MAKROLON_LEXAN",
  "POLYCHLOROSTYRENE", "POLYETHYLENE", "MYLAR", "PMMA", "POLYOXYMETHYLENE",
  "POLYPROPYLENE", "POLYSTYRENE", "POLYTETRAFLUOROETHYLENE (TEFLON)", 
  "POLYTRIFLUOROCHLOROETHYLENE",
  "POLYVINYLACETATE", "POLYVINYLALCOHOL", "POLYVINYLBUTYRAL",
  "POLYVINYLCHLORIDE", "SARAN", "POLYVINYLIDENEFLUORIDE",
  "POLYVINYLPYRROLIDONE", "POTASSIUMIODIDE", "POTASSIUMOXIDE", "PROPANE",
  "PROPANE_LIQUID", "N_PROPYLALCOHOL", "PYRIDINE", "RUBBER_BUTYL",
  "RUBBER_NATURAL", "RUBBER_NEOPRENE", "SILICONDIOXIDE", "SILVERBROMIDE",
  "SILVERCHLORIDE", "SILVERHALIDESINPHOTOGRAPHICEMULSION", "SILVERIODIDE",
  "SKIN_ICRP", "SODIUMCARBONATE", "SODIUMIODIDE", "SODIUMMONOXIDE",
  "SODIUMNITRATE", "STILBENE", "SUCROSE", "TERPHENYL", "TESTES_ICRP",
  "TETRACHLOROETHYLENE", "THALLIUMCHLORIDE", "TISSUE_SOFT_ICRP",
  "TISSUE_SOFT_ICRUFOUR_COMPONENT", "TISSUE_EQUIVALENTGAS_METHANEBASED",
  "TISSUE_EQUIVALENTGAS_PROPANEBASED", "TITANIUMDIOXIDE", "TOLUENE",
  "TRICHLOROETHYLENE", "TRIETHYLPHOSPHATE", "TUNGSTENHEXAFLUORIDE",
  "URANIUMDICARBIDE", "URANIUMMONOCARBIDE", "URANIUMOXIDE", "UREA", "VALINE",
  "VITONFLUOROELASTOMER", "WATER", "WATERVAPOR", "XYLENE", "",  // XYLENE is 278
  "","","","","","","","","","", // 280-289
  "","","","","","","","","","", // 290-299
  "","","","","","","","","","", // 300-309
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","","","","",  // 400-409
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","","","","",  // 500-509
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","","","","",  // 600-609
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","","","","",  // 700-709
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","","","","",  // 800-809
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", 
  "","","","","","","GRAPHITE","","","",  // 900-909
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","","", "","","","","","","","","","", 
  "","","","","","","","","",""  // last element is 999
};

const char dedx_ion_table[120][40] = {
  "(N/A)",
  "HYDROGEN", "HELIUM", "LITHIUM", "BERYLLIUM", "BORON", "CARBON",
  "NITROGEN", "OXYGEN", "FLUORINE", "NEON", "SODIUM", "MAGNESIUM",
  "ALUMINUM", "SILICON", "PHOSPHORUS", "SULFUR", "CHLORINE", "ARGON",
  "POTASSIUM", "CALCIUM", "SCANDIUM", "TITANIUM", "VANADIUM", "CHROMIUM",
  "MANGANESE", "IRON", "COBALT", "NICKEL", "COPPER", "ZINC", "GALLIUM",
  "GERMANIUM", "ARSENIC", "SELENIUM", "BROMINE", "KRYPTON", "RUBIDIUM",
  "STRONTIUM", "YTTRIUM", "ZIRCONIUM", "NIOBIUM", "MOLYBDENUM", "TECHNETIUM",
  "RUTHENIUM", "RHODIUM", "PALLADIUM", "SILVER", "CADMIUM", "INDIUM", "TIN",
  "ANTIMONY", "TELLURIUM", "IODINE", "XENON", "CESIUM", "BARIUM", "LANTHANUM",
  "CERIUM", "PRASEODYMIUM", "NEODYMIUM", "PROMETHIUM", "SAMARIUM", "EUROPIUM",
  "GADOLINIUM", "TERBIUM", "DYSPROSIUM", "HOLMIUM", "ERBIUM", "THULIUM",
  "YTTERBIUM", "LUTETIUM", "HAFNIUM", "TANTALUM", "TUNGSTEN", "RHENIUM",
  "OSMIUM", "IRIDIUM", "PLATINUM", "GOLD", "MERCURY", "THALLIUM", "LEAD",
  "BISMUTH", "POLONIUM", "ASTATINE", "RADON", "FRANCIUM", "RADIUM", "ACTINIUM",
  "THORIUM","PROTACTINIUM", "URANIUM", "NEPTUNIUM", "PLUTONIUM", "AMERICIUM",
  "CURIUM", "BERKELIUM", "CALIFORNIUM", "EINSTEINIUM", "FERMIUM",
  "MENDELEVIUM", "NOBELIUM", "LAWRENCIUM", "RUTHERFORDNIUM", "DUBNIUM",
  "SEABORGIUM", "BOHRIUM", "HASSIUM", "MEITNERIUM", "DARMSTADTIUM",
  "ROENTGENIUM", "COPERNICUM"
};

#endif // DEDX_PROGRAM_CONST_H_INCLUDED
