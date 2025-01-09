fn uu_dd::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x578], Other Possible Types: struct24
    let v1: i8;  // [sp-0x560]
    let v2: i8;  // [bp-0x550]
    let v3: i8;  // [bp-0x548]
    let v4: i8;  // [bp-0x540]
    let v5: i8;  // [bp-0x538]
    let v6: i8;  // [bp-0x530]
    let v7: i8;  // [bp-0x528]
    let v8: i128;  // [sp-0x4b8]
    let v9: i128;  // [sp-0x4a8]
    let v10: i32;  // [sp-0x490], Other Possible Types: struct56
    let v11: i32;  // [sp-0x48d]
    let v12: i64;  // [sp-0x448]
    let v13: i64;  // [sp-0x440]
    let v14: i1312;  // [bp-0x410], Other Possible Types: Result<struct164, struct32>
    let v15: i64;  // [sp-0x408]
    let v16: struct64;  // [bp-0x368]
    let v17: struct64;  // [sp-0x328]
    let v18: i64;  // [sp-0x2e8], Other Possible Types: struct24, struct712, struct17
    let v19: i32;  // [bp-0x2e7]
    let v20: i32;  // [sp-0x2e4]
    let v21: i128;  // [bp-0x2e0]
    let v22: i64;  // [bp-0x2d8]
    let v23: i64;  // [sp-0x2c8]
    let v24: i64;  // [sp-0x2b8]
    let v25: i128;  // [sp-0x2a8]
    let v26: i128;  // [sp-0x298]
    let v27: i64;  // [sp-0x288]
    let v28: i64;  // [sp-0x278]
    let v29: i64;  // [sp-0x260]
    let v30: i128;  // [sp-0x248]
    let v31: i128;  // [sp-0x238]
    let v32: i128;  // [sp-0x228]
    let v33: i8;  // [sp-0x218]
    let v35: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // rbx
    let v45: i128;  // xmm0

    v18 = uu_dd::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v14, &v18, a0, a1);
    if v12 == 0x8000000000000000 {
        v35 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v35;
    }
    v12 = v14;
    v28 = 0x8000000000000000;
    v29 = 0x8000000000000000;
    v18 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 2;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 3;
    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "operands");
    v17 = clap_builder::parser::error::MatchesError::unwrap("operands", &v10);
    *(&v16.field_0 as &struct64) = struct64 {
        field_0: v36
        field_8: v37
        field_16: v38
        field_32: v39
        field_48: v40
        field_56: v41
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v16);
    v14 = uu_dd::parseargs::Parser::parse(&v18, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v8 = *((&v14 as &char + 8) as &i128);
    v9 = *((&v14 as &char + 24) as &i128);
    if v1 == 3 {
        v18 = v8;
        alloc::boxed::Box<T>::new(&v18);
        return v35;
    }
    if v2 == 0x8000000000000000 {
        v18 = uu_dd::Input::new_stdin(&v1);
    } else if !uu_dd::is_fifo(v3, v4) as i8 {
        v18 = uu_dd::Input::new_file(v3, v4, &v1);
    } else {
        v18 = uu_dd::Input::new_fifo(v3, v4, &v1);
    }
    v43 = *((&v18 as &char + 8) as &i64);
    v44 = *((&v18 as &char + 16) as &i64);
    if v18 {
        return v35;
    }
    if v5 != 0x8000000000000000 {
        if !uu_dd::is_fifo(v6, v7) as i8 {
            v18 = uu_dd::Output::new_file(v6, v7, &v1);
        } else {
            v18 = uu_dd::Output::new_fifo(v6, v7, &v1);
        }
    } else {
        if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
            v18 = uu_dd::Output::new_stdout(&v1);
        } else {
            v18 = uu_dd::Output::new_file_from_stdout(&v1);
        }
    }
    if v18 != 4 {
        v11 = v20;
        v10 = *((&v18 as &char + 1) as &i32);
        v45 = *((&v18 as &char + 8) as &i128);
        v14 = v43;
        v15 = v44;
        v18 = v18;
        v19 = v10;
        v20 = v11;
        v21 = v45;
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v14, &v18));
        return v35;
    }
    return v35;
}
