long long meilitool::export_a_dump(unsigned long long a0[3], unsigned long long a1[3], unsigned int a2, unsigned int a3[2])
{
    unsigned long long v0;  // [bp-0x1390], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x1390]
    unsigned int v2;  // [bp-0x1388], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1388]
    unsigned long long v4;  // [bp-0x1380]
    unsigned int v5;  // [bp-0x1374]
    unsigned int v6;  // [bp-0x1370]
    unsigned int v7;  // [bp-0x136c]
    unsigned int v8;  // [bp-0x1368]
    unsigned int v9;  // [bp-0x1364]
    unsigned long long v10;  // [bp-0x1360]
    unsigned long long v11;  // [bp-0x1358]
    char v12;  // [bp-0x1350]
    unsigned int v13;  // [bp-0x134f]
    unsigned int v14;  // [bp-0x134c]
    unsigned long long v15;  // [bp-0x1348]
    unsigned int v16;  // [bp-0x1334]
    unsigned int v17;  // [bp-0x1330]
    unsigned int v18;  // [bp-0x132c]
    char v19;  // [bp-0x1328]
    unsigned long long v20;  // [bp-0x1318]
    char v21;  // [bp-0x1308]
    unsigned long long v22;  // [bp-0x12f8]
    int v23;  // [bp-0x12e8]
    int v24;  // [bp-0x12d8], Other Possible Types: char
    int v25;  // [bp-0x12c8], Other Possible Types: char
    int v26;  // [bp-0x12b8], Other Possible Types: char
    unsigned long long v27;  // [bp-0x12a8]
    char *v28;  // [bp-0x1298]
    int v29;  // [bp-0x1290]
    int v30;  // [bp-0x1288]
    int v31;  // [bp-0x1280]
    int v32;  // [bp-0x1278]
    int v33;  // [bp-0x1270]
    unsigned int v34;  // [bp-0x1266]
    unsigned short v35;  // [bp-0x1262]
    unsigned long long v36;  // [bp-0x1258]
    int v37;  // [bp-0x1258]
    char v38;  // [bp-0x1250]
    int v39;  // [bp-0x1248], Other Possible Types: char
    int v40;  // [bp-0x1238], Other Possible Types: unsigned int
    unsigned int v41;  // [bp-0x1238]
    unsigned long long v42;  // [bp-0x1228]
    char v43;  // [bp-0x1220]
    char *v44;  // [bp-0x1218], Other Possible Types: unsigned long long
    int v45;  // [bp-0x1218]
    char v46;  // [bp-0x1210], Other Possible Types: unsigned long long
    int v47;  // [bp-0x1208]
    unsigned long long v48;  // [bp-0x1200]
    int v49;  // [bp-0x11f8]
    unsigned long long v50;  // [bp-0x11f0]
    unsigned long long v51;  // [bp-0x11d8]
    unsigned long long v52;  // [bp-0x1178]
    unsigned long long v53;  // [bp-0x1170]
    unsigned long long v54;  // [bp-0x1168]
    unsigned long long v55;  // [bp-0x1160]
    unsigned long long v56;  // [bp-0x1158]
    unsigned long long v57;  // [bp-0x1150]
    int v58;  // [bp-0x1148], Other Possible Types: unsigned long, unsigned int
    void* v59;  // [bp-0x1148], Other Possible Types: char *, int, unsigned long long, unsigned long
    int v60;  // [bp-0x1148]
    int v61;  // [bp-0x1148]
    char *v62;  // [bp-0x1148]
    int v63;  // [bp-0x1148]
    unsigned int v64;  // [bp-0x1148]
    unsigned long v65;  // [bp-0x1148]
    int v66;  // [bp-0x1144], Other Possible Types: unsigned int
    int v67;  // [bp-0x1140], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v68;  // [bp-0x1140]
    char *v69;  // [bp-0x1138], Other Possible Types: int, char, unsigned long long
    int v70;  // [bp-0x1138], Other Possible Types: unsigned long long
    char *v71;  // [bp-0x1138], Other Possible Types: unsigned long long
    int v72;  // [bp-0x1138], Other Possible Types: unsigned long long
    char *v73;  // [bp-0x1138]
    unsigned long long v74;  // [bp-0x1138]
    int v75;  // [bp-0x1138]
    unsigned long long v77;  // [bp-0x1138]
    char v78;  // [bp-0x1138]
    unsigned int v79;  // [bp-0x1138]
    unsigned long long v80;  // [bp-0x1138]
    int v81;  // [bp-0x1138]
    unsigned int v82;  // [bp-0x1137]
    unsigned int v83;  // [bp-0x1134]
    int v84;  // [bp-0x1130], Other Possible Types: unsigned long long
    int v85;  // [bp-0x1130]
    int v86;  // [bp-0x1130]
    char *v87;  // [bp-0x1128], Other Possible Types: void*, unsigned int
    int v88;  // [bp-0x1128]
    int v89;  // [bp-0x1120], Other Possible Types: char
    void* v90;  // [bp-0x1120]
    unsigned long v91;  // [bp-0x1118], Other Possible Types: unsigned long long
    unsigned int v93;  // [bp-0x1116]
    unsigned short v94;  // [bp-0x1112]
    int v95;  // [bp-0x1110], Other Possible Types: unsigned long long
    unsigned long long v96;  // [bp-0x1108]
    unsigned long long v97;  // [bp-0x1100]
    char v98;  // [bp-0x10f8]
    char v99;  // [bp-0x10b0]
    void* v100;  // [bp-0x1030]
    int v101;  // [bp-0x1000]
    int v102;  // [bp-0xfe8]
    char v103;  // [bp-0xd58], Other Possible Types: unsigned long long
    unsigned int v104;  // [bp-0xd50]
    char v105;  // [bp-0xd4c]
    char v106;  // [bp-0xd4b]
    char v107;  // [bp-0xd48], Other Possible Types: unsigned long long
    char v108;  // [bp-0xd44]
    int v109;  // [bp-0xd40]
    unsigned long long v110;  // [bp-0xd38]
    int v111;  // [bp-0xd30]
    void* v112;  // [bp-0xd28]
    char v113;  // [bp-0xd20]
    unsigned long long v114;  // [bp-0xd18]
    unsigned long long v115;  // [bp-0xd10]
    char v116;  // [bp-0xd08]
    unsigned long long v117;  // [bp-0xd00]
    unsigned long long v118;  // [bp-0xcf8]
    unsigned long long v119;  // [bp-0xcf0]
    unsigned long long v120;  // [bp-0xce8]
    unsigned long long v121;  // [bp-0xce0]
    char v122;  // [bp-0xcd8]
    int v123;  // [bp-0xcd8]
    int v124;  // [bp-0xcc8]
    int v125;  // [bp-0xcc8]
    int v127;  // [bp-0xcc0]
    int v128;  // [bp-0xcb8]
    unsigned long long v129;  // [bp-0xcb0]
    int v130;  // [bp-0xca8]
    int v131;  // [bp-0xc98]
    char v132;  // [bp-0xc88]
    char v133;  // [bp-0xc78]
    int v134;  // [bp-0xc68]
    int v135;  // [bp-0xc58]
    int v136;  // [bp-0xc48]
    int v137;  // [bp-0xc38]
    unsigned long long v138;  // [bp-0xc28]
    unsigned long long v139;  // [bp-0xc20]
    char *v140;  // [bp-0xc18], Other Possible Types: int, unsigned int, unsigned long, unsigned long long
    int v141;  // [bp-0xc18]
    unsigned int v142;  // [bp-0xc18]
    char *v143;  // [bp-0xc18], Other Possible Types: unsigned long
    int v144;  // [bp-0xc14]
    int v145;  // [bp-0xc10], Other Possible Types: unsigned int, unsigned long, unsigned long long
    int v146;  // [bp-0xc0c]
    void* v147;  // [bp-0xc08], Other Possible Types: int, unsigned long long
    char *v148;  // [bp-0xc08], Other Possible Types: int, unsigned long long
    char *v149;  // [bp-0xc08]
    int v150;  // [bp-0xc07]
    unsigned int v151;  // [bp-0xc04]
    int v152;  // [bp-0xc00], Other Possible Types: unsigned long
    void* v153;  // [bp-0xc00], Other Possible Types: unsigned long long
    int v154;  // [bp-0xbfc]
    int v155;  // [bp-0xbf8], Other Possible Types: char
    int v156;  // [bp-0xbf0]
    unsigned int v157;  // [bp-0xbec]
    char v158;  // [bp-0xbe8], Other Possible Types: unsigned long long
    int v159;  // [bp-0xbe0]
    unsigned long long v160;  // [bp-0xbd0]
    char v161;  // [bp-0xbc8]
    int v162;  // [bp-0xb80]
    int v163;  // [bp-0xb70]
    int v164;  // [bp-0xb60]
    int v165;  // [bp-0xb50]
    int v166;  // [bp-0xb40]
    int v167;  // [bp-0xb30]
    int v168;  // [bp-0xad0]
    int v169;  // [bp-0x838]
    unsigned long long v170;  // [bp-0x830]
    unsigned long long v171;  // [bp-0x828]
    int v172;  // [bp-0x820]
    int v173;  // [bp-0x808], Other Possible Types: char
    int v174;  // [bp-0x7f8], Other Possible Types: char
    int v175;  // [bp-0x7e8], Other Possible Types: char
    unsigned long long v176;  // [bp-0x7d8]
    char v177;  // [bp-0x7c8]
    int v178;  // [bp-0x7c0]
    unsigned long long v179;  // [bp-0x7b0]
    int v180;  // [bp-0x7a8]
    int v181;  // [bp-0x798]
    int v182;  // [bp-0x788]
    unsigned long v183;  // [bp-0x780]
    int v184;  // [bp-0x778]
    char v185;  // [bp-0x768], Other Possible Types: unsigned int
    char *v186;  // [bp-0x768]
    char *v187;  // [bp-0x768]
    unsigned int v188;  // [bp-0x768]
    char v189;  // [bp-0x768]
    int v190;  // [bp-0x764], Other Possible Types: char
    unsigned long v191;  // [bp-0x760], Other Possible Types: unsigned long long
    unsigned long long v192;  // [bp-0x760]
    int v193;  // [bp-0x758], Other Possible Types: char, unsigned long long
    void* v194;  // [bp-0x758]
    unsigned long long v195;  // [bp-0x750]
    unsigned long long v196;  // [bp-0x748]
    char v197;  // [bp-0x740]
    unsigned int v198;  // [bp-0x73c]
    unsigned long long v199;  // [bp-0x738]
    int v200;  // [bp-0x730], Other Possible Types: char
    unsigned long long v201;  // [bp-0x728]
    unsigned int v202;  // [bp-0x720]
    char v203;  // [bp-0x718]
    unsigned short v204;  // [bp-0x710]
    unsigned long long v205;  // [bp-0x538]
    unsigned long long v206;  // [bp-0x530]
    int v207;  // [bp-0x528]
    char v208;  // [bp-0x518]
    char v209;  // [bp-0x508]
    char v210;  // [bp-0x4f8]
    int v211;  // [bp-0x4e8]
    int v212;  // [bp-0x4d8], Other Possible Types: void*, char, unsigned long long
    unsigned int v213;  // [bp-0x4d4]
    int v214;  // [bp-0x4d0], Other Possible Types: char
    unsigned long long v215;  // [bp-0x4c8]
    unsigned int v216;  // [bp-0x4c8], Other Possible Types: unsigned long long
    unsigned long long v217;  // [bp-0x4c8]
    void* v218;  // [bp-0x4c0], Other Possible Types: unsigned int
    unsigned int v219;  // [bp-0x4b8]
    unsigned long long v220;  // [bp-0x458]
    int v221;  // [bp-0x450]
    int v222;  // [bp-0x3b8]
    int v223;  // [bp-0x2b4]
    char v224;  // [bp-0x2a8]
    int v225;  // [bp-0x290]
    char *v226;  // [bp-0x248]
    unsigned long long v227;  // [bp-0x240]
    int v228;  // [bp-0x238]
    char v229;  // [bp-0x150]
    unsigned long long v232;  // r15
    unsigned long long v233;  // r12
    int v234;  // ymm0
    uint256_t v235;  // ymm0
    int v237;  // ymm0
    int v238;  // xmm0
    int v239;  // ymm0
    char v242;  // bpl
    char v243;  // al
    unsigned long long v244;  // r13
    unsigned long long v245;  // rcx
    unsigned long long v246;  // rdx
    unsigned long long v247;  // r8
    int v248;  // xmm0
    int v249;  // xmm0
    int v250;  // xmm0
    unsigned long long v251;  // rax
    unsigned long long v252;  // rax
    uint256_t v253;  // ymm0
    char *v254;  // rsi
    char *v255;  // rbp
    unsigned int v256;  // eax
    int v257;  // xmm0
    uint256_t v258;  // ymm0
    uint256_t v259;  // ymm0
    unsigned long long v260;  // rax
    unsigned long long v261;  // rax
    int v262;  // xmm0
    uint256_t v263;  // ymm0
    int v264;  // xmm0
    unsigned long long v265;  // rax
    int v266;  // xmm0
    uint256_t v267;  // ymm0
    int v268;  // xmm1
    unsigned long long v269;  // r13
    char v270;  // bpl
    uint256_t v271;  // ymm0
    int v272;  // xmm0
    int v273;  // xmm0
    uint256_t v274;  // ymm0
    char *v275;  // rax
    unsigned int v276;  // r13d
    int v277;  // xmm0
    uint256_t v278;  // ymm0
    unsigned long long v279;  // r13
    int v280;  // xmm0
    unsigned int v281;  // eax
    char *v282;  // rax
    int v283;  // xmm0
    unsigned int v284;  // eax
    int v285;  // xmm0
    int v286;  // xmm1
    unsigned long long v287;  // rax
    int v288;  // xmm0
    int v289;  // xmm1
    int v290;  // xmm0
    int v291;  // xmm0
    uint256_t v292;  // ymm0
    unsigned int v293;  // eax
    int v294;  // xmm0
    uint256_t v295;  // ymm0
    int v296;  // xmm0
    uint256_t v297;  // ymm0
    uint256_t v298;  // ymm0
    char *v299;  // r14
    char *v300;  // r14
    uint256_t v301;  // ymm0
    int v302;  // xmm0
    int v303;  // xmm0
    int v304;  // xmm0
    int v305;  // xmm0
    unsigned long long v306;  // rax
    uint256_t v307;  // ymm0
    int v308;  // xmm0
    unsigned short v309;  // ax
    int v310;  // xmm0
    int v311;  // xmm1
    uint256_t v312;  // ymm0
    int v313;  // xmm2
    unsigned long long v314;  // rax
    unsigned long long v315;  // rax
    unsigned long long v317;  // rdi
    char *v318;  // rcx
    char *v319;  // r13
    unsigned long long v320;  // rbp
    unsigned long long v321;  // r14
    int v322;  // xmm0
    unsigned int v323;  // eax
    unsigned long long v324;  // rax
    int v325;  // xmm0
    unsigned long long v326;  // rax
    unsigned long long v327;  // r14
    unsigned long long v328;  // r15
    int v329;  // xmm0
    unsigned long long v330;  // rax
    int v331;  // xmm0
    unsigned long long v332;  // rax
    int v333;  // xmm0
    unsigned int v334;  // eax
    int v335;  // xmm0
    unsigned int v336;  // ecx
    unsigned long long v337;  // rdx
    char v338;  // sil
    int v339;  // xmm0
    int v340;  // xmm0
    unsigned int v341;  // ecx
    unsigned long long v342;  // rdx
    char v343;  // sil
    int v344;  // xmm0
    int v345;  // xmm0
    int v346;  // xmm0
    int v347;  // xmm0
    int v348;  // xmm0
    int v349;  // xmm0
    unsigned int v350;  // ecx
    unsigned long long v351;  // rdx
    char v352;  // sil
    int v353;  // xmm0
    unsigned short v354;  // [bp-0x1268]
    unsigned long long v355;  // [bp-0x1208]
    unsigned long long v357;  // [bp-0xcc8]
    unsigned int v359;  // [bp-0x74c]
    int v360;  // [bp-0x4f8]

    v100 = 0;
    v2 = a2;
    v103.from(std::time::SystemTime::now(), a2);
    v232 = a0[1];
    v233 = a0[2];
    v177.join(v232, v233, "instance-uid", 12);
    std::fs::read_to_string(&(char)v212, &v177);
    if ((char)(((0 ^ *((long long *)&v212)) & (0 ^ -(*((long long *)&v212)))) >> 63))
    {
        v44 = *((long long *)&v214);
        v235 = v234 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v178;
        memcpy(&v185, &v178, 16);
        v140 = &v185;
        v145 = <std::path::Display as core::fmt::Display>::fmt;
        v148 = &v44;
        v152 = <std::io::error::Error as core::fmt::Display>::fmt;
        v59 = &g_926b08;
        v67 = 3;
        v87 = 0;
        v69 = &(char)v140;
        v84 = 2;
        std::io::stdio::_eprint(&(char)v59);
        core::ptr::drop_in_place<std::io::error::Error>(&v44);
    }
    else
    {
        v185.try_from(core::str::<impl str>::trim_matches(*((long long *)&v214), v215), a2);
        if (v188 == 9)
        {
            v235 = v237 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v190);
            memcpy(&v210, &v190, 16);
            v242 = 1;
        }
        else
        {
            v238 = *((int128_t *)&v188);
            v235 = v239 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v238;
            *((int128_t *)&v148) = *((int128_t *)&v193);
            v140 = v238;
            v44 = &(char)v140;
            v46 = <uuid::error::Error as core::fmt::Display>::fmt;
            v58 = &g_926ae8;
            v67 = 2;
            v87 = 0;
            v69 = &v44;
            v84 = 1;
            std::io::stdio::_eprint(&(char)v58);
        }
        core::ptr::drop_in_place<alloc::string::String>(&(char)v212);
    }
    v189 = v242;
    memcpy(&(char)v188, &v360, 16);
    (char)v59.new();
    (char)v140.context(&(char)v59);
    v243 = (char)v148;
    v244 = (long long)v140;
    if (v243 != 2)
    {
        v245 = (long long)(&v140)[8];
        v13 = (int)v150;
        v14 = v151;
        v10 = v244;
        v11 = v245;
        v12 = v243;
        (char)v140.join(v232, v233, "update_files", 12);
        (char)v59.new(&(char)v140);
        (char)v140.context(&(char)v59);
        v244 = (long long)(&v140)[8];
        if ((long long)v140 == 0x8000000000000000)
        {
LABEL_75c8d7:
            core::ptr::drop_in_place<dump::writer::DumpWriter>(&v10);
            goto LABEL_75c8e1;
        }
        v52 = (long long)v140;
        v53 = v244;
        v54 = (long long)v148;
        v113.join(v232, v233, "tasks", 5);
        v59 = 0;
        v79 = 0;
        v87 = 0;
        v84 = 429496729601;
        (char)v140.open(&(char)v59, &v113);
        v244 = v246;
        if (((char)(char)v140.with_context(v114, v115) & 1))
            goto LABEL_75c8b8;
        v4 = v246;
        v59 = &g_926b38;
        v67 = 1;
        v80 = 8;
        *((uint128_t *)&v85) = 0;
        std::io::stdio::_eprint(&(char)v59);
        v116.join(v232, v233, "auth", 4);
        v244 = std::fs::create_dir_all(&v116).context();
        if (v244)
        {
LABEL_75c8a1:
            core::ptr::drop_in_place<std::path::PathBuf>(&v116);
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v4);
LABEL_75c8b8:
            core::ptr::drop_in_place<std::path::PathBuf>(&v113);
            core::ptr::drop_in_place<file_store::FileStore>(&v52);
            if (!(0))
                goto LABEL_75c8d7;
            goto LABEL_75c8e1;
        }
        meilisearch_auth::store::open_auth_store_env(&(char)v59, v117, v118);
        v244 = v246;
        if (((char)(char)v59.context() & 1))
            goto LABEL_75c8a1;
        (char)v59.new(v246, &g_553068, a3, v247);
        (char)v140.with_context(&(char)v59, v232, v233);
        v244 = (long long)(&v140)[8];
        if ((long long)v140 == 9223372036854775809)
            goto LABEL_75c8a1;
        v248 = (int128_t)v148;
        memcpy(&v209, &v158, 16);
        memcpy(&v208, &v155, 16);
        v207 = v248;
        v205 = (long long)v140;
        v206 = v244;
        (char)v59.create_keys(&v10);
        v249 = *((int128_t *)&v67);
        v140 = v249;
        memcpy(&(char)v149, &v84, 16);
        if (v64 == 1)
        {
            v250 = (int128_t)v140;
            *((int128_t *)&v69) = (int128_t)v148;
            v59 = v250;
            v251 = (char)v59.from();
            goto LABEL_75c512;
        }
        memcpy(&v174, &v148, 16);
        memcpy(&v173, &v140, 16);
        v6 = 0;
        (char)v59.list_keys(&v205, a2, a3, v247);
        v252 = v59;
        v253 = (((((v235 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v360) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v248) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v249) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v140) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v67);
        memcpy(&v175, &v67, 16);
        v176 = v84;
        if (v252 != 3)
        {
            v84 = v176;
            v67 = v175;
            v59 = v252;
            v244 = (char)v59.from();
LABEL_75c884:
            core::ptr::drop_in_place<dump::writer::KeyWriter>(&v173);
            goto LABEL_75c894;
        }
        v15 = 9223372036854775809;
        v44.into_iter(&v175);
        (char)v140.next(&v44);
        if ((long long)v140 != 0x8000000000000000)
        {
            v254 = &(char)v140;
            do
            {
                v255 = v254;
                ::libc.so.0::memcpy(&(char)v59, v254, 160);
                (char)v212.push_key(&v173, &(char)v59);
                v256 = *((int *)&v212);
                if (v256 != 13)
                {
                    v257 = *((int128_t *)&(&v212)[4]);
                    *((int128_t *)&v193) = *((int128_t *)&v215);
                    v190 = v257;
                    v185 = v256;
                    v244 = v185.from();
                    core::ptr::drop_in_place<meilisearch_types::keys::Key>(&(char)v59);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilisearch_types::keys::Key>>(&v44);
                    goto LABEL_75c884;
                }
                v6 += 1;
                core::ptr::drop_in_place<meilisearch_types::keys::Key>(&(char)v59);
                v255.next(&v44);
                v254 = v255;
            } while ((long long)v140 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<meilisearch_types::keys::Key>>(&v44);
        v81 = v174;
        v58 = v173;
        (char)v140.flush(&(char)v59);
        if (v142 != 13)
        {
            v353 = (int128_t)(&v140)[4];
            *((int128_t *)&v69) = (int128_t)v148;
            v66 = v353;
            v58 = v142;
            v251 = v58.from();
LABEL_75c512:
            v244 = v251;
            goto LABEL_75c894;
        }
        v140 = &v6;
        v145 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v59 = &g_926b48;
        v67 = 2;
        v87 = 0;
        v69 = &(char)v140;
        v84 = 1;
        std::io::stdio::_eprint(&(char)v59);
        v59 = &g_926b68;
        v67 = 1;
        v70 = 8;
        *((uint128_t *)&v85) = 0;
        std::io::stdio::_eprint(&(char)v59);
        (char)v59.new(&v4, a2, a3, v247);
        v258 = (v253 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v173) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v67);
        memcpy(&(char)v140, &v67, 16);
        v147 = v84;
        if (v64 == 1)
        {
            v69 = v147;
            memcpy(&(char)v59, &(char)v140, 16);
            v251 = (char)v59.from();
            goto LABEL_75c512;
        }
        v20 = v147;
        v259 = v258 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v140);
        memcpy(&v19, &(char)v140, 16);
        meilitool::try_opening_database(&(char)v59, &v4, &v19);
        v244 = v67;
        if (!((char)v59 & 1))
        {
            v40 = v70;
            meilitool::try_opening_database(&(char)v59, &v4, &v19);
            v260 = v67;
            if (!((char)v59 & 1))
            {
                v0 = v260;
                v18 = v70;
                meilitool::try_opening_database(&(char)v59, &v4, &v19);
                v260 = v67;
                if (((char)v59 & 1))
                    goto LABEL_75c9ce;
                v139 = v260;
                v17 = v70;
                v59 = &g_926b78;
                v68 = 1;
                v71 = 8;
                *((uint128_t *)&v86) = 0;
                std::io::stdio::_eprint(&(char)v59);
                (char)v59.create_tasks_queue(&v10);
                v261 = v59;
                v262 = *((int128_t *)&v68);
                v141 = v262;
                v263 = (v259 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v262) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v86;
                memcpy(&(char)v149, &v84, 16);
                if (v261 == 0x8000000000000000)
                {
                    v264 = (int128_t)v141;
                    *((int128_t *)&v69) = (int128_t)v148;
                    v59 = v264;
                    v265 = (char)v59.from();
                    goto LABEL_75caaa;
                }
                else
                {
                    v266 = *((int128_t *)&v89);
                    v182 = v266;
                    v267 = (v263 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v266) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v141;
                    v268 = (int128_t)v148;
                    *((int128_t *)&v180) = (int128_t)v141;
                    v181 = v268;
                    v179 = v261;
                    v5 = 0;
                    v7 = 0;
                    (char)v140.iter(v67, v41, &v19);
                    if (v142 == 5)
                    {
                        v36 = (long long)(&v141)[8];
                        v38 = v147;
                        v40 = a3[0];
                        v16 = a3[1];
                    }
                    else
                    {
                        v350 = (int)(&v141)[4];
                        v351 = (long long)(&v141)[8];
                        v352 = v147;
                        v83 = v151;
                        v82 = (int)v150;
                        v58 = v142;
                        v66 = v350;
                        v67 = v351;
                        v69 = v352;
                        v244 = v58.from();
                        goto LABEL_75d65e;
                    }
                }
            }
            else
            {
LABEL_75c9ce:
                v244 = v260;
                goto LABEL_75c9d1;
            }
            while (true)
            {
                (char)v59.next(&v36);
                if (v68 == 16)
                {
                    v147 = v87;
                    *((int128_t *)&v140) = *((int128_t *)&v78);
                    v287 = (char)v140.from();
                    goto LABEL_75d2e3;
                }
                if ((unsigned int)v68 == 17)
                    break;
                ::libc.so.0::memcpy(&v219, &(char)v88, 520);
                v218 = v87;
                v267 = v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v71);
                *((int128_t *)&v214) = *((int128_t *)&v78);
                v212 = v68;
                v269 = (long long)v222;
                if (v269 == 0x8000000000000000)
                {
                    v267 = v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v102;
                    *((int128_t *)&v169) = (int128_t)v102;
                }
                v270 = (char)v223;
                if ((!v270 & (char)v2))
                {
                    core::ptr::drop_in_place<meilisearch_types::tasks::Task>(&(char)v212);
                }
                else
                {
                    ::libc.so.0::memcpy(&(char)v140, &(char)v212, 552);
                    v185.from(&(char)v140);
                    v44.push_task(&v179, &v185);
                    v271 = v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v46);
                    memcpy(&v122, &v46, 16);
                    *((int128_t *)&v124) = *((int128_t *)&v48);
                    if (v44 == 0x8000000000000000)
                    {
                        v345 = (int128_t)v123;
                        *((int128_t *)&v147) = *((int128_t *)&v357);
                        v140 = v345;
                        v244 = (char)v140.from();
                        core::ptr::drop_in_place<dump::TaskDump>(&v185);
                        goto LABEL_75d651;
                    }
                    v272 = *((int128_t *)&v50);
                    v33 = v272;
                    v273 = (int128_t)v123;
                    v267 = (v271 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v272) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v273;
                    *((int128_t *)&v31) = *((int128_t *)&v357);
                    v29 = v273;
                    v28 = v44;
                    core::ptr::drop_in_place<dump::TaskDump>(&v185);
                    if (v269 == 0x8000000000000000)
                    {
                        v267 = v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v169;
                        memcpy(&v133, &v169, 16);
                        if (v270)
                            goto LABEL_75cd10;
                        v274 = v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v169;
                        memcpy(&(char)v140, &(char)v169, 16);
                        v185.get_update(&v52, &(char)v140);
                        v275 = v187;
                        v276 = (&v188)[2];
                        if (v275 == 4)
                        {
                            if ((char)v41.lt(v16))
                            {
                                v140 = &g_926b88;
                                v145 = 1;
                                v148 = 8;
                                *((uint128_t *)&v152) = 0;
                                std::io::stdio::_eprint(&(char)v140);
                                (char)v140.from_reader(v145);
                                v185.with_context(&(char)v140, &v133);
                                v244 = *((long long *)&(&v188)[2]);
                                if (*((long long *)&v185) == 3)
                                    goto LABEL_75d644;
                                ::libc.so.0::memcpy(&v228, &v194, 232);
                                v226 = v187;
                                v227 = v244;
                                (char)v140.into_cursor_and_fields_index(&v226);
                                ::libc.so.0::memcpy(&v44, &(char)v140, 152);
                                memcpy(&v132, &v167, 16);
                                v277 = v166;
                                v131 = v277;
                                v278 = ((v274 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v167) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v277) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v162;
                                v130 = v165;
                                v128 = v164;
                                v125 = v163;
                                v123 = v162;
                                while (true)
                                {
                                    (char)v140.next_document(&v44);
                                    v185.with_context(&(char)v140, &v133);
                                    v244 = *((long long *)&(&v188)[2]);
                                    if (((char)v185 & 1))
                                    {
LABEL_75d62a:
                                        core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&v122);
                                        core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(&v44);
                                        goto LABEL_75d644;
                                    }
                                    if (!v244)
                                        break;
                                    milli::documents::obkv_to_object(&(char)v185, v244, v194, &v122);
                                    v279 = *((long long *)&v188);
                                    memcpy(&v23, &(char)v188, 16);
                                    memcpy(&v24, &v193, 16);
                                    memcpy(&v25, &v197, 16);
                                    memcpy(&v26, &v200, 16);
                                    v27 = *((long long *)&v202);
                                    if (v279 != 93)
                                    {
                                        ::libc.so.0::memcpy(&v161, &v203, 240);
                                        v145 = v23;
                                        v152 = v24;
                                        v156 = v25;
                                        v159 = v26;
                                        v160 = v27;
                                        v140 = v279;
                                        v244 = (char)v140.from();
                                        goto LABEL_75d62a;
                                    }
                                    v280 = v23;
                                    v278 = (v278 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&(&v188)[2])) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v280;
                                    v134 = v280;
                                    v135 = v24;
                                    v136 = v25;
                                    v137 = v26;
                                    v138 = v27;
                                    v107.push_document(&v28, &v134);
                                    v281 = *((int *)&v107);
                                    if (v281 == 13)
                                    {
                                        core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v134);
                                    }
                                    else
                                    {
                                        v347 = *((int128_t *)&v108);
                                        *((int128_t *)&v147) = *((int128_t *)&v110);
                                        v144 = v347;
                                        v140 = v281;
                                        v244 = v140.from();
                                        core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v134);
                                        goto LABEL_75d62a;
                                    }
                                }
                                core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&v122);
                                core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(&v44);
                            }
                            else
                            {
                                v140 = &g_926b98;
                                v145 = 1;
                                v148 = 8;
                                *((uint128_t *)&v152) = 0;
                                std::io::stdio::_eprint(&(char)v140);
                                v195 = 0x8000000000000000;
                                v199 = 1;
                                v278 = v274 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                                *((uint128_t *)&v200) = 0;
                                v202 = v145;
                                v203 = 0;
                                v187 = 0;
                                v191 = 1;
                                v194 = 0;
                                v204 = 0x8000;
                                (char)v140.into_iter(&v185);
                                while (true)
                                {
                                    v225.next(&(char)v140);
                                    if ((long long)v225 == 9223372036854775809)
                                        break;
                                    v185.with_context(&v225, &v133);
                                    v282 = v187;
                                    v244 = v191;
                                    if (v282 != 0x8000000000000000)
                                    {
                                        v51 = v201;
                                        v283 = *((int128_t *)&v194);
                                        v278 = v278 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v283;
                                        memcpy(&v50, &v199, 16);
                                        *((int128_t *)&v49) = *((int128_t *)&v196);
                                        v47 = v283;
                                        v44 = v282;
                                        v46 = v244;
                                        v122.push_document(&v28, &v44);
                                        v284 = *((int *)&v122);
                                        if (v284 == 13)
                                        {
                                            core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v44);
                                        }
                                        else
                                        {
                                            v346 = *((int128_t *)&(&v122)[4]);
                                            *((int128_t *)&v193) = *((int128_t *)&v357);
                                            v190 = v346;
                                            v185 = v284;
                                            v244 = v185.from();
                                            core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v44);
                                            goto LABEL_75d54f;
                                        }
                                    }
                                    else
                                    {
LABEL_75d54f:
                                        core::ptr::drop_in_place<serde_json::de::StreamDeserializer<serde_json::read::IoRead<std::fs::File>,serde_json::map::Map<alloc::string::String,serde_json::value::Value>>>(&(char)v140);
                                        goto LABEL_75d644;
                                    }
                                }
                                core::ptr::drop_in_place<serde_json::de::StreamDeserializer<serde_json::read::IoRead<std::fs::File>,serde_json::map::Map<alloc::string::String,serde_json::value::Value>>>(&(char)v140);
                            }
                            v158 = (long long)(&v33)[8];
                            v285 = *((int128_t *)&v28);
                            v267 = v278 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v285;
                            v286 = (int128_t)(&v29)[8];
                            *((int128_t *)&v155) = (int128_t)(&v31)[8];
                            v148 = v286;
                            v141 = v285;
                            (char)v185.flush(&(char)v140);
                            if (v185 == 13)
                            {
                                v7 += 1;
                                v5 += 1;
                            }
                            else
                            {
                                v349 = *((int128_t *)((char *)&v187 + 4));
                                *((int128_t *)&v147) = *((int128_t *)&v194);
                                v144 = v349;
                                v140 = v185;
                                v287 = v140.from();
LABEL_75d2e3:
                                v244 = v287;
                                goto LABEL_75d651;
                            }
                        }
                        else
                        {
                            v157 = v198;
                            v348 = *((int128_t *)&(&v188)[3]);
                            *((int128_t *)&v154) = *((int128_t *)&v359);
                            v146 = v348;
                            v140 = v275;
                            v145 = v276;
                            v244 = (char)v140.from();
LABEL_75d644:
                            core::ptr::drop_in_place<dump::writer::UpdateFile>(&v28);
LABEL_75d651:
                            core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v36);
