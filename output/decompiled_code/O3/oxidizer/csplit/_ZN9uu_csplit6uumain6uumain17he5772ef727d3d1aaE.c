fn uu_csplit::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x4a0], Other Possible Types: struct4
    let v1: struct24;  // [sp-0x498], Other Possible Types: i192
    let v2: struct56;  // [sp-0x480]
    let v3: i64;  // [sp-0x478]
    let v4: i320;  // [sp-0x448], Other Possible Types: Result<struct56, struct16>, struct40, struct24, struct64
    let v5: i512;  // [bp-0x398]
    let v6: struct100;  // [sp-0x350], Other Possible Types: i800
    let v7: i5696;  // [sp-0x2e8], Other Possible Types: Result<struct40, struct16>, struct44, struct16, struct712, struct56
    let v8: i192;  // [bp-0x2e0]
    let v9: i128;  // [bp-0x2d8]
    let v11: i64;  // rax
    let v14: i64;  // rbx
    let v15: i64;  // rdx
    let v18: i128;  // xmm0
    let v21: i64;  // r9
    let v22: i128;  // xmm0

    v7 = uu_csplit::uu_app(a1, a2);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1);
    match v4 {
        Err(_) => {
            v11 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v11;
        },
        Ok(_) => {
            *(&v2.field_0 as &struct56) = struct56 {
                field_0: v12
                field_8: v13
                field_16: *((&v4 as &char + 16) as &i128)
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "file");
            v14 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
            if !v14 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "pattern");
            v4 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v7);
            if v4 {
                v5 = v4;
                v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v5, v15);
                v6 = uu_csplit::CsplitOptions::new(&v2);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v14 + 8) as &i64), *((v14 + 16) as &i64), "-") as i8 {
                    v7 = std::fs::File::open(v14, v15);
                    v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v7, v14);
                    if v4 {
                        return v11;
                    }
                    v0 = struct4 {
                        field_0: *((&v4 as &char + 8) as &i32)
                    };
                    v7 = std::fs::File::metadata(&v0);
                    v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v7, v14);
                    if v4 == 2 {
                        return v11;
                    }
                    if (0xf000 & *((&v4 as &char + 56) as &i32)) != 0x8000 {
                        v4 = <alloc::string::String as core::clone::Clone>::clone(v14);
                        v8 = v4;
                        v7 = 11;
                        v11 = alloc::boxed::Box<T>::new(&v7);
                        return v11;
                    }
                    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v0.field_0 as u64);
                    v4 = uu_csplit::csplit(&v6, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), &v7, v21);
                    if v4 == 12 {
                        return 0;
                    }
                    v7.field_32 = (stack_base)[1064] as i64;
                    v22 = v4;
                    v9 = *((&v4 as &char + 16) as &i128);
                    v7 = v22;
                    v11 = alloc::boxed::Box<T>::new(&v7);
                } else {
                    *(&v0 as &long long) = std::io::stdio::stdin();
                    v4 = uu_csplit::csplit(&v6, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), std::io::stdio::Stdin::lock(&v0), (v15 as u32 & 1) as u64);
                    if v4 == 12 {
                        return 0;
                    }
                    v7.field_32 = (stack_base)[1064] as i64;
                    v18 = v4;
                    v9 = *((&v4 as &char + 16) as &i128);
                    v7 = v18;
                    v11 = alloc::boxed::Box<T>::new(&v7);
                }
                return v11;
            }
        },
    }
}
