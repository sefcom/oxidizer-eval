fn uu_dirname::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x689]
    let v1: i64;  // [sp-0x688]
    let v2: i64;  // [sp-0x680]
    let v3: i456;  // [sp-0x678], Other Possible Types: Result<struct56, struct8>, struct24
    let v4: i64;  // [sp-0x640]
    let v5: i64;  // [sp-0x638]
    let v6: i128;  // [sp-0x630]
    let v7: i128;  // [sp-0x620]
    let v8: i64;  // [sp-0x610]
    let v9: struct64;  // [bp-0x608]
    let v10: i5696;  // [sp-0x5c8], Other Possible Types: struct28, struct56, struct712, struct20
    let v11: i128;  // [sp-0x2f8], Other Possible Types: struct712, Option<struct16>, struct24, struct64
    let v15: i64;  // rax
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm0
    let v20: i256;  // ymm0
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: struct8;  // rax
    let v28: i64;  // r15
    let v29: i64;  // r12
    let v30: i64;  // r13

    v10 = uu_dirname::uu_app();
    v11 = clap_builder::builder::command::Command::after_help(&v10, &g_412fa6, 149);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v11, a0, a1);
    match v3 {
        Err(_) => {
            v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            return v15;
        },
        Ok(_) => {
            v8 = *((&v3 as &char + 48) as &i64);
            v16 = *((&v3 as &char + 16) as &i128);
            v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 as u128 as u256;
            v7 = *((&v3 as &char + 32) as &i128);
            v6 = v16;
            v4 = v3;
            v5 = *((&v3 as &char + 8) as &i64);
            v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero") as i8 ? 0 : 10);
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "dir");
            v11 = clap_builder::parser::error::MatchesError::unwrap("dir", &v10);
            if !v11 {
                v20 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            } else {
                v20 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 32) as &i128) as u128 as u256;
            }
            *(&v9.field_0 as &struct64) = struct64 {
                field_0: v21
                field_8: v22
                field_16: v23
                field_32: v17 as u128
                field_48: v24
                field_56: v25
            };
            v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
            v26 = *((&v3 as &char + 16) as &i64);
            if !v26 {
                v11 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v10 = struct28 {
                    field_0: v11
                    field_16: *((&v11 as &char + 16) as &i64)
                    field_24: 1
                };
                v15 = alloc::boxed::Box<T>::new(&v10);
                return v15;
            }
            v1 = *((&v3 as &char + 8) as &i64);
            v2 = v1 + v26 * 24;
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if !v27 {
                return 0;
            }
            do {
                v28 = *((v27 + 8) as &i64);
                v29 = *((v27 + 16) as &i64);
                v30 = std::path::Path::parent(v28, v29);
                if v30 {
                    v10 = std::path::Path::components(v30, v25);
                    v11 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v10) as u128;
                    if v11 == 10 {
                        v20 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        print!(".");
                    } else {
                        core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v30, v25));
                    }
                } else if std::path::Path::is_absolute(v28, v29) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v28, v29, "/") as i8 {
                    v20 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    print!("/");
                } else {
                    v20 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    print!(".");
                }
            } while ((print!("{:?}", &v0);
, v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v27));
        },
    }
}
