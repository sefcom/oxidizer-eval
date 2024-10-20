fn uu_ptx::get_config(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x150]
    let v1: i64;  // [sp-0x148]
    let v2: i64;  // [sp-0x140]
    let v3: i64;  // [sp-0x138]
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: i8;  // [bp-0x120]
    let v7: i8;  // [bp-0x118]
    let v8: i8;  // [bp-0x110]
    let v9: i8;  // [bp-0x100]
    let v10: i64;  // [sp-0xf8]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i128;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i128;  // [sp-0xc8], Other Possible Types: struct16
    let v17: i64;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa8]
    let v21: i8;  // [sp-0xa0]
    let v22: i32;  // [bp-0x9f]
    let v23: i8;  // [sp-0x9e]
    let v24: i8;  // [sp-0x9d]
    let v25: i8;  // [sp-0x9c]
    let v26: i8;  // [sp-0x9b]
    let v27: i8;  // [bp-0x9a]
    let v28: i128;  // [sp-0x98], Other Possible Types: Enum
    let v29: i128;  // [sp-0x88]
    let v30: i128;  // [sp-0x78]
    let v31: i64;  // [sp-0x68]
    let v32: i64;  // [sp-0x60], Other Possible Types: struct24, struct8
    let v33: i64;  // [sp-0x58]
    let v34: i64;  // [sp-0x50]
    let v35: i64;  // [sp-0x48]
    let v36: i64;  // [sp-0x40]
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // r14
    let v43: i64;  // rax
    let v44: i64;  // r13
    let v45: i64;  // r12
    let v46: i64;  // rcx
    let v47: i64;  // rdx
    let v48: i64;  // r12
    let v49: i64;  // rax
    let v50: i64;  // rcx
    let v52: i64;  // rax
    let v53: i64;  // rcx
    let v55: i64;  // rax
    let v56: i64;  // rcx
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // rax
    let v60: i8;  // r15b
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2

    v38 = __rust_alloc(2, 1);
    *(v38 as &i16) = 30840;
    v39 = __rust_alloc(1, 1);
    *(v39 as &i8) = 47;
    v40 = __rust_alloc(3, 1);
    *((v40 + 2) as &i8) = 43;
    *(v40 as &i16) = 30556;
    v26 = 0;
    v21 = 1;
    v22 = 0;
    v10 = 2;
    v11 = v38;
    v12 = 2;
    v13 = 1;
    v14 = v39;
    v15 = 1;
    v16 = 3;
    v17 = v40;
    v18 = 3;
    v19 = 72;
    v20 = 3;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.10.llvm.16528050568364581840, 11) as i8 {
        v41 = __rust_alloc(24, 8);
        *(v41 as &i8) = 1;
        *((v41 + 8) as &&i64) = &g_4699e9;
        *((v41 + 16) as &i64) = 14;
        goto LABEL_53852c;
    }
    v21 = 0;
    v26 = 1;
    v18 = 0;
    v16 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 7);
    v42 = v17;
    v43 = v18;
    *((v42 + v43 + 3) as &i32) = 727517705;
    *((v42 + v43) as &i32) = 153116251;
    v18 = v43 + 7;
    v44 = *((a1 + 8) as &i64);
    v45 = *((a1 + 16) as &i64);
    if !v45 {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.9.llvm.16528050568364581840, 14) as i8;
        v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.23.llvm.16528050568364581840, 10) as i8;
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.14.llvm.16528050568364581840, 15) as i8 & v24;
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.19.llvm.16528050568364581840, 11) as i8;
        if v45 {
            v48 = v45 * 16;
            v49 = 0;
            while (!(*((v44 + v49 + 8) as &i64) == 10) || !(!(*((v50 + 8) as &i16) ^ 25965)) || !(!(*(v50 as &i64) ^ 7020598825800917357))) {
                v49 += 16;
                if v48 == v49 {
                    goto LABEL_538700;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.12.llvm.16528050568364581840, 10);
            v0 = &anon.e23289579c9441ef21ddb87efb4b8a29.12.llvm.16528050568364581840;
            v1 = 10;
            if v6 != 2 {
                vvar_855{stack -104} = v9;
                vvar_856{stack -120} = v8;
                vvar_857{stack -136} = v6;
                vvar_858{stack -320} = &v0;
                vvar_859{stack -312} = <&T as core::fmt::Display>::fmt;
                vvar_860{stack -304} = &v29;
                vvar_861{stack -296} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                vvar_862{stack -96} = "Mismatch between definition and access of `";
                vvar_863{stack -88} = 2;
                vvar_864{stack -64} = 0;
                vvar_865{stack -80} = &v2;
                vvar_866{stack -72} = 2;
                vvar_867{stack -96} = core::panicking::panic_fmt();
            }
            if !v7 {
                goto LABEL_538b25;
            } else {
                v32 = <alloc::string::String as core::clone::Clone>::clone(v7);
                v12 = v34;
                v10 = v32;
            }
LABEL_538700:
            v52 = 0;
            while (!(*((v44 + v52 + 8) as &i64) == 15) || !(!(*((v53 + 7) as &i64) ^ 7957695015157984885)) || !(!(*(v53 as &i64) ^ 8462954388139371622))) {
                v52 += 16;
                if v48 == v52 {
                    goto LABEL_5387d2;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.11.llvm.16528050568364581840, 15);
            v0 = &anon.e23289579c9441ef21ddb87efb4b8a29.11.llvm.16528050568364581840;
            v1 = 15;
            if v6 != 2 {
                vvar_869{stack -104} = v9;
                vvar_870{stack -120} = v8;
                vvar_871{stack -136} = v6;
                vvar_872{stack -320} = &v0;
                vvar_873{stack -312} = <&T as core::fmt::Display>::fmt;
                vvar_874{stack -304} = &v29;
                vvar_875{stack -296} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                vvar_876{stack -96} = "Mismatch between definition and access of `";
                vvar_877{stack -88} = 2;
                vvar_878{stack -64} = 0;
                vvar_879{stack -80} = &v2;
                vvar_880{stack -72} = 2;
                vvar_881{stack -96} = core::panicking::panic_fmt();
            }
            if !v7 {
                goto LABEL_538b25;
            } else {
                v32 = <alloc::string::String as core::clone::Clone>::clone(v7);
                v15 = v34;
                v13 = v32;
            }
LABEL_5387d2:
            v55 = 0;
            while (!(*((v44 + v55 + 8) as &i64) == 5) || !(!(*((v56 + 4) as &i8) ^ 104)) || !(!(*(v56 as &i32) ^ 1952737655))) {
                v55 += 16;
                if v48 == v55 {
                    goto LABEL_53888e;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.24.llvm.16528050568364581840, 5);
            v0 = &anon.e23289579c9441ef21ddb87efb4b8a29.24.llvm.16528050568364581840;
            v1 = 5;
            if v6 != 2 {
                vvar_883{stack -104} = v9;
                vvar_884{stack -120} = v8;
                vvar_885{stack -136} = v6;
                vvar_886{stack -320} = &v0;
                vvar_887{stack -312} = <&T as core::fmt::Display>::fmt;
                vvar_888{stack -304} = &v29;
                vvar_889{stack -296} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                vvar_890{stack -96} = "Mismatch between definition and access of `";
                vvar_891{stack -88} = 2;
                vvar_892{stack -64} = 0;
                vvar_893{stack -80} = &v2;
                vvar_894{stack -72} = 2;
                vvar_895{stack -96} = core::panicking::panic_fmt();
            }
            v57 = v7;
            if !v57 {
                goto LABEL_538b25;
            }
            v28 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v57 + 8) as &i64), *((v57 + 16) as &i64));
            if !(!v28) {
                goto LABEL_538929;
            }
            v19 = *((&v28 as &char + 8) as &i64);
LABEL_53888e:
            v58 = 0;
            while (!(*((v44 + v58 + 8) as &i64) == 8) || !(*(*((v44 + v58) as &i64) as &i64) == 7312272888393916775)) {
                v58 += 16;
                if v48 == v58 {
                    goto LABEL_53896b;
                }
            }
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a1, &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840, 8);
            v0 = &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840;
            v1 = 8;
            if v6 != 2 {
                v31 = v9;
                v30 = v8;
                v29 = v6;
                v2 = &v0;
                v3 = <&T as core::fmt::Display>::fmt;
                v4 = &v29;
                v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v32 = "Mismatch between definition and access of `";
                v33 = 2;
                v36 = 0;
                v34 = &v2;
                v35 = 2;
                v32 = core::panicking::panic_fmt();
            }
            v59 = v7;
            if !v59 {
LABEL_538b25:
                core::option::expect_failed(); /* do not return */
            }
            v28 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v59 + 8) as &i64), *((v59 + 16) as &i64));
            if !v28 {
                v20 = *((&v28 as &char + 8) as &i64);
            } else {
LABEL_538929:
                v60 = *((&v28 as &char + 1) as &i8);
                v41 = __rust_alloc(24, 8);
                *(v41 as &i8) = 2;
                *((v41 + 1) as &i8) = v60;
                goto LABEL_53852c;
            }
        }
