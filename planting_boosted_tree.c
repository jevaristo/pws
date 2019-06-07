#include "jmp_score.h"
#include "jmp_lib.h"


JMP_SCORE_API void fillMetadataCounts(COUNTS *mc) {
	mc->creatorLen       = 13;
	mc->modelNameLen     = 1;
	mc->predictedLen     = 25;
	mc->tableNameLen     = 15;
	mc->versionLen       = 7;
	mc->timestampLen     = 21;
	mc->maxInputNameLen  = 23;
	mc->maxOutputNameLen = 35;
	mc->numInputs        = 7;
	mc->numOutputs       = 1;
}

JMP_SCORE_API void fillModelMetadata(MODELMD *mm) {
	strcpy_safe(mm->creator,   "Boosted Tree"); 
	strcpy_safe(mm->modelName, ""); 
	strcpy_safe(mm->predicted, "Water yield response (%)"); 
	strcpy_safe(mm->tableName, "pass1 PLANTING"); 
	strcpy_safe(mm->version,   "13.2.1");
    strcpy_safe(mm->timestamp, "2019-05-21T21:01:04Z");
}

JMP_SCORE_API void fillInputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "Catchment area (km2)");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        

    strcpy_safe(fd[1].name, "total pore amount (mm)");
    fd[1].type = fnum_type;
    fd[1].datalen = 0;        

    strcpy_safe(fd[2].name, "RC_Beck (fraction)");
    fd[2].type = fnum_type;
    fd[2].datalen = 0;        

    strcpy_safe(fd[3].name, "RootZoneStorage (mm/y)");
    fd[3].type = fnum_type;
    fd[3].datalen = 0;        

    strcpy_safe(fd[4].name, "AET");
    fd[4].type = fnum_type;
    fd[4].datalen = 0;        

    strcpy_safe(fd[5].name, "k (perm)");
    fd[5].type = fnum_type;
    fd[5].datalen = 0;        

    strcpy_safe(fd[6].name, "PET");
    fd[6].type = fnum_type;
    fd[6].datalen = 0;        
}

JMP_SCORE_API void fillOutputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "Water yield response (%) Predictor");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        
}

// Original name was: 'Catchment area (km2)'
#define CATCHMENT_AREA_KM2_    indata[0].data.fnum
// Original name was: 'total pore amount (mm)'
#define TOTAL_PORE_AMOUNT_MM_  indata[1].data.fnum
// Original name was: 'RC_Beck (fraction)'
#define RC_BECK_FRACTION_      indata[2].data.fnum
// Original name was: 'RootZoneStorage (mm/y)'
#define ROOTZONESTORAGE_MM_Y_  indata[3].data.fnum
#define AET                    indata[4].data.fnum
// Original name was: 'k (perm)'
#define K_PERM_                indata[5].data.fnum
#define PET                    indata[6].data.fnum

// Original name was: 'Water yield response (%) Predictor'
#define WATER_YIELD_RESPONSE_PREDICTOR     outdata[0].data.fnum

