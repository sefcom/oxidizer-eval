fn uu_csplit::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x4a0], Other Possible Types: struct4
    let v1: i192;  // [sp-0x498], Other Possible Types: struct24
    let v2: struct56;  // [sp-0x480]
    let v3: i64;  // [sp-0x478]
    let v4: i1408;  // [sp-0x448], Other Possible Types: Result<struct176, struct24>, struct40, struct64, struct24
    let v5: i512;  // [bp-0x398]
    let v6: struct100;  // [sp-0x350], Other Possible Types: i800
    let v7: i64;  // [sp-0x2e8], Other Possible Types: Result<struct4, struct8>, struct712, struct56, struct16, struct44
    let v8: i128;  // [bp-0x2e0]
    let v9: i128;  // [bp-0x2d8]
    let v10: i128;  // [bp-0x2d0]
    let v11: i64;  // [sp-0x2c8]
    let v13: i64;  // r8
    let v14: i64;  // r9
    let v15: i64;  // rax
    let v18: i64;  // rbx
    let v19: i64;  // rdx
    let v22: i128;  // xmm0
    let v25: i64;  // rax
    let v26: i128;  // xmm0

    v7 = uu_csplit::uu_app(a1, a2);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v7, a0, a1, v13, v14);
    match v4 {
        Err(_) => {
            v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            return v15;
        },
        Ok(_) => {
            *(&v2.field_0 as &struct56) = struct56 {
                field_0: v16
                field_8: v17
                field_16: *((&v4 as &char + 16) as &i128)
                field_32: *((&v4 as &char + 32) as &i128)
                field_48: *((&v4 as &char + 48) as &i64)
            };
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "file");
            v18 = clap_builder::parser::error::MatchesError::unwrap("file", &v7);
            if !v18 {
                core::option::unwrap_failed(); /* do not return */
            }
            v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "pattern");
            v4 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v7);
            if v4 {
                v5 = v4;
                v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v5, v19);
                v6 = uu_csplit::CsplitOptions::new(&v2);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v18 + 8) as &i64), *((v18 + 16) as &i64), "-") as i8 {
                    v7 = std::fs::File::open(v18, v19);
                    v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v7, v18);
                    if v4 {
                        return v15;
                    }
                    v0 = struct4 {
                        field_0: *((&v4 as &char + 8) as &i32)
                    };
                    v7 = std::fs::File::metadata(&v0);
                    v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v7, v18);
                    if v4 == 2 {
                        return v15;
                    }
                    if (0xf000 & *((&v4 as &char + 56) as &i32)) != 0x8000 {
                        v4 = <alloc::string::String as core::clone::Clone>::clone(v18);
                        v8 = v4;
                        v7 = 11;
                        v15 = alloc::boxed::Box<T>::new(&v7);
                        return v15;
                    }
                    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v0.field_0 as u64);
                    v4 = uu_csplit::csplit(&v6, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), &v7, v14);
                    v25 = v4;
                    if v7 == 12 {
                        return 0;
                    }
                    v26 = *((&v4 as &char + 8) as &i128);
                    v10 = *((&v4 as &char + 24) as &i128);
                    v8 = v26;
                    v7 = v25;
                    v15 = alloc::boxed::Box<T>::new(&v7);
                } else {
                    *(&v0 as &long long) = std::io::stdio::stdin();
                    v4 = uu_csplit::csplit(&v6, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), std::io::stdio::Stdin::lock(&v0), (v19 as u32 & 1) as u64);
                    if v4 == 12 {
                        return 0;
                    }
                    v11 = *((&v4 as &char + 32) as &i64);
                    v22 = v4;
                    v9 = *((&v4 as &char + 16) as &i128);
                    v7 = v22;
                    v15 = alloc::boxed::Box<T>::new(&v7);
                }
                return v15;
            }
        },
    }
}
