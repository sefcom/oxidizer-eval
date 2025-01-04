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
    let v16: i64;  // [sp-0x448]
    let v17: i64;  // [sp-0x440]
    let v18: i1312;  // [sp-0x410], Other Possible Types: struct164, Result<struct56, struct16>
    let v19: i64;  // [sp-0x408]
    let v20: i128;  // [bp-0x378]
    let v21: struct64;  // [bp-0x368]
    let v22: i64;  // [sp-0x330]
    let v23: struct64;  // [sp-0x328]
    let v24: i192;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct24, struct17>, struct17, struct712
    let v25: i32;  // [bp-0x2e7]
    let v26: i32;  // [sp-0x2e4]
    let v27: i128;  // [bp-0x2e0]
    let v28: i64;  // [bp-0x2d8]
    let v29: i64;  // [sp-0x2c8]
    let v30: i64;  // [sp-0x2b8]
    let v31: i128;  // [sp-0x2a8]
    let v32: i128;  // [sp-0x298]
    let v33: i64;  // [sp-0x288]
    let v34: i64;  // [sp-0x278]
    let v35: i64;  // [sp-0x260]
    let v36: i128;  // [sp-0x248]
    let v37: i128;  // [sp-0x238]
    let v38: i128;  // [sp-0x228]
    let v39: i8;  // [sp-0x218]
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v48: i64;  // rbx
    let v49: i128;  // xmm0

    v24 = uu_dd::uu_app(a1, v41);
    v18 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if v16 == 0x8000000000000000 {
        v42 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v42;
    }
    v16 = v18;
    v34 = 0x8000000000000000;
    v35 = 0x8000000000000000;
    v24 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 2;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 3;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, "operands");
    v23 = clap_builder::parser::error::MatchesError::unwrap("operands", &v14);
    *(&v21.field_0 as &struct64) = struct64 {
        field_0: v43
        field_8: v44
        field_16: v45
        field_32: v46
        field_48: v47
        field_56: v41
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21, v22);
    v18 = uu_dd::parseargs::Parser::parse(&v24, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v12 = *((&v18 as &char + 8) as &i128);
    v13 = *((&v18 as &char + 24) as &i128);
    if v1 == 3 {
        v24 = v12;
        v42 = alloc::boxed::Box<T>::new(&v24);
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
            v24 = uu_dd::Input::new_stdin(&v1, v41);
        } else if !uu_dd::is_fifo(v3, *((&v3 as &char + 8) as &i64)) as i8 {
            v24 = uu_dd::Input::new_file(v3, *((&v3 as &char + 8) as &i64), &v1);
        } else {
            v24 = uu_dd::Input::new_fifo(v3, *((&v3 as &char + 8) as &i64), &v1);
        }
        v42 = *((&v24 as &char + 8) as &i64);
        v48 = *((&v24 as &char + 16) as &i64);
        if v24 {
LABEL_4857cc:
        } else {
            if v4 != 0x8000000000000000 {
                if !uu_dd::is_fifo(*((&v4 as &char + 8) as &i64), v5) as i8 {
                    v24 = uu_dd::Output::new_file(*((&v4 as &char + 8) as &i64), v5, &v1);
                } else {
                    v24 = uu_dd::Output::new_fifo(*((&v4 as &char + 8) as &i64), v5, &v1);
                }
            } else {
                if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                    v24 = uu_dd::Output::new_stdout(&v1, v41);
                } else {
                    v24 = uu_dd::Output::new_file_from_stdout(&v1, v41);
                }
            }
            if v24 != 4 {
                v15 = v26;
                v14 = *((&v24 as &char + 1) as &i32);
                v49 = *((&v24 as &char + 8) as &i128);
                v18 = v42;
                v19 = v48;
                v24 = v24;
                v25 = v14;
                v26 = v15;
                v27 = v49;
                v42 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v18, &v24, v26));
            } else {
                v42 = *((&v24 as &char + 8) as &i64);
                goto LABEL_4857cc;
            }
        }
    }
    return v42;
}
