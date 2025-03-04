fn uu_dd::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x578]
    let v1: i64;  // [sp-0x560]
    let v2: i8;  // [bp-0x560]
    let v3: i8;  // [bp-0x550]
    let v4: i8;  // [bp-0x548]
    let v5: i8;  // [bp-0x540]
    let v6: i8;  // [bp-0x538]
    let v7: i8;  // [bp-0x530]
    let v8: i8;  // [bp-0x528]
    let v9: iNone;  // [sp-0x4b8]
    let v10: iNone;  // [sp-0x4a8]
    let v11: struct56;  // [sp-0x490], Other Possible Types: unsigned int
    let v12: i32;  // [sp-0x48d]
    let v13: iNone;  // [sp-0x448], Other Possible Types: unsigned long
    let v14: i64;  // [sp-0x440]
    let v15: i64;  // [bp-0x410], Other Possible Types: char, Result<struct164, struct32>
    let v16: i64;  // [sp-0x408]
    let v17: struct64;  // [bp-0x368]
    let v18: struct64;  // [sp-0x328]
    let v19: i8;  // [sp-0x2e8], Other Possible Types: int, unsigned long, struct712
    let v20: struct24;  // [sp-0x2e8], Other Possible Types: int
    let v21: struct24;  // [sp-0x2e8], Other Possible Types: struct17, int
    let v22: i32;  // [bp-0x2e7]
    let v23: i32;  // [sp-0x2e4]
    let v24: iNone;  // [bp-0x2e0]
    let v25: iNone;  // [bp-0x2d8], Other Possible Types: unsigned long
    let v26: i64;  // [sp-0x2c8]
    let v27: i64;  // [sp-0x2b8]
    let v28: iNone;  // [sp-0x2a8]
    let v29: iNone;  // [sp-0x298]
    let v30: i64;  // [sp-0x288]
    let v31: i64;  // [sp-0x278]
    let v32: i64;  // [sp-0x260]
    let v33: iNone;  // [sp-0x248]
    let v34: iNone;  // [sp-0x238]
    let v35: iNone;  // [sp-0x228]
    let v36: i8;  // [sp-0x218]
    let v38: i64;  // r15
    let v45: i64;  // rbx
    let v46: i64;  // r15
    let v47: i64;  // r15
    let v48: iNone;  // xmm0

    v19 = uu_dd::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v15, &v19, a0, a1);
    if v13 == 0x8000000000000000 {
        v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
        return v38;
    }
    v13 = *(&v15 as &i448);
    v31 = 0x8000000000000000;
    v32 = 0x8000000000000000;
    *(&v19 as &i64) = 0;
    *(&v25 as &i64) = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 2;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 3;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, "operands");
    v18 = clap_builder::parser::error::MatchesError::unwrap("operands", &v11);
    *(&v17.field_0 as &struct64) = struct64 {
        field_0: v39
        field_8: v40
        field_16: v41
        field_32: v42
        field_48: v43
        field_56: v44
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
    v15 = uu_dd::parseargs::Parser::parse(&v19, v0.field_8, v0.field_16);
    v9 = *((&v15 as &char + 8) as &i128);
    v10 = *((&v15 as &char + 24) as &i128);
    if v1 == 3 {
        v25 = v10;
        v19 = v9;
        return v38;
    }
    if *(&v3 as &i64) == 0x8000000000000000 {
        v20 = uu_dd::Input::new_stdin(&v2);
    } else if !uu_dd::is_fifo(*(&v4 as &i64), *(&v5 as &i64)) as i8 {
        v20 = uu_dd::Input::new_file(*(&v4 as &i64), *(&v5 as &i64), &v2);
    } else {
        v20 = uu_dd::Input::new_fifo(*(&v4 as &i64), *(&v5 as &i64), &v2);
    }
    v45 = (&v20)[16] as i64;
    v46 = (&v20)[8] as i64;
    v38 = v46;
    if v20 as i64 {
        return v38;
    }
    if *(&v6 as &i64) != 0x8000000000000000 {
        if !uu_dd::is_fifo(*(&v7 as &i64), *(&v8 as &i64)) as i8 {
            v21 = uu_dd::Output::new_file(*(&v7 as &i64), *(&v8 as &i64), &v2);
        } else {
            v21 = uu_dd::Output::new_fifo(*(&v7 as &i64), *(&v8 as &i64), &v2);
        }
    } else {
        if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
            v21 = uu_dd::Output::new_stdout(&v2);
        } else {
            v21 = uu_dd::Output::new_file_from_stdout(&v2);
        }
    }
    v38 = v47;
    if v19 != 4 {
        v12 = v23;
        *(&v11 as &i32) = (&v21)[1] as i32;
        v48 = (&v21)[8] as i128;
        v15 = v46;
        v16 = v45;
        v19 = v19;
        v22 = v11;
        v23 = v12;
        v24 = v48;
        v38 = v47;
        return v38;
    }
    return v38;
}