JMP_SCORE_API void score(PARM *indata, PARM *outdata) {
    double _temp_0 = -8.88373365572987;
    double _temp_1 = MISSING;
    double _temp_3 = MISSING;
    double _temp_5 = MISSING;
    double _temp_7 = MISSING;
    double _temp_9 = MISSING;
    double _temp_12 = MISSING;
    double _temp_15 = MISSING;
    double _temp_17 = MISSING;
    double _temp_19 = MISSING;
    double _temp_21 = MISSING;
    double _temp_24 = MISSING;
    double _temp_26 = MISSING;
    double _temp_29 = MISSING;
    double _temp_31 = MISSING;
    double _temp_33 = MISSING;
    double _temp_35 = MISSING;
    double _temp_37 = MISSING;
    double _temp_39 = MISSING;
    double _temp_41 = MISSING;
    double _temp_43 = MISSING;
    double _temp_45 = MISSING;
    double _temp_47 = MISSING;
    double _temp_49 = MISSING;
    double _temp_51 = MISSING;
    double _temp_53 = MISSING;
    double _temp_55 = MISSING;
    double _temp_57 = MISSING;
    double _temp_59 = MISSING;
    double _temp_61 = MISSING;
    double _temp_63 = MISSING;
    double _temp_65 = MISSING;
    double _temp_67 = MISSING;
    double _temp_69 = MISSING;
    double _temp_71 = MISSING;
    double _temp_73 = MISSING;
    double _temp_75 = MISSING;
    double _temp_77 = MISSING;
    double _temp_79 = MISSING;
    double _temp_81 = MISSING;
    double _temp_83 = MISSING;
    double _temp_85 = MISSING;
    double _temp_87 = MISSING;
    double _temp_89 = MISSING;
    double _temp_91 = MISSING;
    double _temp_93 = MISSING;
    double _temp_95 = MISSING;
    double _temp_96 = MISSING;
    double _temp_97 = MISSING;
    double _temp_98 = MISSING;
    double _temp_99 = MISSING;

    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_2 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_2 = -3.53220789302389;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.9949)  {
            _temp_2 = -0.61572223548583;
        }
        else {
            _temp_2 = 2.38599847578729;
        }
        _temp_1 = _temp_2;
    }
    else {
        _temp_1 = 2.00733465710027;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_4 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_4 = -3.17868826120631;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.9949)  {
            _temp_4 = -0.51594131741259;
        }
        else {
            _temp_4 = 2.13790741142809;
        }
        _temp_3 = _temp_4;
    }
    else {
        _temp_3 = 1.66854524785265;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
        double _temp_6 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 169.7)  {
            _temp_6 = -1.84980502172813;
        }
        else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.286660969)  {
            _temp_6 = 0.272804578001767;
        }
        else {
            _temp_6 = 1.71328076847796;
        }
        _temp_5 = _temp_6;
    }
    else {
        _temp_5 = 1.29178507158187;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
        double _temp_8 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 3.91)  {
            _temp_8 = -1.7278045843877;
        }
        else if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 193.199996948242)  {
            _temp_8 = -0.998737019909657;
        }
        else {
            _temp_8 = 0.48848660788209;
        }
        _temp_7 = _temp_8;
    }
    else {
        _temp_7 = 0.500154489134539;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
        double _temp_10 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 390)  {
            double _temp_11 = MISSING;

            if (!jmp_is_missing(AET) && AET >= 586.184633197207)  {
                _temp_11 = -2.69366029649953;
            }
            else {
                _temp_11 = 0.74141240703152;
            }
            _temp_10 = _temp_11;
        }
        else {
            _temp_10 = 0.320178790759502;
        }
        _temp_9 = _temp_10;
    }
    else {
        _temp_9 = 1.03614275406354;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
        double _temp_13 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 390)  {
            double _temp_14 = MISSING;

            if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.126223698)  {
                _temp_14 = -2.79181514282392;
            }
            else {
                _temp_14 = -0.345873476039388;
            }
            _temp_13 = _temp_14;
        }
        else {
            _temp_13 = 0.438833395274649;
        }
        _temp_12 = _temp_13;
    }
    else {
        _temp_12 = 0.61024862802495;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.9)  {
        double _temp_16 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 3.91)  {
            _temp_16 = -2.62525517982485;
        }
        else if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 193.199996948242)  {
            _temp_16 = -1.12987079759709;
        }
        else {
            _temp_16 = 0.581342490825813;
        }
        _temp_15 = _temp_16;
    }
    else {
        _temp_15 = 0.51482236179417;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.9)  {
        double _temp_18 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 3.91)  {
            _temp_18 = -2.13406252960242;
        }
        else if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 193.199996948242)  {
            _temp_18 = -0.898863317918692;
        }
        else {
            _temp_18 = 0.439637947093881;
        }
        _temp_17 = _temp_18;
    }
    else {
        _temp_17 = 0.431863043274979;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.704693072212378)  {
        double _temp_20 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_20 = -0.908724131801991;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
            _temp_20 = -0.373234802349458;
        }
        else {
            _temp_20 = 0.951541704351596;
        }
        _temp_19 = _temp_20;
    }
    else {
        _temp_19 = 0.928653582364768;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.704693072212378)  {
        double _temp_22 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.14257282)  {
            double _temp_23 = MISSING;

            if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.6)  {
                _temp_23 = -1.48577766572633;
            }
            else {
                _temp_23 = 0.538120290226279;
            }
            _temp_22 = _temp_23;
        }
        else {
            _temp_22 = 0.255550144280269;
        }
        _temp_21 = _temp_22;
    }
    else {
        _temp_21 = 0.837340809778984;
    }
    if (jmp_is_missing(AET) || AET < 1443.98874378204)  {
        double _temp_25 = MISSING;

        if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 105)  {
            _temp_25 = -3.30182125177212;
        }
        else if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
            _temp_25 = -0.291349718264768;
        }
        else {
            _temp_25 = 2.53668517048292;
        }
        _temp_24 = _temp_25;
    }
    else {
        _temp_24 = 3.18088213586091;
    }
    if (jmp_is_missing(AET) || AET < 1622.323242)  {
        double _temp_27 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.5)  {
            double _temp_28 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 169.7)  {
                _temp_28 = -2.38115025742244;
            }
            else {
                _temp_28 = 1.05375126255307;
            }
            _temp_27 = _temp_28;
        }
        else {
            _temp_27 = 0.66251775622723;
        }
        _temp_26 = _temp_27;
    }
    else {
        _temp_26 = 7.12453089312761;
    }
    if (jmp_is_missing(AET) || AET < 1622.323242)  {
        double _temp_30 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_30 = -3.44248660445366;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.9949)  {
            _temp_30 = -1.77816213439351;
        }
        else {
            _temp_30 = 4.58182421491992;
        }
        _temp_29 = _temp_30;
    }
    else {
        _temp_29 = 13.5811583605162;
    }
    if (jmp_is_missing(AET) || AET < 1622.323242)  {
        double _temp_32 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_32 = -3.09823794400829;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.9949)  {
            _temp_32 = -1.60034592095416;
        }
        else {
            _temp_32 = 4.12364179342793;
        }
        _temp_31 = _temp_32;
    }
    else {
        _temp_31 = 12.2230425244646;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.14257282)  {
        double _temp_34 = MISSING;

        if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.089582957)  {
            _temp_34 = -1.83956326305463;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.57)  {
            _temp_34 = -0.836773096039436;
        }
        else {
            _temp_34 = 1.52838687586923;
        }
        _temp_33 = _temp_34;
    }
    else {
        _temp_33 = 0.305558026083055;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.643045)  {
        double _temp_36 = MISSING;

        if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 131.199996948242)  {
            _temp_36 = -2.77778739745595;
        }
        else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
            _temp_36 = -1.35806085213357;
        }
        else {
            _temp_36 = 0.370638853856765;
        }
        _temp_35 = _temp_36;
    }
    else {
        _temp_35 = 3.41641815592444;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 142.800003051757)  {
        double _temp_38 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3256.2)  {
            _temp_38 = -2.35784274749313;
        }
        else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.510605216)  {
            _temp_38 = -0.747448808123716;
        }
        else {
            _temp_38 = 0.502591880658348;
        }
        _temp_37 = _temp_38;
    }
    else {
        _temp_37 = 0.181621305510382;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 142.800003051757)  {
        double _temp_40 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3256.2)  {
            _temp_40 = -2.14634599530919;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 3.1)  {
            _temp_40 = -0.643561272658073;
        }
        else {
            _temp_40 = 0.441003162592912;
        }
        _temp_39 = _temp_40;
    }
    else {
        _temp_39 = 0.163658611464889;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 145.5)  {
        double _temp_42 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.23141697)  {
            _temp_42 = -2.39146816774032;
        }
        else if (!jmp_is_missing(AET) && AET >= 586.184633197207)  {
            _temp_42 = -0.902092415333044;
        }
        else {
            _temp_42 = 0.724395241950144;
        }
        _temp_41 = _temp_42;
    }
    else {
        _temp_41 = 0.229818091015104;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_44 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_44 = -4.15490500602875;
        }
        else {
            _temp_44 = -0.363494159003074;
        }
        _temp_43 = _temp_44;
    }
    else if (jmp_is_missing(AET) || AET < 790.349491495075)  {
        _temp_43 = -1.22379807410138;
    }
    else {
        _temp_43 = 8.16245391313091;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_46 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_46 = -3.7354212638976;
        }
        else {
            _temp_46 = -0.266456842179292;
        }
        _temp_45 = _temp_46;
    }
    else if (jmp_is_missing(AET) || AET < 790.349491495075)  {
        _temp_45 = -0.907861379454088;
    }
    else {
        _temp_45 = 6.68120045701215;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_48 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.114737391)  {
            _temp_48 = -2.7778508017041;
        }
        else {
            _temp_48 = -0.0505654663126269;
        }
        _temp_47 = _temp_48;
    }
    else if (jmp_is_missing(AET) || AET < 790.349491495075)  {
        _temp_47 = -1.43165649545937;
    }
    else {
        _temp_47 = 10.0768809746628;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.1482)  {
        double _temp_50 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.114737391)  {
            _temp_50 = -1.93413629915713;
        }
        else {
            _temp_50 = 0.134414279890884;
        }
        _temp_49 = _temp_50;
    }
    else if (jmp_is_missing(AET) || AET < 758.893215988622)  {
        _temp_49 = -1.36183963515937;
    }
    else {
        _temp_49 = 5.36749748669888;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.16)  {
        double _temp_52 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_52 = -5.66637199694879;
        }
        else {
            _temp_52 = -0.681427488752928;
        }
        _temp_51 = _temp_52;
    }
    else if (jmp_is_missing(AET) || AET < 790.349491495075)  {
        _temp_51 = -1.74853367328295;
    }
    else {
        _temp_51 = 10.7214305837265;
    }
    if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.16)  {
        double _temp_54 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.14257282)  {
            _temp_54 = -3.37307565070462;
        }
        else {
            _temp_54 = -0.134100711234521;
        }
        _temp_53 = _temp_54;
    }
    else if (jmp_is_missing(AET) || AET < 790.349491495075)  {
        _temp_53 = -2.12741777757968;
    }
    else {
        _temp_53 = 12.6125953681367;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
        _temp_55 = -0.832604019372368;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        double _temp_56 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_56 = -3.73583962122262;
        }
        else {
            _temp_56 = 0.349068068176617;
        }
        _temp_55 = _temp_56;
    }
    else {
        _temp_55 = 1.53502769739662;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
        _temp_57 = -0.72411173318612;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        double _temp_58 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_58 = -3.24301822002687;
        }
        else {
            _temp_58 = 0.329260261888905;
        }
        _temp_57 = _temp_58;
    }
    else {
        _temp_57 = 1.27165500908234;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
        _temp_59 = -0.589116912718547;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        double _temp_60 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_60 = -2.6551156793137;
        }
        else {
            _temp_60 = 0.351133319934072;
        }
        _temp_59 = _temp_60;
    }
    else {
        _temp_59 = 0.844422656126854;
    }
    if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
        double _temp_62 = MISSING;

        if (!jmp_is_missing(PET) && PET >= 1259)  {
            _temp_62 = -1.53096423668315;
        }
        else {
            _temp_62 = -0.0226443361535146;
        }
        _temp_61 = _temp_62;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        _temp_61 = -0.142479293032155;
    }
    else {
        _temp_61 = 0.974591572903942;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_64 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.16)  {
            _temp_64 = -2.46989923393052;
        }
        else {
            _temp_64 = 2.99876693987018;
        }
        _temp_63 = _temp_64;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 1179)  {
        _temp_63 = -1.14909506877045;
    }
    else {
        _temp_63 = 15.2722612466006;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_66 = MISSING;

        if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.036942549)  {
            _temp_66 = -1.30944547434773;
        }
        else {
            _temp_66 = 1.75219702269641;
        }
        _temp_65 = _temp_66;
    }
    else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.380442)  {
        _temp_65 = -1.11769573011174;
    }
    else {
        _temp_65 = 8.59553360926147;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_68 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_68 = -2.94449538258169;
        }
        else {
            _temp_68 = -0.378351148193487;
        }
        _temp_67 = _temp_68;
    }
    else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.380442)  {
        _temp_67 = -1.61211536150426;
    }
    else {
        _temp_67 = 11.6409753752923;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_70 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_70 = -2.51207174130139;
        }
        else {
            _temp_70 = -0.328404468604437;
        }
        _temp_69 = _temp_70;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 1179)  {
        _temp_69 = -1.39020757503237;
    }
    else {
        _temp_69 = 9.97188107618309;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_72 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_72 = -1.85284549731676;
        }
        else {
            _temp_72 = -0.184595420969054;
        }
        _temp_71 = _temp_72;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 1179)  {
        _temp_71 = -1.20035889220146;
    }
    else {
        _temp_71 = 7.1579235456587;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_74 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_74 = -1.66756094758509;
        }
        else {
            _temp_74 = -0.166135878872149;
        }
        _temp_73 = _temp_74;
    }
    else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.380442)  {
        _temp_73 = -1.15657979178593;
    }
    else {
        _temp_73 = 6.4929690502959;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_76 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_76 = -1.42673183446642;
        }
        else {
            _temp_76 = -0.15442665231759;
        }
        _temp_75 = _temp_76;
    }
    else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.380442)  {
        _temp_75 = -0.956460054694103;
    }
    else {
        _temp_75 = 5.60007710976149;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_78 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_78 = -1.15344850141078;
        }
        else {
            _temp_78 = -0.0707618686151243;
        }
        _temp_77 = _temp_78;
    }
    else if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.380442)  {
        _temp_77 = -0.640326204296278;
    }
    else {
        _temp_77 = 4.14432775828879;
    }
    if (jmp_is_missing(AET) || AET < 1380.32160163648)  {
        double _temp_80 = MISSING;

        if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 3507.4)  {
            _temp_80 = -0.914242590896945;
        }
        else {
            _temp_80 = 0.529284790371401;
        }
        _temp_79 = _temp_80;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 1179)  {
        _temp_79 = -0.834486576090143;
    }
    else {
        _temp_79 = 4.80678208524183;
    }
    if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.015)  {
        _temp_81 = -1.84419522849054;
    }
    else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.12)  {
        double _temp_82 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_82 = -1.85189969826714;
        }
        else {
            _temp_82 = 0.117239390534544;
        }
        _temp_81 = _temp_82;
    }
    else {
        _temp_81 = 3.60326571117371;
    }
    if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.016)  {
        _temp_83 = -1.48447616909478;
    }
    else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.12)  {
        double _temp_84 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_84 = -1.68610720383971;
        }
        else {
            _temp_84 = 0.126261368162926;
        }
        _temp_83 = _temp_84;
    }
    else {
        _temp_83 = 3.77365264434529;
    }
    if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.016)  {
        _temp_85 = -1.37977504480637;
    }
    else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.12)  {
        double _temp_86 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 0.31)  {
            _temp_86 = -1.60252499360346;
        }
        else {
            _temp_86 = 0.14394604921536;
        }
        _temp_85 = _temp_86;
    }
    else {
        _temp_85 = 3.22361877036635;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        _temp_87 = -0.735403539749552;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 838.8)  {
        double _temp_88 = MISSING;

        if (!jmp_is_missing(AET) && AET >= 586.184633197207)  {
            _temp_88 = -1.49704734837644;
        }
        else {
            _temp_88 = 0.878144598537944;
        }
        _temp_87 = _temp_88;
    }
    else {
        _temp_87 = 2.50964990056916;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        double _temp_90 = MISSING;

        if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 3507.4)  {
            _temp_90 = -0.906516746667508;
        }
        else {
            _temp_90 = 0.603644528624671;
        }
        _temp_89 = _temp_90;
    }
    else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.741310241300917)  {
        _temp_89 = -0.298476666665036;
    }
    else {
        _temp_89 = 1.11999571092689;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 105)  {
        _temp_91 = -2.65887202456996;
    }
    else if (jmp_is_missing(AET) || AET < 1414.76385693939)  {
        double _temp_92 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_92 = -0.77739393202665;
        }
        else {
            _temp_92 = 0.263818625928621;
        }
        _temp_91 = _temp_92;
    }
    else {
        _temp_91 = 2.372987068563;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 105)  {
        _temp_93 = -2.10995850372772;
    }
    else if (jmp_is_missing(AET) || AET < 1292.36259691643)  {
        double _temp_94 = MISSING;

        if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
            _temp_94 = -0.80512341169268;
        }
        else {
            _temp_94 = 0.211605374967144;
        }
        _temp_93 = _temp_94;
    }
    else {
        _temp_93 = 1.49600218303335;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        _temp_95 = -0.661863185774597;
    }
    else if (jmp_is_missing(PET) || PET < 1414)  {
        _temp_95 = 0.00688866198824504;
    }
    else if (jmp_is_missing(AET) || AET < 1414.76385693939)  {
        _temp_95 = 1.23698842448092;
    }
    else {
        _temp_95 = 4.67432494403198;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        _temp_96 = -0.608260216706468;
    }
    else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.741310241300917)  {
        _temp_96 = -0.490212058733822;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        _temp_96 = 1.05445207672436;
    }
    else {
        _temp_96 = 4.024392519391;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        _temp_97 = -0.528689586847789;
    }
    else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.741310241300917)  {
        _temp_97 = -0.433188119565083;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        _temp_97 = 0.969875279007857;
    }
    else {
        _temp_97 = 3.3846545605956;
    }
    if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.327512711)  {
        _temp_98 = -0.409388535739673;
    }
    else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.741310241300917)  {
        _temp_98 = -0.356054158029933;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.72276980360217)  {
        _temp_98 = 0.824939537833518;
    }
    else {
        _temp_98 = 2.49450524624484;
    }
    if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 109.199996948242)  {
        _temp_99 = -1.9956497685055;
    }
    else if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
        _temp_99 = -0.633025394741994;
    }
    else if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.749894209332456)  {
        _temp_99 = -0.942720437297911;
    }
    else {
        _temp_99 = 1.36073771266286;
    }
    _temp_0 += _temp_1;
    _temp_0 += _temp_3;
    _temp_0 += _temp_5;
    _temp_0 += _temp_7;
    _temp_0 += _temp_9;
    _temp_0 += _temp_12;
    _temp_0 += _temp_15;
    _temp_0 += _temp_17;
    _temp_0 += _temp_19;
    _temp_0 += _temp_21;
    _temp_0 += _temp_24;
    _temp_0 += _temp_26;
    _temp_0 += _temp_29;
    _temp_0 += _temp_31;
    _temp_0 += _temp_33;
    _temp_0 += _temp_35;
    _temp_0 += _temp_37;
    _temp_0 += _temp_39;
    _temp_0 += _temp_41;
    _temp_0 += _temp_43;
    _temp_0 += _temp_45;
    _temp_0 += _temp_47;
    _temp_0 += _temp_49;
    _temp_0 += _temp_51;
    _temp_0 += _temp_53;
    _temp_0 += _temp_55;
    _temp_0 += _temp_57;
    _temp_0 += _temp_59;
    _temp_0 += _temp_61;
    _temp_0 += _temp_63;
    _temp_0 += _temp_65;
    _temp_0 += _temp_67;
    _temp_0 += _temp_69;
    _temp_0 += _temp_71;
    _temp_0 += _temp_73;
    _temp_0 += _temp_75;
    _temp_0 += _temp_77;
    _temp_0 += _temp_79;
    _temp_0 += _temp_81;
    _temp_0 += _temp_83;
    _temp_0 += _temp_85;
    _temp_0 += _temp_87;
    _temp_0 += _temp_89;
    _temp_0 += _temp_91;
    _temp_0 += _temp_93;
    _temp_0 += _temp_95;
    _temp_0 += _temp_96;
    _temp_0 += _temp_97;
    _temp_0 += _temp_98;
    _temp_0 += _temp_99;
    WATER_YIELD_RESPONSE_PREDICTOR = _temp_0;

}


