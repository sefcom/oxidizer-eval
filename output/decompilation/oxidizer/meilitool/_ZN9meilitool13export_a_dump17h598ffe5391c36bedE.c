fn meilitool::export_a_dump(a0: i64, a1: i64, a2: u32, a3: i64) -> long long {
    let v0: u32;  // [bp-0x1390]
    let v2: u64;  // [bp-0x1388]
    let v3: u64;  // [bp-0x1380]
    let v4: u32;  // [bp-0x1374]
    let v5: u32;  // [bp-0x1370]
    let v6: u32;  // [bp-0x136c]
    let v7: u32;  // [bp-0x1368]
    let v8: u32;  // [bp-0x1364]
    let v9: core::fmt::rt::Argument;  // [bp-0x1360]
    let v10: u64;  // [bp-0x1358]
    let v11: u8;  // [bp-0x1350]
    let v12: u32;  // [bp-0x134f]
    let v13: u32;  // [bp-0x134c]
    let v14: u64;  // [bp-0x1348]
    let v15: u32;  // [bp-0x1334]
    let v16: u32;  // [bp-0x1330]
    let v17: u32;  // [bp-0x132c]
    let v18: struct24;  // [bp-0x1328]
    let v19: iNone;  // [bp-0x1308]
    let v20: u64;  // [bp-0x12f8]
    let v21: iNone;  // [bp-0x12e8]
    let v22: struct72;  // [bp-0x12e8]
    let v23: iNone;  // [bp-0x12d8], Other Possible Types: u128
    let v24: iNone;  // [bp-0x12c8]
    let v25: iNone;  // [bp-0x12b8], Other Possible Types: u128
    let v26: u64;  // [bp-0x12a8]
    let v27: u64;  // [bp-0x1298]
    let v28: u128;  // [bp-0x1298]
    let v29: iNone;  // [bp-0x1290]
    let v30: iNone;  // [bp-0x1288]
    let v31: u128;  // [bp-0x1280]
    let v32: iNone;  // [bp-0x1278]
    let v33: iNone;  // [bp-0x1270]
    let v34: u32;  // [bp-0x1266]
    let v35: u16;  // [bp-0x1262]
    let v36: u64;  // [bp-0x1258]
    let v37: iNone;  // [bp-0x1258]
    let v38: u8;  // [bp-0x1250]
    let v39: iNone;  // [bp-0x1248]
    let v40: u128;  // [bp-0x1238]
    let v41: u32;  // [bp-0x1238]
    let v42: u32;  // [bp-0x1238]
    let v43: struct16;  // [bp-0x1228]
    let v44: struct16;  // [bp-0x1218], Other Possible Types: struct32, struct72, struct24, u128
    let v45: u64;  // [bp-0x1218]
    let v46: u64;  // [bp-0x1218]
    let v47: u64;  // [bp-0x1210]
    let v48: u64;  // [bp-0x1210]
    let v49: u64;  // [bp-0x1200]
    let v50: u64;  // [bp-0x11f0]
    let v51: u64;  // [bp-0x1178]
    let v52: core::fmt::rt::Argument;  // [bp-0x1170]
    let v53: u64;  // [bp-0x1168]
    let v54: u64;  // [bp-0x1160]
    let v55: u64;  // [bp-0x1158]
    let v56: u64;  // [bp-0x1150]
    let v57: iNone;  // [bp-0x1148], Other Possible Types: struct28, struct464, Result<struct4, struct8>, struct24, struct32, u32
    let v58: struct32;  // [bp-0x1148], Other Possible Types: struct56
    let v59: Result<struct32, struct12>;  // [bp-0x1148], Other Possible Types: struct24
    let v60: struct24;  // [bp-0x1148], Other Possible Types: struct28
    let v61: struct20;  // [bp-0x1148], Other Possible Types: struct32
    let v62: Result<struct8, struct20>;  // [bp-0x1148], Other Possible Types: struct12, struct32, struct64, u128
    let v63: Result<struct36, struct20>;  // [bp-0x1148]
    let v64: struct56;  // [bp-0x1148]
    let v65: struct736;  // [bp-0x1148]
    let v66: void*;  // [bp-0x1148], Other Possible Types: struct40
    let v67: Result<struct32, struct12>;  // [bp-0x1148], Other Possible Types: struct29
    let v68: u64;  // [bp-0x1148]
    let v69: Result<struct32, struct32>;  // [bp-0x1148], Other Possible Types: u128
    let v70: struct32;  // [bp-0x1148], Other Possible Types: u64
    let v71: Result<struct12, struct8>;  // [bp-0x1148]
    let v72: Result<struct12, struct8>;  // [bp-0x1148]
    let v73: Result<struct12, struct8>;  // [bp-0x1148]
    let v74: Result<struct56, struct20>;  // [bp-0x1148]
    let v75: iNone;  // [bp-0x1144], Other Possible Types: struct12, u32
    let v76: u32;  // [bp-0x1144]
    let v77: void*;  // [bp-0x1140], Other Possible Types: struct32, u128
    let v78: u64;  // [bp-0x1138]
    let v79: u32;  // [bp-0x1137]
    let v80: u32;  // [bp-0x1134]
    let v81: iNone;  // [bp-0x1130], Other Possible Types: u64
    let v82: u64;  // [bp-0x1130]
    let v83: u64;  // [bp-0x1128]
    let v84: u64;  // [bp-0x1128]
    let v85: u32;  // [bp-0x1128]
    let v86: void*;  // [bp-0x1120], Other Possible Types: int
    let v87: u64;  // [bp-0x1118]
    let v88: u32;  // [bp-0x1116]
    let v89: u16;  // [bp-0x1112]
    let v90: u128;  // [bp-0x1110]
    let v91: core::fmt::rt::Argument;  // [bp-0x1108]
    let v92: u64;  // [bp-0x1100]
    let v93: void*;  // [bp-0x1030]
    let v94: iNone;  // [bp-0x1000]
    let v95: iNone;  // [bp-0xfe8]
    let v96: struct15;  // [bp-0xd58]
    let v97: u32;  // [bp-0xd50]
    let v98: u8;  // [bp-0xd4c]
    let v99: struct32;  // [bp-0xd48]
    let v100: u64;  // [bp-0xd48]
    let v101: u128;  // [bp-0xd40]
    let v102: u128;  // [bp-0xd30]
    let v103: u64;  // [bp-0xd28]
    let v104: struct24;  // [bp-0xd20]
    let v105: u64;  // [bp-0xd18]
    let v106: u64;  // [bp-0xd10]
    let v107: struct24;  // [bp-0xd08]
    let v108: u64;  // [bp-0xd00]
    let v109: u64;  // [bp-0xcf8]
    let v110: u64;  // [bp-0xce8]
    let v111: u64;  // [bp-0xce0]
    let v112: iNone;  // [bp-0xcd8], Other Possible Types: struct80
    let v113: u128;  // [bp-0xcd8]
    let v114: struct32;  // [bp-0xcd8]
    let v115: u128;  // [bp-0xcc8]
    let v116: u128;  // [bp-0xcc8]
    let v117: iNone;  // [bp-0xcb8]
    let v118: iNone;  // [bp-0xca8]
    let v119: iNone;  // [bp-0xc98]
    let v120: iNone;  // [bp-0xc88]
    let v121: iNone;  // [bp-0xc78]
    let v122: struct72;  // [bp-0xc68]
    let v123: u64;  // [bp-0xc20]
    let v124: Result<struct24, struct13>;  // [bp-0xc18], Other Possible Types: struct32, u128
    let v125: Option<struct8>;  // [bp-0xc18], Other Possible Types: struct24, u128
    let v126: struct24;  // [bp-0xc18], Other Possible Types: struct248, u128
    let v127: struct152;  // [bp-0xc18]
    let v130: struct56;  // [bp-0xc18]
    let v131: Option<struct8>;  // [bp-0xc18]
    let v132: Result<struct24, struct13>;  // [bp-0xc18]
    let v133: struct32;  // [bp-0xc18]
    let v134: Result<struct24, struct13>;  // [bp-0xc18]
    let v135: struct24;  // [bp-0xc18]
    let v136: Result<struct464, struct16>;  // [bp-0xc18]
    let v137: Result<struct73, struct17>;  // [bp-0xc18]
    let v138: Result<struct73, struct17>;  // [bp-0xc18]
    let v139: struct24;  // [bp-0xc18]
    let v140: struct24;  // [bp-0xc18]
    let v141: struct12;  // [bp-0xc18]
    let v142: u64;  // [bp-0xc18]
    let v143: Option<struct8>;  // [bp-0xc18]
    let v144: Result<struct24, struct16>;  // [bp-0xc18]
    let v145: Result<struct64, struct16>;  // [bp-0xc18]
    let v146: Option<struct160>;  // [bp-0xc18]
    let v147: Option<struct8>;  // [bp-0xc18]
    let v148: iNone;  // [bp-0xc10], Other Possible Types: struct16, u32
    let v149: iNone;  // [bp-0xc0c]
    let v150: u128;  // [bp-0xc08]
    let v151: iNone;  // [bp-0xc07]
    let v152: iNone;  // [bp-0xc07]
    let v153: u32;  // [bp-0xc04]
    let v154: u32;  // [bp-0xc04]
    let v155: u128;  // [bp-0xc00]
    let v156: u128;  // [bp-0xbfc]
    let v157: iNone;  // [bp-0xbf8]
    let v158: iNone;  // [bp-0xbf0]
    let v159: u32;  // [bp-0xbec]
    let v160: iNone;  // [bp-0xbe0]
    let v161: u64;  // [bp-0xbd0]
    let v162: u128;  // [bp-0xb80]
    let v163: u128;  // [bp-0xb70]
    let v164: iNone;  // [bp-0xb60]
    let v165: iNone;  // [bp-0xb50]
    let v166: iNone;  // [bp-0xb40]
    let v167: iNone;  // [bp-0xb30]
    let v168: iNone;  // [bp-0xad0]
    let v169: iNone;  // [bp-0x838], Other Possible Types: struct41
    let v170: void*;  // [bp-0x830]
    let v171: u64;  // [bp-0x828]
    let v172: iNone;  // [bp-0x808]
    let v173: struct32;  // [bp-0x808]
    let v174: iNone;  // [bp-0x7f8]
    let v175: u128;  // [bp-0x7e8]
    let v176: u64;  // [bp-0x7d8]
    let v177: struct24;  // [bp-0x7c8]
    let v178: u128;  // [bp-0x7c0]
    let v179: u64;  // [bp-0x7b0]
    let v180: iNone;  // [bp-0x7a8]
    let v181: u128;  // [bp-0x798]
    let v182: struct9;  // [bp-0x788]
    let v183: u64;  // [bp-0x780]
    let v184: iNone;  // [bp-0x778]
    let v185: struct16;  // [bp-0x768], Other Possible Types: struct28, struct32, u8
    let v186: struct229;  // [bp-0x768], Other Possible Types: u128
    let v187: Result<struct8, struct4>;  // [bp-0x768]
    let v188: Result<struct248, struct16>;  // [bp-0x768]
    let v189: Result<struct72, struct16>;  // [bp-0x768]
    let v190: struct12;  // [bp-0x768]
    let v191: u8;  // [bp-0x768]
    let v192: u8;  // [bp-0x768]
    let v193: iNone;  // [bp-0x767]
    let v197: u64;  // [bp-0x758]
    let v198: u64;  // [bp-0x758]
    let v199: u64;  // [bp-0x758]
    let v200: u32;  // [bp-0x73c]
    let v201: u64;  // [bp-0x738]
    let v202: u128;  // [bp-0x730]
    let v203: u64;  // [bp-0x728]
    let v204: u32;  // [bp-0x720]
    let v205: u8;  // [bp-0x718]
    let v206: u16;  // [bp-0x710]
    let v207: u64;  // [bp-0x538]
    let v208: core::fmt::rt::Argument;  // [bp-0x530]
    let v209: iNone;  // [bp-0x528]
    let v210: iNone;  // [bp-0x518]
    let v211: iNone;  // [bp-0x508]
    let v212: iNone;  // [bp-0x4f8]
    let v213: iNone;  // [bp-0x4e8]
    let v214: u64;  // [bp-0x4d8]
    let v215: struct12;  // [bp-0x4d8]
    let v216: void*;  // [bp-0x4d8]
    let v217: u128;  // [bp-0x4d8]
    let v218: u64;  // [bp-0x4d8]
    let v219: struct12;  // [bp-0x4d8]
    let v220: struct24;  // [bp-0x4d8]
    let v221: Result<struct24, struct16>;  // [bp-0x4d8]
    let v222: struct12;  // [bp-0x4d8]
    let v223: u128;  // [bp-0x4d0]
    let v224: u64;  // [bp-0x4c8]
    let v225: u64;  // [bp-0x4c8]
    let v226: u64;  // [bp-0x4c0]
    let v227: u32;  // [bp-0x4b8]
    let v228: void*;  // [bp-0x458]
    let v229: iNone;  // [bp-0x450]
    let v230: iNone;  // [bp-0x3b8]
    let v231: iNone;  // [bp-0x2b4]
    let v232: alloc::string::String;  // [bp-0x2a8]
    let v233: struct72;  // [bp-0x290]
    let v234: struct16;  // [bp-0x248]
    let v235: iNone;  // [bp-0x238]
    let v236: u8;  // [bp-0x150]
    let v239: u64;  // r15
    let v240: u64;  // r12
    let v245: iNone;  // xmm0
    let v249: u8;  // bpl
    let v250: u8;  // al
    let v251: u64;  // rcx
    let v252: u64;  // rdx
    let v253: u64;  // r8
    let v258: core::fmt::Arguments;  // rax
    let v259: u64;  // rax
    let v261: i64;  // rsi
    let v262: i64;  // rbp
    let v267: u64;  // rax
    let v268: u64;  // rax
    let v272: core::option::Option<usize>;  // rax
    let v275: Result<struct4, struct8>;  // xmm1
    let v276: u64;  // r13
    let v277: u8;  // bpl
    let v279: u128;  // xmm1
    let v281: iNone;  // xmm0
    let v283: u64;  // rax
    let v284: u32;  // r13d
    let v287: u64;  // r13
    let v296: u64;  // rax
    let v316: u64;  // rax
    let v318: u128;  // xmm1
    let v319: u128;  // xmm0
    let v320: u16;  // ax
    let v321: u128;  // xmm0
    let v322: iNone;  // xmm1
    let v324: iNone;  // xmm1
    let v325: iNone;  // xmm2
    let v326: u64;  // rax
    let v327: core::fmt::rt::Argument;  // rax
    let v329: u64;  // rdi
    let v330: u64;  // rcx
    let v331: u64;  // r13
    let v333: u64;  // r14
    let v335: u32;  // eax
    let v336: Result<struct12, struct8>;  // rax
    let v337: core::fmt::rt::Argument;  // r13
    let v341: iNone;  // xmm0
    let v342: u64;  // rax
    let v343: u128;  // xmm0
    let v344: u64;  // rax
    let v345: u128;  // xmm0
    let v346: u32;  // eax
    let v347: u64;  // rax
    let v348: struct12;  // xmm0
    let v349: u32;  // ecx
    let v350: u64;  // rdx
    let v351: u8;  // sil
    let v354: u32;  // ecx
    let v355: u64;  // rdx
    let v356: u8;  // sil
    let v361: iNone;  // xmm0
    let v363: u32;  // ecx
    let v364: u64;  // rdx
    let v365: u8;  // sil
    let v367: &str;  // rax:rdx
    let v368: u16;  // [bp-0x1268]
    let v369: u64;  // [bp-0x1210]
    let v370: u64;  // [bp-0x1208]
    let v372: u32;  // [bp-0x1138]
    let v374: struct24;  // [bp-0xcf0]
    let v376: u64;  // [bp-0xcc8]
    let v377: iNone;  // [bp-0x820]
    let v378: u32;  // [bp-0x74c]

    v93 = 0;
    v2 = a2;
    v96 = time::interop::offsetdatetime_systemtime::<impl core::convert::From<std::time::SystemTime> for time::offset_date_time::OffsetDateTime>::from(std::time::SystemTime::now(), a2);
    v239 = *((a0 + 8) as &i64);
    v240 = *((a0 + 16) as &i64);
    v177 = std::path::Path::join(v239, v240, "instance-uid");
    v221 = std::fs::read_to_string(&v177);
    if (((0 ^ v221 as i64) & (0 ^ -(v221 as i64))) >> 63) as char {
        v45 = *((&v221 as &char + 8) as &i64);
        v186 = v178;
        eprintln!("Impossible to read {}: {}", &v186 as u8, &v45);
    } else {
        v367 = core::str::<impl str>::trim_matches(*((&v221 as &char + 8) as &i64), v224, a2);
        v185 = uuid::parser::<impl core::convert::TryFrom<&str> for uuid::Uuid>::try_from(v367.data_ptr, a2);
        if v185.field_0 as i32 != 9 {
            v245 = *(&v185.field_0 as &i128);
            v150 = *(&v185.field_16 as &i128);
            *(&v124 as void*) = v245;
            eprintln!("Impossible to parse instance-uid: {}", &v124 as u8);
        }
    }
    vvar_5733{stack -4424} = struct12 OrderedDict([(0, 𝜙@32b [((7717022, None), None), ((7717247, None), vvar_2770{stack -4424})]), (4, 𝜙@32b [((7717022, None), None), ((7717247, None), vvar_2771{stack -4420})])])
    v192 = v249;
    v193 = v212;
    dump::writer::DumpWriter::new(&v62);
    v139 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v62);
    v250 = v139.field_16;
    if v250 != 2 {
        v251 = *((&v139.field_0 as &char + 8) as &i64);
        v12 = *((&v139.field_16 as &char + 1) as &i32);
        v13 = v153;
        v9 = v337;
        v10 = v251;
        v11 = v250;
        v126 = std::path::Path::join(v239, v240, "update_files");
        v66 = file_store::FileStore::new(&v126);
        v144 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v66);
        if let Ok(_) = v144 {
            v51 = v144 as i64;
            v52 = v337;
            v53 = *((&v144 as &char + 16) as &i64);
            v104 = std::path::Path::join(v239, v240, "tasks");
            v66 = 0 as void*;
            v372 = 0 as u32;
            v85 = 0;
            v82 = 429496729601;
            heed::envs::env_open_options::EnvOpenOptions<T>::open(&v144, &v66, &v104);
            v337 = v252;
            if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v144, v105, v106) as u8 & 1) {
                v3 = v252;
                eprintln!("Dumping the keys...");
                v107 = std::path::Path::join(v239, v240, "auth");
                anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(std::fs::create_dir_all(&v107));
                if !v337 {
                    meilisearch_auth::store::open_auth_store_env(&v66 as u384, v108, v109);
                    v337 = v252;
                    if !(anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v66 as u384) as u8 & 1) {
                        v62 = meilisearch_auth::AuthController::new(v252, &g_553068, a3, v253);
                        v145 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v62, v239, v240);
                        if let Ok(_) = v145 {
                            v211 = *((&v145 as &char + 48) as &i128);
                            v210 = *((&v145 as &char + 32) as &i128);
                            v209 = *((&v145 as &char + 16) as &i128);
                            v207 = v145 as i64;
                            v208 = v337;
                            v67 = dump::writer::DumpWriter::create_keys(&v9);
                            v126 = *((&v67 as &char + 8) as &i128) as u128;
                            v150 = *((&v67 as &char + 24) as &i128) as u128;
                            if let Err(_) = v67 {
                                v57 = struct32 {
                                    field_0: v126
                                    field_16: v150
                                };
                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                goto LABEL_75c512;
                            }
                            v174 = v150;
                            v172 = v126;
                            v5 = 0;
                            v62 as u768 = meilisearch_auth::AuthController::list_keys(&v207, a2 as u64, a3, v253);
                            v259 = v69 as i64;
                            v175 = *((&v69 as &char + 8) as &i128);
                            v176 = v82;
                            if v259 == 3 {
                                v14 = 9223372036854775809;
                                v44 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v175);
                                v146 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v44);
                                if let Some(_) = v146 {
                                    do {
                                        v262 = v261;
                                        memcpy(&v62 as u768, v261, 160);
                                        v217 = dump::writer::KeyWriter::push_key(&v172, &v62 as u768);
                                        if v222.field_0 as i32 != 13 {
                                            v185 = struct32 {
                                                field_0: v222.field_0 as i32
                                                field_16: *((&v221 as &char + 16) as &i128)
                                            };
                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v185);
                                        }
                                        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v262, &v44);
                                        v261 = v262;
                                    } while (v146 != 0x8000000000000000);
                                }
                                v62 = v173;
                                v147 = dump::writer::BatchWriter::flush(&v62);
                                match v147 {
                                    None => {
                                        eprintln!("Successfully dumped {} keys!", &v5);
                                        eprintln!("Dumping the queue");
                                        v62 as u256 = heed::txn::RoTxn<T>::new(&v3, a2 as u64 as u32, a3, v253);
                                        v125 = *((&v70.field_0 as &char + 8) as &i128) as u128;
                                        v150 = v81;
                                        if v70.field_0 as i32 == 1 {
                                            v372 = v150;
                                            v62 = v125;
                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v62 as u256);
LABEL_75c512:
                                            v337 = v258;
                                        } else {
                                            v18 = v125;
                                            v71 = meilitool::try_opening_database(&v3, &v18);
                                            v337 = v77;
                                            if let Ok(_) = v71 {
                                                v42 = *((&v71 as &char + 16) as &i32);
                                                v72 = meilitool::try_opening_database(&v3, &v18);
                                                v267 = v77;
                                                match v72 {
                                                    Ok(_) => {
                                                        v0 = v267;
                                                        v17 = *((&v72 as &char + 16) as &i32);
                                                        v73 = meilitool::try_opening_database(&v3, &v18);
                                                        v267 = v77;
                                                        if let Err(_) = v73 {
                                                            goto LABEL_75c9ce;
                                                        }
                                                        v123 = v267;
                                                        v16 = *((&v73 as &char + 16) as &i32);
                                                        eprintln!("Dumping the tasks");
                                                        v74 = dump::writer::DumpWriter::create_tasks_queue(&v9);
                                                        v268 = v74 as i64;
                                                        v125 = *((&v74 as &char + 8) as &i128) as u128;
                                                        v150 = *((&v74 as &char + 24) as &i128) as u128;
                                                        if v268 == 0x8000000000000000 {
                                                            v57 = struct32 {
                                                                field_0: v125
                                                                field_16: v150
                                                            };
                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
LABEL_75caaa:
                                                            v337 = v272;
                                                        } else {
                                                            *(&v182.field_0 as &i128) = *((&v74 as &char + 40) as &i128);
                                                            v275 = v150;
                                                            *(&v180 as &u128) = v125;
                                                            *(&v181 as &Result<struct4, struct8>) = v275;
                                                            v179 = v268;
                                                            v4 = 0;
                                                            v6 = 0;
                                                            v124 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v77, v40 as u64, &v18);
                                                            match v124 {
                                                                Err(_) => {
                                                                    v36 = *((&v124 as &char + 8) as &i64);
                                                                    v38 = *((&v124 as &char + 16) as &i8);
                                                                    v40 = *(a3 as &i32);
                                                                    v15 = *((a3 + 4) as &i32);
                                                                    v185 = v192;
                                                                    loop {
                                                                        v57 = <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v36);
                                                                        if v77 == 16 {
                                                                            v150 = v83;
                                                                            v125 = *(&v372 as &i128) as u128;
                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v125 as u8);
                                                                            return v296;
                                                                        }
                                                                        if v77 as u32 != 17 {
                                                                            memcpy(&v227, &v58 as u8, 520);
                                                                            v226 = v83;
                                                                            v223 = *(&v372 as &i128) as u128;
                                                                            v214 = v77;
                                                                            v276 = v230 as i64;
                                                                            if v276 == 0x8000000000000000 {
                                                                                *(&v169 as &i128) = v95 as i128;
                                                                            }
                                                                            v277 = v231 as i8;
                                                                            if ((!v277) as u8 as u8 & v2 as i8) {
                                                                                continue;
                                                                            }
                                                                            memcpy(&v125 as u8, &v217, 552);
                                                                            v186 = <dump::TaskDump as core::convert::From<meilisearch_types::tasks::Task>>::from(&v125 as u8);
                                                                            v44 = dump::writer::TaskWriter::push_task(&v179, &v186);
                                                                            v279 = *(&v49 as &i128);
                                                                            *(&v112 as &i128) = *(&v369 as &i128);
                                                                            v115 = v279;
                                                                            if v44.field_0 as i64 == 0x8000000000000000 {
                                                                                v124 = struct32 {
                                                                                    field_0: v112 as i128
                                                                                    field_16: v115
                                                                                };
                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v124);
                                                                            }
                                                                            *(&v33 as &i128) = *(&v50 as &i128);
                                                                            v281 = v112 as i128;
                                                                            v31 = *(&v376 as &i128) as u128;
                                                                            v29 = v281;
                                                                            v27 = v44.field_0 as i64;
                                                                            if v276 != 0x8000000000000000 {
                                                                                continue;
                                                                            }
                                                                            v121 = v169 as i128;
                                                                            if v277 {
                                                                                continue;
                                                                            }
                                                                            v125 = v169 as i128 as u128;
                                                                            v187 = file_store::FileStore::get_update(&v51, &v125 as u8);
                                                                            v283 = v187 as i64;
                                                                            v284 = *((&v187 as &char + 8) as &i32);
                                                                            if v283 != 4 {
                                                                                v159 = v200;
                                                                                v361 = *((&v186.field_152 as &char + 12) as &i128);
                                                                                v156 = *(&v378 as &i128) as u128;
                                                                                v149 = v361;
                                                                                v125 = v283;
                                                                                v148 = v284;
                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v125 as u8);
                                                                                return v337;
                                                                            }
                                                                            if core::tuple::<impl core::cmp::PartialOrd for (V,U,T)>::lt(v41 as u64, v15 as u64) as u8 {
                                                                                eprintln!("Dumping the enqueued tasks reading them in obkv format...");
                                                                                v126 = milli::documents::reader::DocumentsBatchReader<R>::from_reader(v148);
                                                                                v188 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v126, &v121);
                                                                                if let Err(_) = v188 {
                                                                                    return v337;
                                                                                }
                                                                                memcpy(&v235, &v197, 232);
                                                                                v234 = struct16 {
                                                                                    field_0: v188 as i64
                                                                                    field_8: *((&v188 as &char + 8) as &i64)
                                                                                };
                                                                                v127 = milli::documents::reader::DocumentsBatchReader<R>::into_cursor_and_fields_index(&v234);
                                                                                memcpy(&v44, &v127, 152);
                                                                                v120 = v167 as i128;
                                                                                v119 = v166;
                                                                                v118 = v165;
                                                                                v117 = v164;
                                                                                v116 = v163;
                                                                                v113 = v162;
                                                                                loop {
                                                                                    v126 as u192 = milli::documents::reader::DocumentsBatchCursor<R>::next_document(&v44);
                                                                                    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v188, &v126 as u192, &v121);
                                                                                    if (v188 as i8 & 1) {
                                                                                        return v337;
                                                                                    }
                                                                                    v198 = v197;
                                                                                    if !v337 {
                                                                                        break;
                                                                                    }
                                                                                    milli::documents::obkv_to_object(&v188, *((&v188 as &char + 8) as &i64), v197, &v114);
                                                                                    v287 = v188 as i64;
                                                                                    v21 = *((&v188 as &char + 8) as &i128);
                                                                                    v23 = *((&v188 as &char + 24) as &i128);
                                                                                    v24 = *((&v188 as &char + 40) as &i128);
                                                                                    v25 = *((&v188 as &char + 56) as &i128);
                                                                                    v26 = *((&v188 as &char + 72) as &i64);
                                                                                    if v287 != 93 {
                                                                                        memcpy(&v127 as u8, &v205, 240);
                                                                                        v148 = v21;
                                                                                        v155 = v23;
                                                                                        v158 = v24;
                                                                                        v160 = v25;
                                                                                        v161 = v26;
                                                                                        v126 = v287;
                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v126 as u192);
                                                                                        return v337;
                                                                                    }
                                                                                    v122 = struct72 {
                                                                                        field_0: v21
                                                                                        field_8: <UNKNOWN>
                                                                                        field_16: v23
                                                                                        field_32: v24
                                                                                        field_48: v25
                                                                                        field_64: v26
                                                                                    };
                                                                                    v99 = dump::writer::UpdateFile::push_document(&v27, &v122);
                                                                                    if v99.field_0 as i32 != 13 {
                                                                                        v124 = struct32 {
                                                                                            field_0: v99.field_0 as i32
                                                                                            field_16: v99.field_16
                                                                                        };
                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v124);
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                eprintln!("Dumping the enqueued tasks reading them in JSON stream format...");
                                                                                v201 = 1;
                                                                                v202 = 0 as u128;
                                                                                v204 = v148;
                                                                                v205 = 0;
                                                                                v185 = struct32 {
                                                                                    field_0: 0
                                                                                    field_8: ""
                                                                                    field_24: 0x8000000000000000
                                                                                };
                                                                                v206 = 0x8000;
                                                                                serde_json::de::Deserializer<R>::into_iter(&v125 as u384, &v185);
                                                                                v47 = v369;
                                                                                loop {
                                                                                    v369 = v47;
                                                                                    <serde_json::de::StreamDeserializer<R,T> as core::iter::traits::iterator::Iterator>::next(&v233, &v125 as u384);
                                                                                    if v233.field_0 == 9223372036854775809 {
                                                                                        break;
                                                                                    }
                                                                                    v189 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v233, &v121);
                                                                                    if let Err(_) = v189 {
                                                                                        return v337;
                                                                                    }
                                                                                    v44 = struct72 {
                                                                                        field_0: v189 as i64
                                                                                        field_8: *((&v189 as &char + 8) as &i64)
                                                                                        field_16: *((&v189 as &char + 16) as &i128)
                                                                                        field_32: *((&v189 as &char + 32) as &i128)
                                                                                        field_48: *((&v189 as &char + 48) as &i128)
                                                                                        field_64: v203
                                                                                    };
                                                                                    v114 = dump::writer::UpdateFile::push_document(&v27, &v44);
                                                                                    if v114.field_0 as i32 == 13 {
                                                                                        v45 = v46;
                                                                                        v47 = v48;
                                                                                    } else {
                                                                                        v185 = struct32 {
                                                                                            field_0: v114.field_0 as i32
                                                                                            field_16: v114.field_16
                                                                                        };
                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v185);
                                                                                    }
                                                                                }
                                                                                v198 = v199;
                                                                            }
                                                                            v197 = v198;
                                                                            vvar_5728{stack -1896} = struct12 OrderedDict([(0, 𝜙@8b [((7721410, None), vvar_4008{stack -1896}), ((7720703, None), vvar_4008{stack -1896})])])
                                                                            v130 = struct56 {
                                                                                field_0: *(&v27 as &i128)
                                                                                field_16: (&v29)[8] as i128
                                                                                field_32: *((&v31 as &char + 8) as &i128)
                                                                                field_48: (&v33)[8] as i64
                                                                            };
                                                                            dump::writer::UpdateFile::flush(&v190, &v130);
                                                                            if v190.field_0 as i32 != 13 {
                                                                                v124 = struct32 {
                                                                                    field_0: v190.field_0 as i32
                                                                                    field_16: *((&v188 as &char + 16) as &i128)
                                                                                };
                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v124);
                                                                                v337 = v296;
                                                                                return v337;
                                                                            }
                                                                            v6 += 1;
                                                                            v4 += 1;
                                                                            v185 = v191;
                                                                            v151 = v152;
                                                                            v153 = v154;
                                                                        } else {
                                                                            v58 = struct56 {
                                                                                field_0: *(&v179 as &i128)
                                                                                field_16: (&v180)[8] as i128
                                                                                field_32: *((&v181 as &char + 8) as &i128)
                                                                                field_48: v183
                                                                            };
                                                                            v131 = dump::writer::TaskWriter::flush(&v58);
                                                                            match v131 {
                                                                                None => {
                                                                                    eprintln!("Successfully dumped {} tasks including {} enqueued tasks!", &v4, &v6);
                                                                                    eprintln!("Dumping the batches");
                                                                                    v59 = dump::writer::DumpWriter::create_batches_queue(&v9);
                                                                                    v125 = *((&v59 as &char + 8) as &i128) as u128;
                                                                                    v150 = *((&v59 as &char + 24) as &i128) as u128;
                                                                                    match v59 {
                                                                                        Err(_) => {
                                                                                            v57 = struct32 {
                                                                                                field_0: v125
                                                                                                field_16: v150
                                                                                            };
                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                        },
                                                                                        Ok(_) => {
                                                                                            v39 = v150;
                                                                                            *(&v37 as &u128) = v125;
                                                                                            v7 = 0;
                                                                                            v132 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v0, v17 as u64, &v18);
                                                                                            if let Ok(_) = v132 {
                                                                                                v354 = *((&v132 as &char + 4) as &i32);
                                                                                                v355 = *((&v132 as &char + 8) as &i64);
                                                                                                v356 = *((&v132 as &char + 16) as &i8);
                                                                                                v80 = v153;
                                                                                                v79 = v151 as i32 as u32;
                                                                                                v57 = v132 as i32;
                                                                                                v75 = v354;
                                                                                                v77 = v355;
                                                                                                v372 = v356;
                                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                return v337;
                                                                                            }
                                                                                            v44 = v148;
                                                                                            do {
                                                                                                v60 = <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v44);
                                                                                                if v77 == 2 {
                                                                                                    v150 = v83;
                                                                                                    v125 = *(&v372 as &i128) as u128;
                                                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v125 as u8);
                                                                                                    return v337;
                                                                                                }
                                                                                                if v77 as u32 == 3 {
                                                                                                    v61 = struct32 {
                                                                                                        field_0: v37 as i128
                                                                                                        field_16: v39
                                                                                                    };
                                                                                                    v125 = dump::writer::BatchWriter::flush(&v61);
                                                                                                    match v125 {
                                                                                                        None => {
                                                                                                            eprintln!("Successfully dumped {} batches!", &v7);
                                                                                                            eprintln!("Dumping the indexes...");
                                                                                                            v8 = 0;
                                                                                                            v134 = heed::databases::database::Database<KC,DC,C,CDUP>::iter(v123, v16 as u64, &v18);
                                                                                                            match v134 {
                                                                                                                Err(_) => {
                                                                                                                    v43 = v148;
                                                                                                                    loop {
                                                                                                                        v169 = <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v43);
                                                                                                                        if v169.field_0 as i32 != 1 {
                                                                                                                            eprintln!("Successfully dumped {} indexes!", &v8);
                                                                                                                            eprintln!("The tool is not dumping experimental features, please set them by hand afterward");
                                                                                                                            v57 = time::formatting::formattable::sealed::Sealed::format(v97 as u64, v96.field_0, (*((&v96.field_12 as &char + 1) as &i16) as u16 as u32 * 0x10000 + v98 as u32 * 0x100 + 1) as u64);
                                                                                                                            v44 = core::result::Result<T,E>::unwrap(&v57);
                                                                                                                            v232 = format!("{}.dump", &v44);
                                                                                                                            v220 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v232);
                                                                                                                            v57 = std::fs::File::create(&v220);
                                                                                                                            match v57 {
                                                                                                                                Err(_) => {
                                                                                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(2);
                                                                                                                                    break;
                                                                                                                                },
                                                                                                                                Ok(_) => {
                                                                                                                                    v198 = *(&v11 as &i64);
                                                                                                                                    *(&v186 as &core::fmt::rt::ArgumentType) = v9.ty;
                                                                                                                                    v67 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v76 as u64);
                                                                                                                                    v125 = dump::writer::DumpWriter::persist_to(&v185, &v67);
                                                                                                                                    match v125 {
                                                                                                                                        None => {
                                                                                                                                            v125 = *((&v220.field_0 as &char + 8) as &i128) as u128;
                                                                                                                                            eprintln!("Dump exported at path {}", &v125);
                                                                                                                                        },
                                                                                                                                        Some(_) => {
                                                                                                                                            v341 = *((&v134 as &char + 4) as &i128);
                                                                                                                                            v372 = *((&v134 as &char + 16) as &i128) as u128;
                                                                                                                                            v75 = v341;
                                                                                                                                            v57 = v143 as i32;
                                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                                            break;
                                                                                                                                        },
                                                                                                                                    }
                                                                                                                                },
                                                                                                                            }
                                                                                                                        }
                                                                                                                        v2 = v171;
                                                                                                                        if !v170 {
                                                                                                                            v77 = v377 as i128 as u128;
                                                                                                                            v68 = v2;
                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v68 as u8);
                                                                                                                            break;
                                                                                                                        }
                                                                                                                        v213 = *(&v169.field_24 as &i128);
                                                                                                                        v135 = std::path::Path::join(v239, v240, "indexes");
                                                                                                                        v57 = <T as alloc::string::SpecToString>::spec_to_string(&v213);
                                                                                                                        v374 = std::path::Path::join(*((&v135.field_0 as &char + 8) as &i64), v135.field_16, &v57);
                                                                                                                        v216 = 0 as void*;
                                                                                                                        v224 = 0;
                                                                                                                        v226 = 0;
                                                                                                                        v227 = 0;
                                                                                                                        v57 = milli::index::Index::new(&v217, &v374);
                                                                                                                        v136 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v57, v110, v111);
                                                                                                                        if let Err(_) = v136 {
                                                                                                                            break;
                                                                                                                        }
                                                                                                                        memcpy(&v197, &v136 as u128, 448);
                                                                                                                        v185 = struct16 {
                                                                                                                            field_0: v136 as i64
                                                                                                                            field_8: *((&v136 as &char + 8) as &i64)
                                                                                                                        };
                                                                                                                        v57 as u256 = milli::index::Index::read_txn(&v185, a2 as u64, a3, v253);
                                                                                                                        v125 = *((&v58.field_0 as &char + 8) as &i128) as u128;
                                                                                                                        v150 = v81;
                                                                                                                        if v58.field_0 as i32 == 1 {
                                                                                                                            v372 = v150;
                                                                                                                            *(&v57 as &u128) = v125;
                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57 as u256);
                                                                                                                            break;
                                                                                                                        }
                                                                                                                        v20 = v150;
                                                                                                                        v19 = v125;
                                                                                                                        v59 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v170, v2);
                                                                                                                        v370 = v59.field_16;
                                                                                                                        v44 = v59.field_0;
                                                                                                                        v61 = milli::index::Index::primary_key(&v185, &v19);
                                                                                                                        if v61.field_0 != 5 {
                                                                                                                            v57 = v61.field_0;
                                                                                                                            v77 = *(&v61.field_8 as &i128) as u128;
                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                            break;
                                                                                                                        }
                                                                                                                        if v77 {
                                                                                                                            v60 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v77, v61.field_16);
                                                                                                                            v224 = v60.field_16;
                                                                                                                            v217 = v60.field_0;
                                                                                                                        } else {
                                                                                                                            v218 = 0x8000000000000000 as u64;
                                                                                                                            v224 = v225;
                                                                                                                        }
                                                                                                                        v137 = milli::index::Index::created_at(&v185, &v19);
                                                                                                                        v184 = *((&v137 as &char + 8) as &i128);
                                                                                                                        match v137 {
                                                                                                                            Err(_) => {
                                                                                                                                v138 = milli::index::Index::updated_at(&v185, &v19);
                                                                                                                                v21 = *((&v138 as &char + 8) as &i128);
                                                                                                                                match v138 {
                                                                                                                                    Err(_) => {
                                                                                                                                        v112 = struct80 {
                                                                                                                                            field_0: v44
                                                                                                                                            field_16: v370
                                                                                                                                            field_24: v221 as i128
                                                                                                                                            field_40: v224
                                                                                                                                            field_48: v184
                                                                                                                                            field_64: v21
                                                                                                                                        };
                                                                                                                                        v57 as u704 = dump::writer::DumpWriter::create_index(&v9, v170, v2, &v112);
                                                                                                                                        v316 = v63 as i64;
                                                                                                                                        v318 = *((&v63 as &char + 24) as &i128);
                                                                                                                                        v125 = *((&v63 as &char + 8) as &i128) as u128;
                                                                                                                                        v150 = v318;
                                                                                                                                        if v316 != 0x8000000000000000 {
                                                                                                                                            v319 = v125;
                                                                                                                                            v102 = v150;
                                                                                                                                            v101 = v319;
                                                                                                                                            v100 = v316;
                                                                                                                                            v0 = v316 as u32 & -0x100 | 1;
                                                                                                                                            v64 = milli::index::Index::fields_ids_map(&v185, &v19);
                                                                                                                                            v320 = v64.field_48 as i16;
                                                                                                                                            if v320 != 2 {
                                                                                                                                                v321 = v64.field_0;
                                                                                                                                                v322 = v64.field_16;
                                                                                                                                                *(&v157 as &u128) = v64.field_32;
                                                                                                                                                *(&v150 as void*) = v322;
                                                                                                                                                v126 = v321;
                                                                                                                                                v35 = v89;
                                                                                                                                                v34 = v88;
                                                                                                                                                v324 = v150;
                                                                                                                                                v325 = v157 as i128;
                                                                                                                                                v28 = v126;
                                                                                                                                                v30 = v324;
                                                                                                                                                v32 = v325;
                                                                                                                                                v368 = v320;
                                                                                                                                                v326 = (&v30)[8] as i64;
                                                                                                                                                v327 = v326;
                                                                                                                                                if v327 {
                                                                                                                                                    v327 = (&v32)[8] as i64;
                                                                                                                                                }
                                                                                                                                                v329 = v32 as i64;
                                                                                                                                                v330 = (v326) as u8 as u64;
                                                                                                                                                v57 = v330;
                                                                                                                                                v77 = 0;
                                                                                                                                                v78 = v326;
                                                                                                                                                v81 = v329;
                                                                                                                                                v83 = v330;
                                                                                                                                                v86 = 0;
                                                                                                                                                v87 = v326;
                                                                                                                                                v90 = v81;
                                                                                                                                                v91 = v327;
                                                                                                                                                v0 = core::iter::traits::iterator::Iterator::collect(&v54, &v64) as u32 & -0x100 | 1;
                                                                                                                                                v140 = milli::index::Index::all_documents(&v185, &v19);
                                                                                                                                                memcpy(&v44 as u64, &v140 as u8, 144);
                                                                                                                                                if v140.field_0 as i64 == 93 {
                                                                                                                                                    memcpy(&v217, &v44 as u64, 144);
                                                                                                                                                    v2 = v55;
                                                                                                                                                    v14 = v56;
                                                                                                                                                    while ((<roaring::bitmap::iter::IntoIter as core::iter::traits::iterator::Iterator>::next(&v217) as u8 & 1)) {
                                                                                                                                                        v62 = milli::index::Index::iter_documents::{{closure}}(v228, v229 as i64, v252 as u32 as u64);
                                                                                                                                                        v331 = v62 as i64;
                                                                                                                                                        v40 = v77 as u128;
                                                                                                                                                        memcpy(&v236, &v83, 288);
                                                                                                                                                        if v331 != 93 {
                                                                                                                                                            if v331 == 94 {
                                                                                                                                                                break;
                                                                                                                                                            }
                                                                                                                                                            memcpy(&v83, &v236, 288);
                                                                                                                                                            v57 = struct24 {
                                                                                                                                                                field_0: v331
                                                                                                                                                                field_8: v40 as u64
                                                                                                                                                            };
                                                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                                                            goto LABEL_75e4b0;
                                                                                                                                                        }
                                                                                                                                                        milli::obkv_to_json(&v141, v2, v14, &v28 as u64, *((&v62 as &char + 16) as &i64), v81);
                                                                                                                                                        v333 = v140.field_0 as i64;
                                                                                                                                                        v21 = *((&v140.field_0 as &char + 8) as &i128);
                                                                                                                                                        v23 = *((&v150 as &char + 8) as &i128);
                                                                                                                                                        v24 = *((&v138 as &char + 40) as &i128);
                                                                                                                                                        v25 = v160;
                                                                                                                                                        v26 = v161;
                                                                                                                                                        if v333 != 93 {
                                                                                                                                                            memcpy(&v63 as u8, &v138 as u8, 240);
                                                                                                                                                            v81 = v23;
                                                                                                                                                            v86 = v24;
                                                                                                                                                            v90 = v25;
                                                                                                                                                            v92 = v26;
                                                                                                                                                            v57 = struct24 {
                                                                                                                                                                field_0: v333
                                                                                                                                                                field_8: v21
                                                                                                                                                            };
                                                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
LABEL_75e4b0:
                                                                                                                                                            return v336;
                                                                                                                                                        }
                                                                                                                                                        v122 = v22;
                                                                                                                                                        v141 = dump::writer::IndexWriter::push_document(&v99, &v122);
                                                                                                                                                        if v141.field_0 as i32 != 13 {
                                                                                                                                                            v57 = struct32 {
                                                                                                                                                                field_0: v141.field_0 as i32
                                                                                                                                                                field_16: *(&v140.field_16 as &i128)
                                                                                                                                                            };
                                                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                    v65 = meilisearch_types::settings::settings(&v185, &v19, 0);
                                                                                                                                                    memcpy(&v217, &v77, 320);
                                                                                                                                                    if v65.field_0 == 3 {
                                                                                                                                                        v0 = memcpy(&v65, &v217, 320) & -0x100 | 1;
                                                                                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v65);
                                                                                                                                                        v337 = v347;
                                                                                                                                                        break;
                                                                                                                                                    }
                                                                                                                                                    memcpy(&v168, &v94, 408);
                                                                                                                                                    memcpy(&v140 as u8, &v217, 320);
                                                                                                                                                    v142 = v65.field_0 as u64;
                                                                                                                                                    v66 = struct40 {
                                                                                                                                                        field_0: *(&v100 as &i128)
                                                                                                                                                        field_16: *((&v101 as &char + 8) as &i128)
                                                                                                                                                        field_32: v103
                                                                                                                                                    };
                                                                                                                                                    v219 = dump::writer::IndexWriter::settings(&v66, &v141);
                                                                                                                                                    v335 = v219.field_0 as i32;
                                                                                                                                                    if v335 == 13 {
                                                                                                                                                        v83 = v84;
                                                                                                                                                    } else {
                                                                                                                                                        v348 = *((&v219.field_0 as &char + 4) as &i128);
                                                                                                                                                        v372 = *((&v221 as &char + 16) as &i128) as u128;
                                                                                                                                                        v75 = v348;
                                                                                                                                                        v57 = v335;
                                                                                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                                                        v0 = 0;
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(&v92 as u8, &v162, 168);
                                                                                                                                                    v346 = memcpy(&v77, &v44 as u64, 144);
                                                                                                                                                    v70 = v140.field_0 as i64 as u64;
                                                                                                                                                    v0 = v346 & -0x100 | 1;
                                                                                                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v64);
                                                                                                                                                    v347 = v55;
                                                                                                                                                    v2 = v347;
                                                                                                                                                    break;
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                v344 = v64.field_16 as i64;
                                                                                                                                                v150 = v344;
                                                                                                                                                v345 = v64.field_0;
                                                                                                                                                v124 = v345;
                                                                                                                                                v372 = v344;
                                                                                                                                                v69 = v345;
                                                                                                                                                v0 = v344 as u32 & -0x100 | 1;
                                                                                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v64);
                                                                                                                                                break;
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            v343 = v125;
                                                                                                                                            v372 = v150;
                                                                                                                                            v57 = v343;
                                                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57 as u704);
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                    },
                                                                                                                                    Ok(_) => {
                                                                                                                                        memcpy(&v58 as u64, &v138 as u8, 296);
                                                                                                                                        v57 = struct24 {
                                                                                                                                            field_0: v138 as i64
                                                                                                                                            field_8: v21
                                                                                                                                        };
                                                                                                                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
LABEL_75e88b:
                                                                                                                                        v337 = v342;
                                                                                                                                    },
                                                                                                                                }
                                                                                                                            },
                                                                                                                            Ok(_) => {
                                                                                                                                memcpy(&v58 as u64, &v138 as u8, 296);
                                                                                                                                v57 = struct24 {
                                                                                                                                    field_0: v137 as i64
                                                                                                                                    field_8: v184
                                                                                                                                };
                                                                                                                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                                goto LABEL_75e88b;
                                                                                                                            },
                                                                                                                        }
                                                                                                                    }
                                                                                                                    goto LABEL_75c900;
                                                                                                                },
                                                                                                                Ok(_) => {
                                                                                                                    v349 = *((&v134 as &char + 4) as &i32);
                                                                                                                    v350 = *((&v134 as &char + 8) as &i64);
                                                                                                                    v351 = *((&v134 as &char + 16) as &i8);
                                                                                                                    v80 = v153;
                                                                                                                    v79 = v151 as i32 as u32;
                                                                                                                    v57 = v134 as i32;
                                                                                                                    v75 = v349;
                                                                                                                    v77 = v350;
                                                                                                                    v372 = v351;
                                                                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                                },
                                                                                                            }
                                                                                                        },
                                                                                                        Some(_) => {
                                                                                                            v57 = struct32 {
                                                                                                                field_0: v125 as i32
                                                                                                                field_16: *((&v132 as &char + 16) as &i128)
                                                                                                            };
                                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                                        },
                                                                                                    }
                                                                                                }
                                                                                                memcpy(&v132 as u8, &v58 as u8, 960);
                                                                                                v133 = v77;
                                                                                                v215 = dump::writer::BatchWriter::push_batch(&v36, &v133);
                                                                                            } while (v215.field_0 as i32 == 13);
                                                                                            v185 = struct32 {
                                                                                                field_0: v215.field_0 as i32
                                                                                                field_16: *((&v221 as &char + 16) as &i128)
                                                                                            };
                                                                                            anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v185);
                                                                                        },
                                                                                    }
                                                                                },
                                                                                Some(_) => {
                                                                                    v57 = struct32 {
                                                                                        field_0: v131 as i32
                                                                                        field_16: v130.field_16
                                                                                    };
                                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                                },
                                                                            }
                                                                        }
                                                                    }
                                                                    goto LABEL_75caaa;
                                                                },
                                                                Ok(_) => {
                                                                    v363 = *((&v124 as &char + 4) as &i32);
                                                                    v364 = *((&v124 as &char + 8) as &i64);
                                                                    v365 = *((&v124 as &char + 16) as &i8);
                                                                    v80 = v153;
                                                                    v79 = *((&v124 as &char + 17) as &i32) as u32;
                                                                    v57 = v124 as i32;
                                                                    v75 = v363;
                                                                    v77 = v364;
                                                                    v372 = v365;
                                                                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                                                },
                                                            }
                                                        }
                                                    },
                                                    Err(_) => {
LABEL_75c9ce:
                                                        v337 = v267;
                                                    },
                                                }
                                            }
                                        }
                                    },
                                    Some(_) => {
                                        v57 = struct32 {
                                            field_0: v147 as i32
                                            field_16: *(&(&v146)[2] as &i128)
                                        };
                                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v57);
                                        goto LABEL_75c512;
                                    },
                                }
                            } else {
                                v81 = v176;
                                v77 = v175;
                                v62 = v259;
                                anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v62 as u768);
                            }
                        }
                    }
                }
            }
        }
    }
LABEL_75c900:
    return v337;
}
