fn uu_printenv::uumain::uumain(a0: u64, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x458]
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i64;  // [sp-0x438]
    let v4: i64;  // [sp-0x430]
    let v5: i128;  // [sp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i192;  // [sp-0x408], Other Possible Types: Option<struct48>, struct24, Result<struct24, struct8>
    let v8: i64;  // [bp-0x3f0]
    let v9: i128;  // [sp-0x3d8], Other Possible Types: struct32
    let v10: i128;  // [sp-0x3c8]
    let v11: i512;  // [sp-0x3b8], Other Possible Types: struct64
    let v12: i64;  // [sp-0x378]
    let v13: i64;  // [sp-0x370]
    let v14: Option<struct24>;  // [sp-0x368], Other Possible Types: i192
    let v15: i8;  // [bp-0x350]
    let v16: i8;  // [bp-0x340]
    let v17: struct56;  // [sp-0x330], Other Possible Types: i448
    let v18: i5696;  // [sp-0x2f8], Other Possible Types: struct56, struct24, struct712, struct64
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i64;  // rbx
    let v33: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i128;  // xmm0

    v18 = uu_printenv::uu_app();
    v17 = clap_builder::builder::command::Command::get_matches_from(&v18, a0, a1);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v17, _ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590, &v18);
    if !v11 || (v18 = struct64 {
    field_0: v20
    field_16: v21
    field_32: *((&v11 as &char + 32) as &i128)
    field_48: *((&v11 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v18), v23 = *((&v7 as &char + 8) as &i128), v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u512 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u128 as u256, v18 = v23, v2 == 0x8000000000000000) {
        v2 = 0;
        v3 = 8;
        v4 = 0;
    } else {
        v26 = v18;
        v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
        v3 = v26;
        v2 = v7;
    }
    v12 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN11uu_printenv8OPT_NULL17h6012a15648cb6e92E, g_503580) as i8 ? &g_4123b0 : &g_412242);
    v13 = 1;
    if v4 {
        v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v14 == 0x8000000000000000 {
            return (0 ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from() : 0);
        }
        v32 = 0;
        do {
            v33 = v14;
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
            v0 = v33;
            v1 = *((&v14 as &char + 16) as &i64);
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v0 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64)) {
                v32 = v32 | -0x100 | 1;
            } else {
                v34 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
                *(&v18.field_0 as &struct24) = struct24 {
                    field_0: v24 as u128
                    field_16: v1
                };
                v7 = std::env::var(&v18);
                a0 = a0 | -0x100 | 1;
                if v7 || (v6 = v8, v35 = *((&v7 as &char + 8) as &i128), v25 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u128 as u256, v5 = v35, print!("{:?}{:?}", &v5, &v12);
, a0 = v32 & 4294967295, v7) {
                    v32 = a0 & 4294967295;
                }
            }
        } while ((v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9), v14 != 0x8000000000000000));
    } else {
        std::env::vars(&v15);
        v28 = v15;
        v29 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v10 = v16;
        v9 = v28;
        loop {
            v7 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v9);
            if v7 == 0x8000000000000000 {
                break;
            }
            v1 = *((&v7 as &char + 16) as &i64);
            v30 = v7;
            v0 = v30;
            v6 = *((&v7 as &char + 40) as &i64);
            v31 = *((&v7 as &char + 24) as &i128);
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
            v5 = v31;
            print!("{:?}={:?}{:?}", &v0, &v5, &v12);
        }
        return 0;
    }
}