LABEL_75d65e:
                            core::ptr::drop_in_place<dump::writer::TaskWriter>(&v179);
                            goto LABEL_75c9d1;
                        }
                    }
                    else
                    {
LABEL_75cd10:
                        v5 += 1;
                        core::ptr::drop_in_place<dump::writer::UpdateFile>(&v28);
                    }
                }
            }
            core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v36);
            v91 = v183;
            v288 = *((int128_t *)&v179);
            v289 = (int128_t)(&v180)[8];
            *((int128_t *)&v88) = (int128_t)(&v181)[8];
            v72 = v289;
            v60 = v288;
            (char)v140.flush(&(char)v59);
            if (v142 != 13)
            {
                v344 = (int128_t)(&v141)[4];
                *((int128_t *)&v69) = (int128_t)v148;
                v66 = v344;
                v58 = v142;
                v265 = v58.from();
                goto LABEL_75caaa;
            }
            v140 = &v5;
            v145 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v149 = &v7;
            v153 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v59 = &g_926ba8;
            v67 = 3;
            v87 = 0;
            v73 = &(char)v140;
            v84 = 2;
            std::io::stdio::_eprint(&(char)v59);
            v59 = &g_926bd8;
            v67 = 1;
            v74 = 8;
            *((uint128_t *)&v85) = 0;
            std::io::stdio::_eprint(&(char)v59);
            (char)v59.create_batches_queue(&v10);
            v290 = *((int128_t *)&v67);
            v140 = v290;
            memcpy(&(char)v149, &v84, 16);
            if (v64 == 1)
            {
                v291 = (int128_t)v140;
                *((int128_t *)&v69) = *((int128_t *)&v149);
                v59 = v291;
                v265 = (char)v59.from();
                goto LABEL_75caaa;
            }
            v292 = (((v267 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v288) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v290) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v140;
            memcpy(&v39, &v148, 16);
            *((int128_t *)&v37) = (int128_t)v140;
            v8 = 0;
            (char)v140.iter(v0, v18, &v19);
            if (v142 == 5)
            {
                v44 = (long long)(&v140)[8];
                v46 = (char)v149;
            }
            else
            {
                v341 = (int)(&v140)[4];
                v342 = (long long)(&v140)[8];
                v343 = (char)v149;
                v83 = v151;
                v82 = (int)v150;
                v58 = v142;
                v66 = v341;
                v67 = v342;
                v69 = v343;
                v244 = v58.from();
                goto LABEL_75e2f1;
            }
            while (true)
            {
                (char)v59.next(&v44);
                if (v67 == 2)
                {
                    v147 = v87;
                    *((int128_t *)&v140) = *((int128_t *)&v78);
                    v244 = (char)v140.from();
                    goto LABEL_75e2e4;
                }
                if ((unsigned int)v67 == 3)
                    break;
                ::libc.so.0::memcpy(&(char)v155, &(char)v88, 960);
                v292 = v292 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v74);
                *((int128_t *)&v145) = *((int128_t *)&v78);
                v153 = v87;
                v140 = v67;
                (char)v212.push_batch(&v36, &(char)v140);
                v293 = v212;
                if (v293 == 13)
                {
                    v8 += 1;
                    core::ptr::drop_in_place<meilisearch_types::batches::Batch>(&(char)v140);
                }
                else
                {
                    v340 = *((int128_t *)&v213);
                    *((int128_t *)&v193) = *((int128_t *)&v215);
                    v190 = v340;
                    v185 = v293;
                    v244 = v185.from();
                    core::ptr::drop_in_place<meilisearch_types::batches::Batch>(&(char)v140);
LABEL_75e2e4:
                    core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v44);
LABEL_75e2f1:
                    core::ptr::drop_in_place<dump::writer::KeyWriter>(&v36);
                    goto LABEL_75c9d1;
                }
            }
            core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v44);
            v294 = (int128_t)v37;
            v75 = v39;
            v61 = v294;
            (char)v140.flush(&(char)v59);
            if (v142 != 13)
            {
                v339 = (int128_t)(&v140)[4];
                *((int128_t *)&v69) = (int128_t)(&v145)[8];
                v66 = v339;
                v58 = v142;
                v265 = v58.from();
                goto LABEL_75caaa;
            }
            v143 = &v8;
            v145 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
            v59 = &g_926be8;
            v67 = 2;
            v87 = 0;
            v69 = &(char)v140;
            v84 = 1;
            std::io::stdio::_eprint(&(char)v59);
            v59 = &g_926c08;
            v67 = 1;
            v77 = 8;
            v295 = (v292 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v294) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((uint128_t *)&v84) = 0;
            std::io::stdio::_eprint(&(char)v59);
            v9 = 0;
            (char)v140.iter(v139, v17, &v19);
            if (v142 == 5)
            {
                v42 = v145;
                v43 = (char)(&v145)[8];
                while (true)
                {
                    (char)v169.next(&v42);
                    if ((int)v169 != 1)
                        break;
                    v2 = v171;
                    if (!v170)
                    {
                        memcpy(&v67, &v172, 16);
                        v59 = v2;
                        v244 = (char)v59.from();
LABEL_75e579:
                        core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v42);
                        goto LABEL_75c9d1;
                    }
                    v296 = (int128_t)v172;
                    memcpy(&v211, &v172, 16);
                    (char)v140.join(v232, v233, "indexes", 7);
                    (char)v59.spec_to_string(&v211);
                    v119.join((long long)(&v140)[8], (long long)(&v145)[8], &(char)v59);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v140);
                    v212 = 0;
                    v216 = 0;
                    v218 = 0;
                    v219 = 0;
                    (char)v59.new(&(char)v212, &v119);
                    (char)v140.with_context(&(char)v59, v120, v121);
                    v244 = (long long)(&v140)[8];
                    if (!v143)
                    {
LABEL_75e56c:
                        core::ptr::drop_in_place<std::path::PathBuf>(&v119);
                        goto LABEL_75e579;
                    }
                    ::libc.so.0::memcpy(&v194, &(char)v149, 448);
                    v186 = v143;
                    v192 = v244;
                    (char)v59.read_txn(&v185, a2, a3, v247);
                    v297 = (v295 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v296) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v67);
                    memcpy(&(char)v140, &v67, 16);
                    v148 = v84;
                    if (v64 == 1)
                    {
                        v69 = v148;
                        memcpy(&(char)v59, &(char)v140, 16);
                        v244 = (char)v59.from();
LABEL_75e55f:
                        core::ptr::drop_in_place<milli::index::Index>(&v185);
                        goto LABEL_75e56c;
                    }
                    v22 = v148;
                    memcpy(&v21, &v140, 16);
                    (char)v59.to_vec(v170, v2);
                    v355 = v77;
                    v298 = (v297 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v143)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v64);
                    *((int128_t *)&v45) = *((int128_t *)&v64);
                    (char)v59.primary_key(&v185, &v21);
                    if (v64 != 5)
                    {
                        v58 = v64;
                        *((int128_t *)&v67) = *((int128_t *)&v67);
                        v244 = v58.from();
                        goto LABEL_75e89b;
                    }
                    if (v67)
                    {
                        (char)v59.to_vec(v67, v77);
                        v216 = v77;
                        v298 = v298 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v64);
                        *((int128_t *)&v212) = *((int128_t *)&v64);
                    }
                    else
                    {
                        v212 = 0x8000000000000000;
                        v216 = v217;
                    }
                    (char)v140.created_at(&v185, &v21);
                    v299 = v143;
                    memcpy(&v184, &(char)v140, 16);
                    if (v299 != 93)
                    {
                        ::libc.so.0::memcpy(&v84, &(char)v148, 296);
                        v67 = v184;
                        v59 = v299;
                        v330 = (char)v59.from();
                        goto LABEL_75e88b;
                    }
                    (char)v140.updated_at(&v185, &v21);
                    v300 = v143;
                    v301 = (v298 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v140)[8]) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v140)[8];
                    memcpy(&v23, &(char)v140, 16);
                    if (v300 != 93)
                    {
                        ::libc.so.0::memcpy(&v84, &(char)v148, 296);
                        v67 = v23;
                        v59 = v300;
                        v330 = (char)v59.from();
LABEL_75e88b:
                        v244 = v330;
                        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&(char)v212);
