fn uu_nl::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct16, struct4>;  // [sp-0x468], Other Possible Types: unsigned long, struct24, int
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: struct24;  // [sp-0x448], Other Possible Types: Result<struct4, struct8>, int, struct56, struct40, struct44, unsigned long, char, struct48
    let v4: i64;  // [sp-0x440]
    let v5: i64;  // [sp-0x438], Other Possible Types: char
    let v6: i32;  // [bp-0x430]
    let v7: i8;  // [bp-0x428]
    let v8: i8;  // [bp-0x418]
    let v9: i64;  // [sp-0x400]
    let v10: struct24;  // [sp-0x400], Other Possible Types: int
    let v11: i64;  // [sp-0x3f8]
    let v12: i64;  // [sp-0x3d8], Other Possible Types: struct64, struct24
    let v13: i64;  // [sp-0x3d0]
    let v14: i64;  // [sp-0x3c8]
    let v15: struct24;  // [sp-0x398]
    let v16: iNone;  // [sp-0x380]
    let v17: i64;  // [sp-0x370]
    let v18: i64;  // [sp-0x368]
    let v19: iNone;  // [sp-0x360]
    let v20: iNone;  // [sp-0x350]
    let v21: i64;  // [sp-0x340]
    let v22: struct64;  // [sp-0x338]
    let v23: struct106;  // [sp-0x2f8], Other Possible Types: struct712
    let v25: i64;  // r15
    let v26: i64;  // rdx
    let v28: i64;  // r14
    let v29: iNone;  // xmm0
    let v30: i64;  // rax
    let v31: i64;  // r15
    let v32: i64;  // rbp
    let v33: i64;  // r12
    let v34: i64;  // rdx

    v23 = uu_nl::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v23, a0, a1);
    if v17 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
        return v25;
    }
    v21 = *(&v8 as &i64);
    v20 = *(&v7 as &i128);
    v19 = *(&v5 as &i128);
    v17 = v3;
    v18 = v4;
    v23 = <uu_nl::Settings as core::default::Default>::default();
    v15 = uu_nl::helper::parse_options(&v23, &v17);
    v26 = v15.field_16;
    if v15.field_16 {
        v3 = alloc::str::join_generic_copy(*((&v15.field_0 as &char + 8) as &i64), v26, "
");
        v12 = v3;
        v9 = &v12;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = struct40 {
            field_0: "Invalid arguments supplied.\n"
            field_8: 1
            field_16: &v9
            field_24: 1
            field_32: 0
        };
        v0 = core::option::Option<T>::map_or_else(&v3);
        *(&v6 as &i32) = 1;
        alloc::boxed::Box<T>::new(&v3);
        return v25;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, "file");
    v12 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v12 {
        v22 = v12;
        v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22);
    } else {
        v28 = alloc::alloc::Global::alloc_impl(24);
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v5;
        v29 = v3.field_0;
        v0 = v29;
        *((v28 + 16) as &unsigned long) = v2;
        *(v28 as void*) = v29;
        v10 = alloc::slice::hack::into_vec(v28, 1);
    }
    v12 = 1;
    v13 = v23.field_120;
    v14 = 0;
    v16 = (&v10)[8] as i128;
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
    if !v30 {
        return 0;
    }
    v31 = v30;
    do {
        v32 = *((v31 + 8) as &i64);
        v33 = *((v31 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            if uu_nl::nl(&v3, &v12, &v23) {
                goto LABEL_55a7e7;
            } else {
                continue;
            }
        }
        if std::path::Path::is_dir(v32, v33) as i8 {
            v1 = v34;
            v0 = v32;
            v1 = v33;
            show_error!("{}: Is a directory", &v0);
            uucore::mods::error::set_exit_code(1);
            continue;
        }
        v3 = std::fs::File::open(v32, v33);
        v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v31);
        if v0 {
LABEL_55a7e7:
            return v25;
        }
        v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
        if !(!uu_nl::nl(&v3, &v12, &v23)) {
            goto LABEL_55a7e7;
        }
    } while ((v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16), v31));
}
