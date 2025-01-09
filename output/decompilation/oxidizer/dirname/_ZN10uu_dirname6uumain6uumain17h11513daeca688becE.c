fn uu_dirname::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x689]
    let v1: i64;  // [sp-0x688]
    let v2: i64;  // [sp-0x680]
    let v3: i8;  // [bp-0x678], Other Possible Types: struct24
    let v4: i8;  // [bp-0x670]
    let v5: i8;  // [bp-0x668]
    let v6: i8;  // [bp-0x658]
    let v7: i8;  // [bp-0x648]
    let v8: i64;  // [sp-0x640]
    let v9: i64;  // [sp-0x638]
    let v10: i128;  // [sp-0x630]
    let v11: i128;  // [sp-0x620]
    let v12: i64;  // [sp-0x610]
    let v13: struct64;  // [bp-0x608]
    let v14: i448;  // [sp-0x5c8], Other Possible Types: struct56, struct712, struct20
    let v15: i512;  // [sp-0x2f8], Other Possible Types: Option<struct16>, struct712, struct24, struct64
    let v19: i64;  // rax
    let v20: i128;  // xmm0
    let v21: i256;  // ymm0
    let v22: i256;  // ymm0
    let v27: i256;  // ymm0
    let v31: i64;  // rax
    let v32: struct8;  // rax
    let v33: i256;  // ymm0
    let v34: i64;  // r15
    let v35: i64;  // r12
    let v36: i64;  // r13
    let v37: i64;  // rdx

    v14 = uu_dirname::uu_app();
    v15 = clap_builder::builder::command::Command::after_help(&v14, "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /'s, output '.' (meaning the current directory).");
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v15, a0, a1);
    if v8 == 0x8000000000000000 {
        v19 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v19;
    }
    v12 = v7;
    v20 = v5;
    v22 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
    v11 = v6;
    v10 = v20;
    v8 = v3;
    v9 = v4;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "zero") as i8 ? 0 : 10);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "dir");
    v15 = clap_builder::parser::error::MatchesError::unwrap("dir", &v14);
    if !v15 {
        v27 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    } else {
        v27 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v15 as &char + 32) as &i128);
    }
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v24
        field_8: v30
        field_16: v25
        field_32: v26
        field_48: v28
        field_56: v29
    };
    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
    v31 = *((&v3 as &char + 16) as &i64);
    if !v31 {
        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v14 = v15;
        v19 = alloc::boxed::Box<T>::new(&v14);
        return v19;
    }
    v1 = *((&v3 as &char + 8) as &i64);
    v2 = v1 + v31 * 24;
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v32 {
        return 0;
    }
    do {
        v34 = *((v32 + 8) as &i64);
        v35 = *((v32 + 16) as &i64);
        v36 = std::path::Path::parent(v34, v35);
        if v36 {
            v14 = std::path::Path::components(v36, v37);
            v15 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v14);
            match v15 {
                None => {
                    core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v36, v37));
                },
                Some(_) => {
                    v33 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    print!(".");
                },
            }
        } else if std::path::Path::is_absolute(v34, v35) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v35, "/") as i8 {
            v33 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            print!("/");
        } else {
            v33 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            print!(".");
        }
    } while ((print!("{}", &v0);
, v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v32));
}
