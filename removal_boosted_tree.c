#include "jmp_score.h"
#include "jmp_lib.h"


JMP_SCORE_API void fillMetadataCounts(COUNTS *mc) {
	mc->creatorLen       = 13;
	mc->modelNameLen     = 1;
	mc->predictedLen     = 25;
	mc->tableNameLen     = 14;
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
	strcpy_safe(mm->tableName, "pass1 REMOVAL"); 
	strcpy_safe(mm->version,   "13.2.1");
    strcpy_safe(mm->timestamp, "2019-05-22T12:16:36Z");
}

JMP_SCORE_API void fillInputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "RC_Beck (fraction)");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        

    strcpy_safe(fd[1].name, "Catchment area (km2)");
    fd[1].type = fnum_type;
    fd[1].datalen = 0;        

    strcpy_safe(fd[2].name, "total pore amount (mm)");
    fd[2].type = fnum_type;
    fd[2].datalen = 0;        

    strcpy_safe(fd[3].name, "AET");
    fd[3].type = fnum_type;
    fd[3].datalen = 0;        

    strcpy_safe(fd[4].name, "k (perm)");
    fd[4].type = fnum_type;
    fd[4].datalen = 0;        

    strcpy_safe(fd[5].name, "PET");
    fd[5].type = fnum_type;
    fd[5].datalen = 0;        

    strcpy_safe(fd[6].name, "RootZoneStorage (mm/y)");
    fd[6].type = fnum_type;
    fd[6].datalen = 0;        
}

JMP_SCORE_API void fillOutputMetadata(FIELDMD *fd) {
    strcpy_safe(fd[0].name, "Water yield response (%) Predictor");
    fd[0].type = fnum_type;
    fd[0].datalen = 0;        
}

// Original name was: 'RC_Beck (fraction)'
#define RC_BECK_FRACTION_      indata[0].data.fnum
// Original name was: 'Catchment area (km2)'
#define CATCHMENT_AREA_KM2_    indata[1].data.fnum
// Original name was: 'total pore amount (mm)'
#define TOTAL_PORE_AMOUNT_MM_  indata[2].data.fnum
#define AET                    indata[3].data.fnum
// Original name was: 'k (perm)'
#define K_PERM_                indata[4].data.fnum
#define PET                    indata[5].data.fnum
// Original name was: 'RootZoneStorage (mm/y)'
#define ROOTZONESTORAGE_MM_Y_  indata[6].data.fnum

// Original name was: 'Water yield response (%) Predictor'
#define WATER_YIELD_RESPONSE_PREDICTOR     outdata[0].data.fnum