LABEL_53896b:
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.13.llvm.16528050568364581840, 11) as i8 {
            v26 = 1;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &anon.e23289579c9441ef21ddb87efb4b8a29.16.llvm.16528050568364581840, 10) as i8 {
            v26 = 2;
        }
        *((a0 + 80) as &i64) = v20;
        *((a0 + 88) as &i8) = v21;
        *((a0 + 92) as &i8) = v25;
        *((a0 + 93) as &i8) = v26;
        *((a0 + 94) as &i8) = v27;
        *((a0 + 64) as &i64) = v18;
        v61 = v10;
        v62 = v12;
        v63 = *((&v13 as &char + 8) as &i128);
        *((a0 + 48) as &i128) = v16;
        *((a0 + 32) as &i128) = v63;
        *((a0 + 16) as &i128) = v62;
        *(a0 as &i128) = v61;
        return a0;
    } else {
        v46 = 0;
        do {
            if *((v44 + v46 + 8) as &i64) == 15 && !(*((v47 + 7) as &i64) ^ 8104339024211225957) && !(*(v47 as &i64) ^ 7305804402549220723) {
                v41 = __rust_alloc(24, 8);
                *(v41 as &i8) = 1;
                *((v41 + 8) as &&i64) = &g_469a10;
                *((v41 + 16) as &i64) = 2;
                goto LABEL_53852c;
            }
        } while ((v46 += 16, v45 << 4 != v46));
LABEL_53852c:
        *((a0 + 8) as &i64) = v41;
        *((a0 + 16) as &&i64) = &g_67b3c0;
        *(a0 as &i64) = 0x8000000000000000;
        if v16 {
            return a0;
        }
        return a0;
    }
}
