fn uu_wc::Inputs::new(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x118], Other Possible Types: struct32, Result<struct16, struct1>
    let v2: i512;  // [sp-0xf8], Other Possible Types: struct64
    let v3: i448;  // [sp-0xb8], Other Possible Types: Result<struct40, struct16>, Option<struct24>, struct56
    let v4: i512;  // [bp-0x68]
    let v6: i64;  // rax
    let v7: i64;  // rsi
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rdx
    let v14: i64;  // rcx

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
    v2 = clap_builder::parser::error::MatchesError::unwrap("files", &v3);
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files0-from");
    v6 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v3);
    if v2 {
        if !v6 {
            v4 = v2;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0 + 8, &v4, v10);
            *(a0 as &i64) = 1;
            return struct8 {
                field_0: 0
            };
        }
        v3 = v2;
        v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v3, v7, v8);
        if v9 {
            v0 = uu_wc::WcError::files_disabled(*((v9 + 8) as &i64), *((v9 + 16) as &i64));
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&i64) = &g_531fa0;
            *(a0 as &i64) = 3;
            return struct8 {
                field_0: 0
            };
        }
        core::option::unwrap_failed(); /* do not return */
    } else {
        if v6 {
            v0 = <uu_wc::Input as core::convert::From<&T>>::from(v6, v11);
            v3 = uu_wc::Input::try_as_files0(&v0, v11);
            v12 = v3;
            match v3 {
                None => {
                    return struct8 {
                        field_0: 0
                    };
                },
                Some(_) => {
                    v13 = *((&v3 as &char + 8) as &i64);
                    v14 = *((&v3 as &char + 16) as &i64);
                    if v12 == 9223372036854775809 {
                        *((a0 + 8) as &i64) = v13;
                        *((a0 + 16) as &i64) = v14;
                        *(a0 as &i64) = 3;
                    } else {
                        *(a0 as &i64) = 1;
                        *((a0 + 8) as &i64) = v12;
                        *((a0 + 16) as &i64) = v13;
                        *((a0 + 24) as &i64) = v14;
                    }
                    return struct8 {
                        field_0: 0
                    };
                },
            }
        } else {
            return struct8 {
                field_0: 0
            };
        }
    }
}
