fn just::compiler::Compiler::compile(a0: void*, a1: u64, a2: void*, a3: u64) -> int {
    let v23: void*;  // [bp-0x9b8], Other Possible Types: struct16
    let v24: u64;  // [bp-0x9b0]
    let v25: void*;  // [bp-0x9a8]
    let v31: struct24;  // [sp-0x998]
    let v44: void*;  // [bp-0x920]
    let v45: u64;  // [bp-0x918]
    let v46: void*;  // [bp-0x910]
    let v53: u128;  // [bp-0x8c8]
    let v54: u128;  // [bp-0x8b8]
    let v55: u64;  // [bp-0x8a8]
    let v56: u64;  // [bp-0x8a0]
    let v57: u128;  // [bp-0x898]
    let v58: u64;  // [bp-0x898]
    let v59: u128;  // [bp-0x888]
    let v60: iNone;  // [bp-0x878]
    let v66: struct48;  // [bp-0x818]
    let v67: u128;  // [bp-0x7e8]
    let v69: u128;  // [bp-0x7d8]
    let v70: u64;  // [bp-0x7c8]
    let v71: u64;  // [bp-0x7c0]
    let v77: iNone;  // [bp-0x768]
    let v78: iNone;  // [bp-0x758]
    let v79: u128;  // [bp-0x748]
    let v80: iNone;  // [bp-0x738]
    let v81: iNone;  // [bp-0x728]
    let v87: struct124;  // [bp-0x718]
    let v96: iNone;  // [bp-0x711]
    let v99: iNone;  // [bp-0x701]
    let v102: u128;  // [bp-0x6f1]
    let v103: iNone;  // [bp-0x6e1]
    let v105: iNone;  // [bp-0x6d1]
    let v109: u64;  // [bp-0x6c0]
    let v111: iNone;  // [bp-0x430]
    let v112: u64;  // [bp-0x420]
    let v113: u128;  // [bp-0x418]
    let v114: u128;  // [bp-0x408]
    let v115: iNone;  // [bp-0x3f8]
    let v116: u128;  // [bp-0x3e8]
    let v117: u128;  // [bp-0x3d8]
    let v118: iNone;  // [bp-0x3c8]
    let v120: u64;  // [bp-0x398]
    let v122: iNone;  // [bp-0x390]
    let v124: iNone;  // [bp-0x380]
    let v126: u128;  // [bp-0x370]
    let v128: u128;  // [bp-0x360]
    let v129: u8;  // [bp-0x358]
    let v130: iNone;  // [bp-0x350]
    let v131: u64;  // [bp-0x340]
    let v142: std::env::ArgsOs;  // r15, Other Possible Types: struct_0 *
    let v143: u64;  // rax
    let v144: u64;  // rdx
    let v145: u64;  // rax
    let v146: u64;  // rax
    let v147: u256;  // ymm0
    let v148: struct80;  // ymm0
    let v233: u64;  // rbx
    let v234: iNone;  // xmm1
    let v235: iNone;  // xmm2
    let v236: u128;  // xmm3
    let v238: u64;  // [bp-0x718]
    let v247: struct24;  // [bp-0x6d8]
    let v250: struct24;  // [bp-0x6c9]

    v142 = a0;
    v143 = std::thread::local::LocalKey<T>::with();
    v53 = g_82bd10.field_0;
    v54 = g_82bd20.field_0;
    v55 = v143;
    v56 = v144;
    v44 = 0;
    v45 = 8;
    v46 = 0;
    v145 = std::thread::local::LocalKey<T>::with();
    v66 = struct48 {
        field_0: g_82bd10.field_0
        field_16: g_82bd20.field_0
        field_32: v145
        field_40: v144
    };
    v146 = std::thread::local::LocalKey<T>::with();
    v69 = g_82bd20.field_0;
    v148 = (((((v147 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd20.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_82bd10.field_0;
    v67 = g_82bd10.field_0;
    v70 = v146;
    v71 = v144;
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v87 = just::source::Source::root(a2, a3);
    v23 = alloc::vec::Vec<T,A>::push(&v87, "src/compiler.rs");
    v58 = 0x8000000000000000;
    v129 = 37;
    just::analyzer::Analyzer::analyze(&v238 as u32, &v53, &v58, 8, 0, 8, 0, &v120, &v66, a2 as u32, a3);
    v233 = v87.field_0;
    v77 = *((&v87.field_0 as &char + 8) as &i128);
    v78 = *(&v87.field_24 as &i128);
    v79 = *(&v87.field_40 as &i128);
    v80 = *((&v87.field_48 as &char + 8) as &i128);
    v81 = v87.field_72;
    if v233 != 0x8000000000000000 {
        memcpy(&v131, &v109, 656);
        v122 = v77;
        v124 = v78;
        v126 = v79;
        *(&v128 as void*) = v80;
        v130 = v81;
        v60 = *(&v55 as &i128);
        v59 = v54;
        v57 = v53;
        v120 = v233;
        v31 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a2, a3);
        v112 = v31.field_16;
        v111 = *(&v31.field_0 as &i128);
        v116 = v67;
        v117 = v69;
        v118 = *(&v70 as &i128);
        v113 = v57;
        v114 = v59;
        v115 = v60;
        memcpy(&v238, &v120, 744);
        memcpy(v142, &v238, 864);
        return;
    }
    v105 = v81;
    v103 = v80;
    v102 = v79;
    v99 = v78;
    v96 = v77;
    *((v142 + 8) as &i8) = 12;
    v234 = (&v96)[9] as i128;
    v235 = (&v99)[9] as i128;
    v236 = *((&v102 as &char + 9) as &i128);
    *((v142 + 9) as &i128) = *(&v238 as &i128);
    *((v142 + 25) as void*) = v234;
    *((v142 + 41) as void*) = v235;
    *((v142 + 57) as &u128) = v236;
    *((v142 + 73) as &i128) = *(&v247.field_0 as &i128);
    *((v142 + 88) as &u64) = v250.field_0;
    *(v142 as &i64) = 0x8000000000000000;
    return;
}
