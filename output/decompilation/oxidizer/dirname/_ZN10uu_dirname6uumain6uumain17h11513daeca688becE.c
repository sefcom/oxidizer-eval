fn uu_dirname::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x689]
    let v1: i64;  // [sp-0x688]
    let v2: i64;  // [sp-0x680]
    let v3: i8;  // [sp-0x678], Other Possible Types: struct24
    let v4: i8;  // [bp-0x670]
    let v5: i8;  // [bp-0x668]
    let v6: i8;  // [bp-0x658]
    let v7: i8;  // [bp-0x648]
    let v8: i64;  // [sp-0x640]
    let v9: i64;  // [sp-0x638]
    let v10: iNone;  // [sp-0x630]
    let v11: iNone;  // [sp-0x620]
    let v12: i64;  // [sp-0x610]
    let v13: struct64;  // [bp-0x608]
    let v14: struct20;  // [sp-0x5c8], Other Possible Types: struct712, struct56, struct24
    let v15: i32;  // [bp-0x5b0]
    let v16: struct64;  // [sp-0x2f8], Other Possible Types: struct712, Option<struct16>, struct24, unsigned long
    let v21: iNone;  // xmm0
    let v22: iNone;  // ymm0
    let v23: iNone;  // ymm0
    let v24: i64;  // rbx
    let v30: iNone;  // ymm0
    let v33: i64;  // rax
    let v34: struct8;  // rax
    let v35: i64;  // r15
    let v36: i64;  // r12
    let v37: i64;  // r13
    let v38: i64;  // rdx

    v14 = uu_dirname::uu_app();
    v16 = clap_builder::builder::command::Command::after_help(&v14, "Output each NAME with its last non-slash component and trailing slashes
removed; if NAME contains no /'s, output '.' (meaning the current directory).");
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v16, a0, a1);
    if v8 == 0x8000000000000000 {
        v24 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v24;
    }
    v12 = *(&v7 as &i64);
    v21 = *(&v5 as &i128);
    v23 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 as u256;
    v11 = *(&v6 as &i128);
    v10 = v21;
    v8 = *(&v3 as &i64);
    v9 = *(&v4 as &i64);
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "zero") as i8 ? 0 : 10);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "dir");
    v16 = clap_builder::parser::error::MatchesError::unwrap("dir", &v14);
    if !v16 {
        v30 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    } else {
        v30 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16.field_32;
    }
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v26
        field_8: v27
        field_16: v28
        field_32: v29
        field_48: v31
        field_56: v32
    };
    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
    v33 = v3.field_16;
    if !v33 {
        v16 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v14 = v16;
        *(&v15 as &i32) = 1;
        return v24;
    }
    v1 = *((&v3.field_0 as &char + 8) as &i64);
    v2 = v1 + v33 * 24;
    v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v34 {
        return 0;
    }
    do {
        v35 = *((v34 + 8) as &i64);
        v36 = *((v34 + 16) as &i64);
        v37 = std::path::Path::parent(v35, v36);
        if v37 {
            v14 = std::path::Path::components(v37, v38);
            v16 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v14);
            match v16 {
                Some(_) => {
                    v30 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    print!(".");
                },
                None => {
                    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v37, v38));
                },
            }
        } else if std::path::Path::is_absolute(v35, v36) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "/") as i8 {
            v30 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            print!("/");
        } else {
            v30 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            print!(".");
        }
    } while ((print!("{}", &v0);
, v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v34));
}
