fn uu_csplit::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i32;  // [bp-0x4a0]
    let v1: i192;  // [sp-0x498], Other Possible Types: struct24
    let v2: struct56;  // [sp-0x480], Other Possible Types: i64
    let v3: i64;  // [sp-0x478]
    let v4: i1408;  // [bp-0x448], Other Possible Types: Result<struct40, struct8>, struct64, struct24
    let v9: i512;  // [sp-0x398], Other Possible Types: struct64
    let v10: struct100;  // [sp-0x350], Other Possible Types: i800
    let v11: i64;  // [sp-0x2e8], Other Possible Types: Result<struct4, struct8>, struct16, struct712, struct56, struct44
    let v12: struct24;  // [sp-0x2e0], Other Possible Types: i128
    let v13: i128;  // [bp-0x2d8]
    let v14: i128;  // [bp-0x2d0]
    let v15: i64;  // [sp-0x2c8]
    let v19: i64;  // rax
    let v20: i64;  // rbx
    let v21: i64;  // rdi
    let v24: i32;  // edx
    let v25: i128;  // xmm0
    let v28: i64;  // rax
    let v29: i128;  // xmm0

    v11 = uu_csplit::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v4, &v11, a0, a1);
    if v2 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v19;
    }
    v2 = struct56 {
        field_0: v17
        field_8: v18
        field_16: v6
        field_32: v7
        field_48: v8
    };
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v2, "file");
    v20 = clap_builder::parser::error::MatchesError::unwrap("file", &v11);
    if !v20 {
        v21 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs";
    } else {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, "pattern");
        v4 = clap_builder::parser::error::MatchesError::unwrap("pattern", &v11);
        if !v4 {
            v21 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs";
        } else {
            v9 = v4;
            v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
            v10 = uu_csplit::CsplitOptions::new(&v2);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v20 + 8) as &i64), *((v20 + 16) as &i64), "-") as i8 {
                v11 = std::fs::File::open(v20);
                v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, v20);
                match v4 {
                    Ok(_) => {
                        return v19;
                    },
                    Err(_) => {
                        v11 = std::fs::File::metadata(&v0);
                        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, v20);
                    },
                }
                if v4 == 2 {
                    return v19;
                }
                if (0xf000 & *((&v4 as &char + 56) as &i32)) != 0x8000 {
                    v4 = <alloc::string::String as core::clone::Clone>::clone(v20);
                    v12 = v4;
                    v11 = 11;
                    alloc::boxed::Box<T>::new(&v11);
                    return v19;
                }
                v11 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v0);
                v4 = uu_csplit::csplit(&v10, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), &v11);
                v28 = v4;
                if v11 == 12 {
                    return 0;
                }
                v29 = *((&v4 as &char + 8) as &i128);
                v14 = *((&v4 as &char + 24) as &i128);
                v12 = v29;
                v11 = v28;
                alloc::boxed::Box<T>::new(&v11);
            } else {
                *(&v0 as &long long) = std::io::stdio::stdin();
                v4 = uu_csplit::csplit(&v10, *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64), std::io::stdio::Stdin::lock(&v0), v24 & 1);
                if v4 == 12 {
                    return 0;
                }
                v15 = *((&v4 as &char + 32) as &i64);
                v25 = v4;
                v13 = *((&v4 as &char + 16) as &i128);
                v11 = v25;
                alloc::boxed::Box<T>::new(&v11);
            }
            return v19;
        }
    }
    core::option::unwrap_failed(v21); /* do not return */
}
