fn uu_wc::Inputs::new(a1: i64) -> : struct32 {
    let a0: u64;  // rsi
    let v0: Result<struct24, struct9>;  // [bp-0x118], Other Possible Types: struct32
    let v1: struct64;  // [bp-0xf8]
    let v2: struct64;  // [bp-0xf8]
    let v3: struct56;  // [bp-0xb8], Other Possible Types: struct64
    let v4: struct24;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: struct64;  // [bp-0x68]
    let v8: u64;  // r8
    let v9: void*;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rdi
    let v12: i64;  // rdi
    let v13: u64;  // rax
    let v14: u64;  // rcx
    let v15: i64;  // rdi
    let v16: i64;  // rdi
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "files");
    v1 = clap_builder::parser::error::MatchesError::unwrap("files", &v3);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "files0-from", v8);
    v9 = clap_builder::parser::error::MatchesError::unwrap("files0-from", &v3);
    if v1.field_0 as i64 {
        if v9 {
            v3 = v2;
            v10 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v3);
            if !v10 {
                core::option::unwrap_failed(); /* do not return */
            }
            v0 = uu_wc::WcError::files_disabled(*((v10 + 8) as &i64), *((v10 + 16) as &i64));
            *((v16 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
            *((v16 + 16) as &&u8) = &g_530f90;
            *(v16 as &i64) = 3;
            return;
        } else {
            v6 = v2;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v11 + 8, &v6);
            *(v11 as &i64) = 1;
            return;
        }
    } else {
        if v9 {
            v0 = <uu_wc::Input as core::convert::From<&T>>::from(v9);
            v4 = uu_wc::Input::try_as_files0(&v0);
            v13 = v4.field_0;
            if v13 == 0x8000000000000000 {
                *((v15 + 24) as &i64) = *((&v0 as &char + 16) as &i64);
                *((v15 + 8) as &i128) = v0 as i128;
                *(v15 as &i64) = 2;
                return;
            }
            v14 = v4.field_16;
            if v13 == 9223372036854775809 {
                *((v17 + 8) as &u64) = v5;
                *((v17 + 16) as &u64) = v14;
                *(v17 as &i64) = 3;
            } else {
                *(v18 as &i64) = 1;
                *((v18 + 8) as &u64) = v13;
                *((v18 + 16) as &u64) = v5;
                *((v18 + 24) as &u64) = v14;
            }
            return;
        } else {
            *(v12 as &i64) = 0;
            return;
        }
    }
}
