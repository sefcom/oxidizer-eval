fn uu_nl::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x468], Other Possible Types: struct24, Result<struct16, struct12>
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: i192;  // [sp-0x448], Other Possible Types: Result<struct4, struct8>, struct24, struct56, struct44, struct48
    let v4: i64;  // [sp-0x440]
    let v5: i64;  // [sp-0x438]
    let v6: i64;  // [bp-0x430]
    let v7: i64;  // [sp-0x428]
    let v8: i192;  // [sp-0x400], Other Possible Types: struct24
    let v9: i64;  // [sp-0x3f8]
    let v10: i192;  // [bp-0x3d8], Other Possible Types: struct64
    let v11: i64;  // [sp-0x3d0]
    let v12: i64;  // [sp-0x3c8]
    let v13: struct24;  // [sp-0x398], Other Possible Types: i192
    let v14: i64;  // [sp-0x380]
    let v15: i64;  // [sp-0x378]
    let v16: i64;  // [sp-0x370]
    let v17: i64;  // [sp-0x368]
    let v18: i512;  // [bp-0x338]
    let v19: i5696;  // [sp-0x2f8], Other Possible Types: struct712, struct106
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v23: i64;  // r8
    let v24: i64;  // r9
    let v25: i64;  // rdx
    let v26: i64;  // rdx
    let v27: i64;  // r14
    let v28: i128;  // xmm0
    let v29: struct8;  // rax
    let v30: i64;  // rbp
    let v31: i64;  // r12

    v19 = uu_nl::uu_app(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if v16 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v21;
    }
    v16 = v3;
    v19 = <uu_nl::Settings as core::default::Default>::default();
    v13 = uu_nl::helper::parse_options(&v19, &v16, v22, v23, v24);
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
        v0 = core::option::Option<T>::map_or_else(&v3);
        v3 = v0;
        alloc::boxed::Box<T>::new(&v3);
        return v21;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v10 {
        v18 = v10;
        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18, v26);
    } else {
        v27 = alloc::alloc::Global::alloc_impl(24);
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v5;
        v28 = v3;
        v0 = v28;
        *((v27 + 16) as &i64) = v2;
        *(v27 as &i128) = v28;
        v8 = alloc::slice::hack::into_vec(v27, 1);
    }
    v10 = 1;
    v11 = *((&v19 as &char + 96) as &i64);
    v12 = 0;
    v14 = v9;
    v15 = v14 + *((&v8 as &char + 16) as &i64) * 24;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v29 {
        return 0;
    }
    do {
        v30 = *((v29 + 8) as &i64);
        v31 = *((v29 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v30, v31, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            v21 = uu_nl::nl(&v3, &v10, &v19);
            if v21 {
                return v21;
            }
        } else if std::path::Path::is_dir(v30, v31) as i8 {
            v0 = uucore::util_name();
            v1 = v26;
            eprint!("{:?}: ", &v0);
            v0 = v30;
            v1 = v31;
            eprintln!("{:?}: Is a directory", &v0);
            uucore::mods::error::set_exit_code();
        } else {
            v3 = std::fs::File::open(v30, v31);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v29);
            if v0 {
                return v21;
            }
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            v21 = uu_nl::nl(&v3, &v10, &v19);
            if v21 {
                return v21;
            }
        }
    } while ((v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v29));
}
