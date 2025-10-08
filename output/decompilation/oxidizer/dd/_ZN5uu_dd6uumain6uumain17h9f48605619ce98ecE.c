fn uu_dd::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct56;  // [bp-0x528]
    let v1: u128;  // [bp-0x528]
    let v2: u64;  // [bp-0x528]
    let v3: u32;  // [bp-0x528]
    let v4: u32;  // [bp-0x525]
    let v5: u64;  // [bp-0x520]
    let v6: u128;  // [bp-0x518]
    let v7: void*;  // [bp-0x510]
    let v8: u128;  // [bp-0x508]
    let v9: void*;  // [bp-0x500]
    let v10: u128;  // [bp-0x4f8]
    let v11: void*;  // [bp-0x4f0]
    let v12: u64;  // [bp-0x4d8]
    let v13: iNone;  // [bp-0x4d0]
    let v14: u64;  // [bp-0x4c8]
    let v15: iNone;  // [bp-0x4c0]
    let v16: u64;  // [bp-0x4b8]
    let v17: u128;  // [bp-0x4b0]
    let v18: u64;  // [bp-0x4a8]
    let v19: iNone;  // [bp-0x4a0]
    let v20: iNone;  // [bp-0x490]
    let v21: iNone;  // [bp-0x480]
    let v22: iNone;  // [bp-0x470]
    let v23: iNone;  // [bp-0x460]
    let v24: iNone;  // [bp-0x450]
    let v25: iNone;  // [bp-0x440]
    let v26: struct56;  // [bp-0x430]
    let v27: u64;  // [bp-0x428]
    let v28: iNone;  // [bp-0x3f8]
    let v29: iNone;  // [bp-0x3e8]
    let v30: struct16;  // [bp-0x3d0], Other Possible Types: u64
    let v31: struct164;  // [bp-0x3d0], Other Possible Types: struct56, u64
    let v32: void*;  // [bp-0x3c8], Other Possible Types: u64
    let v33: iNone;  // [bp-0x398]
    let v34: iNone;  // [bp-0x388]
    let v35: iNone;  // [bp-0x378]
    let v36: iNone;  // [bp-0x368]
    let v37: iNone;  // [bp-0x358]
    let v38: iNone;  // [bp-0x348]
    let v39: iNone;  // [bp-0x338]
    let v40: struct64;  // [bp-0x328]
    let v41: u128;  // [bp-0x318]
    let v42: u128;  // [bp-0x308]
    let v43: u128;  // [bp-0x2f8]
    let v44: u8;  // [bp-0x2e8]
    let v45: void*;  // [bp-0x2e8]
    let v46: Result<struct16, struct16>;  // [bp-0x2e8], Other Possible Types: u192
    let v47: Result<struct24, struct17>;  // [bp-0x2e8]
    let v48: struct24;  // [bp-0x2e8]
    let v49: struct17;  // [bp-0x2e8]
    let v50: struct24;  // [bp-0x2e8]
    let v51: u32;  // [bp-0x2e7]
    let v52: u32;  // [bp-0x2e4]
    let v53: u128;  // [bp-0x2e0]
    let v54: void*;  // [bp-0x2d8]
    let v55: void*;  // [bp-0x2c8]
    let v56: void*;  // [bp-0x2b8]
    let v57: u128;  // [bp-0x2a8]
    let v58: u128;  // [bp-0x298]
    let v59: u64;  // [bp-0x288]
    let v60: u64;  // [bp-0x278]
    let v61: u64;  // [bp-0x260]
    let v62: u128;  // [bp-0x248]
    let v63: u128;  // [bp-0x238]
    let v64: u128;  // [bp-0x228]
    let v65: u8;  // [bp-0x218]
    let v67: u64;  // rdi
    let v68: u64;  // r15
    let v69: u128;  // xmm0

    v45 as u5696 = uu_dd::uu_app();
    v30 = clap_builder::builder::command::Command::try_get_matches_from(&v45 as u5696, a0, a1);
    v67 = v32;
    if (((0 ^ v30.field_0) & (0 ^ -(v31))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
    }
    v26 = v31;
    v60 = 0x8000000000000000;
    v61 = 0x8000000000000000;
    v45 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 2;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 3;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v26);
    v40 = clap_builder::parser::error::MatchesError::unwrap(&v0);
    if v40.field_0 as i64 {
        v10 = v43;
        v8 = v42;
        v6 = v41;
        v1 = v40.field_0;
    } else {
        v2 = core::ops::function::FnOnce::call_once;
        v5 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v6 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17he135a60093c36a3aE;
        v7 = 0;
        v9 = 0;
        v11 = 0;
    }
    v31 = uu_dd::parseargs::Parser::parse(&v45 as u5696, &v0);
    v28 = *(&v31.field_8 as &i128);
    v29 = *((&v31.field_16 as &char + 8) as &i128);
    if v31.field_0 == 3 {
        v68 = alloc::boxed::Box<T>::new(&v28) as u64;
    } else {
        v25 = v39;
        v24 = v38;
        v23 = v37;
        v22 = v36;
        v21 = v35;
        v20 = v34;
        v19 = v33;
        v17 = v31.field_40;
        v13 = v28;
        v15 = v29;
        v12 = v31.field_0;
        if v14 == 0x8000000000000000 {
            v46 = uu_dd::Input::new_stdin(&v12);
        } else if uu_dd::is_fifo(v15 as i64, v16) {
            v46 = uu_dd::Input::new_fifo(v15 as i64, v16, &v12);
        } else {
            v46 = uu_dd::Input::new_file(v15 as i64, v16, &v12);
        }
        v68 = *((&v46 as &char + 8) as &i64);
        if let Ok(_) = v46 {
            if v17 as i64 == 0x8000000000000000 {
                if uu_dd::is_stdout_redirected_to_seekable_file() as u8 {
                    v47 = uu_dd::Output::new_file_from_stdout(&v12);
                } else {
                    v48 = uu_dd::Output::new_stdout(&v12);
                }
            } else {
                if uu_dd::is_fifo(v18, v19 as i64) as u8 {
                    v49 = uu_dd::Output::new_fifo(v18, v19 as i64, &v12);
                } else {
                    v50 = uu_dd::Output::new_file(v18, v19 as i64, &v12);
                }
            }
            if v47 as i8 != 4 {
                v4 = v52;
                v3 = *((&v47 as &char + 1) as &i32) as u32;
                v69 = *((&v47 as &char + 8) as &i128);
                v30 = v68;
                v32 = 0;
                v44 = v47 as i8;
                v51 = v3;
                v52 = v4;
                v53 = v69;
                return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v30, &v44));
            }
        }
    }
    return v68;
}
