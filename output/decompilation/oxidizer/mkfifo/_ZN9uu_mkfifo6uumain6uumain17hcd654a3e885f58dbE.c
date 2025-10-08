fn uu_mkfifo::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x488], Other Possible Types: u64
    let v1: iNone;  // [bp-0x478]
    let v2: u64;  // [bp-0x470]
    let v3: u64;  // [bp-0x468]
    let v4: u8;  // [bp-0x460]
    let v5: u8;  // [bp-0x45f]
    let v6: u64;  // [bp-0x458]
    let v7: struct16;  // [bp-0x440], Other Possible Types: struct24, void*
    let v8: struct56;  // [bp-0x440], Other Possible Types: u64
    let v9: u128;  // [bp-0x438]
    let v10: u64;  // [bp-0x438]
    let v11: iNone;  // [bp-0x438]
    let v12: u64;  // [bp-0x438]
    let v13: u64;  // [bp-0x430]
    let v14: u8;  // [bp-0x428]
    let v15: iNone;  // [bp-0x408], Other Possible Types: Option<struct24>
    let v16: u64;  // [bp-0x3f8]
    let v17: struct32;  // [bp-0x3f0], Other Possible Types: u8
    let v18: struct56;  // [bp-0x3d0]
    let v19: u64;  // [bp-0x3c8]
    let v20: alloc::string::String;  // [bp-0x398]
    let v21: u64;  // [bp-0x388]
    let v22: alloc::string::String;  // [bp-0x380]
    let v23: u64;  // [bp-0x370]
    let v24: alloc::string::String;  // [bp-0x368]
    let v25: u64;  // [bp-0x358]
    let v26: u64;  // [bp-0x350]
    let v27: Result<struct40, struct16>;  // [bp-0x338], Other Possible Types: struct56, struct712, struct28
    let v28: core::result::Result<alloc::ffi::c_str::CString, alloc::ffi::c_str::NulError>;  // [bp-0x338]
    let v29: u128;  // [bp-0x338]
    let v30: u64;  // [bp-0x328]
    let v31: u32;  // [bp-0x320]
    let v32: struct64;  // [bp-0x70]
    let v34: i64;  // rax
    let v35: u64;  // rax
    let v36: u32;  // ebp
    let v38: u32;  // eax
    let v40: u64;  // rdx
    let v41: u64;  // rax
    let v42: u64;  // rbx
    let v43: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v27 = uu_mkfifo::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v27, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
    }
    v18 = v8;
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v18, _ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E.field_0, g_4de3a0.field_0);
    v34 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E.field_0, g_4de3a0.field_0, &v27);
    if v34 {
        v43 = core::num::<impl usize>::from_ascii_radix(&v4, *((v34 + 8) as &i64), *((v34 + 16) as &i64));
        if !v4 {
            goto LABEL_45356e;
        }
        v17 = v5;
        v20 = format!("invalid mode: {}", &v17);
        v27 = struct28 {
            field_0: *(&v20.vec.buf.inner.cap as &i128)
            field_16: v21
            field_24: 1
        };
        v35 = alloc::boxed::Box<T>::new(&v27) as u64;
    } else {
        v36 = ~(uucore::features::mode::get_umask()) & 438;
LABEL_45356e:
        v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v18, _ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E.field_0, g_4de3b0.field_0);
        v32 = clap_builder::parser::error::MatchesError::unwrap(_ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E.field_0, g_4de3b0.field_0, &v27);
        if v32.field_0 as i64 {
            core::iter::traits::iterator::Iterator::collect(&v26, &v32);
            v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v26);
            v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            if let None = v15 {
                return 0;
            }
            do {
                v3 = v16;
                v1 = v15;
                v28 = <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(v2, v16);
                v38 = mkfifo(core::result::Result<T,E>::unwrap(&v28), 438);
                v10 = v9;
                if v38 == -1 {
                    v7 = 0;
                    *(&v11 as &i128) = *(&v2 as &i128);
                    v14 = 1;
                    v22 = format!("cannot create fifo {}: File exists", &v7);
                    v31 = 1;
                    v29 = *(&v22.vec.buf.inner.cap as &i128);
                    v30 = v23;
                    v0 = struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v29 as u384) as u64
                        field_8: &g_4dda50
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0.field_0));
                    v4 = uucore::util_name();
                    v6 = v40;
                    eprintln!("{}: {}", &v4 as u128, &v0);
                    v10 = v12;
                }
                v9 = v10;
                v41 = std::fs::set_permissions(&v1 as u8, v36);
                if v41 {
                    v0 = v41;
                    v7 = 0;
                    v9 = *(&v2 as &i128);
                    v14 = 1;
                    v24 = format!("cannot set permissions on {}: {}", &v7, &v0);
                    v27 = struct28 {
                        field_0: *(&v24.vec.buf.inner.cap as &i128)
                        field_16: v25
                        field_24: 1
                    };
                    v42 = alloc::boxed::Box<T>::new(&v27) as u64;
                }
                v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v15 as i64 != 0x8000000000000000);
            return 0;
        } else {
            v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
            v27 = struct28 {
                field_0: *(&v7.field_0 as &i128)
                field_16: v13
                field_24: 1
            };
            v35 = alloc::boxed::Box<T>::new(&v27) as u64;
        }
    }
    return v35;
}
