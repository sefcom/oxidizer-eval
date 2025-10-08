fn uu_readlink::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x411]
    let v1: u32;  // [bp-0x410]
    let v2: u32;  // [bp-0x40c]
    let v4: u128;  // [bp-0x408]
    let v6: u64;  // [bp-0x400]
    let v7: u64;  // [bp-0x3f8]
    let v8: u64;  // [bp-0x3f0]
    let v9: void*;  // [bp-0x3e8], Other Possible Types: u128
    let v10: u64;  // [bp-0x3e0]
    let v11: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x3d8], Other Possible Types: u128
    let v12: struct16;  // [bp-0x3d8]
    let v13: u64;  // [bp-0x3d8]
    let v14: struct24;  // [bp-0x3d8]
    let v15: u64;  // [bp-0x3d0]
    let v16: iNone;  // [bp-0x3c8]
    let v17: iNone;  // [bp-0x3b8]
    let v18: u64;  // [bp-0x3a8]
    let v19: u64;  // [bp-0x3a0]
    let v20: u64;  // [bp-0x398]
    let v21: iNone;  // [bp-0x390]
    let v22: iNone;  // [bp-0x380]
    let v23: u64;  // [bp-0x370]
    let v24: std::io::error::Error;  // [bp-0x368]
    let v25: struct24;  // [bp-0x350]
    let v26: u64;  // [bp-0x340]
    let v27: struct64;  // [bp-0x338]
    let v28: struct712;  // [bp-0x2f8], Other Possible Types: u128
    let v29: struct56;  // [bp-0x2f8]
    let v30: struct24;  // [bp-0x2f8]
    let v31: struct24;  // [bp-0x2f8]
    let v32: u128;  // [bp-0x2f8]
    let v33: u64;  // [bp-0x2e8]
    let v34: u32;  // [bp-0x2e0]
    let v37: u8;  // al
    let v39: u8;  // r15b
    let v40: u8;  // r13b
    let v41: u8;  // al
    let v42: u64;  // rdx
    let v43: void*;  // rbp
    let v46: u64;  // r13
    let v48: u64;  // r12
    let v49: u64;  // r14
    let v52: u64;  // rbx
    let v55: u64;  // [bp-0x2e8]

    v28 = uu_readlink::uu_app();
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v28, a0, a1);
    if (((0 ^ v12.field_0) & (0 ^ -(v13))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
    }
    v23 = v18;
    v22 = v17;
    v21 = v16;
    v19 = v12.field_0;
    v20 = v15;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "no-newline");
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "zero");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "silent") {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "quiet");
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "verbose");
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "canonicalize") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "canonicalize-existing") {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "canonicalize-missing");
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "canonicalize-existing") {
        v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v19, "canonicalize-missing") * 2;
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v19);
    v27 = clap_builder::parser::error::MatchesError::unwrap(&v28);
    if v27.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v28, &v27);
        v11 = *(&v29.field_8 as &i128);
        if v29.field_0 != 0x8000000000000000 {
            v0 = v37;
            v9 = v11;
            v8 = v29.field_0;
            if v10 {
                if v39 {
                    loop {
                        v46 -= 24;
                        v30 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v43[8] as i64, v43[16] as i64);
                        v4 = *(&v30.field_0 as &i128);
                        v7 = v55;
                        v11 = std::fs::read_link(&v4, v42);
                        if let Err(_) = v11 {
                            goto LABEL_4544a8;
                        }
                        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v48, *((&v11 as &char + 16) as &i64), v41));
                        if v49 {
                            break;
                        }
                        core::mem::drop(v11 as i64, v48);
                        core::mem::drop(v4, v6);
                        if !v46 - 24 {
                            goto LABEL_0x4541c3;
                        }
                    }
LABEL_45452c:
                    core::mem::drop(v13, v15);
                } else {
                    v2 = v40;
                    v1 = v41;
                    loop {
                        v52 -= 24;
                        v32 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9[8] as i64, v9[16] as i64);
                        v4 = *(&v31.field_0 as &i128);
                        v7 = v55;
                        uucore::features::fs::canonicalize(&v13, &v4, v2);
                        if v13 == 0x8000000000000000 {
                            break;
                        }
                        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v48, v16 as i64, v1));
                        if v49 {
                            goto LABEL_45452c;
                        }
                        core::mem::drop(v13, v48);
                        core::mem::drop(v4, v6);
                        if v52 == 24 {
                            return 0;
                        }
                    }
LABEL_4544a8:
                    v24 = v15;
                    if v0 {
                        v25 = <T as alloc::string::SpecToString>::spec_to_string(<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v15, v43[8] as i64, v43[16] as i64));
                        v34 = 1;
                        v32 = *(&v25.field_0 as &i128);
                        v33 = v26;
                        alloc::boxed::Box<T>::new(&v32);
                    } else {
                        uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                    }
                }
                core::mem::drop(v4, v6);
                return v49;
            }
        }
    }
    v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
    v33 = v14.field_16;
    v28 = *(&v14.field_0 as &i128);
    v34 = 1;
    alloc::boxed::Box<T>::new(&v28);
    goto LABEL_0x4541c3;
}
