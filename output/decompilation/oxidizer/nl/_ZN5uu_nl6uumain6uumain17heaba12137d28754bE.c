fn uu_nl::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x448], Other Possible Types: u128
    let v1: u64;  // [bp-0x448]
    let v2: u64;  // [bp-0x440]
    let v3: void*;  // [bp-0x438], Other Possible Types: u64
    let v4: Result<struct4, struct8>;  // [bp-0x428], Other Possible Types: struct44, struct48, struct56, struct24, u64
    let v5: struct16;  // [bp-0x428]
    let v6: u128;  // [bp-0x428]
    let v7: u64;  // [bp-0x420]
    let v8: i8;  // [bp-0x418], Other Possible Types: u64
    let v9: u32;  // [bp-0x410]
    let v10: i8;  // [bp-0x408]
    let v11: i8;  // [bp-0x3f8]
    let v12: u64;  // [bp-0x3d8]
    let v13: Result<struct16, struct12>;  // [bp-0x3d8]
    let v14: u64;  // [bp-0x3d0]
    let v15: u64;  // [bp-0x3c8]
    let v16: void*;  // [bp-0x3c0]
    let v17: u64;  // [bp-0x3b8]
    let v18: struct24;  // [bp-0x3a0]
    let v19: u64;  // [bp-0x398]
    let v20: u32;  // [bp-0x390]
    let v21: u64;  // [bp-0x388]
    let v22: u64;  // [bp-0x380]
    let v23: iNone;  // [bp-0x378]
    let v24: iNone;  // [bp-0x368]
    let v25: u64;  // [bp-0x358]
    let v26: alloc::string::String;  // [bp-0x350]
    let v27: u64;  // [bp-0x340]
    let v28: struct64;  // [bp-0x338]
    let v29: struct712;  // [bp-0x2f8]
    let v30: struct106;  // [bp-0x2f8]
    let v33: void*;  // rbp
    let v34: void*;  // r13
    let v36: u128;  // xmm0
    let v38: void*;  // rbx
    let v39: u64;  // r12
    let v40: u64;  // r15
    let v42: u64;  // rax
    let v43: u64;  // rdx
    let v44: u64;  // rax

    v29 = uu_nl::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v29, a0, a1);
    if (((0 ^ v5.field_0) & (0 ^ -(v4))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
    }
    v25 = *(&v11 as &i64);
    v24 = *(&v10 as &i128);
    v23 = *(&v8 as &i128);
    v21 = v5.field_0;
    v22 = v7;
    v30 = <uu_nl::Settings as core::default::Default>::default();
    v18 = uu_nl::helper::parse_options(&v30, &v21);
    if v20 {
        v4 = alloc::str::join_generic_copy(v19, v20);
        v3 = v8;
        v0 = v4.field_0;
        v26 = format!("Invalid arguments supplied.\n{}", &v0 as u8);
        v9 = 1;
        v6 = *(&v26.vec.buf.inner.cap as &i128);
        v8 = v27;
        alloc::boxed::Box<T>::new(&v6);
        return v44;
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21);
    v28 = clap_builder::parser::error::MatchesError::unwrap(&v4);
    if v28.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v15, &v28);
        v33 = v16;
        v0 = struct24 {
            field_0: 1
            field_8: v30.field_120
            field_16: 0
        };
        if !v17 {
            return 0;
        }
    } else {
        v33 = alloc::alloc::Global::alloc_impl(8, 24);
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v3 = v8;
        v36 = v4.field_0;
        v0 = v36;
        *(&v33[16] as &u64) = v8;
        *(v33 as &u128) = v36;
        v15 = 1;
        v16 = v33;
        v17 = 1;
        v1 = 1;
        v2 = v30.field_120;
        v3 = 0;
    }
    do {
        v39 = v33[8] as i64;
        v40 = v33[16] as i64;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, "-") {
            v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(std::io::stdio::stdin());
            v42 = uu_nl::nl(&v4, &v1, &v30);
            if v38 == v34 {
                if v38 == v34 {
                    break;
                }
            } else {
                if v38 == v34 {
                    break;
                }
            }
        } else if std::path::Path::is_dir(v39, v40) {
            v12 = uucore::util_name();
            v14 = v43;
            eprint!("{}: ", &v12);
            v12 = v39;
            v14 = v40;
            eprintln!("{}: Is a directory", &v12);
            uucore::mods::error::set_exit_code(1);
            if v38 == v34 {
                if v38 == v34 {
                    break;
                }
            } else {
                if v38 == v34 {
                    break;
                }
            }
        } else {
            v4 = std::fs::File::open(v39, v40);
            v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, v33);
            if let Ok(_) = v13 {
                break;
            }
            v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v14);
            if !uu_nl::nl(&v4, &v1, &v30) {
                if v38 == v34 {
                    if v38 == v34 {
                        break;
                    }
                } else {
                    if v38 == v34 {
                        break;
                    }
                }
            }
        }
        v33 = v38;
    } while (v38);
    return 0;
}
