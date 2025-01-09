fn uu_wc::Inputs::new(a0: &Option<Result<struct24, struct16>>, a1: u32) -> u64 {
    let v0: i136;  // [sp-0x118], Other Possible Types: Result<struct16, struct1>, struct32
    let v1: i512;  // [sp-0xf8], Other Possible Types: struct64
    let v2: i192;  // [sp-0xb8], Other Possible Types: struct64, Option<struct24>, struct56, Result<struct40, struct8>
    let v3: struct64;  // [bp-0x68]
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rcx

    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1, "files");
    v1 = clap_builder::parser::error::MatchesError::unwrap("files", &v2);
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "files0-from");
    v5 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v2);
    if v1 {
        if !v5 {
            v3 = struct64 {
                field_0: v1
                field_16: *((&v1 as &char + 16) as &i128)
                field_32: *((&v1 as &char + 32) as &i128)
                field_48: *((&v1 as &char + 48) as &i128)
            };
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0 + 8, &v3);
            return struct8 {
                field_0: 1
            };
        }
        v2 = struct64 {
            field_0: v1
            field_16: *((&v1 as &char + 16) as &i128)
            field_32: *((&v1 as &char + 32) as &i128)
            field_48: *((&v1 as &char + 48) as &i128)
        };
        v6 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v2);
        if v6 {
            v0 = uu_wc::WcError::files_disabled(*((v6 + 8) as &i64), *((v6 + 16) as &i64));
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((a0 + 16) as &&i64) = &g_530f90;
            *(a0 as &i64) = 3;
        }
        core::option::unwrap_failed("src/uu/wc/src/wc.rs"); /* do not return */
    } else {
        return struct8 {
            field_0: 0
        };
        v0 = <uu_wc::Input as core::convert::From<&T>>::from(v5);
        v2 = uu_wc::Input::try_as_files0(&v0);
        v7 = v2;
        match v2 {
            None => {
                return struct32 {
                    field_0: 2
                    field_8: v0
                    field_24: v0
                };
            },
            Some(_) => {
                v8 = *((&v2 as &char + 8) as &i64);
                v9 = *((&v2 as &char + 16) as &i64);
                if v7 != 9223372036854775809 {
                    return struct32 {
                        field_0: 1
                        field_8: v7
                        field_16: v8
                        field_24: v9
                    };
                }
                return struct24 {
                    field_0: 3
                    field_8: v8
                    field_16: v9
                };
            },
        }
    }
}
