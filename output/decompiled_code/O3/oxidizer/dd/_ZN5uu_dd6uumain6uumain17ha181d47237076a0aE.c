fn uu_dd::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x578], Other Possible Types: i192
    let v1: i64;  // [sp-0x560]
    let v2: i128;  // [sp-0x558]
    let v3: i128;  // [sp-0x548]
    let v4: i128;  // [sp-0x538]
    let v5: i128;  // [sp-0x528]
    let v6: i128;  // [sp-0x518]
    let v7: i128;  // [sp-0x508]
    let v8: i128;  // [sp-0x4f8]
    let v9: i128;  // [sp-0x4e8]
    let v10: i128;  // [sp-0x4d8]
    let v11: i128;  // [sp-0x4c8]
    let v12: i128;  // [sp-0x4b8]
    let v13: i128;  // [sp-0x4a8]
    let v14: i448;  // [sp-0x490], Other Possible Types: struct56
    let v15: i64;  // [sp-0x448], Other Possible Types: struct56
    let v16: i64;  // [sp-0x440]
    let v17: i64;  // [bp-0x410], Other Possible Types: struct164
    let v22: i128;  // [bp-0x378]
    let v23: struct64;  // [bp-0x368]
    let v24: i64;  // [sp-0x330]
    let v25: struct64;  // [sp-0x328]
    let v26: i8;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct17>, struct24, struct712, struct32, struct17
    let v27: i32;  // [bp-0x2e7]
    let v28: i32;  // [sp-0x2e4]
    let v29: i128;  // [bp-0x2e0]
    let v30: i64;  // [bp-0x2d8]
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v39: i64;  // rbx
    let v40: i128;  // xmm0

    v26 = uu_dd::uu_app(a1, v32);
    clap_builder::builder::command::Command::try_get_matches_from(&v17, &v26, a0, a1);
    if v15 == 0x8000000000000000 {
        v33 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v33;
    }
    v15 = struct56 {
        field_0: v17
        field_8: v18
        field_16: v19
        field_32: v20
        field_48: v21
    };
    v26.112 = 0x8000000000000000;
    v26.136 = 0x8000000000000000;
    v26 = 0;
    v30 = 0;
    v26.32 = 0;
    v26.48 = 0;
    v26.64 = 0;
    v26.80 = 0;
    v26.96 = 2;
    v26.160 = 0;
    v26.176 = 0;
    v26.192 = 0;
    v26.208 = 3;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, "operands");
    v25 = clap_builder::parser::error::MatchesError::unwrap("operands", &v14);
    *(&v23.field_0 as &struct64) = struct64 {
        field_0: v34
        field_8: v35
        field_16: v36
        field_32: v37
        field_48: v38
        field_56: v32
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23, v24);
    v17 = uu_dd::parseargs::Parser::parse(&v26, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v12 = *((&v17 as &char + 8) as &i128);
    v13 = *((&v17 as &char + 24) as &i128);
    if v1 == 3 {
        v26 = struct32 {
            field_0: v12
            field_16: v13
        };
        v33 = alloc::boxed::Box<T>::new(&v26);
    } else {
        v11 = v22;
        v10 = *((&v17 as &char + 136) as &i128);
        v9 = *((&v17 as &char + 120) as &i128);
        v8 = *((&v17 as &char + 104) as &i128);
        v7 = *((&v17 as &char + 88) as &i128);
        v6 = *((&v17 as &char + 72) as &i128);
        v5 = *((&v17 as &char + 56) as &i128);
        v4 = *((&v17 as &char + 40) as &i128);
        v2 = v12;
        v3 = v13;
        v1 = v17;
        if *((&v2 as &char + 8) as &i64) == 0x8000000000000000 {
            v26 = uu_dd::Input::new_stdin(&v1, v32);
        } else if !uu_dd::is_fifo(v3, *((&v3 as &char + 8) as &i64)) as i8 {
            v26 = uu_dd::Input::new_file(v3, *((&v3 as &char + 8) as &i64), &v1);
        } else {
            v26 = uu_dd::Input::new_fifo(v3, *((&v3 as &char + 8) as &i64), &v1);
        }
        v33 = *((&v26 as &char + 8) as &i64);
        v39 = *((&v26 as &char + 16) as &i64);
        if v26 {
LABEL_48593c:
        } else {
            if v4 != 0x8000000000000000 {
                if !uu_dd::is_fifo(*((&v4 as &char + 8) as &i64), v5) as i8 {
                    v26 = uu_dd::Output::new_file(*((&v4 as &char + 8) as &i64), v5, &v1);
                } else {
                    v26 = uu_dd::Output::new_fifo(*((&v4 as &char + 8) as &i64), v5, &v1);
                }
            } else {
                if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                    v26 = uu_dd::Output::new_stdout(&v1, v32);
                } else {
                    v26 = uu_dd::Output::new_file_from_stdout(&v1, v32);
                }
            }
            if v26 != 4 {
                v14.3 = vvar_454{stack -740};
                v14 = *((&v26 as &char + 1) as &i32);
                v40 = *((&v26 as &char + 8) as &i128);
                v17 = v33;
                v17.field_8 = vvar_241{reg 40};
                v26 = v26;
                v27 = v14;
                v28 = v14.3;
                v29 = v40;
                v33 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v17, &v26, v28));
            } else {
                v33 = *((&v26 as &char + 8) as &i64);
                goto LABEL_48593c;
            }
        }
    }
    return v33;
}
