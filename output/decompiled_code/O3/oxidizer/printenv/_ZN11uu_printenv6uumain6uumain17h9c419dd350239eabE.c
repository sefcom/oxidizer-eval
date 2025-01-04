fn uu_printenv::uumain::uumain(a0: u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x458]
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i128;  // [sp-0x438]
    let v4: i64;  // [sp-0x430]
    let v5: i128;  // [sp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i384;  // [sp-0x408], Other Possible Types: Option<struct48>, struct24, Result<struct24, struct8>
    let v8: i8;  // [bp-0x3f0]
    let v9: i256;  // [sp-0x3d8], Other Possible Types: struct32
    let v10: i128;  // [sp-0x3c8]
    let v11: i64;  // [sp-0x3b8], Other Possible Types: struct64, Arguments
    let v12: i64;  // [sp-0x378]
    let v13: i64;  // [sp-0x370]
    let v14: Option<struct24>;  // [sp-0x368], Other Possible Types: i192
    let v15: struct32;  // [sp-0x350], Other Possible Types: i256
    let v16: i448;  // [sp-0x330], Other Possible Types: struct56
    let v17: i128;  // [sp-0x2f8], Other Possible Types: struct56, Argument, struct712, struct64
    let v18: Argument;  // [bp-0x2e8], Other Possible Types: i64
    let v19: Argument;  // [bp-0x2d8]
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v25: i64;  // rdx
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i64;  // rsi
    let v37: i64;  // rbx
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i256;  // ymm0
    let v41: i128;  // xmm0

    v17 = uu_printenv::uu_app(a1, a2);
    v16 = clap_builder::builder::command::Command::get_matches_from(&v17, a0, a1, v21, v22);
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590);
    v11 = clap_builder::parser::error::MatchesError::unwrap(_ZN11uu_printenv13ARG_VARIABLES17h7bed74cb6698e695E, g_503590, &v17);
    if !v11 || (v17 = struct64 {
    field_0: v23
    field_16: v24
    field_32: *((&v11 as &char + 32) as &i128)
    field_48: *((&v11 as &char + 48) as &i128)
}, v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17, v25), v27 = *((&v7 as &char + 8) as &i128), v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u512 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u128 as u256, v17 = v27, v2 == 0x8000000000000000) {
        v2 = 0;
        v3 = 8;
        v4 = 0;
    } else {
        v30 = v17;
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v3 = v30;
        v2 = v7;
    }
    v12 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN11uu_printenv8OPT_NULL17h6012a15648cb6e92E, g_503580) as i8 ? &g_4123b0 : &g_412242);
    v13 = 1;
    if v4 {
        v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v2);
        v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v14 == 0x8000000000000000 {
            return (0 ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
        }
        v37 = 0;
        do {
            v38 = v14;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
            v0 = v38;
            v1 = *((&v14 as &char + 16) as &i64);
            if <char as core::str::pattern::Pattern>::is_contained_in(*((&v0 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64)) as i8 {
                v37 = v37 | -0x100 | 1;
            } else {
                v18 = v1;
                v39 = v0;
                v40 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v17 = v39;
                v7 = std::env::var(&v17, v25);
                a0 = a0 | -0x100 | 1;
                if v7 || (v6 = v8, v41 = *((&v7 as &char + 8) as &i128), v29 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u128 as u256, v5 = v41, print!("{:?}{:?}", &v5, &v12);
, a0 = v37 & 4294967295, v7) {
                    v37 = a0 & 4294967295;
                }
            }
        } while ((v14 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9), v14 != 0x8000000000000000));
    } else {
        v15 = std::env::vars();
        v32 = v15;
        v33 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v10 = *((&v15 as &char + 16) as &i128);
        v9 = v32;
        loop {
            v7 = <std::env::Vars as core::iter::traits::iterator::Iterator>::next(&v9);
            if v7 == 0x8000000000000000 {
                break;
            }
            v1 = *((&v7 as &char + 16) as &i64);
            v34 = v7;
            v0 = v34;
            v6 = *((&v7 as &char + 40) as &i64);
            v35 = *((&v7 as &char + 24) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
            v5 = v35;
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
            std::io::stdio::_print(&v11, v36, v25);
        }
        return 0;
    }
}
