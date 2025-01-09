fn uu_nl::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x468], Other Possible Types: Result<struct16, struct4>
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: i456;  // [sp-0x448], Other Possible Types: Result<struct4, struct8>, struct24, struct44, struct28, struct48, struct56
    let v4: i64;  // [sp-0x440]
    let v5: i64;  // [sp-0x438]
    let v6: i64;  // [bp-0x430]
    let v7: i64;  // [sp-0x428]
    let v8: i64;  // [sp-0x400], Other Possible Types: struct24
    let v9: i64;  // [sp-0x3f8]
    let v10: i64;  // [sp-0x3d8], Other Possible Types: struct24, struct64
    let v11: i64;  // [sp-0x3d0]
    let v12: i64;  // [sp-0x3c8]
    let v13: struct24;  // [sp-0x398], Other Possible Types: i192
    let v14: i64;  // [sp-0x380]
    let v15: i64;  // [sp-0x378]
    let v16: i64;  // [sp-0x370]
    let v17: i64;  // [sp-0x368]
    let v18: i128;  // [sp-0x360]
    let v19: i128;  // [sp-0x350]
    let v20: i64;  // [sp-0x340]
    let v21: struct64;  // [bp-0x338]
    let v22: i848;  // [sp-0x2f8], Other Possible Types: struct712, struct106
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v26: i64;  // r14
    let v27: i128;  // xmm0
    let v28: struct8;  // rax
    let v29: i64;  // rbp
    let v30: i64;  // r12
    let v31: i64;  // rdx

    v22 = uu_nl::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1);
    if v16 == 0x8000000000000000 {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v24;
    }
    v20 = *((&v3 as &char + 48) as &i64);
    v19 = *((&v3 as &char + 32) as &i128);
    v18 = *((&v3 as &char + 16) as &i128);
    v16 = v3;
    v17 = v4;
    v22 = <uu_nl::Settings as core::default::Default>::default();
    v13 = uu_nl::helper::parse_options(&v22, &v16);
    v25 = *((&v13 as &char + 16) as &i64);
    if *((&v13 as &char + 16) as &i64) {
        v3 = alloc::str::join_generic_copy(*((&v13 as &char + 8) as &i64), v25, &g_461d65, 1);
        v10 = v3;
        v8 = &v10;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = "Invalid arguments supplied.\n";
        v4 = 1;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        core::option::Option<T>::map_or_else();
        v3 = struct28 {
            field_0: v0
            field_16: v2
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v3);
        return v24;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v10 {
        v21 = struct64 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i128)
            field_32: *((&v10 as &char + 32) as &i128)
            field_48: *((&v10 as &char + 48) as &i128)
        };
        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
    } else {
        v26 = alloc::alloc::Global::alloc_impl();
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v5;
        v27 = v3;
        v0 = v27;
        *((v26 + 16) as &i64) = v2;
        *(v26 as &i128) = v27;
        v8 = alloc::slice::hack::into_vec(v26, 1);
    }
    v10 = 1;
    v11 = *((&v22 as &char + 96) as &i64);
    v12 = 0;
    v14 = v9;
    v15 = v14 + *((&v8 as &char + 16) as &i64) * 24;
    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v28 {
        return 0;
    }
    do {
        v29 = *((v28 + 8) as &i64);
        v30 = *((v28 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            v24 = uu_nl::nl(&v3, &v10, &v22);
            if v24 {
                return v24;
            }
        } else if std::path::Path::is_dir(v29, v30) as i8 {
            v0 = uucore::util_name();
            v1 = v31;
            eprint!("{:?}: ", &v0);
            v0 = v29;
            v1 = v30;
            eprintln!("{:?}: Is a directory", &v0);
            uucore::mods::error::set_exit_code(1);
        } else {
            v3 = std::fs::File::open(v29, v30) as u64;
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v28);
            if v0 {
                return v24;
            }
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            v24 = uu_nl::nl(&v3, &v10, &v22);
            if v24 {
                return v24;
            }
        }
    } while ((v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v28));
}
