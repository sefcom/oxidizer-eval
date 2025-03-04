fn uu_csplit::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x4a0], Other Possible Types: struct4
    let v1: struct24;  // [sp-0x498]
    let v2: i64;  // [sp-0x480], Other Possible Types: struct56
    let v3: i64;  // [sp-0x478]
    let v4: Result<struct16, struct4>;  // [sp-0x448], Other Possible Types: struct24, char, struct64
    let v9: struct64;  // [sp-0x398]
    let v10: struct100;  // [sp-0x350]
    let v11: Result<struct4, struct8>;  // [sp-0x2e8], Other Possible Types: unsigned long, struct16, int, struct40, struct44, struct56, struct712
    let v12: struct24;  // [sp-0x2e0]
    let v13: iNone;  // [bp-0x2d8]
    let v14: i64;  // [sp-0x2c8]
    let v18: i64;  // r14
    let v19: i64;  // rbx
    let v20: i64;  // rdi
    let v23: i32;  // edx
    let v24: iNone;  // xmm0

    v11 = uu_csplit::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v11, a0, a1);
    if v2 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v18;
    }
    v2 = struct56 {
        field_0: v16
        field_8: v17
        field_16: *(&v6 as &i128)
        field_32: *(&v7 as &i128)
        field_48: *(&v8 as &i64)
    };
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "file");
    v19 = clap_builder::parser::error::MatchesError::unwrap("file", &v11);
    if !v19 {
        v20 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs";
    } else {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "pattern");
        v4 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v11);
        if !v4.field_0 as i64 {
            v20 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs";
        } else {
            v9 = v4;
            v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
            v10 = uu_csplit::CsplitOptions::new(&v2);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v19 + 8) as &i64), *((v19 + 16) as &i64), "-") as i8 {
                v11 = std::fs::File::open(v19);
                v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, v19);
                match v4 {
                    Ok(_) => {
                        return v18;
                    },
                    Err(_) => {
                        v0 = struct4 {
                            field_0: *((&v4 as &char + 8) as &i32)
                        };
                        v11 = std::fs::File::metadata(&v0);
                        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, v19);
                    },
                }
                if v4 as i32 == 2 {
                    return v18;
                }
                if (0xf000 & *((&v4 as &char + 56) as &i32)) != 0x8000 {
                    v4 = <alloc::string::String as core::clone::Clone>::clone(v19);
                    v12 = v4;
                    v11 = 11;
                    alloc::boxed::Box<T>::new(&v11);
                    return v18;
                }
                v11 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v0.field_0);
                v4 = uu_csplit::csplit(&v10, v1.field_8, v1.field_16, &v11);
                if v11 == 12 {
                    return 0;
                }
                v11 = struct40 {
                    field_0: v28
                    field_8: v29
                    field_24: *((&v4 as &char + 24) as &i128)
                };
                alloc::boxed::Box<T>::new(&v11);
            } else {
                *(&v0 as &long long) = std::io::stdio::stdin();
                v4 = uu_csplit::csplit(&v10, v1.field_8, v1.field_16, std::io::stdio::Stdin::lock(&v0), (v23 & 1) as u64);
                if v4 as i32 == 12 {
                    return 0;
                }
                v14 = *((&v4 as &char + 32) as &i64);
                v24 = v4 as i128;
                *(&v13 as &i128) = *((&v4 as &char + 16) as &i128);
                v11 = v24;
                alloc::boxed::Box<T>::new(&v11);
            }
            return v18;
        }
    }
    core::option::unwrap_failed(v20); /* do not return */
}
