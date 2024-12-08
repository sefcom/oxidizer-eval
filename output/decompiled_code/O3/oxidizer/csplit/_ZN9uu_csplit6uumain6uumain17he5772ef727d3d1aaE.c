fn uu_csplit::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x4a0], Other Possible Types: struct4
    let v1: i192;  // [sp-0x498], Other Possible Types: struct24
    let v2: struct56;  // [sp-0x480], Other Possible Types: i64
    let v3: i64;  // [sp-0x478]
    let v4: i128;  // [bp-0x448], Other Possible Types: struct40, Result<struct176, struct24>, struct24, struct64
    let v8: struct64;  // [bp-0x398]
    let v9: i800;  // [sp-0x350], Other Possible Types: struct100
    let v10: i5696;  // [sp-0x2e8], Other Possible Types: Result<struct40, struct16>, struct16, struct712, struct56, struct44
    let v11: i128;  // [bp-0x2e0]
    let v12: i128;  // [bp-0x2d8]
    let v14: i64;  // rax
    let v17: i64;  // rbx
    let v18: i64;  // rdx
    let v21: i128;  // xmm0
    let v24: i64;  // r9
    let v25: i128;  // xmm0

    v10 = uu_csplit::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v10, a0, a1);
    if v2 == 0x8000000000000000 {
        v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v14;
    }
    *(&v2.field_0 as &struct56) = struct56 {
        field_0: v15
        field_8: v16
        field_16: v5
        field_32: v6
        field_48: v7
    };
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "file");
    v17 = clap_builder::parser::error::MatchesError::unwrap("file", &v10);
    if !v17 {
        core::option::unwrap_failed(); /* do not return */
    }
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "pattern");
    v4 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v10);
    if v4 {
        v8 = struct64 {
            field_0: v4
            field_16: *((&v4 as &char + 16) as &i128)
            field_32: *((&v4 as &char + 32) as &i128)
            field_48: *((&v4 as &char + 48) as &i128)
        };
        v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v8, v18);
        v9 = uu_csplit::CsplitOptions::new(&v2);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v17 + 8) as &i64), *((v17 + 16) as &i64), "-") as i8 {
            v10 = std::fs::File::open(v17, v18);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, v17);
            if v4 {
                return v14;
            }
            v0 = struct4 {
                field_0: *((&v4 as &char + 8) as &i32)
            };
            v10 = std::fs::File::metadata(&v0);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, v17);
            if v4 == 2 {
                return v14;
            }
            if (0xf000 & *((&v4 as &char + 56) as &i32)) != 0x8000 {
                v4 = <alloc::string::String as core::clone::Clone>::clone(v17);
                v10.field_24 = (stack_base)[1080] as i64;
                v11 = v4;
                v10 = 11;
                v14 = alloc::boxed::Box<T>::new(&v10);
                return v14;
            }
            v10 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v0.field_0);
            v4 = uu_csplit::csplit(&v9, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), &v10, v24);
            if v4 == 12 {
                return 0;
            }
            v10.field_32 = (stack_base)[1064] as i64;
            v25 = v4;
            v12 = *((&v4 as &char + 16) as &i128);
            v10 = v25;
            v14 = alloc::boxed::Box<T>::new(&v10);
        } else {
            *(&v0 as &long long) = std::io::stdio::stdin();
            v4 = uu_csplit::csplit(&v9, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), std::io::stdio::Stdin::lock(&v0), v18 as u32 & 1);
            if v4 == 12 {
                return 0;
            }
            v10.field_32 = (stack_base)[1064] as i64;
            v21 = v4;
            v12 = *((&v4 as &char + 16) as &i128);
            v10 = v21;
            v14 = alloc::boxed::Box<T>::new(&v10);
        }
        return v14;
    }
}
