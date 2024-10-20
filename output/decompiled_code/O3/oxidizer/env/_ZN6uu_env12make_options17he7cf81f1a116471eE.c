fn uu_env::make_options(a0: u32, a1: u32) -> u64 {
    let v2: i128;  // [bp-0x328], Other Possible Types: struct40
    let v3: i64;  // [sp-0x320]
    let v4: i128;  // [bp-0x318]
    let v5: i64;  // [sp-0x310]
    let v6: i64;  // [sp-0x308]
    let v7: i64;  // [sp-0x300]
    let v8: i64;  // [sp-0x2f8]
    let v10: i128;  // [sp-0x2d8]
    let v11: i64;  // [sp-0x2d0]
    let v12: i128;  // [sp-0x2c8]
    let v13: i64;  // [sp-0x2c0]
    let v14: i64;  // [sp-0x2b8]
    let v16: i64;  // [sp-0x2a8]
    let v17: i64;  // [sp-0x2a0]
    let v18: i64;  // [sp-0x298]
    let v19: i64;  // [sp-0x290]
    let v20: i8;  // [bp-0x288]
    let v21: i64;  // [sp-0x280]
    let v22: i64;  // [bp-0x278]
    let v23: i64;  // [sp-0x270]
    let v24: i64;  // [sp-0x268]
    let v32: i64;  // [sp-0x210]
    let v33: i64;  // [sp-0x208]
    let v34: i64;  // [sp-0x1f8], Other Possible Types: struct40
    let v35: i64;  // [sp-0x1f0]
    let v36: i64;  // [sp-0x1e8]
    let v37: i64;  // [sp-0x1e0]
    let v38: i64;  // [sp-0x1d8]
    let v39: i64;  // [sp-0x1d0]
    let v40: i64;  // [bp-0x1c8]
    let v41: i64;  // [sp-0x1c0]
    let v42: i128;  // [bp-0x1b8]
    let v43: i64;  // [sp-0x1a8]
    let v44: i64;  // [sp-0x1a0]
    let v45: i64;  // [sp-0x198]
    let v46: i64;  // [sp-0x190]
    let v47: i64;  // [sp-0x188]
    let v48: i64;  // [sp-0x180]
    let v49: i64;  // [sp-0x178]
    let v50: i64;  // [sp-0x170]
    let v51: i64;  // [sp-0x168]
    let v52: i8;  // [sp-0x160]
    let v53: i8;  // [sp-0x15f]
    let v56: i8;  // [bp-0x148]
    let v57: i64;  // [sp-0x140]
    let v58: i64;  // [sp-0x138]
    let v59: i64;  // [bp-0x130]
    let v60: i64;  // [sp-0x128]
    let v61: i64;  // [sp-0x120]
    let v63: i64;  // [sp-0x100]
    let v65: i64;  // [sp-0xf0]
    let v71: Enum;  // [sp-0xb0], Other Possible Types: i64
    let v72: i64;  // [sp-0x70], Other Possible Types: Enum
    let v76: i64;  // rax
    let v77: i128;  // xmm0
    let v78: i64;  // r13
    let v80: i64;  // r14
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i256;  // ymm0
    let v86: i256;  // ymm0
    let v87: i128;  // xmm0
    let v88: i256;  // ymm1
    let v89: i256;  // ymm1
    let v90: i256;  // ymm2
    let v91: i256;  // ymm2
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i256;  // ymm0
    let v96: i128;  // xmm0
    let v97: i64;  // rcx
    let v98: i128;  // xmm0
    let v99: i64;  // rax
    let v100: i128;  // xmm0
    let v101: i128;  // xmm0
    let v102: i256;  // ymm0
    let v103: i64;  // rbx
    let v138: i128;  // xmm0

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a1, &g_41fff7, 5);
    v16 = &g_41fff7;
    v17 = 5;
    if v20 != 2 {
        v6 = v24;
        v77 = v20;
        v4 = v22;
        v2 = v77;
        v10 = &v16;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v2;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v34 = "Mismatch between definition and access of `";
        v35 = 2;
        v38 = 0;
        v36 = &v10;
        v37 = 2;
        v34 = core::panicking::panic_fmt();
    }
    v76 = v21;
    if !v76 {
        v78 = 0;
    } else {
        v78 = *((v76 + 8) as &i64);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v34, a1, &g_415a7c, 4);
    v16 = &g_415a7c;
    v17 = 4;
    if v34 {
        v24 = v39;
        v87 = v35;
        v22 = v37;
        v20 = v87;
        v10 = &v16;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v20;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v2 = "Mismatch between definition and access of `";
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 2;
        v2 = core::panicking::panic_fmt();
    }
    v82 = v36;
    v2 = v82;
    v83 = v38;
    v4 = v83;
    v84 = v40;
    vvar_12{reg 224} = ((((((vvar_601{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_600{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_603{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_605{reg 224}))
    v6 = v84;
    v8 = v42;
    if !v71 {
        v56 = 0;
        v57 = 8;
        v58 = 0;
    } else {
        *(&v71 as &Enum) = Enum {
            field_0: v35
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        vvar_12{reg 224} = ((vvar_12{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-808, size=16, endness=Iend_LE)))
        vvar_13{reg 256} = ((vvar_631{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-792, size=16, endness=Iend_LE)))
        vvar_14{reg 288} = ((vvar_634{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-776, size=16, endness=Iend_LE)))
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v56, &v71);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v34, a1, &g_4200de, 5);
    v16 = &g_4200de;
    v17 = 5;
    if v34 {
        v24 = v39;
        v96 = v35;
        v22 = (&v36)[8];
        v20 = v96;
        v10 = &v16;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v20;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v2 = "Mismatch between definition and access of `";
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 2;
        v2 = core::panicking::panic_fmt();
    }
    v92 = v36;
    v2 = v92;
    v93 = v38;
    v4 = v93;
    v94 = v40;
    vvar_19{reg 224} = ((((((vvar_12{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_652{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_654{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_656{reg 224}))
    v6 = v94;
    v8 = v42;
    if !v72 {
        v59 = 0;
        v60 = 8;
        v61 = 0;
    } else {
        *(&v72 as &Enum) = Enum {
            field_0: v35
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_40: <UNKNOWN>
            field_56: <UNKNOWN>
        };
        vvar_19{reg 224} = ((vvar_19{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-808, size=16, endness=Iend_LE)))
        vvar_13{reg 256} = ((vvar_13{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-792, size=16, endness=Iend_LE)))
        vvar_14{reg 288} = ((vvar_14{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-776, size=16, endness=Iend_LE)))
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v59, &v72);
    }
    v63 = &v20;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a1, &g_4201a8, 5);
    v16 = &g_4201a8;
    v17 = 5;
    if v20 != 2 {
        v6 = v24;
        v98 = v20;
        v4 = v22;
        v2 = v98;
        v10 = &v16;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = &v2;
        v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v34 = "Mismatch between definition and access of `";
        v35 = 2;
        v38 = 0;
        v36 = &v10;
        v37 = 2;
        v34 = core::panicking::panic_fmt();
    }
    v97 = v21;
    if v97 {
        v99 = *((v97 + 8) as &i64);
        v97 = *((v97 + 16) as &i64);
    } else {
        v99 = 0;
    }
    v36 = v58;
    v100 = v56;
    v34 = v100;
    v101 = v59;
    v37 = v101;
    v39 = v61;
    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41ffc6, 18) as i32;
    v53 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_4159c4, 4) as i8 ? 10 : 0);
    v48 = v78;
    v49 = v80;
    v40 = 0;
    v41 = 8;
    vvar_730{reg 224} = (((((vvar_19{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_724{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_726{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
    v42 = 0;
    v43 = 8;
    v44 = 0;
    v50 = v99;
    v51 = v97;
    v45 = 0;
    v46 = 8;
    v47 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, a1, &g_42022a, 13);
    v32 = &g_42022a;
    v33 = 13;
    if v2 {
        v14 = v7;
        v138 = *((&v2 as &char + 8) as &i128);
        v12 = *((&v4 as &char + 8) as &i128);
        v10 = v138;
        v16 = &v32;
        v17 = <&T as core::fmt::Display>::fmt;
        v18 = &v10;
        v19 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v20 = "Mismatch between definition and access of `";
        v21 = 2;
        v24 = 0;
        v22 = &v16;
        v23 = 2;
        core::panicking::panic_fmt(v63); /* do not return */
    }
    v103 = v3;
    if !v65 {
        goto LABEL_0x49cf8e;
    } else {
        goto LABEL_0x49c9e1;
    }
}
