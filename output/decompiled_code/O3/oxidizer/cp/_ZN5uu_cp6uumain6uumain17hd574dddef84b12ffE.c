fn uu_cp::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x4b8], Other Possible Types: struct112
    let v1: i128;  // [bp-0x4a8]
    let v2: i64;  // [sp-0x4a0]
    let v3: i128;  // [bp-0x498]
    let v4: i128;  // [sp-0x488]
    let v5: struct24;  // [sp-0x448]
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i128;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f8]
    let v10: i128;  // [sp-0x3e8]
    let v11: i64;  // [sp-0x3d8]
    let v12: struct56;  // [bp-0x3c8], Other Possible Types: i64
    let v13: i64;  // [sp-0x3c0]
    let v14: i8;  // [sp-0x390]
    let v15: i128;  // [sp-0x388]
    let v16: i128;  // [sp-0x378]
    let v17: i128;  // [sp-0x368]
    let v18: i128;  // [sp-0x358]
    let v19: i64;  // [sp-0x348]
    let v20: i8;  // [bp-0x330]
    let v21: i8;  // [bp-0x328]
    let v25: i5696;  // [sp-0x2f8], Other Possible Types: struct64, struct712, Result<struct81, struct40>, struct28, struct48
    let v26: i128;  // [bp-0x2e8]
    let v27: i128;  // [bp-0x2d8]
    let v28: i128;  // [bp-0x2c8]
    let v29: i128;  // [sp-0x2b8]
    let v30: i128;  // [sp-0x2a8]
    let v32: i64;  // r14
    let v33: i64;  // rsi
    let v34: i64;  // rdx
    let v35: i64;  // rdx
    let v36: i64;  // rcx
    let v37: i64;  // r8
    let v38: i64;  // r9
    let v39: i32;  // eax
    let v40: i64;  // rcx
    let v41: i64;  // r8
    let v42: i64;  // r9
    let v43: i64;  // rax
    let v47: i64;  // rax
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: i64;  // rax
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2

    v25 = uu_cp::uu_app(a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from(&v20, &v25, a0, a1);
    if v20 != 0x8000000000000000 {
        v12 = struct56 {
            field_0: v20
            field_16: v22
            field_32: v23
            field_48: v24
        };
        v25 = uu_cp::Options::from_matches(&v12, v35, v36, v37, v38);
        v0 = *((&v25 as &char + 8) as &i128);
        v1 = *((&v25 as &char + 24) as &i128);
        v3 = *((&v25 as &char + 40) as &i128);
        v4 = *((&v25 as &char + 56) as &i128);
        if v14 == 0x8000000000000000 {
            v25 = struct64 {
                field_0: v44
                field_16: v45
                field_32: v46
                field_48: v4
            };
            v47 = alloc::boxed::Box<T>::new(&v25);
            return v47;
        }
        v18 = v4;
        v15 = v0;
        v16 = v1;
        v17 = v3;
        v14 = v25;
        v19 = *((&v25 as &char + 72) as &i64);
        if <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq(*((&v18 as &char + 4) as &i32)) && (v19 & 0xff00000000) {
            <T as alloc::slice::hack::ConvertVec>::to_vec();
            v25 = struct28 {
                field_0: v0
                field_16: v1
                field_24: 1
            };
            v47 = alloc::boxed::Box<T>::new(&v25);
            return v47;
        }
        v25 = clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(&v12, "paths");
        v0 = clap_builder::parser::error::MatchesError::unwrap("paths", &v25);
        if !v0 {
            v51 = 0x8000000000000000;
        } else {
            v25.96 = (stack_base)[1112] as i128;
            v30 = *((&v0 as &char + 80) as &i128);
            v29 = *((&v0 as &char + 64) as &i128);
            v48 = v0;
            v49 = *((&v0 as &char + 16) as &i128);
            v50 = *((&v0 as &char + 32) as &i128);
            *(&v28 as &struct112) = v0.field_48;
            v27 = v50;
            v26 = v49;
            v25 = v48;
            v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v25);
        }
        v5 = struct24 {
            field_0: v52
            field_8: v53
            field_16: v36
        };
        v25 = uu_cp::parse_path_args(&v5, &v14);
        v0 = *((&v25 as &char + 8) as &i128);
        v1 = *((&v25 as &char + 24) as &i128);
        v3 = *((&v25 as &char + 40) as &i128);
        if v25 != 13 {
            v25 = struct64 {
                field_0: v25
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
            };
            v47 = alloc::boxed::Box<T>::new(&v25);
            return v47;
        }
        v9 = v0.field_16;
        v8 = v0;
        v11 = *((&v3 as &char + 8) as &i64);
        v10 = *((&v1 as &char + 8) as &i128);
        uu_cp::copy(&v0, *((&v8 as &char + 8) as &i64), v0.field_16, *((&v10 as &char + 8) as &i64), *((&v3 as &char + 8) as &i64), &v14);
        if v0 != 13 {
            v55 = v1;
            v56 = v3;
            v25 = v0;
            *(&v28 as &struct112) = v0.field_48;
            v27 = v56;
            v26 = v55;
            if v25 != 5 {
                v6 = uucore::util_name();
                v7 = v35;
                eprint!("{:?}: ", &v6);
                eprintln!("{:?}", &v25);
            }
            uucore::mods::error::set_exit_code();
        }
    } else {
        v32 = v21;
        v25 = uu_cp::uu_app(v33, v34);
        switch (v39) {
        case 12:
            v43 = clap_builder::builder::command::Command::print_help(&v25, v33, v34, v40, v41, v42);
            if v43 {
                v47 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
                return v47;
            }
        case 14:
            clap_builder::builder::command::Command::render_version(&v14, &v25);
            v12 = &v14;
            v13 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = 0;
            v2 = 1;
            std::io::stdio::_print(&v0);
            break;
        default:
            v47 = alloc::boxed::Box<T>::new(v32);
            return v47;
        }
    }
    return 0;
}
