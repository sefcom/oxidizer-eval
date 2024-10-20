fn uu_printf::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i128;  // [sp-0x4b8]
    let v1: i8;  // [sp-0x4b4]
    let v2: i128;  // [bp-0x4b3]
    let v3: i128;  // [bp-0x4a8]
    let v4: i64;  // [sp-0x4a0]
    let v5: i64;  // [sp-0x490], Other Possible Types: struct24
    let v6: i64;  // [sp-0x488]
    let v7: i64;  // [sp-0x480]
    let v8: i64;  // [bp-0x478]
    let v9: i64;  // [sp-0x470]
    let v10: i128;  // [bp-0x468]
    let v11: i64;  // [sp-0x459]
    let v12: i64;  // [sp-0x450]
    let v13: i64;  // [sp-0x448]
    let v14: i64;  // [sp-0x440]
    let v15: i64;  // [sp-0x438]
    let v16: struct16;  // [bp-0x430]
    let v17: i256;  // [sp-0x420], Other Possible Types: Enum
    let v18: i8;  // [bp-0x400], Other Possible Types: struct56
    let v19: i64;  // [sp-0x3f8]
    let v20: i320;  // [sp-0x3c8], Other Possible Types: Enum, struct64
    let v21: i64;  // [sp-0x3c0]
    let v22: i64;  // [sp-0x388]
    let v23: i64;  // [sp-0x380]
    let v24: i64;  // [bp-0x378]
    let v25: i64;  // [sp-0x370]
    let v26: i128;  // [bp-0x368]
    let v27: i128;  // [sp-0x358]
    let v28: i128;  // [sp-0x348]
    let v29: i128;  // [sp-0x338]
    let v30: i128;  // [bp-0x328]
    let v31: i64;  // [sp-0x319]
    let v32: String;  // [sp-0x310], Other Possible Types: i192
    let v33: i448;  // [sp-0x2f8], Other Possible Types: Enum, struct712
    let v34: i128;  // [bp-0x2f7]
    let v35: i64;  // [sp-0x2f0]
    let v36: i64;  // [bp-0x2e8]
    let v37: i128;  // [bp-0x2e7]
    let v38: i64;  // [bp-0x2e0]
    let v39: i64;  // [sp-0x2d8]
    let v41: i64;  // r12
    let v42: i64;  // rbx
    let v43: i64;  // rax
    let v44: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i256;  // ymm0
    let v47: i256;  // ymm0
    let v48: i128;  // xmm1
    let v49: i256;  // ymm1
    let v50: i256;  // ymm1
    let v53: i128;  // xmm0
    let v54: i64;  // r13
    let v56: i64;  // rax
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i32;  // ecx
    let v62: i8;  // al
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i64;  // rax
    let v66: i8;  // al
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1
    let v69: i128;  // xmm0
    let v70: i128;  // xmm1
    let v71: i32;  // ecx
    let v72: i8;  // al
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i32;  // eax
    let v77: i64;  // rsi
    let v78: i64;  // rdi
    let v79: i64;  // rdx
    let v80: i64;  // r15
    let v81: i64;  // rax

    v33 = uu_printf::uu_app();
    v41 = &v18;
    v18 = clap_builder::builder::command::Command::get_matches_from(&v33, a0, a1);
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, &g_41126b, 12);
    v42 = clap_builder::parser::error::MatchesError::unwrap(&g_41126b, 12, &v33);
    if !v42 {
        v33 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(15, 0);
        v43 = *((&v33 as &char + 16) as &i64);
        *((v43 + 7) as &i64) = 7236828795186999072;
        *(v43 as &i64) = 2334956331002456429;
        v38 = 1;
        v33 = v35;
        v35 = v43;
        v36 = 15;
        v44 = __rust_alloc(32, 8);
        v53 = v33;
        *((v44 + 16) as &i128) = *((&v33 as &char + 16) as &i128);
        *(v44 as &i128) = v53;
        v8 = v44;
        v9 = &g_4e9c40;
        v24 = &v8;
        v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v33 = &g_410be0;
        v35 = 1;
        v39 = 0;
        v36 = &v24;
        v38 = 1;
        v32 = alloc::fmt::format::format_inner(&v33);
        v24 = v32;
        v77 = *((&v32 as &char + 16) as &i64);
        v26 = *((&v32 as &char + 16) as &i64);
        v78 = v25;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, v77, 1, 0) as i8 {
            v20 = uucore::util_name();
            v21 = v79;
            v18 = &v20;
            v19 = <&T as core::fmt::Display>::fmt;
            v33 = &g_4e9ba8;
            v35 = 2;
            v39 = 0;
            v36 = v41;
            v38 = 1;
            std::io::stdio::_eprint(&v33);
            v20 = &v24;
            v21 = <alloc::string::String as core::fmt::Display>::fmt;
            v33 = &g_4e9bc8;
            v35 = 2;
            v39 = 0;
            v36 = &v20;
            v38 = 1;
            std::io::stdio::_eprint(&v33);
        }
        if *((v9 + 104) as &i64)() {
            v20 = uucore::execution_phrase();
            v21 = v79;
            v18 = &v20;
            v19 = <&T as core::fmt::Display>::fmt;
            *(&v33 as &&str) = "Try '";
            v35 = 2;
            v39 = 0;
            v36 = v41;
            v38 = 1;
            std::io::stdio::_eprint(&v33);
        }
        v76 = *((v9 + 96) as &i64)();
        v80 = v9;
        if *(v80 as &i64) {
            v81();
        }
        if *((v80 + 8) as &i64) {
            return v76;
        }
        return v76;
    }
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v18, &g_410ec0, 8);
    v20 = clap_builder::parser::error::MatchesError::unwrap(&g_410ec0, 8, &v33);
    if !v20 {
        v5 = 0;
        v6 = 8;
        v7 = 0;
    } else {
        v45 = v20;
        vvar_11{reg 224} = ((vvar_296{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_295{reg 224}))
        v48 = *((&v20 as &char + 16) as &i128);
        vvar_12{reg 256} = ((vvar_299{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_298{reg 256}))
        v28 = *((&v20 as &char + 48) as &i128);
        v27 = *((&v20 as &char + 32) as &i128);
        v26 = v48;
        v24 = v45;
        v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v24);
    }
    v14 = 8;
    v15 = 0 * 32 + v14;
    v12 = 0;
    v23 = *((v42 + 8) as &i64);
    v16 = struct16 {
        field_0: v23
        field_8: v22
    };
    v22 = *((v42 + 16) as &i64);
    v54 = 0;
    loop {
        v20 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v16);
        v56 = v20;
        if v56 == 9 {
            break;
        }
        v31 = *((&v20 as &char + 32) as &i64);
        v57 = *((&v20 as &char + 1) as &i128);
        v58 = *((&v20 as &char + 17) as &i128);
        v30 = v58;
        v29 = v57;
        if (v56 - 7 & 255) >= 2 {
            v54 = v54 | -0x100 | 1;
            goto LABEL_43fbc3;
        }
        if v56 == 8 {
            v64 = *((&v29 as &char + 7) as &i128);
            v3 = *((&v30 as &char + 7) as &i128);
            v0 = v64;
            v44 = __rust_alloc(32, 8);
            goto LABEL_43fe61;
        }
LABEL_43fbc3:
        v39 = *((&v20 as &char + 32) as &i64);
        v59 = *((&v20 as &char + 1) as &i128);
        vvar_11{reg 224} = ((((vvar_11{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_358{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_372{reg 224}))
        v60 = *((&v20 as &char + 17) as &i128);
        vvar_12{reg 256} = ((((vvar_12{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_360{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_374{reg 256}))
        v37 = v60;
        v34 = v59;
        v33 = v56;
        v17 = uucore::features::format::FormatItem<C>::write(&v33, std::io::stdio::stdout(), &v12);
        v61 = v17;
        v62 = *((&v17 as &char + 4) as &i8);
        if v0 != 14 {
            v63 = *((&v17 as &char + 5) as &i128);
            v3 = *((&v17 as &char + 16) as &i128);
            v2 = v63;
            v0 = v61;
            v1 = v62;
            v44 = __rust_alloc(32, 8);
            v41 = &v18;
            goto LABEL_43fc8c;
        } else if v1 {
            goto LABEL_43fc24;
        }
    }
    if !(v54 & 1) {
        v44 = 0;
    }
    do {
        if !v12 {
            v65 = v14;
            if v65 == v15 {
                v65 = 0;
            } else {
                v14 = v65 + 32;
            }
            v12 = 1;
            v13 = v65;
            if !v13 {
LABEL_44018f:
            }
        } else if !v13 {
            goto LABEL_44018f;
        }
    } while ((v16 = struct16 {
    field_0: v23
    field_8: v22
}, v20 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v16), v66 = v20, v66 == 9));
    v11 = *((&v20 as &char + 32) as &i64);
    v67 = *((&v20 as &char + 1) as &i128);
    v68 = *((&v20 as &char + 17) as &i128);
    v10 = v68;
    v8 = v67;
    if v66 == 8 {
        v3 = *((&v10 as &char + 7) as &i64);
        v4 = v11;
        v0 = *((&v8 as &char + 7) as &i128);
        v44 = __rust_alloc(32, 8);
LABEL_43fe61:
        v74 = v0;
        *((v44 + 16) as &i128) = v3;
        *(v44 as &i128) = v74;
    } else {
        v39 = *((&v20 as &char + 32) as &i64);
        v69 = *((&v20 as &char + 1) as &i128);
        vvar_469{reg 224} = ((((vvar_11{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_460{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_468{reg 224}))
        v70 = *((&v20 as &char + 17) as &i128);
        vvar_471{reg 256} = ((((vvar_12{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_462{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_470{reg 256}))
        v37 = v70;
        v34 = v69;
        v33 = v66;
        v17 = uucore::features::format::FormatItem<C>::write(&v33, std::io::stdio::stdout(), &v12);
        v71 = v17;
        v72 = *((&v17 as &char + 4) as &i8);
        if v0 != 14 {
            v73 = *((&v17 as &char + 5) as &i128);
            v3 = *((&v17 as &char + 16) as &i128);
            v2 = v73;
            v0 = v71;
            v1 = v72;
            v44 = __rust_alloc(32, 8);
            v41 = &v18;
LABEL_43fc8c:
            v75 = v0;
            *((v44 + 16) as &i128) = *((&v2 as &char + 11) as &i128);
            *(v44 as &i128) = v75;
        } else if v1 {
LABEL_43fc24:
            v41 = &v18;
            v44 = 0;
        }
    }
}
