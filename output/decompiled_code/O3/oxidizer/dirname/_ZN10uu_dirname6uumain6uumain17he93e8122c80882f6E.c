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
    let v11: i448;  // [sp-0x5c8], Other Possible Types: struct20, struct712, Arguments, struct56
    let v12: i128;  // [bp-0x5b0]
    let v13: i512;  // [sp-0x2f8], Other Possible Types: Argument, struct64, Option<struct16>, struct712, struct24
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v19: i256;  // ymm0
    let v20: i256;  // ymm0
    let v22: i256;  // ymm0
    let v24: i64;  // rcx
    let v26: i64;  // rsi
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v29: struct8;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rcx
    let v32: i64;  // r15
    let v33: i64;  // r12
    let v34: i64;  // r13
    let v35: i64;  // r8
    let v36: i64;  // r9
    let v37: i64;  // rsi
    let v38: i64;  // rdx
    let v39: i64;  // rsi
    let v40: i64;  // rdx

    v11 = uu_dirname::uu_app(a1, a2);
    v13 = clap_builder::builder::command::Command::after_help(&v11, &g_40a3b1, 149);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v13, a0, a1);
    match v3 {
        Err(_) => {
            v17 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            return v17;
        },
        Ok(_) => {
            v8 = *((&v3 as &char + 48) as &i64);
            v18 = *((&v3 as &char + 16) as &i128);
            v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u128 as u256;
            v7 = *((&v3 as &char + 32) as &i128);
            v6 = v18;
            v4 = v3;
            v5 = *((&v3 as &char + 8) as &i64);
            v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero") as i8 ? 0 : 10);
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "dir");
            v13 = clap_builder::parser::error::MatchesError::unwrap("dir", &v11);
            if !v13 {
                v22 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            } else {
                v22 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v13 as &char + 32) as &i128) as u128 as u256;
            }
            *(&v9.field_0 as &struct64) = struct64 {
                field_0: v23
                field_8: v24
                field_16: v25
                field_32: v19 as u128
                field_48: v26
                field_56: v27
            };
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v10);
            v28 = *((&v3 as &char + 16) as &i64);
            if !v28 {
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v11 = v13;
                v17 = alloc::boxed::Box<T>::new(&v11);
                return v17;
            }
            v1 = *((&v3 as &char + 8) as &i64);
            v2 = v1 + v28 * 24;
            v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v29 {
                return 0;
            }
            do {
                v32 = *((v29 + 8) as &i64);
                v33 = *((v29 + 16) as &i64);
                v34 = std::path::Path::parent(v32, v33, v30, v31);
                if v34 {
                    v11 = std::path::Path::components(v34, v27);
                    v13 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v11, v27, v24, v35, v36);
                    if v13 != 10 {
                        core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v34, v27, v27));
                    } else {
                        v11 = ".";
                        v11.field_8 = 1;
                        v11.field_16 = 8;
                        v22 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        v12 = 0;
                        std::io::stdio::_print(&v11, v26, v27);
                    }
                } else if std::path::Path::is_absolute(v32, v33) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, "/") as i8 {
                    v11 = "/";
                    v11.field_8 = 1;
                    v11.field_16 = 8;
                    v22 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v12 = 0;
                    std::io::stdio::_print(&v11, v37, v38);
                } else {
                    v11 = ".";
                    v11.field_8 = 1;
                    v11.field_16 = 8;
                    v22 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v12 = 0;
                    std::io::stdio::_print(&v11, v26, v27);
                }
                v13 = Argument {
                    value: &v0
                    formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
                };
                v11 = Arguments {
                    pieces: [""]
                    args: [&v13]
                    fmt: 0
                };
                std::io::stdio::_print(&v11, v39, v40);
                v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            } while (v29);
        },
    }
}
