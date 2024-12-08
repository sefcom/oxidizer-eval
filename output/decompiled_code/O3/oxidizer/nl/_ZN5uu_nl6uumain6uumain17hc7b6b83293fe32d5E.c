fn uu_nl::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x468], Other Possible Types: Result<struct16, struct12>, struct24
    let v1: i64;  // [sp-0x460]
    let v2: i64;  // [sp-0x458]
    let v3: i352;  // [bp-0x448], Other Possible Types: struct24, Result<struct4, struct8>, struct44, struct40, struct28, struct48, struct56
    let v4: i64;  // [sp-0x440]
    let v5: i8;  // [bp-0x438]
    let v6: i8;  // [bp-0x428]
    let v7: i8;  // [bp-0x418]
    let v8: i64;  // [sp-0x400], Other Possible Types: struct24
    let v9: i64;  // [sp-0x3f8]
    let v10: i64;  // [bp-0x3d8], Other Possible Types: struct64
    let v11: i64;  // [sp-0x3c8]
    let v12: i192;  // [sp-0x398], Other Possible Types: struct24
    let v13: i64;  // [sp-0x380]
    let v14: i64;  // [sp-0x378]
    let v15: i64;  // [sp-0x370]
    let v16: i64;  // [sp-0x368]
    let v17: i128;  // [sp-0x360]
    let v18: i128;  // [sp-0x350]
    let v19: i64;  // [sp-0x340]
    let v20: struct64;  // [bp-0x338]
    let v21: i5696;  // [sp-0x2f8], Other Possible Types: struct106, struct712
    let v23: i64;  // rax
    let v24: i64;  // rcx
    let v25: i64;  // r8
    let v26: i64;  // r9
    let v27: i64;  // rdx
    let v28: i64;  // rdx
    let v29: i64;  // r14
    let v30: i128;  // xmm0
    let v31: struct8;  // rax
    let v32: i64;  // rbp
    let v33: i64;  // r12

    v21 = uu_nl::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v21, a0, a1);
    if v15 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v23;
    }
    v19 = v7;
    v18 = v6;
    v17 = v5;
    v15 = v3;
    v16 = v4;
    v21 = <uu_nl::Settings as core::default::Default>::default();
    v12 = uu_nl::helper::parse_options(&v21, &v15, v24, v25, v26);
    v27 = *((&v12 as &char + 16) as &i64);
    if *((&v12 as &char + 16) as &i64) {
        v3 = alloc::str::join_generic_copy(*((&v12 as &char + 8) as &i64), v27, &g_461eb5, 1);
        v11 = v3.field_16;
        v10 = v3;
        v8 = &v10;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = struct40 {
            field_0: "Invalid arguments supplied.\n"
            field_8: 1
            field_16: &v8
            field_24: 1
            field_32: 0
        };
        v0 = core::option::Option<T>::map_or_else(&v3);
        v3 = struct28 {
            field_0: v0
            field_16: v2
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v3);
        return v23;
    }
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, "file");
    v10 = clap_builder::parser::error::MatchesError::unwrap("file", &v3);
    if v10 {
        v20 = struct64 {
            field_0: v10
            field_16: *((&v10 as &char + 16) as &i128)
            field_32: *((&v10 as &char + 32) as &i128)
            field_48: *((&v10 as &char + 48) as &i128)
        };
        v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20, v28);
    } else {
        v29 = alloc::alloc::Global::alloc_impl(24);
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v3.field_16;
        v30 = v3;
        v0 = v30;
        *((v29 + 16) as &i64) = v2;
        *(v29 as &i128) = v30;
        v8 = alloc::slice::hack::into_vec(v29, 1);
    }
    v10 = 1;
    v10.8 = (stack_base)[664] as i64;
    v10.field_16 = 0;
    v13 = v8.8;
    v14 = v13 + *((&v8 as &char + 16) as &i64) * 24;
    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v31 {
        return 0;
    }
    do {
        v32 = *((v31 + 8) as &i64);
        v33 = *((v31 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, "-") as i8 {
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
            v23 = uu_nl::nl(&v3, &v10, &v21);
            if v23 {
                return v23;
            }
        } else if std::path::Path::is_dir(v32, v33) as i8 {
            v0 = uucore::util_name();
            v1 = v28;
            eprint!("{:?}: ", &v0);
            v0 = v32;
            v1 = v33;
            eprintln!("{:?}: Is a directory", &v0);
            uucore::mods::error::set_exit_code();
        } else {
            v3 = std::fs::File::open(v32, v33);
            v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, v31);
            if v0 {
                return v23;
            }
            v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v0 as &char + 8) as &i32));
            v23 = uu_nl::nl(&v3, &v10, &v21);
            if v23 {
                return v23;
            }
        }
    } while ((v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v31));
}
