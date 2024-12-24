fn uu_nl::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x468], Other Possible Types: struct24, Result<struct16, struct12>
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: i352;  // [sp-0x448], Other Possible Types: struct24, Result<struct4, struct8>, struct44, struct56, struct48
    let v4: i64;  // [bp-0x430]
    let v5: i64;  // [sp-0x428]
    let v6: struct24;  // [sp-0x400], Other Possible Types: i64
    let v7: i64;  // [sp-0x3f8]
    let v8: i192;  // [bp-0x3d8], Other Possible Types: struct64
    let v9: i192;  // [sp-0x398], Other Possible Types: struct24
    let v10: i64;  // [sp-0x380]
    let v11: i64;  // [sp-0x378]
    let v12: i64;  // [sp-0x370]
    let v13: i64;  // [sp-0x368]
    let v14: i512;  // [bp-0x338]
    let v15: i848;  // [sp-0x2f8], Other Possible Types: struct712, struct106
    let v17: i64;  // rax
    let v18: i64;  // rcx
    let v19: i64;  // r8
    let v20: i64;  // r9
    let v21: i64;  // rdx
    let v22: i64;  // rdx
    let v23: i64;  // r14
    let v24: i128;  // xmm0
    let v25: struct8;  // rax
    let v26: i64;  // rbp
    let v27: i64;  // r12

    v15 = uu_nl::uu_app(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v12 == 0x8000000000000000 {
        v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v17;
    }
    v12 = v3;
    v15 = <uu_nl::Settings as core::default::Default>::default();
    v9 = uu_nl::helper::parse_options(&v15, &v12, v18, v19, v20);
    v21 = *((&v9 as &char + 16) as &i64);
    if *((&v9 as &char + 16) as &i64) {
        v3 = alloc::str::join_generic_copy(*((&v9 as &char + 8) as &i64), v21, &g_461eb5, 1);
        v8 = v3;
        v6 = &v8;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = "Invalid arguments supplied.\n";
        v3.field_8 = 1;
        v5 = 0;
        v3.field_16 = stack_base + -0x400;
        v4 = 1;
        v0 = core::option::Option<T>::map_or_else(&v3);
        v3 = v0;
        alloc::boxed::Box<T>::new(&v3);
        return v17;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "file");
    v8 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v8 {
        v14 = v8;
        v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v14, v22);
    } else {
        v23 = alloc::alloc::Global::alloc_impl(24);
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v3.field_16;
        v24 = v3;
        v0 = v24;
        *((v23 + 16) as &i64) = v2;
        *(v23 as &i128) = v24;
        v6 = alloc::slice::hack::into_vec(v23, 1);
    }
    v8 = 1;
    v8.8 = (stack_base)[664] as i64;
    v8.field_16 = 0;
    v10 = v6.field_8;
    v11 = v10 + *((&v6 as &char + 16) as &i64) * 24;
    v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v25 {
        return 0;
    }
    do {
        v26 = *((v25 + 8) as &i64);
        v27 = *((v25 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v26, v27, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            v17 = uu_nl::nl(&v3, &v8, &v15);
            if v17 {
                return v17;
            }
        } else if std::path::Path::is_dir(v26, v27) as i8 {
            v0 = uucore::util_name();
            v1 = v22;
            eprint!("{:?}: ", &v0);
            v0 = v26;
            v1 = v27;
            eprintln!("{:?}: Is a directory", &v0);
            uucore::mods::error::set_exit_code();
        } else {
            v3 = std::fs::File::open(v26, v27);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v25);
            if v0 {
                return v17;
            }
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            v17 = uu_nl::nl(&v3, &v8, &v15);
            if v17 {
                return v17;
            }
        }
    } while ((v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v25));
}
