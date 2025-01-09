fn uu_nl::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x468], Other Possible Types: Result<struct16, struct4>
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: i64;  // [bp-0x448], Other Possible Types: struct24, struct44, struct48, struct28, struct56, Result<struct4, struct8>
    let v4: i64;  // [sp-0x440]
    let v5: i8;  // [bp-0x438]
    let v6: i64;  // [bp-0x430]
    let v7: i64;  // [bp-0x428]
    let v8: i8;  // [bp-0x418]
    let v9: i64;  // [sp-0x400], Other Possible Types: struct24
    let v10: i64;  // [sp-0x3f8]
    let v11: i64;  // [sp-0x3d8], Other Possible Types: struct64, struct24
    let v12: i64;  // [sp-0x3d0]
    let v13: i64;  // [sp-0x3c8]
    let v14: i192;  // [sp-0x398], Other Possible Types: struct24
    let v15: i64;  // [sp-0x380]
    let v16: i64;  // [sp-0x378]
    let v17: i64;  // [sp-0x370]
    let v18: i64;  // [sp-0x368]
    let v19: i128;  // [sp-0x360]
    let v20: i128;  // [sp-0x350]
    let v21: i64;  // [sp-0x340]
    let v22: i512;  // [sp-0x338], Other Possible Types: struct64
    let v23: i5696;  // [sp-0x2f8], Other Possible Types: struct106, struct712
    let v25: i64;  // rax
    let v26: i64;  // rdx
    let v28: i64;  // r14
    let v29: i128;  // xmm0
    let v30: struct8;  // rax
    let v31: i64;  // rbp
    let v32: i64;  // r12
    let v33: i64;  // rdx

    v23 = uu_nl::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v23, a0, a1);
    if v17 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
        return v25;
    }
    v21 = v8;
    v20 = v7;
    v19 = v5;
    v17 = v3;
    v18 = v4;
    v23 = <uu_nl::Settings as core::default::Default>::default();
    v14 = uu_nl::helper::parse_options(&v23, &v17);
    v26 = *((&v14 as &char + 16) as &i64);
    if *((&v14 as &char + 16) as &i64) {
        v3 = alloc::str::join_generic_copy(*((&v14 as &char + 8) as &i64), v26, "\n");
        v11 = v3;
        v9 = &v11;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = struct28 {
            field_0: "Invalid arguments supplied.\n"
            field_16: &v9
            field_24: <UNKNOWN>
        };
        v7 = 0;
        v6 = 1;
        core::option::Option<T>::map_or_else();
        alloc::boxed::Box<T>::new(&v3);
        return v25;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, "file");
    v11 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v11 {
        v22 = v11;
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22);
    } else {
        v28 = alloc::alloc::Global::alloc_impl();
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v5;
        v29 = v3;
        v0 = v29;
        *((v28 + 16) as &i64) = v2;
        *(v28 as &i128) = v29;
        v9 = alloc::slice::hack::into_vec(v28, 1);
    }
    v11 = 1;
    v12 = *((&v23 as &char + 96) as &i64);
    v13 = 0;
    v15 = v10;
    v16 = v15 + *((&v9 as &char + 16) as &i64) * 24;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v30 {
        return 0;
    }
    do {
        v31 = *((v30 + 8) as &i64);
        v32 = *((v30 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v32, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            if uu_nl::nl(&v3, &v11, &v23) {
                goto LABEL_55a7e7;
            } else {
                continue;
            }
        }
        if std::path::Path::is_dir(v31, v32) as i8 {
            v0 = uucore::util_name();
            v1 = v33;
            eprint!("{}: ", &v0);
            v0 = v31;
            v1 = v32;
            eprintln!("{}: Is a directory", &v0);
            uucore::mods::error::set_exit_code(1);
            continue;
        }
        v3 = std::fs::File::open(v31, v32);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v30);
        if v0 {
LABEL_55a7e7:
            return v25;
        }
        v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
        if (v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v30) {
            goto LABEL_55a7e7;
        }
    } while ((v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v30));
}
