fn uu_chroot::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x48c]
    let v1: u64;  // [bp-0x488]
    let v2: u64;  // [bp-0x480]
    let v3: i64;  // [bp-0x478]
    let v4: u64;  // [bp-0x470]
    let v5: struct16;  // [bp-0x468], Other Possible Types: struct24
    let v6: struct24;  // [bp-0x468], Other Possible Types: u128
    let v7: u64;  // [bp-0x460]
    let v10: struct24;  // [bp-0x440]
    let v12: Result<struct4, struct8>;  // [bp-0x428]
    let v13: u32;  // [bp-0x424]
    let v14: struct8;  // [bp-0x420]
    let v15: struct8;  // [bp-0x418]
    let v16: struct16;  // [bp-0x410], Other Possible Types: u64
    let v17: u64;  // [bp-0x410]
    let v18: u64;  // [bp-0x408]
    let v19: i8;  // [bp-0x400], Other Possible Types: u64
    let v20: i8;  // [bp-0x3fc]
    let v21: u128;  // [bp-0x3f8]
    let v22: i8;  // [bp-0x3ec]
    let v23: u128;  // [bp-0x3e8]
    let v24: u32;  // [bp-0x3dc]
    let v25: iNone;  // [bp-0x3d8]
    let v26: iNone;  // [bp-0x3c8]
    let v27: u128;  // [bp-0x3b8]
    let v28: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x3a8]
    let v29: u64;  // [bp-0x388]
    let v30: u64;  // [bp-0x380]
    let v31: u32;  // [bp-0x378]
    let v32: iNone;  // [bp-0x374]
    let v33: iNone;  // [bp-0x364]
    let v34: u32;  // [bp-0x354]
    let v35: alloc::string::String;  // [bp-0x350]
    let v36: u64;  // [bp-0x340]
    let v37: struct157;  // [bp-0x338], Other Possible Types: struct16, struct56, struct712, u128
    let v38: Result<struct97, struct24>;  // [bp-0x338]
    let v39: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x338]
    let v40: u32;  // [bp-0x338]
    let v41: u64;  // [bp-0x330]
    let v42: u64;  // [bp-0x328]
    let v43: u64;  // [bp-0x320]
    let v44: u128;  // [bp-0x310]
    let v45: iNone;  // [bp-0x300]
    let v46: iNone;  // [bp-0x2f0]
    let v47: struct64;  // [bp-0x70]
    let v49: u64;  // r15
    let v50: u64;  // r12
    let v51: iNone;  // xmm0
    let v52: i64;  // rbx
    let v53: u64;  // r14
    let v54: void*;  // r13
    let v55: u64;  // rbp
    let v57: u32;  // eax

    v37 = uu_chroot::uu_app();
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v37, a0, a1);
    if (((0 ^ v16.field_0) & (0 ^ -(v17))) >> 63) as char {
        return alloc::boxed::Box<T>::new(v30, 125);
    }
    v32 = *(&v20 as &i128);
    v33 = *(&v22 as &i128);
    v34 = v24;
    v29 = v16.field_0;
    v30 = v18;
    v31 = *(&v19 as &i32);
    v28 = std::env::var(a1, v24);
    v38 = uu_chroot::Options::from(&v29);
    v49 = v41;
    v50 = v42;
    if let Err(_) = v38 {
        return v49;
    }
    v27 = *((&v38 as &char + 88) as &i128);
    v51 = *((&v38 as &char + 24) as &i128);
    v26 = v46;
    v25 = v45;
    v23 = v44;
    *(&v21 as void*) = v51;
    v16 = v38 as i64;
    v18 = v49;
    v19 = v42;
    if *((&v27 as &char + 8) as &i8) {
        uucore::features::fs::canonicalize(&v38, &v16);
        v5 = core::result::Result<T,E>::unwrap(&v38);
        v39 = core::str::converts::from_utf8(v7, v5.field_16);
        match v39 {
            Ok(_) => {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v42, "/") as u8 {
                    core::mem::drop(v5.field_0 as i64, v7);
                    v49 = v18;
                    v50 = v19;
                    goto LABEL_4621d1;
                }
            },
            Err(_) => {
                core::mem::drop(v5.field_0 as i64, v7);
                v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("option --skip-chdir only permitted if NEWROOT is old '/'");
                v42 = v6.field_16;
                v37 = v6.field_0;
                v43 = 125;
                v49 = alloc::boxed::Box<T>::new(&v39) as u64;
            },
        }
    } else {
LABEL_4621d1:
        if std::path::Path::is_dir(v49, v50) {
            v37 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v29);
            v47 = clap_builder::parser::error::MatchesError::unwrap(&v37);
            if v47.field_0 as i64 {
                core::iter::traits::iterator::Iterator::collect(&v2, &v47);
                if !v4 {
                    goto LABEL_462396;
                }
                v1 = v2;
                v52 = v3;
                v53 = v4 - 1;
                v54 = *(v52 as &i64);
                v55 = *((v52 + 8) as &i64);
                v0 = 0;
            } else {
LABEL_462396:
                v52 = alloc::alloc::Global::alloc_impl(8, 32);
                *(v52 as &void*) = v54;
                *((v52 + 8) as &u64) = v55;
                *((v52 + 16) as &&u8) = &g_41aa0f;
                *((v52 + 24) as &i64) = 2;
                v1 = 2;
                v53 = 1;
                v0 = 1;
            }
            v49 = uu_chroot::set_context(&v16);
            if !v49 {
                v37 = std::process::Command::new(v54, v55);
                v37 = std::process::Command::args(v52 + 16, v53);
                v12 = std::process::Command::status(&v37);
                match v12 {
                    Ok(_) => {
                        uucore::mods::error::set_exit_code((!v13 ? 0 : (-((0 < (v13 & 127)) as u8 as u32) | v13 >> 8) as u64));
                        return 0;
                    },
                    Err(v15) => {
                        if std::io::error::Error::kind(v15) as u8 {
                            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v52 as &i64), *((v52 + 8) as &i64));
                        } else {
                            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v52 as &i64), *((v52 + 8) as &i64));
                        }
                        v5 = struct16 {
                            field_0: v57
                            padding_4: <UNKNOWN>
                            field_8: v15
                        };
                        v49 = alloc::boxed::Box<T>::new(&v5) as u64;
                    },
                }
            }
        } else {
            v6 = *(&v18 as &i128);
            v35 = format!("{}", &v5);
            v41 = *(&v35.vec.buf.inner.cap as &i128);
            v43 = v36;
            v40 = 10;
            v49 = alloc::boxed::Box<T>::new(&v40) as u64;
        }
    }
    return v49;
}
