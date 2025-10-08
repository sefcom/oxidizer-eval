fn just::subcommand::Subcommand::run(a0: i576, a1: i64, a2: u32, a3: void*, a4: i1344, a5: u64, a6: i64, a7: u64) -> int {
    let v0: u8;  // [bp-0x8f9]
    let v1: i64;  // [bp-0x8f8]
    let v2: i64;  // [bp-0x8f0]
    let v3: u64;  // [bp-0x8e0]
    let v4: void*;  // [bp-0x8d8]
    let v5: iNone;  // [bp-0x8c8]
    let v6: iNone;  // [bp-0x8b8]
    let v7: iNone;  // [bp-0x8a8]
    let v8: iNone;  // [bp-0x898]
    let v9: iNone;  // [bp-0x888]
    let v10: iNone;  // [bp-0x878]
    let v11: u64;  // [bp-0x868]
    let v12: u8;  // [bp-0x860]
    let v13: iNone;  // [bp-0x85f]
    let v14: core::option::Option<u32>;  // [bp-0x850]
    let v15: iNone;  // [bp-0x84f]
    let v16: u8;  // [bp-0x840]
    let v17: iNone;  // [bp-0x83f]
    let v18: u64;  // [bp-0x830]
    let v19: u64;  // [bp-0x828]
    let v20: u64;  // [bp-0x820]
    let v21: u64;  // [bp-0x818]
    let v22: u64;  // [bp-0x810]
    let v23: u64;  // [bp-0x808]
    let v24: u64;  // [bp-0x800]
    let v25: u64;  // [bp-0x7f8]
    let v26: i64;  // [bp-0x7f0]
    let v27: u64;  // [bp-0x7e8]
    let v28: struct40;  // [bp-0x7d8]
    let v29: struct64;  // [bp-0x7d8]
    let v30: struct24;  // [bp-0x7d8]
    let v31: struct82;  // [bp-0x7d1]
    let v32: struct40;  // [bp-0x7c8]
    let v33: iNone;  // [bp-0x7c1]
    let v34: core::fmt::rt::Argument;  // [bp-0x7b8]
    let v35: u128;  // [bp-0x7b1]
    let v36: u64;  // [bp-0x7a9]
    let v37: struct24;  // [bp-0x798]
    let v38: i64;  // [bp-0x790]
    let v39: u64;  // [bp-0x788]
    let v40: Result<struct48, struct40>;  // [bp-0x770]
    let v41: iNone;  // [bp-0x760]
    let v42: u128;  // [bp-0x750]
    let v43: iNone;  // [bp-0x740]
    let v44: struct24;  // [bp-0x730]
    let v45: core::fmt::rt::Argument;  // [bp-0x729]
    let v46: void*;  // [bp-0x728]
    let v47: struct16;  // [bp-0x719]
    let v48: struct82;  // [bp-0x709]
    let v49: iNone;  // [bp-0x6f8]
    let v50: iNone;  // [bp-0x6e8]
    let v51: iNone;  // [bp-0x6d8]
    let v52: iNone;  // [bp-0x6c8]
    let v53: iNone;  // [bp-0x6b8]
    let v54: iNone;  // [bp-0x6a8]
    let v55: u64;  // [bp-0x698]
    let v56: u64;  // [bp-0x688]
    let v57: u128;  // [bp-0x688]
    let v58: struct20;  // [bp-0x688]
    let v59: u64;  // [bp-0x688]
    let v60: Result<struct864, struct112>;  // [bp-0x688]
    let v61: u64;  // [bp-0x680]
    let v62: u64;  // [bp-0x680]
    let v63: u64;  // [bp-0x678]
    let v64: u128;  // [bp-0x678]
    let v65: u64;  // [bp-0x678]
    let v66: u64;  // [bp-0x678]
    let v67: u64;  // [bp-0x670]
    let v68: u64;  // [bp-0x670]
    let v69: struct24;  // [bp-0x668]
    let v70: iNone;  // [bp-0x668]
    let v71: struct24;  // [bp-0x668]
    let v72: struct24;  // [bp-0x668]
    let v73: u128;  // [bp-0x658]
    let v74: iNone;  // [bp-0x648]
    let v75: u128;  // [bp-0x638]
    let v76: u64;  // [bp-0x628]
    let v77: u64;  // [bp-0x620]
    let v78: iNone;  // [bp-0x320]
    let v79: u64;  // rax
    let v80: struct157;  // rbp
    let v81: core::fmt::rt::Argument;  // rcx
    let v82: core::fmt::rt::Argument;  // r15
    let v83: struct81;  // ymm0
    let v84: core::option::Option<&str>;  // ymm1
    let v85: u256;  // ymm2
    let v86: struct32;  // xmm0
    let v87: core::fmt::Arguments;  // xmm0
    let v88: iNone;  // xmm0
    let v89: iNone;  // xmm1
    let v90: iNone;  // xmm2
    let v91: iNone;  // xmm0
    let v92: iNone;  // xmm0
    let v93: u128;  // xmm0
    let v94: struct24;  // ymm0
    let v95: u128;  // xmm1
    let v96: u256;  // ymm1
    let v97: iNone;  // xmm2
    let v98: u256;  // ymm2
    let v99: Option<struct24>;  // bpl
    let v100: struct40;  // xmm0
    let v101: struct16;  // ymm0
    let v102: struct40;  // xmm1
    let v103: Option<struct256>;  // ymm1
    let v104: struct25;  // ymm2
    let v105: struct82;  // xmm0
    let v106: core::fmt::rt::Argument;  // xmm0
    let v107: struct32;  // xmm1
    let v108: core::fmt::rt::Argument;  // xmm2
    let v109: core::fmt::Arguments;  // xmm0
    let v110: core::fmt::rt::Argument;  // ymm0
    let v111: struct32;  // ymm1
    let v112: u256;  // ymm2
    let v113: u64;  // rax
    let v114: u64;  // rdx
    let v116: iNone;  // xmm0
    let v117: iNone;  // xmm1
    let v118: struct16;  // rax
    let v119: alloc::string::String;  // xmm1
    let v120: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // xmm2
    let v121: u256;  // ymm0
    let v122: struct72;  // rcx
    let v123: struct24;  // xmm0
    let v124: Option<struct1>;  // xmm1
    let v125: struct24;  // xmm2
    let v126: struct16;  // xmm3
    let v127: iNone;  // xmm0
    let v128: iNone;  // xmm1
    let v129: iNone;  // xmm0
    let v130: iNone;  // xmm1
    let v139: iNone;  // [bp-0x618]

    v79 = std::path::Path::parent(a3[8] as i64, a3[16] as i64);
    core::option::unwrap(v79);
    v37 = <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v79, a2);
    v80 = a4;
    if *((v80 + 486) as &i8) == 1 && *((v1 + 264) as &i64) < 9223372036854775810 {
        v81 = a1;
        v27 = *((v81 + 136) as &i64);
        v82 = v80 + 8;
        v3 = v80 + 112;
        v0 = *((v81 + 423) as &i8);
        v26 = v38;
        v25 = v39;
        loop {
            just::justfile::Justfile::run(&v12, v80, a1, a3, a7, a5, a6);
            if (v12 & 62) != 52 {
                goto LABEL_68cb65;
            }
            v55 = v24;
            v86 = *(&v22 as &i128);
            v54 = v86;
            v87 = *(&v20 as &i128);
            v53 = v87;
            v88 = *(&v12 as &i128);
            v89 = *(&v14 as &i128);
            v90 = *(&v16 as &i128);
            v52 = *(&v18 as &i128);
            v51 = v90;
            v50 = v89;
            v49 = v88;
            v40 = just::search::Search::search_parent_directory(a3[8] as i64, a3[16] as i64, v4, v27);
            v76 = v24;
            v91 = *(&v22 as &i128);
            v75 = *(&v22 as &i128);
            v92 = *(&v20 as &i128);
            v74 = v92;
            v93 = *(&v12 as &i128);
            v94 = (((((v83 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
            v95 = *(&v14 as &i128);
            v96 = (v84 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
            v97 = *(&v16 as &i128);
            v98 = (v85 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97 as u256;
            v73 = *(&v18 as &i128);
            v70 = v97;
            v64 = v95;
            v57 = v93;
            match v40 {
                Err(_) => {
                    v99 = v57 as i8;
                    v36 = v18;
                    v100 = v13 as i128;
                    v101 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100 as u256;
                    v102 = v15 as i128;
                    v103 = v96 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102 as u256;
                    v104 = v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as i128 as u128 as u256;
                    *(&v34.ty as &i128) = v17 as i128;
                    v32 = v102;
                    v28 = v100;
                    if let None = v99 {
                        v127 = *(&v19 as &i128);
                        v128 = *(&v21 as &i128);
                        *((v2 + 88) as &i128) = *(&v23 as &i128);
                        *((v2 + 72) as void*) = v128;
                        *((v2 + 56) as void*) = v127;
                        *((v2 + 48) as &u64) = v18;
                        v129 = v13 as i128;
                        v130 = v15 as i128;
                        *((v2 + 33) as &i128) = v17 as i128;
                        *((v2 + 17) as void*) = v130;
                        *((v2 + 1) as void*) = v129;
                        *(v2 as &Option<struct24>) = v99;
                    }
                },
                Ok(_) => {
                    v105 = v40 as i128;
                    v101 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v105 as u256;
                    v103 = v96 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256;
                    v104 = v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256;
                    v35 = v42;
                    v33 = v41;
                    v31 = v105;
                },
            }
            v106 = *((&v28.field_0 as &char + 7) as &i128);
            v107 = *((&v32.field_0 as &char + 7) as &i128);
            v108 = *((&v34.ty as &char + 7) as &i128);
            v48 = v108;
            v47 = v107;
            v45 = v106;
            v109 = v45.ty;
            v110 = (v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v106 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v109 as u256;
            v111 = (v103 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v107 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256;
            v112 = (v104 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v108 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256;
            *(&a3[32] as &struct82) = v48;
            *(&a3[16] as &struct16) = v47;
            *(a3 as &core::fmt::Arguments) = v109;
            v71 = v69;
            v65 = v63;
            if v0 >= 2 {
                v113 = std::path::Path::parent(a3[8] as i64, a3[16] as i64);
                core::option::unwrap(v113);
                v58 = std::path::Path::components(core::result::Result<T,E>::unwrap(std::path::Path::strip_prefix(v26, v25, v113, v114), v114, "src/subcommand.rs"), a2);
                v116 = *(&v58.field_0 as &i128);
                v117 = *(&v58.field_16 as &i128);
                v111 = v111 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v117 as u256;
                v112 = v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as i128;
                v29 = struct64 {
                    field_0: v116
                    field_16: v117
                    field_32: v70 as i128
                    field_48: v73
                };
                v44 = core::iter::traits::iterator::Iterator::collect(&v29);
                v118 = std::path::Path::file_name(a3[8] as i64, a3[16] as i64);
                core::option::unwrap(v118);
                v30 = std::path::Path::join(v46, v44.field_16, v118, v114);
                v110 = (v110 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v116 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v30.field_0 as &char + 8) as &i128);
                v43 = *((&v30.field_0 as &char + 8) as &i128);
                eprintln!("Trying {}", &v43);
                v71 = v72;
                v65 = v66;
                v67 = v68;
                v56 = v59;
                v61 = v62;
            }
            v63 = v65;
            v69 = v71;
            v60 = just::subcommand::Subcommand::compile(a1, a2, a3[8] as i64, a3[16] as i64);
            v119 = *((&v60 as &char + 24) as &i128);
            v120 = *((&v60 as &char + 40) as &i128);
            v5 = *((&v60 as &char + 8) as &i128);
            v6 = v119;
            v7 = v120;
            v8 = *((&v60 as &char + 56) as &i128);
            v9 = *((&v60 as &char + 72) as &i128);
            v121 = ((v110 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v60 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v60 as &char + 72) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v60 as &char + 88) as &i128);
            v10 = *((&v60 as &char + 88) as &i128);
            v11 = v77;
            if let Err(_) = v60 {
                break;
            }
            memcpy(&v78, &v139, 752);
            v80 = a4;
            *(v80 as &i64) = v60 as i64;
            *((v82 + 96) as &u64) = v11;
            *((v82 + 80) as void*) = v10;
            *((v82 + 64) as void*) = v9;
            v83 = ((v121 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256;
            v84 = (v111 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v119 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u256;
            v85 = (v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v120 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256;
            *((v82 + 48) as void*) = v8;
            *((v82 + 32) as void*) = v7;
            *((v82 + 16) as void*) = v6;
            *(v82 as void*) = v5;
            memcpy(v3, &v78, 752);
            if !*((v80 + 486) as &i8) {
                goto LABEL_68cb34;
            }
        }
        v122 = a0;
        *((v2 + 96) as &u64) = v11;
        *((v2 + 80) as void*) = v10;
        *((v2 + 64) as void*) = v9;
        v123 = v5;
        v124 = v6;
        v125 = v7;
        v126 = v8;
    } else {
LABEL_68cb34:
        just::justfile::Justfile::run(&v12, v80, a1, a3, a7, a5, a6);
LABEL_68cb65:
        if *((a1 + 406) as &i8) && (v12 & 62) == 52 {
            return struct1 {
                field_0: 56
            };
        }
        v122 = a0;
        *((v2 + 96) as &u64) = v24;
        *((v2 + 80) as &i128) = *(&v22 as &i128);
        *((v2 + 64) as &i128) = *(&v20 as &i128);
        v123 = *(&v12 as &i128);
        v124 = *(&v14 as &i128);
        v125 = *(&v16 as &i128);
        v126 = *(&v18 as &i128);
    }
    *((v122 + 48) as &struct16) = v126;
    *((v122 + 32) as &struct24) = v125;
    *((v122 + 16) as &Option<struct1>) = v124;
    *(v122 as &struct24) = v123;
}
