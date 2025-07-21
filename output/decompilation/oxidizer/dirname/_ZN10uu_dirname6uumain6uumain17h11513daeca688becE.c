fn uu_dirname::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x689]
    let v1: struct16;  // [bp-0x688]
    let v2: struct24;  // [bp-0x678]
    let v3: Result<struct56, struct16>;  // [bp-0x678]
    let v4: u64;  // [bp-0x670]
    let v5: u128;  // [bp-0x668]
    let v6: u128;  // [bp-0x658]
    let v7: u64;  // [bp-0x648]
    let v8: u64;  // [bp-0x640]
    let v9: u64;  // [bp-0x638]
    let v10: u128;  // [bp-0x630]
    let v11: u128;  // [sp-0x620]
    let v12: u64;  // [bp-0x610]
    let v13: struct64;  // [bp-0x608]
    let v14: std::path::Components;  // [bp-0x5c8], Other Possible Types: struct28, struct56, u8
    let v15: u64;  // [bp-0x5b0]
    let v16: u64;  // [bp-0x5b0]
    let v17: core::option::Option<std::path::Component>;  // [bp-0x2f8], Other Possible Types: struct24, struct64, u8
    let v18: u128;  // [bp-0x2e8]
    let v19: u128;  // [bp-0x2e8]
    let v20: u64;  // [bp-0x2c8]
    let v23: u64;  // rdx
    let v24: u128;  // xmm0
    let v25: core::fmt::Arguments;  // rcx
    let v26: core::fmt::rt::Argument;  // rax
    let v27: i64;  // rax
    let v29: u64;  // r15
    let v30: u64;  // r12
    let v31: core::option::Option<&std::path::Path>;  // r13
    let v32: u64;  // rdx

    uu_dirname::uu_app(&v14);
    clap_builder::builder::command::Command::after_help(&v17, &v14, "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /'s, output '.' (meaning the current directory).");
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    match v3 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        },
        Ok(_) => {
            v12 = v7;
            v11 = v6;
            v10 = v5;
            v8 = v3 as i64;
            v9 = v4;
            v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "zero") as i8 ? 0 : 10);
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "dir");
            v17 = clap_builder::parser::error::MatchesError::unwrap("dir", &v14);
            if v17.field_0 as i64 {
                v23 = *((&v17.field_48 as &char + 8) as &i64);
                v19 = v18;
            } else {
                v24 = 0;
                v25 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h09c5f4cd0790faa8E.pieces.ptr;
                v26 = core::ops::function::FnOnce::call_once;
                v23 = 0;
                v18 = v11;
            }
            v13 = struct64 {
                field_0: v26
                field_8: v25
                field_16: v18
                field_32: v24
                field_48: v20
                field_56: v23
            };
            v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
            if !v2.field_16 {
                v17 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v14 = struct28 {
                    field_0: v17.field_0
                    field_16: v17.field_16
                    field_24: 1
                };
                return alloc::boxed::Box<T>::new(&v14);
            }
            v1 = struct16 {
                field_0: v4
                field_8: v4 + v2.field_16 * 24
            };
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
            if !v27 {
                return 0;
            }
            do {
                v29 = *((v27 + 8) as &i64);
                v30 = *((v27 + 16) as &i64);
                v31 = std::path::Path::parent(v29, v30) as u64;
                if v31 {
                    v14 = std::path::Path::components(v31, v32);
                    v17 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v14);
                    if &v17 == "\n" {
                        print!(".");
                    } else {
                        core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v31, v32));
                    }
                } else if std::path::Path::is_absolute(v29, v30) as u8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v30, "/") as i8 {
                    print!("/");
                } else {
                    print!(".");
                }
                print!("{}", &v0);
                v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
                v15 = v16;
            } while (v27);
            return 0;
        },
    }
}