JMP_SCORE_API void score(PARM *indata, PARM *outdata) {
    double _temp_0 = 57.8878887813286;
    double _temp_1 = MISSING;
    double _temp_4 = MISSING;
    double _temp_7 = MISSING;
    double _temp_9 = MISSING;
    double _temp_11 = MISSING;
    double _temp_14 = MISSING;
    double _temp_17 = MISSING;
    double _temp_19 = MISSING;
    double _temp_22 = MISSING;
    double _temp_24 = MISSING;
    double _temp_26 = MISSING;
    double _temp_29 = MISSING;
    double _temp_32 = MISSING;
    double _temp_35 = MISSING;
    double _temp_38 = MISSING;
    double _temp_41 = MISSING;
    double _temp_43 = MISSING;
    double _temp_45 = MISSING;
    double _temp_48 = MISSING;
    double _temp_51 = MISSING;
    double _temp_53 = MISSING;
    double _temp_55 = MISSING;
    double _temp_58 = MISSING;
    double _temp_61 = MISSING;
    double _temp_64 = MISSING;
    double _temp_67 = MISSING;
    double _temp_70 = MISSING;
    double _temp_73 = MISSING;
    double _temp_76 = MISSING;
    double _temp_79 = MISSING;
    double _temp_82 = MISSING;
    double _temp_85 = MISSING;
    double _temp_87 = MISSING;
    double _temp_89 = MISSING;
    double _temp_91 = MISSING;
    double _temp_93 = MISSING;
    double _temp_95 = MISSING;
    double _temp_97 = MISSING;
    double _temp_99 = MISSING;
    double _temp_101 = MISSING;
    double _temp_103 = MISSING;
    double _temp_105 = MISSING;
    double _temp_107 = MISSING;
    double _temp_109 = MISSING;
    double _temp_111 = MISSING;
    double _temp_113 = MISSING;
    double _temp_115 = MISSING;
    double _temp_117 = MISSING;
    double _temp_119 = MISSING;
    double _temp_121 = MISSING;

    if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.411919236)  {
        double _temp_2 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.0231)  {
            double _temp_3 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3212.9)  {
                _temp_3 = -3.89349633948162;
            }
            else {
                _temp_3 = -1.46129684130992;
            }
            _temp_2 = _temp_3;
        }
        else {
            _temp_2 = 4.34915704669414;
        }
        _temp_1 = _temp_2;
    }
    else {
        _temp_1 = 1.64847282573406;
    }
    if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.411919236)  {
        double _temp_5 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.03)  {
            double _temp_6 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3718.3)  {
                _temp_6 = -4.05280404946998;
            }
            else {
                _temp_6 = -1.16111706848744;
            }
            _temp_5 = _temp_6;
        }
        else {
            _temp_5 = 3.26634158072854;
        }
        _temp_4 = _temp_5;
    }
    else {
        _temp_4 = 1.41572526683453;
    }
    if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.411919236)  {
        double _temp_8 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3718.3)  {
            _temp_8 = -3.37063143568778;
        }
        else if (!jmp_is_missing(AET) && AET >= 343.332885742188)  {
            _temp_8 = -0.605663654318659;
        }
        else {
            _temp_8 = 4.05214751328322;
        }
        _temp_7 = _temp_8;
    }
    else {
        _temp_7 = 0.939897980943442;
    }
    if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.411919236)  {
        double _temp_10 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.538295984)  {
            _temp_10 = -3.11465619046342;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.0231)  {
            _temp_10 = -0.896638147589967;
        }
        else {
            _temp_10 = 6.95396516519929;
        }
        _temp_9 = _temp_10;
    }
    else {
        _temp_9 = 1.16379469181191;
    }
    if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
        double _temp_12 = MISSING;

        if (jmp_is_missing(AET) || AET < 719.586730957032)  {
            double _temp_13 = MISSING;

            if (!jmp_is_missing(K_PERM_) && K_PERM_ >= 0.704693072212378)  {
                _temp_13 = -3.3098053515172;
            }
            else {
                _temp_13 = -1.36504308197179;
            }
            _temp_12 = _temp_13;
        }
        else {
            _temp_12 = -0.0904911930934563;
        }
        _temp_11 = _temp_12;
    }
    else {
        _temp_11 = 0.43899209187204;
    }
    if (jmp_is_missing(K_PERM_) || K_PERM_ < 0.722769796945214)  {
        double _temp_15 = MISSING;

        if (jmp_is_missing(AET) || AET < 719.586730957032)  {
            double _temp_16 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 3024)  {
                _temp_16 = -4.42291707399963;
            }
            else {
                _temp_16 = -0.602915560711874;
            }
            _temp_15 = _temp_16;
        }
        else {
            _temp_15 = -0.0959786800279786;
        }
        _temp_14 = _temp_15;
    }
    else {
        _temp_14 = 0.490173273500547;
    }
    if (jmp_is_missing(PET) || PET < 1206)  {
        double _temp_18 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
            _temp_18 = -6.16133370839643;
        }
        else if (!jmp_is_missing(AET) && AET >= 339.162384033204)  {
            _temp_18 = -0.778053187330085;
        }
        else {
            _temp_18 = 2.01858219350501;
        }
        _temp_17 = _temp_18;
    }
    else {
        _temp_17 = 0.971476558544907;
    }
    if (jmp_is_missing(PET) || PET < 1259)  {
        double _temp_20 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
            double _temp_21 = MISSING;

            if (jmp_is_missing(PET) || PET < 779)  {
                _temp_21 = -5.74229538914537;
            }
            else {
                _temp_21 = -1.43638933791385;
            }
            _temp_20 = _temp_21;
        }
        else {
            _temp_20 = 4.22700133245458;
        }
        _temp_19 = _temp_20;
    }
    else {
        _temp_19 = 2.16041336605797;
    }
    if (jmp_is_missing(PET) || PET < 1259)  {
        double _temp_23 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
            _temp_23 = -7.34197016292049;
        }
        else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
            _temp_23 = -0.801178392137799;
        }
        else {
            _temp_23 = 4.28091850184121;
        }
        _temp_22 = _temp_23;
    }
    else {
        _temp_22 = 1.26371850965317;
    }
    if (jmp_is_missing(PET) || PET < 1259)  {
        double _temp_25 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
            _temp_25 = -7.25411514353674;
        }
        else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
            _temp_25 = -0.711991264962909;
        }
        else {
            _temp_25 = 4.10622798514671;
        }
        _temp_24 = _temp_25;
    }
    else {
        _temp_24 = 1.15543474717875;
    }
    if (jmp_is_missing(PET) || PET < 1259)  {
        double _temp_27 = MISSING;

        if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 460.399993896484)  {
            double _temp_28 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
                _temp_28 = -5.80051623536044;
            }
            else {
                _temp_28 = -1.07322895879333;
            }
            _temp_27 = _temp_28;
        }
        else {
            _temp_27 = 3.53027682129705;
        }
        _temp_26 = _temp_27;
    }
    else {
        _temp_26 = 1.48442655738879;
    }
    if (jmp_is_missing(PET) || PET < 1260)  {
        double _temp_30 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
            double _temp_31 = MISSING;

            if (!jmp_is_missing(ROOTZONESTORAGE_MM_Y_) && ROOTZONESTORAGE_MM_Y_ >= 119.5)  {
                _temp_31 = -3.26114994649299;
            }
            else {
                _temp_31 = -1.79751796690977;
            }
            _temp_30 = _temp_31;
        }
        else {
            _temp_30 = 4.45784518874693;
        }
        _temp_29 = _temp_30;
    }
    else {
        _temp_29 = 4.21474114405094;
    }
    if (jmp_is_missing(PET) || PET < 1260)  {
        double _temp_33 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
            double _temp_34 = MISSING;

            if (jmp_is_missing(PET) || PET < 1259)  {
                _temp_34 = -3.79097765005524;
            }
            else {
                _temp_34 = -0.772177582451797;
            }
            _temp_33 = _temp_34;
        }
        else {
            _temp_33 = 4.31682224807898;
        }
        _temp_32 = _temp_33;
    }
    else {
        _temp_32 = 5.50862915833457;
    }
    if (jmp_is_missing(PET) || PET < 1260)  {
        double _temp_36 = MISSING;

        if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 460.399993896484)  {
            double _temp_37 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
                _temp_37 = -6.44591802839305;
            }
            else {
                _temp_37 = -1.71580464580666;
            }
            _temp_36 = _temp_37;
        }
        else {
            _temp_36 = 3.67810046590941;
        }
        _temp_35 = _temp_36;
    }
    else {
        _temp_35 = 2.81863067991382;
    }
    if (jmp_is_missing(PET) || PET < 1260)  {
        double _temp_39 = MISSING;

        if (jmp_is_missing(ROOTZONESTORAGE_MM_Y_) || ROOTZONESTORAGE_MM_Y_ < 460.399993896484)  {
            double _temp_40 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
                _temp_40 = -6.16261634335195;
            }
            else {
                _temp_40 = -2.13934029147909;
            }
            _temp_39 = _temp_40;
        }
        else {
            _temp_39 = 3.78628531227579;
        }
        _temp_38 = _temp_39;
    }
    else {
        _temp_38 = 3.43687010792716;
    }
    if (jmp_is_missing(PET) || PET < 1350)  {
        double _temp_42 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4679.4)  {
            _temp_42 = -9.9286243435178;
        }
        else if (jmp_is_missing(AET) || AET < 1280.20942687988)  {
            _temp_42 = -0.807534472050497;
        }
        else {
            _temp_42 = 5.0866705327889;
        }
        _temp_41 = _temp_42;
    }
    else {
        _temp_41 = 2.78870320303745;
    }
    if (jmp_is_missing(PET) || PET < 1350)  {
        double _temp_44 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4679.4)  {
            _temp_44 = -9.83033775755001;
        }
        else if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.405)  {
            _temp_44 = -1.51127222941654;
        }
        else {
            _temp_44 = 0.780770172802018;
        }
        _temp_43 = _temp_44;
    }
    else {
        _temp_43 = 2.385437956431;
    }
    if (jmp_is_missing(PET) || PET < 1513)  {
        double _temp_46 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 1.22)  {
            double _temp_47 = MISSING;

            if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.061059784)  {
                _temp_47 = -7.26924166964252;
            }
            else {
                _temp_47 = -0.298652570991523;
            }
            _temp_46 = _temp_47;
        }
        else {
            _temp_46 = 1.91891259170627;
        }
        _temp_45 = _temp_46;
    }
    else {
        _temp_45 = 4.39930335936761;
    }
    if (jmp_is_missing(PET) || PET < 1513)  {
        double _temp_49 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 1.26)  {
            double _temp_50 = MISSING;

            if (!jmp_is_missing(PET) && PET >= 1269)  {
                _temp_50 = -3.09315846505679;
            }
            else {
                _temp_50 = 0.33219999263898;
            }
            _temp_49 = _temp_50;
        }
        else {
            _temp_49 = 1.77994031585046;
        }
        _temp_48 = _temp_49;
    }
    else {
        _temp_48 = 3.89630794158413;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_52 = MISSING;

        if (!jmp_is_missing(AET) && AET >= 424.108757250237)  {
            _temp_52 = -0.781027555056012;
        }
        else if (jmp_is_missing(AET) || AET < 338.294929273201)  {
            _temp_52 = -2.352532097832;
        }
        else {
            _temp_52 = 13.3952693886325;
        }
        _temp_51 = _temp_52;
    }
    else {
        _temp_51 = 7.97200277894991;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_54 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 0.405)  {
            _temp_54 = -1.45709576378489;
        }
        else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 153.3)  {
            _temp_54 = -0.275194709740047;
        }
        else {
            _temp_54 = 6.68322421902936;
        }
        _temp_53 = _temp_54;
    }
    else {
        _temp_53 = 8.22270153976158;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_56 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_57 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 157.6)  {
                _temp_57 = -1.77480528243247;
            }
            else {
                _temp_57 = 1.8314594344215;
            }
            _temp_56 = _temp_57;
        }
        else {
            _temp_56 = 12.5554738260816;
        }
        _temp_55 = _temp_56;
    }
    else {
        _temp_55 = 15.8377045889619;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_59 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_60 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 313.4)  {
                _temp_60 = -2.46221008241867;
            }
            else {
                _temp_60 = 0.558262738413972;
            }
            _temp_59 = _temp_60;
        }
        else {
            _temp_59 = 13.950526473424;
        }
        _temp_58 = _temp_59;
    }
    else {
        _temp_58 = 17.597449543291;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_62 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_63 = MISSING;

            if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 313.4)  {
                _temp_63 = -1.88280849345996;
            }
            else {
                _temp_63 = 0.570360464901495;
            }
            _temp_62 = _temp_63;
        }
        else {
            _temp_62 = 9.86061548941266;
        }
        _temp_61 = _temp_62;
    }
    else {
        _temp_61 = 12.8648039195917;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_65 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_66 = MISSING;

            if (jmp_is_missing(AET) || AET < 913.086940880978)  {
                _temp_66 = -1.37135772909432;
            }
            else {
                _temp_66 = 1.49025072049988;
            }
            _temp_65 = _temp_66;
        }
        else {
            _temp_65 = 8.59269087248001;
        }
        _temp_64 = _temp_65;
    }
    else {
        _temp_64 = 11.6670424079734;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_68 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_69 = MISSING;

            if (jmp_is_missing(AET) || AET < 1336.6826171875)  {
                _temp_69 = -1.23048984821227;
            }
            else {
                _temp_69 = 5.80514584543628;
            }
            _temp_68 = _temp_69;
        }
        else {
            _temp_68 = 10.9562394326807;
        }
        _temp_67 = _temp_68;
    }
    else {
        _temp_67 = 14.2942265773241;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_71 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_72 = MISSING;

            if (jmp_is_missing(AET) || AET < 1336.6826171875)  {
                _temp_72 = -0.916402892062241;
            }
            else {
                _temp_72 = 5.06527462489164;
            }
            _temp_71 = _temp_72;
        }
        else {
            _temp_71 = 7.73342178523201;
        }
        _temp_70 = _temp_71;
    }
    else {
        _temp_70 = 10.5003381671761;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_74 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_75 = MISSING;

            if (jmp_is_missing(PET) || PET < 1259)  {
                _temp_75 = -3.0142377130308;
            }
            else {
                _temp_75 = 0.834635862818235;
            }
            _temp_74 = _temp_75;
        }
        else {
            _temp_74 = 17.7432106022582;
        }
        _temp_73 = _temp_74;
    }
    else {
        _temp_73 = 21.8764049556473;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_77 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_78 = MISSING;

            if (jmp_is_missing(PET) || PET < 1259)  {
                _temp_78 = -2.71281394172772;
            }
            else {
                _temp_78 = 0.751172276536411;
            }
            _temp_77 = _temp_78;
        }
        else {
            _temp_77 = 15.9688895420323;
        }
        _temp_76 = _temp_77;
    }
    else {
        _temp_76 = 19.6887644600826;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_80 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_81 = MISSING;

            if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
                _temp_81 = -4.91606959191308;
            }
            else {
                _temp_81 = -0.329492293466867;
            }
            _temp_80 = _temp_81;
        }
        else {
            _temp_80 = 6.74403827010301;
        }
        _temp_79 = _temp_80;
    }
    else {
        _temp_79 = 9.55037136406083;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_83 = MISSING;

        if (jmp_is_missing(PET) || PET < 1513)  {
            double _temp_84 = MISSING;

            if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
                _temp_84 = -4.45122575482969;
            }
            else {
                _temp_84 = -0.287846753308761;
            }
            _temp_83 = _temp_84;
        }
        else {
            _temp_83 = 5.54875443390242;
        }
        _temp_82 = _temp_83;
    }
    else {
        _temp_82 = 9.13633504417953;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 5995)  {
        double _temp_86 = MISSING;

        if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
            _temp_86 = -4.21085612414991;
        }
        else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 153.3)  {
            _temp_86 = -0.557680910811304;
        }
        else {
            _temp_86 = 4.92081669635587;
        }
        _temp_85 = _temp_86;
    }
    else {
        _temp_85 = 7.17480250105492;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_87 = -5.69389927635019;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_88 = MISSING;

        if (jmp_is_missing(PET) || PET < 1470)  {
            _temp_88 = -0.506584489907486;
        }
        else {
            _temp_88 = 3.36402164551451;
        }
        _temp_87 = _temp_88;
    }
    else {
        _temp_87 = 9.46211790157156;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_89 = -5.39848349930329;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_90 = MISSING;

        if (jmp_is_missing(AET) || AET < 1280.20942687988)  {
            _temp_90 = -0.298015809345737;
        }
        else {
            _temp_90 = 5.83055904034182;
        }
        _temp_89 = _temp_90;
    }
    else {
        _temp_89 = 8.54214167164239;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_91 = -5.07332152035811;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_92 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.277712286)  {
            _temp_92 = -1.48103714035116;
        }
        else {
            _temp_92 = 0.792309660300053;
        }
        _temp_91 = _temp_92;
    }
    else {
        _temp_91 = 7.21424915898596;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_93 = -4.87481714855752;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_94 = MISSING;

        if (jmp_is_missing(AET) || AET < 1280.20942687988)  {
            _temp_94 = -0.222069641517331;
        }
        else {
            _temp_94 = 5.33566881141809;
        }
        _temp_93 = _temp_94;
    }
    else {
        _temp_93 = 6.53355578663175;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_95 = -4.49854120685137;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_96 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.277712286)  {
            _temp_96 = -1.37783247494574;
        }
        else {
            _temp_96 = 0.743243109070271;
        }
        _temp_95 = _temp_96;
    }
    else {
        _temp_95 = 6.35816090440668;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_97 = -4.39250720927861;
    }
    else if (jmp_is_missing(PET) || PET < 1260)  {
        double _temp_98 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
            _temp_98 = -7.2521711808872;
        }
        else {
            _temp_98 = -0.32606787276722;
        }
        _temp_97 = _temp_98;
    }
    else {
        _temp_97 = 1.81453433856059;
    }
    if (!jmp_is_missing(AET) && AET >= 1426)  {
        _temp_99 = -4.08568900355011;
    }
    else if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.083851457)  {
        double _temp_100 = MISSING;

        if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 4639.8)  {
            _temp_100 = -6.72515433428685;
        }
        else {
            _temp_100 = 0.0236778285768994;
        }
        _temp_99 = _temp_100;
    }
    else {
        _temp_99 = 3.28465550848396;
    }
    if (jmp_is_missing(AET) || AET < 338.294929273201)  {
        double _temp_102 = MISSING;

        if (!jmp_is_missing(AET) && AET >= 337.220860047774)  {
            _temp_102 = -5.08060648049647;
        }
        else {
            _temp_102 = -0.469400426431198;
        }
        _temp_101 = _temp_102;
    }
    else if (!jmp_is_missing(AET) && AET >= 424.108757250237)  {
        _temp_101 = -0.230956582006756;
    }
    else {
        _temp_101 = 8.52932508733755;
    }
    if (jmp_is_missing(AET) || AET < 338.294929273201)  {
        double _temp_104 = MISSING;

        if (!jmp_is_missing(PET) && PET >= 1470)  {
            _temp_104 = -5.11726859372509;
        }
        else {
            _temp_104 = -0.561924438821823;
        }
        _temp_103 = _temp_104;
    }
    else if (!jmp_is_missing(AET) && AET >= 398.719828287761)  {
        _temp_103 = -0.0729686171887959;
    }
    else {
        _temp_103 = 9.588667556025;
    }
    if (jmp_is_missing(AET) || AET < 338.294929273201)  {
        double _temp_106 = MISSING;

        if (jmp_is_missing(RC_BECK_FRACTION_) || RC_BECK_FRACTION_ < 0.277222514)  {
            _temp_106 = -4.69384946810865;
        }
        else {
            _temp_106 = -0.692376174023554;
        }
        _temp_105 = _temp_106;
    }
    else if (!jmp_is_missing(RC_BECK_FRACTION_) && RC_BECK_FRACTION_ >= 0.083851457)  {
        _temp_105 = -0.2235233437544;
    }
    else {
        _temp_105 = 6.81066768374763;
    }
    if (jmp_is_missing(PET) || PET < 779)  {
        _temp_107 = -3.5598265483145;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_108 = MISSING;

        if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
            _temp_108 = -5.09464177140226;
        }
        else {
            _temp_108 = 0.228721358860861;
        }
        _temp_107 = _temp_108;
    }
    else {
        _temp_107 = 7.87905102908545;
    }
    if (jmp_is_missing(PET) || PET < 779)  {
        _temp_109 = -3.45058465228178;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_110 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.84)  {
            _temp_110 = -2.76072096219906;
        }
        else {
            _temp_110 = 0.409124699436008;
        }
        _temp_109 = _temp_110;
    }
    else {
        _temp_109 = 6.65990095291056;
    }
    if (jmp_is_missing(PET) || PET < 779)  {
        _temp_111 = -3.02443301552878;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_112 = MISSING;

        if (!jmp_is_missing(AET) && AET >= 424.108757250237)  {
            _temp_112 = -0.415255545842667;
        }
        else {
            _temp_112 = 2.3786561802615;
        }
        _temp_111 = _temp_112;
    }
    else {
        _temp_111 = 5.70144687792584;
    }
    if (jmp_is_missing(PET) || PET < 809)  {
        _temp_113 = -3.63499589646126;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_114 = MISSING;

        if (!jmp_is_missing(AET) && AET >= 424.108757250237)  {
            _temp_114 = -0.563460058453293;
        }
        else {
            _temp_114 = 2.78791431294141;
        }
        _temp_113 = _temp_114;
    }
    else {
        _temp_113 = 8.92267313061345;
    }
    if (jmp_is_missing(PET) || PET < 809)  {
        _temp_115 = -3.06063618712122;
    }
    else if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 4679.4)  {
        double _temp_116 = MISSING;

        if (!jmp_is_missing(CATCHMENT_AREA_KM2_) && CATCHMENT_AREA_KM2_ >= 1.84)  {
            _temp_116 = -2.88227461811155;
        }
        else {
            _temp_116 = 0.423737082034219;
        }
        _temp_115 = _temp_116;
    }
    else {
        _temp_115 = 5.9699672810325;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
        double _temp_118 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 2.89)  {
            _temp_118 = -4.99190163454115;
        }
        else {
            _temp_118 = -1.8790787584964;
        }
        _temp_117 = _temp_118;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 153.3)  {
        _temp_117 = -0.216084075962838;
    }
    else {
        _temp_117 = 3.97039076376068;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
        double _temp_120 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 2.89)  {
            _temp_120 = -4.70713505203414;
        }
        else {
            _temp_120 = -1.86485193151603;
        }
        _temp_119 = _temp_120;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 116.3)  {
        _temp_119 = -0.0409274939943937;
    }
    else {
        _temp_119 = 5.53621343613479;
    }
    if (jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) || TOTAL_PORE_AMOUNT_MM_ < 98.8)  {
        double _temp_122 = MISSING;

        if (jmp_is_missing(CATCHMENT_AREA_KM2_) || CATCHMENT_AREA_KM2_ < 2.89)  {
            _temp_122 = -4.56463630400426;
        }
        else {
            _temp_122 = -1.87273995768734;
        }
        _temp_121 = _temp_122;
    }
    else if (!jmp_is_missing(TOTAL_PORE_AMOUNT_MM_) && TOTAL_PORE_AMOUNT_MM_ >= 157.6)  {
        _temp_121 = -0.173721910849496;
    }
    else {
        _temp_121 = 3.26268337425238;
    }
    _temp_0 += _temp_1;
    _temp_0 += _temp_4;
    _temp_0 += _temp_7;
    _temp_0 += _temp_9;
    _temp_0 += _temp_11;
    _temp_0 += _temp_14;
    _temp_0 += _temp_17;
    _temp_0 += _temp_19;
    _temp_0 += _temp_22;
    _temp_0 += _temp_24;
    _temp_0 += _temp_26;
    _temp_0 += _temp_29;
    _temp_0 += _temp_32;
    _temp_0 += _temp_35;
    _temp_0 += _temp_38;
    _temp_0 += _temp_41;
    _temp_0 += _temp_43;
    _temp_0 += _temp_45;
    _temp_0 += _temp_48;
    _temp_0 += _temp_51;
    _temp_0 += _temp_53;
    _temp_0 += _temp_55;
    _temp_0 += _temp_58;
    _temp_0 += _temp_61;
    _temp_0 += _temp_64;
    _temp_0 += _temp_67;
    _temp_0 += _temp_70;
    _temp_0 += _temp_73;
    _temp_0 += _temp_76;
    _temp_0 += _temp_79;
    _temp_0 += _temp_82;
    _temp_0 += _temp_85;
    _temp_0 += _temp_87;
    _temp_0 += _temp_89;
    _temp_0 += _temp_91;
    _temp_0 += _temp_93;
    _temp_0 += _temp_95;
    _temp_0 += _temp_97;
    _temp_0 += _temp_99;
    _temp_0 += _temp_101;
    _temp_0 += _temp_103;
    _temp_0 += _temp_105;
    _temp_0 += _temp_107;
    _temp_0 += _temp_109;
    _temp_0 += _temp_111;
    _temp_0 += _temp_113;
    _temp_0 += _temp_115;
    _temp_0 += _temp_117;
    _temp_0 += _temp_119;
    _temp_0 += _temp_121;
    WATER_YIELD_RESPONSE_PREDICTOR = _temp_0;

}


