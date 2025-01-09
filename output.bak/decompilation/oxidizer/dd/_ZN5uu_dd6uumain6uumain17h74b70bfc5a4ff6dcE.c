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
    let v15: i32;  // [sp-0x48d]
    let v16: struct56;  // [sp-0x448], Other Possible Types: i64
    let v17: i64;  // [sp-0x440]
    let v18: i1312;  // [sp-0x410], Other Possible Types: Result<struct56, struct8>, struct164
    let v19: i64;  // [sp-0x408]
    let v20: i128;  // [bp-0x378]
    let v21: struct64;  // [bp-0x368]
    let v22: struct64;  // [sp-0x328]
    let v23: i8;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct16>, struct24, struct32, struct712, struct17
    let v24: i32;  // [bp-0x2e7]
    let v25: i32;  // [sp-0x2e4]
    let v26: i128;  // [bp-0x2e0]
    let v27: i64;  // [bp-0x2d8]
    let v28: i64;  // [sp-0x2c8]
    let v29: i64;  // [sp-0x2b8]
    let v30: i128;  // [sp-0x2a8]
    let v31: i128;  // [sp-0x298]
    let v32: i64;  // [sp-0x288]
    let v33: i64;  // [sp-0x278]
    let v34: i64;  // [sp-0x260]
    let v35: i128;  // [sp-0x248]
    let v36: i128;  // [sp-0x238]
    let v37: i128;  // [sp-0x228]
    let v38: i8;  // [sp-0x218]
    let v40: i64;  // rax
    let v47: i64;  // rbx
    let v48: i128;  // xmm0

    v23 = uu_dd::uu_app();
    v18 = clap_builder::builder::command::Command::try_get_matches_from(&v23, a0, a1);
    if v16 == 0x8000000000000000 {
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v40;
    }
    v16 = struct56 {
        field_0: v18
        field_8: v19
        field_16: *((&v18 as &char + 16) as &i128)
        field_32: *((&v18 as &char + 32) as &i128)
        field_48: *((&v18 as &char + 48) as &i64)
    };
    v33 = 0x8000000000000000;
    v34 = 0x8000000000000000;
    v23 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 2;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 3;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, "operands");
    v22 = clap_builder::parser::error::MatchesError::unwrap("operands", &v14);
    *(&v21.field_0 as &struct64) = struct64 {
        field_0: v41
        field_8: v42
        field_16: v43
        field_32: v44
        field_48: v45
        field_56: v46
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
    v18 = uu_dd::parseargs::Parser::parse(&v23, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v12 = *((&v18 as &char + 8) as &i128);
    v13 = *((&v18 as &char + 24) as &i128);
    if v1 == 3 {
        v23 = struct32 {
            field_0: v12
            field_16: v13
        };
        v40 = alloc::boxed::Box<T>::new(&v23);
    } else {
        v11 = v20;
        v10 = *((&v18 as &char + 136) as &i128);
        v9 = *((&v18 as &char + 120) as &i128);
        v8 = *((&v18 as &char + 104) as &i128);
        v7 = *((&v18 as &char + 88) as &i128);
        v6 = *((&v18 as &char + 72) as &i128);
        v5 = *((&v18 as &char + 56) as &i128);
        v4 = *((&v18 as &char + 40) as &i128);
        v2 = v12;
        v3 = v13;
        v1 = v18;
        if *((&v2 as &char + 8) as &i64) == 0x8000000000000000 {
            v23 = uu_dd::Input::new_stdin(&v1);
        } else if !uu_dd::is_fifo(v3, *((&v3 as &char + 8) as &i64)) as i8 {
            v23 = uu_dd::Input::new_file(v3, *((&v3 as &char + 8) as &i64), &v1);
        } else {
            v23 = uu_dd::Input::new_fifo(v3, *((&v3 as &char + 8) as &i64), &v1);
        }
        v40 = *((&v23 as &char + 8) as &i64);
        v47 = *((&v23 as &char + 16) as &i64);
        if v23 {
LABEL_4857cc:
        } else {
            if v4 != 0x8000000000000000 {
                if !uu_dd::is_fifo(*((&v4 as &char + 8) as &i64), v5) as i8 {
                    v23 = uu_dd::Output::new_file(*((&v4 as &char + 8) as &i64), v5, &v1) as u192;
                } else {
                    v23 = uu_dd::Output::new_fifo(*((&v4 as &char + 8) as &i64), v5, &v1);
                }
            } else {
                if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                    v23 = uu_dd::Output::new_stdout(&v1) as u192;
                } else {
                    v23 = uu_dd::Output::new_file_from_stdout(&v1) as u192;
                }
            }
            if v23 != 4 {
                v15 = v25;
                v14 = *((&v23 as &char + 1) as &i32);
                v48 = *((&v23 as &char + 8) as &i128);
                v18 = v40;
                v19 = v47;
                v23 = v23;
                v24 = v14;
                v25 = v15;
                v26 = v48;
                v40 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v18, &v23));
            } else {
                v40 = *((&v23 as &char + 8) as &i64);
                goto LABEL_4857cc;
            }
        }
    }
    return v40;
}
