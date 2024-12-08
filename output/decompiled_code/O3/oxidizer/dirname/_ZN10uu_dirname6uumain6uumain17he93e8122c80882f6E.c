fn uu_dirname::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
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
    let v14: i64;  // [sp-0x5d0]
    let v15: i5696;  // [sp-0x5c8], Other Possible Types: Arguments, struct28, struct20, struct712, struct56
    let v16: i128;  // [bp-0x5b0]
    let v17: i512;  // [sp-0x2f8], Other Possible Types: struct24, struct64, Option<struct16>, struct712, Argument
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v24: i256;  // ymm0
    let v26: i256;  // ymm0
    let v28: i64;  // rcx
    let v30: i64;  // rsi
    let v31: i64;  // rdx
    let v32: i64;  // rax
    let v33: struct8;  // rax
    let v34: i64;  // rdx
    let v35: i64;  // rcx
    let v36: i64;  // r15
    let v37: i64;  // r12
    let v38: i64;  // r13
    let v39: i64;  // r8
    let v40: i64;  // r9
    let v41: i64;  // rsi
    let v42: i64;  // rdx
    let v43: i64;  // rsi
    let v44: i64;  // rdx

    v15 = uu_dirname::uu_app(a1, a2);
    v17 = clap_builder::builder::command::Command::after_help(&v15, &g_40a3b1, 149);
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v17, a0, a1);
    if v8 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v21;
    }
    v12 = v7;
    v22 = v5;
    v24 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
    v11 = v6;
    v10 = v22;
    v8 = v3;
    v9 = v4;
    v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "zero") as i8 ? 0 : 10);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "dir");
    v17 = clap_builder::parser::error::MatchesError::unwrap("dir", &v15);
    if !v17 {
        v26 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    } else {
        v26 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v17 as &char + 32) as &i128);
    }
    *(&v13.field_0 as &struct64) = struct64 {
        field_0: v27
        field_8: v28
        field_16: v29
        field_32: v23 as u128
        field_48: v30
        field_56: v31
    };
    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v14);
    v32 = *((&v3 as &char + 16) as &i64);
    if !v32 {
        v17 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v15 = struct28 {
            field_0: v17
            field_16: *((&v17 as &char + 16) as &i64)
            field_24: 1
        };
        v21 = alloc::boxed::Box<T>::new(&v15);
        return v21;
    }
    v1 = *((&v3 as &char + 8) as &i64);
    v2 = v1 + v32 * 24;
    v33 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v33 {
        return 0;
    }
    do {
        v36 = *((v33 + 8) as &i64);
        v37 = *((v33 + 16) as &i64);
        v38 = std::path::Path::parent(v36, v37, v34, v35);
        if v38 {
            v15 = std::path::Path::components(v38, v31);
            v17 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v15, v31, v28, v39, v40);
            if v17 == 10 {
                v15 = ".";
                v15.field_8 = 1;
                v15.field_16 = 8;
                v26 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v16 = 0;
                std::io::stdio::_print(&v15, v30, v31);
            } else {
                core::result::Result<T,E>::unwrap(uucore::mods::display::print_verbatim(v38, v31, v31));
            }
        } else if std::path::Path::is_absolute(v36, v37) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v37, "/") as i8 {
            v15 = "/";
            v15.field_8 = 1;
            v15.field_16 = 8;
            v26 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v16 = 0;
            std::io::stdio::_print(&v15, v41, v42);
        } else {
            v15 = ".";
            v15.field_8 = 1;
            v15.field_16 = 8;
            v26 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v16 = 0;
            std::io::stdio::_print(&v15, v30, v31);
        }
        v17 = Argument {
            value: &v0
            formatter: <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt
        };
        v15 = Arguments {
            pieces: [""]
            args: [&v17]
            fmt: 0
        };
        std::io::stdio::_print(&v15, v43, v44);
        v33 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v33);
}