LABEL_75e89b:
                        core::ptr::drop_in_place<alloc::string::String>(&v44);
LABEL_75e552:
                        core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v21);
                        goto LABEL_75e55f;
                    }
                    v302 = v23;
                    v131 = v302;
                    v303 = (int128_t)v45;
                    v123 = v303;
                    v357 = v355;
                    v129 = v216;
                    v304 = (int128_t)v212;
                    v127 = v304;
                    v305 = v184;
                    v130 = v305;
                    (char)v59.create_index(&v10, v170, v2, &(char)v123);
                    v306 = *((long long *)&v64);
                    v307 = ((((v301 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v302) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v303) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v304) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v305) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v67);
                    memcpy(&(char)v140, &v67, 16);
                    *((int128_t *)&v148) = *((int128_t *)&v84);
                    if (v306 == 0x8000000000000000)
                    {
                        v331 = *((int128_t *)&v143);
                        *((int128_t *)&v69) = (int128_t)v148;
                        v59 = v331;
                        v244 = (char)v59.from();
LABEL_75e545:
                        core::ptr::drop_in_place<dump::IndexMetadata>(&(char)v123);
                        goto LABEL_75e552;
                    }
                    v308 = *((int128_t *)&v143);
                    *((int128_t *)&v111) = (int128_t)v148;
                    v109 = v308;
                    v107 = v306;
                    v0 = (unsigned int)v306 & 0xffffff00 | 1;
                    (char)v59.fields_ids_map(&v185, &v21);
                    v309 = v91;
                    if (v309 == 2)
                    {
                        v332 = (long long)v70;
                        v147 = v332;
                        v333 = *((int128_t *)&v64);
                        v140 = v333;
                        v69 = v332;
                        v59 = v333;
                        v0 = (unsigned int)v332 & 0xffffff00 | 1;
                        v244 = (char)v59.from();
LABEL_75e538:
                        core::ptr::drop_in_place<dump::writer::IndexWriter>(&(char)v107);
                        goto LABEL_75e545;
                    }
                    v310 = *((int128_t *)&v64);
                    v311 = *((int128_t *)&v77);
                    *((int128_t *)&v155) = (int128_t)v88;
                    v148 = v311;
                    v140 = v310;
                    v35 = v94;
                    v34 = v93;
                    v312 = ((v307 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v308) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v310) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v140;
                    v313 = (int128_t)v155;
                    memcpy(&v28, &(char)v140, 16);
                    *((int128_t *)&v30) = (int128_t)v148;
                    v32 = v313;
                    v354 = v309;
                    v314 = (long long)(&v30)[8];
                    v315 = v314;
                    if (v315)
                        v315 = (long long)(&v32)[8];
                    v317 = (long long)v32;
                    v318 = v314;
                    v62 = v318;
                    v67 = 0;
                    v69 = v314;
                    v84 = v317;
                    v87 = v318;
                    v90 = 0;
                    v91 = v314;
                    v95 = v84;
                    v96 = v315;
                    v0 = (int)v55.collect(&(char)v59) & 0xffffff00 | 1;
                    (char)v140.all_documents(&v185, &v21);
                    ::libc.so.0::memcpy(&v44, &(char)v140, 144);
                    if ((long long)v140 == 93)
                    {
                        ::libc.so.0::memcpy(&(char)v212, &v44, 144);
                        v3 = v56;
                        v15 = v57;
                        while (((char)(char)v212.next() & 1))
                        {
                            milli::index::Index::iter_documents::{{closure}}(&(char)v59, v220, (long long)v221, (unsigned int)v246);
                            v319 = v62;
                            v320 = v69;
                            v312 = v312 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v67;
                            *((uint128_t *)&v40) = v312;
                            ::libc.so.0::memcpy(&v229, &v87, 288);
                            if (v319 == 93)
                            {
                                milli::obkv_to_json(&(char)v140, v3, v15, &v28, v320, v84);
                                v321 = (long long)v140;
                                memcpy(&v23, &(char)v140, 16);
                                memcpy(&v24, &v148, 16);
                                memcpy(&v25, &v155, 16);
                                v26 = v159;
                                v27 = v160;
                                if (v321 == 93)
                                {
                                    v312 = (v312 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v140)[8]) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
                                    memcpy(&v134, &v23, 16);
                                    v135 = v24;
                                    v136 = v25;
                                    v137 = v26;
                                    v138 = v27;
                                    (char)v140.push_document(&(char)v107, &v134);
                                    if (v142 == 13)
                                    {
                                        core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v134);
                                    }
                                    else
                                    {
                                        v325 = (int128_t)(&v140)[4];
                                        *((int128_t *)&v69) = (int128_t)v148;
                                        v66 = v325;
                                        v58 = v142;
                                        v244 = v58.from();
                                        v324 = core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(&v134);
LABEL_75e4f9:
                                        v0 = (unsigned int)v324 & 0xffffff00 | 1;
                                        v326 = (unsigned long long)core::ptr::drop_in_place<core::iter::adapters::map::Map<roaring::bitmap::iter::IntoIter,milli::index::Index::iter_documents<roaring::bitmap::RoaringBitmap>::{{closure}}>>(&(char)v212);
                                        goto LABEL_75e50c;
                                    }
                                }
                                else
                                {
                                    ::libc.so.0::memcpy(&v98, &v161, 240);
                                    v67 = v23;
                                    v84 = v24;
                                    v89 = v25;
                                    v95 = v26;
                                    v97 = v27;
                                    v59 = v321;
                                    v324 = (char)v59.from();
LABEL_75e4b0:
                                    v244 = v324;
                                    goto LABEL_75e4f9;
                                }
                            }
                            else
                            {
                                if (v319 == 94)
                                    break;
                                ::libc.so.0::memcpy(&v87, &v229, 288);
                                v59 = v319;
                                v67 = (unsigned long long)v40;
                                v69 = v320;
                                v324 = (char)v59.from();
                                goto LABEL_75e4b0;
                            }
                        }
                        core::ptr::drop_in_place<core::iter::adapters::map::Map<roaring::bitmap::iter::IntoIter,milli::index::Index::iter_documents<roaring::bitmap::RoaringBitmap>::{{closure}}>>(&(char)v212);
                        meilisearch_types::settings::settings(&(char)v59, &v185, &v21, 0);
                        ::libc.so.0::memcpy(&(char)v212, &v67, 320);
                        if (v62 != 3)
                        {
                            ::libc.so.0::memcpy(&v168, &v101, 408);
                            ::libc.so.0::memcpy(&(char)v140, &(char)v212, 320);
                            v143 = v62;
                            v87 = v112;
                            v322 = *((int128_t *)&v107);
                            v295 = v312 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v322;
                            *((int128_t *)&v70) = *((int128_t *)&v110);
                            v63 = v322;
                            (char)v212.settings(&(char)v59, &(char)v140);
                            v323 = (int)v212;
                            if (v323 == 13)
                            {
                                v9 += 1;
                                v0 = 0;
                                core::ptr::drop_in_place<meilisearch_types::settings::Settings<meilisearch_types::settings::Checked>>(&(char)v140);
                                core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v55, v3);
                                v0 = 0;
                                core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(&v28);
                                core::ptr::drop_in_place<dump::IndexMetadata>(&(char)v123);
                                core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v21);
                                core::ptr::drop_in_place<milli::index::Index>(&v185);
                                core::ptr::drop_in_place<std::path::PathBuf>(&v119);
                            }
                            else
                            {
                                v335 = (int128_t)(&v212)[4];
                                *((int128_t *)&v69) = *((int128_t *)&v216);
                                v66 = v335;
                                v58 = v323;
                                v244 = v58.from();
                                v0 = 0;
                                core::ptr::drop_in_place<meilisearch_types::settings::Settings<meilisearch_types::settings::Checked>>(&(char)v140);
                                goto LABEL_75e512;
                            }
                        }
                        else
                        {
                            v0 = (unsigned int)::libc.so.0::memcpy(&(char)v59, &(char)v212, 320) & 0xffffff00 | 1;
                            v326 = (char)v59.from();
                            v244 = v326;
LABEL_75e50c:
                            v0 = (unsigned int)v326 & 0xffffff00 | 1;
LABEL_75e512:
                            core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v55, v3);
                            core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(&v28);
                            if (!(char)v1)
                                goto LABEL_75e545;
                            goto LABEL_75e538;
                        }
                    }
                    else
                    {
                        ::libc.so.0::memcpy(&v99, &v162, 168);
                        v334 = (unsigned int)::libc.so.0::memcpy(&v67, &v44, 144);
                        v59 = (long long)v140;
                        v0 = v334 & 0xffffff00 | 1;
                        v244 = (char)v59.from();
                        v326 = v56;
                        v3 = v326;
                        goto LABEL_75e50c;
                    }
                }
                core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v42);
                v140 = &v9;
                v145 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                v59 = &g_926c18;
                v67 = 2;
                v87 = 0;
                v71 = &(char)v140;
                v84 = 1;
                std::io::stdio::_eprint(&(char)v59);
                v59 = &g_926c38;
                v67 = 1;
                v72 = 8;
                *((uint128_t *)&v84) = 0;
                std::io::stdio::_eprint(&(char)v59);
                (char)v59.format(v104, v103, *((short *)&v106) * 0x10000 + v105 * 0x100 + 1);
                v44.unwrap(&(char)v59);
                v327 = a1[1];
                v328 = a1[2];
                v140 = &v44;
                v145 = <alloc::string::String as core::fmt::Display>::fmt;
                v65 = &g_926d08;
                v67 = 2;
                v87 = 0;
                v73 = &(char)v140;
                v84 = 1;
                v224.map_or_else(0, a2, &(char)v59);
                (char)v212.join(v327, v328, &v224);
                (char)v59.create(&(char)v212);
                if (v64 == 1)
                {
                    v244 = 2.from();
                    goto LABEL_75eb97;
                }
                v193 = *((long long *)&v12);
                memcpy(&v185, &v10, 16);
                (char)v59.with_capacity(v66);
                (char)v140.persist_to(&v185, &(char)v59);
                if (v142 == 13)
                {
                    memcpy(&(char)v140, &(char)v212, 16);
                    v187 = &(char)v140;
                    v191 = <std::path::Display as core::fmt::Debug>::fmt;
                    v59 = &g_926d28;
                    v67 = 2;
                    v87 = 0;
                    v69 = &v185;
                    v84 = 1;
                    std::io::stdio::_eprint(&(char)v59);
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v212);
                    core::ptr::drop_in_place<alloc::string::String>(&v44);
                    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v19);
                    core::ptr::drop_in_place<meilisearch_auth::AuthController>(&v205);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v116);
                    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v4);
                    core::ptr::drop_in_place<std::path::PathBuf>(&v113);
                    core::ptr::drop_in_place<file_store::FileStore>(&v52);
                    v244 = 0;
                }
                else
                {
                    v329 = *((int128_t *)((char *)&v140 + 4));
                    *((int128_t *)&v69) = (int128_t)(&v145)[8];
                    v66 = v329;
                    v58 = v142;
                    v244 = v58.from();
LABEL_75eb97:
                    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v212);
                    core::ptr::drop_in_place<alloc::string::String>(&v44);
                    goto LABEL_75c9d1;
                }
            }
            else
            {
                v336 = *((int *)((char *)&v143 + 4));
                v337 = v145;
                v338 = (char)(&v145)[8];
                v83 = v151;
                v82 = (int)v150;
                v58 = v142;
                v66 = v336;
                v67 = v337;
                v69 = v338;
                v265 = v58.from();
LABEL_75caaa:
                v244 = v265;
                goto LABEL_75c9d1;
            }
        }
        else
        {
LABEL_75c9d1:
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v19);
LABEL_75c894:
            core::ptr::drop_in_place<meilisearch_auth::AuthController>(&v205);
            goto LABEL_75c8a1;
        }
    }
LABEL_75c8e1:
    core::ptr::drop_in_place<std::path::PathBuf>(&v177);
    core::ptr::drop_in_place<std::path::PathBuf>(a1);
    core::ptr::drop_in_place<std::path::PathBuf>(a0);
    return v244;
}
