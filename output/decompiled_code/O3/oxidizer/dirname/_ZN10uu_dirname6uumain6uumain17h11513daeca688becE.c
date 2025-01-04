fn uu_dirname::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x689]
    let v1: i64;  // [sp-0x688]
    let v2: i64;  // [sp-0x680]
    let v3: i448;  // [sp-0x678], Other Possible Types: Result<struct56, struct16>, struct24
    let v4: i64;  // [sp-0x640]
    let v5: i64;  // [sp-0x638]
    let v6: i128;  // [sp-0x630]
    let v7: i128;  // [sp-0x620]
    let v8: i64;  // [sp-0x610]
    let v9: struct64;  // [bp-0x608]
    let v10: i64;  // [sp-0x5d0]
    let v11: i64;  // [sp-0x5c8], Other Possible Types: struct712, struct56, Arguments, struct20
    let v12: i64;  // [sp-0x5c0]
    let v13: i64;  // [sp-0x5b8]
    let v14: i128;  // [bp-0x5b0]
    let v15: i5696;  // [sp-0x2f8], Other Possible Types: Argument, Option<struct16>, struct64, struct24, struct712
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v22: i256;  // ymm0
    let v24: i256;  // ymm0
    let v26: i64;  // rcx
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: struct8;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // rcx
    let v34: i64;  // r15
    let v35: i64;  // r12
    let v36: i64;  // r13
    let v37: i64;  // r8
    let v38: i64;  // r9
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i64;  // rsi
    let v42: i64;  // rdx

    v11 = uu_dirname::uu_app(a1, a2);
    v15 = clap_builder::builder::command::Command::after_help(&v11, &g_412fa6, 149);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    match v3 {
        Err(_) => {
            v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            return v19;
        },
        Ok(_) => {
            v8 = *((&v3 as &char + 48) as &i64);
            v20 = *((&v3 as &char + 16) as &i128);
            v22 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u128 as u256;
            v7 = *((&v3 as &char + 32) as &i128);
            v6 = v20;
            v4 = v3;
            v5 = *((&v3 as &char + 8) as &i64);
            v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero") as i8 ? 0 : 10);
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "dir");
            v15 = clap_builder::parser::error::MatchesError::unwrap("dir", &v11);
            if !v15 {
                v24 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            } else {
                v24 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v15 as &char + 32) as &i128) as u128 as u256;
            }
            *(&v9.field_0 as &struct64) = struct64 {
                field_0: v25
                field_8: v26
                field_16: v27
                field_32: v21 as u128
                field_48: v28
                field_56: v29
            };
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v10);
            v30 = *((&v3 as &char + 16) as &i64);
            if !v30 {
                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v11 = v15;
                v19 = alloc::boxed::Box<T>::new(&v11);
                return v19;
            }
            v1 = *((&v3 as &char + 8) as &i64);
            v2 = v1 + v30 * 24;
            v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v31 {
                return 0;
            }
            do {
                v34 = *((v31 + 8) as &i64);
                v35 = *((v31 + 16) as &i64);
                v36 = std::path::Path::parent(v34, v35, v32, v33);
                if v36 {
                    v11 = std::path::Path::components(v36, v29);
                    v15 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v11, v29, v26, v37, v38);
                    if v15 == 10 {
                        v11 = ".";
                        v12 = 1;
                        v13 = 8;
                        v24 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        v14 = 0;
                        std::io::stdio::_print(&v11, v28, v29);
                    } else {
                        core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v36, v29, v29));
                    }
                } else if std::path::Path::is_absolute(v34, v35) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v35, "/") as i8 {
                    v11 = "/";
                    v12 = 1;
                    v13 = 8;
                    v24 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v14 = 0;
                    std::io::stdio::_print(&v11, v39, v40);
                } else {
                    v11 = ".";
                    v12 = 1;
                    v13 = 8;
                    v24 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v14 = 0;
                    std::io::stdio::_print(&v11, v28, v29);
                }
                v15 = Argument {
                    value: &v0
                    formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                };
                v11 = Arguments {
                    pieces: [""]
                    args: [&v15]
                    fmt: 0
                };
                std::io::stdio::_print(&v11, v41, v42);
                v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v31);
        },
    }
}
