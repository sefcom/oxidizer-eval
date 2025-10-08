fn uu_wc::Inputs::new(a1: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct9>;  // [bp-0xc8], Other Possible Types: struct32
    let v1: Result<struct40, struct16>;  // [bp-0xa8], Other Possible Types: struct56, struct64
    let v2: struct24;  // [bp-0xa8]
    let v3: core::fmt::rt::Argument;  // [bp-0xa0]
    let v4: struct64;  // [bp-0x58]
    let v5: struct64;  // [bp-0x58]
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rcx
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax

    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
    v4 = clap_builder::parser::error::MatchesError::unwrap(&v1);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v7 = clap_builder::parser::error::MatchesError::unwrap(&v1);
    if v4.field_0 as i64 {
        if v7 {
            v1 = v5;
            v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            core::option::unwrap(v8);
            v0 = uu_wc::WcError::files_disabled(*((v8 + 8) as &i64), *((v8 + 16) as &i64));
            return struct24 {
                field_0: 3
                field_8: alloc::boxed::Box<T>::new(&v0) as u64
                field_16: &g_4f9098
            };
        }
        core::iter::traits::iterator::Iterator::collect(a0 + 8, &v4);
        return struct8 {
            field_0: 1
        };
    } else {
        if v7 {
            v0 = <uu_wc::Input as core::convert::From<&T>>::from(*((v7 + 8) as &i64), *((v7 + 16) as &i64));
            v2 = uu_wc::Input::try_as_files0(&v0);
            v9 = v2.field_0;
            if (((0 ^ v9) & (0 ^ -(v9))) >> 63) as char {
                v12 = a0 + 8;
                *((v12 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
                *(v12 as &i128) = v0 as i128;
                v13 = 2;
            }
            v10 = v2.field_16;
            if v9 != 9223372036854775809 {
                return struct32 {
                    field_0: v11
                    field_8: v9
                    field_16: v3
                    field_24: v10
                };
            }
            return struct24 {
                field_0: 3
                field_8: v3
                field_16: v10
            };
        } else {
            return struct8 {
                field_0: 0
            };
        }
    }
}
