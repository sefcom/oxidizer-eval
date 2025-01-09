fn uu_ls::display_item_long(a0: void*, a1: void*, a2: void*, a3: u32, a4: &u64, a5: void*) -> u64 {
    let v0: i64;  // [sp-0x1a8]
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198]
    let v3: i8;  // [sp-0x179]
    let v4: i64;  // [bp-0x178], Other Possible Types: Arguments
    let v5: i64;  // [sp-0x170]
    let v6: i64;  // [sp-0x168]
    let v7: i64;  // [sp-0x160]
    let v8: i64;  // [sp-0x158]
    let v9: i64;  // [sp-0x150]
    let v10: i64;  // [sp-0x148]
    let v11: i64;  // [sp-0x140]
    let v12: i64;  // [sp-0x138], Other Possible Types: struct24
    let v13: i64;  // [sp-0x130]
    let v14: i64;  // [sp-0x128]
    let v15: i64;  // [sp-0x120]
    let v16: i64;  // [sp-0x118], Other Possible Types: struct24, struct48, Argument
    let v17: i64;  // [sp-0x110]
    let v18: i64;  // [sp-0x108]
    let v19: i64;  // [sp-0x100]
    let v20: i64;  // [sp-0xf8]
    let v21: i64;  // [sp-0xe0], Other Possible Types: struct16
    let v22: i64;  // [sp-0xd8]
    let v23: i64;  // [sp-0xd0]
    let v24: i64;  // [sp-0xc8], Other Possible Types: struct24
    let v25: i64;  // [sp-0xc0]
    let v26: i64;  // [sp-0xb8]
    let v27: i64;  // [sp-0xa8]
    let v28: i64;  // [sp-0xa0]
    let v29: i64;  // [sp-0x98]
    let v30: i192;  // [sp-0x88], Other Possible Types: struct24
    let v31: i64;  // [sp-0x80]
    let v32: i64;  // [sp-0x68]
    let v33: i64;  // [sp-0x60]
    let v34: i64;  // [sp-0x58]
    let v36: i8;  // [bp-0x48]
    let v37: i64;  // [bp+0x8]
    let v38: i64;  // r15
    let v39: i64;  // r12
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // cc_ndep
    let v45: i64;  // rcx
    let v46: i64;  // cc_ndep
    let v50: i64;  // r8
    let v51: i64;  // rdx
    let v52: i64;  // rax
    let v54: i64;  // rcx
    let v55: i64;  // rcx
    let v56: i64;  // rax
    let v57: i64;  // r15
    let v58: i64;  // r8
    let v59: i64;  // rdx
    let v60: i64;  // rcx
    let v62: i64;  // rax

    v21 = 0;
    v22 = 1;
    v23 = 0;
    if *((a5 + 29) as &i8) != 2 {
        v16 = uu_ls::colors::StyleManager::apply_normal(a5);
        v12 = &v16;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_423c10;
        v5 = 1;
        v8 = 0;
        v6 = &v12;
        v7 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
    }
    v3 = *((a2 + 238) as &i8);
    if v3 {
        v21 = alloc::vec::Vec<T,A>::append_elements("  ");
    }
    v38 = uu_ls::PathData::get_metadata(a0, a3);
    if !v38 {
        if !(*((a0 + 248) as &i8) & 1) {
            v40 = &g_43624f;
        } else {
            v41 = 0xf000 & *((a0 + 252) as &i32);
            switch ((v41 - 0x2000) * 0x80000 | v41 - 0x2000 >> 13) {
            case 0:
                v40 = &g_434d87;
                break;
            case 1:
                v40 = &g_43624e;
                break;
            case 2:
                v40 = &g_43624d;
                break;
            case 4:
                v40 = &g_4351b4;
                break;
            default:
                v40 = &g_43624f;
                break;
            }
        }
        v27 = v40;
        v28 = 1;
        v24 = (2 <= *((a0 + 64) as &i64) ? &g_434771 : 1);
        v25 = -0x100 | amd64g_calculate_condition(3, 8, *((a0 + 64) as &i64), 2, amd64g_calculate_rflags_all(3, v41 & 4294967295, 0xffffe000, v42)) & 255;
        uu_ls::pad_left(&v12, "?", *((a1 + 8) as &i64));
        v4 = &v27;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v24;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = &v12;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v16 = &g_612728;
        v17 = 3;
        v20 = 0;
        v18 = &v4;
        v19 = 3;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v16) as i32, "src/uu/ls/src/ls.rs");
        if *((a2 + 226) as &i8) {
            uu_ls::pad_right(&v16, "?", *((a1 + 16) as &i64));
            v12 = &v16;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 225) as &i8) {
            uu_ls::pad_right(&v16, "?", *((a1 + 24) as &i64));
            v12 = &v16;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 235) as &i8) {
            uu_ls::pad_right(&v16, *((a0 + 56) as &i64), *((a0 + 64) as &i64), *((a1 + 32) as &i64));
            v12 = &v16;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 224) as &i8) {
            uu_ls::pad_right(&v16, "?", *((a1 + 16) as &i64));
            v12 = &v16;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        v4 = 0;
        v5 = 1;
        v6 = 0;
        v2 = ansi_width::ansi_width();
        v1 = a5;
        v0 = a3;
        v30 = uu_ls::display_item_name(a0, a2, 0, v50, &v4);
        uu_ls::pad_left(&v24, "?", *((a1 + 40) as &i64));
        uu_ls::pad_left(&v12, "?", 12);
        v16 = &v24;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = &v12;
        v19 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v4 as &&str) = " ";
        v5 = 3;
        v8 = 0;
        v6 = &v16;
        v7 = 2;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        if v3 {
            core::str::<impl str>::trim_matches(v31, *((&v30 as &char + 16) as &i64));
            uu_ls::dired::calculate_and_update_positions(a4, v23, v51);
        }
        v16 = &v30;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = a2 + 250;
        v19 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v4 = &g_428c70;
        v5 = 2;
        v8 = 0;
        v6 = &v16;
        v7 = 2;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
    } else {
        v39 = uucore::features::fsxattr::has_acl(*((a0 + 8) as &i64), *((a0 + 16) as &i64)) as i32;
        v30 = uucore::features::fs::display_permissions(v38, 1);
        if *((a0 + 64) as &i64) < 2 {
            v45 = 1;
        } else {
            v45 = &g_434771;
        }
        v32 = v45;
        v33 = -0x100 | 2 <= *((a0 + 64) as &i64);
        v27 = (!(v39 & 255 & 255) ? 1 : &g_43624c);
        v28 = v39 & 4294967295;
        v12 = uu_ls::display_symlink_count(*((v38 + 48) as &i64));
        uu_ls::pad_left(&v24, v13, v14, *((a1 + 8) as &i64));
        v4 = &v30;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v32;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = &v27;
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = &v24;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v16 = &g_612698;
        v17 = 4;
        v20 = 0;
        v18 = &v4;
        v19 = 4;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v16) as i32, "src/uu/ls/src/ls.rs");
        if *((a2 + 226) as &i8) {
            v16 = uu_ls::display_uname(*((v38 + 60) as &i32), *((a2 + 227) as &i8));
            uu_ls::pad_right(&v12, v17, v18, *((a1 + 16) as &i64));
            v24 = &v12;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v24;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 225) as &i8) {
            v16 = uu_ls::display_group(*((v38 + 64) as &i32), *((a2 + 227) as &i8));
            uu_ls::pad_right(&v12, v17, v18, *((a1 + 24) as &i64));
            v24 = &v12;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v24;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 235) as &i8) {
            uu_ls::pad_right(&v16, *((a0 + 56) as &i64), *((a0 + 64) as &i64), *((a1 + 32) as &i64));
            v12 = &v16;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        if *((a2 + 224) as &i8) {
            v16 = uu_ls::display_uname(*((v38 + 60) as &i32), *((a2 + 227) as &i8));
            uu_ls::pad_right(&v12, v17, v18, *((a1 + 16) as &i64));
            v24 = &v12;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v24;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        v16 = uu_ls::display_len_or_rdev(v38, *((a2 + 208) as &i64), *((a2 + 241) as &i8));
        if v19 == 0x8000000000000000 {
            v26 = v18;
            v24 = v16;
            uu_ls::pad_left(&v12, v25, v18, *((a1 + 40) as &i64));
            v30 = &v12;
            v31 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v30;
            v7 = 1;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        } else {
            a5 = a5;
            v34 = v18;
            v32 = v16;
            v29 = *((&v16 as &char + 40) as &i64);
            v27 = *((&v16 as &char + 24) as &i128);
            v52 = *((a1 + 40) as &i64);
            v54 = *((a1 + 56) as &i64);
            v55 = v54 + 2;
            if !(amd64g_calculate_condition(3, 4, v54, 2, v46) as char) {
                v55 = -1;
            }
            v56 = v52 - v55;
            if v55 > v52 {
                v56 = 0;
            }
            uu_ls::pad_left(&v30, v33, v34, core::cmp::max_by(*((a1 + 48) as &i64), v56));
            uu_ls::pad_left(&v24, v28, v29, v54);
            v12 = &v30;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v14 = &v24;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 2;
            v8 = 0;
            v6 = &v12;
            v7 = 2;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        }
        v16 = uu_ls::display_date(v38, a2);
        v12 = &v16;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v4 as &&str) = " ";
        v5 = 2;
        v8 = 0;
        v6 = &v12;
        v7 = 1;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
        v4 = 0;
        v5 = 1;
        v6 = 0;
        v57 = &v24;
        v2 = ansi_width::ansi_width();
        v1 = a5;
        v0 = a3;
        v24 = uu_ls::display_item_name(a0, a2, 0, v58, &v4);
        if !v37 {
LABEL_52b35b:
        } else {
            v4 = 0;
            if !(!(core::slice::<impl [T]>::starts_with(v25, v26, core::char::methods::encode_utf8_raw(39, &v4), v59) & 255 & 255 & 255)) {
                goto LABEL_52b35b;
            }
            v16 = &v24;
            v17 = <alloc::string::String as core::fmt::Display>::fmt;
            *(&v4 as &&str) = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v16;
            v7 = 1;
            v57 = &v36;
            core::option::Option<T>::map_or_else();
        }
        v14 = *((v57 + 16) as &i64);
        v12 = *(v57 as &i128);
        if v3 {
            v60 = *((a4 + 16) as &i64);
            uu_ls::dired::update_positions(a4, (!v60 ? 0 : *((v60 * 16 + *((a4 + 8) as &i64) - 8) as &i64) + 1) + v23, v14 + (!v60 ? 0 : *((v60 * 16 + *((a4 + 8) as &i64) - 8) as &i64) + 1) + v23);
        }
        v16 = &v12;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = a2 + 250;
        v19 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v4 = &g_428c70;
        v5 = 2;
        v8 = 0;
        v6 = &v16;
        v7 = 2;
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v21, &v4) as i32, "src/uu/ls/src/ls.rs");
    }
    v16 = Argument {
        value: &v21
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v4 = Arguments {
        pieces: [""]
        args: [&v16]
        fmt: 0
    };
    v62 = std::io::Write::write_fmt(a3, &v4);
    if !v62 {
        return 0;
    }
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v62);
}
