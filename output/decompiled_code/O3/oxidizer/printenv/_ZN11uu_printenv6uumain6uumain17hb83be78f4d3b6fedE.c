fn uu_printenv::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x468]
    let v1: i64;  // [sp-0x458]
    let v2: i128;  // [sp-0x448]
    let v3: i64;  // [sp-0x440]
    let v4: i64;  // [sp-0x438]
    let v5: i128;  // [sp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i192;  // [sp-0x408], Other Possible Types: Option<struct48>, struct24, Result<struct24, struct8>
    let v8: i8;  // [bp-0x3f0]
    let v9: i128;  // [sp-0x3d8], Other Possible Types: struct32
    let v10: i128;  // [sp-0x3c8]
    let v11: i64;  // [sp-0x3b8], Other Possible Types: struct64, Arguments
    let v12: i64;  // [sp-0x378]
    let v13: i64;  // [sp-0x370]
    let v14: i192;  // [sp-0x368], Other Possible Types: Option<struct24>
    let v15: i256;  // [sp-0x350], Other Possible Types: struct32
    let v16: i448;  // [sp-0x330], Other Possible Types: struct56
    let v17: i5696;  // [sp-0x2f8], Other Possible Types: struct712, struct64, struct56, Argument
    let v18: Argument;  // [bp-0x2e8]
    let v19: Argument;  // [bp-0x2d8]
    let v21: i64;  // rdx
    let v22: i128;  // xmm0
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i64;  // rsi
    let v33: i64;  // rbx
    let v34: i64;  // rbp
    let v35: i128;  // xmm0
    let v36: i128;  // xmm0
    let v37: i256;  // ymm0
    let v38: i128;  // xmm0

    v17 = uu_printenv::uu_app(a1, v21);
    v16 = clap_builder::builder::command::Command::get_matches_from(&v17, a0, a1);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN11uu_printenv13ARG_VARIABLES17h5a396e4034c2336eE, g_503c68);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_printenv13ARG_VARIABLES17h5a396e4034c2336eE, g_503c68, &v17);
    if !v11 {
        v2 = 0;
        v3 = 8;
        v4 = 0;
    } else {
        v22 = v11;
        v17 = struct64 {
            field_0: v22
            field_16: v23
            field_32: *((&v11 as &char + 32) as &i128)
            field_48: *((&v11 as &char + 48) as &i128)
        };
        v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17, v21);
        v24 = v7;
        v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
        v2 = v24;
        v4 = *((&v7 as &char + 16) as &i64);
    }
    v12 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_printenv8OPT_NULL17hb0358e931f4a1346E, g_503c58) as i8 ? &g_412397 : &g_412372);
    v13 = 1;
    if v4 {
        v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v14 == 0x8000000000000000 {
            return (!1 ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
        }
        v33 = 0;
        do {
            v35 = v14;
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
            v0 = v35;
            v1 = *((&v14 as &char + 16) as &i64);
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v0 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64)) as i8 {
                v33 = v33 | -0x100 | 1;
            } else {
                v17.field_16 = vvar_499{stack -1112};
                v36 = v0;
                v37 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
                v17 = v36;
                v7 = std::env::var(&v17, v21);
                v34 = v34 | -0x100 | 1;
                if v7 || (v6 = v8, v38 = *((&v7 as &char + 8) as &i128), v26 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u128 as u256, v5 = v38, print!("{:?}{:?}", &v5, &v12);
, v34 = v33 & 4294967295, v7) {
                    v33 = v34 & 4294967295;
                }
            }
        } while ((v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9), v14 != 0x8000000000000000));
    } else {
        v15 = std::env::vars();
        v28 = v15;
        v29 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v10 = *((&v15 as &char + 16) as &i128);
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
            v17 = Argument {
                value: &v0
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v18 = Argument {
                value: &v5
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v19 = Argument {
                value: &v12
                formatter: <&T as core::fmt::Display>::fmt
            };
            v11 = Arguments {
                pieces: ["", "=", ""]
                args: [&v17, &v18, &v19]
                fmt: 0
            };
            std::io::stdio::_print(&v11, v32, v21);
        }
        return 0;
    }
}
