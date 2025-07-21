fn uu_dd::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x578]
    let v1: u64;  // [bp-0x570]
    let v2: u64;  // [bp-0x568]
    let v3: u64;  // [bp-0x560]
    let v4: u128;  // [bp-0x558]
    let v5: u64;  // [bp-0x550]
    let v6: u128;  // [bp-0x548]
    let v7: u64;  // [bp-0x540]
    let v8: u128;  // [bp-0x538]
    let v9: u64;  // [bp-0x530]
    let v10: u128;  // [bp-0x528]
    let v11: u128;  // [bp-0x518]
    let v12: u128;  // [bp-0x508]
    let v13: u128;  // [bp-0x4f8]
    let v14: u128;  // [bp-0x4e8]
    let v15: u128;  // [bp-0x4d8]
    let v16: u128;  // [bp-0x4c8]
    let v17: u128;  // [bp-0x4b8]
    let v18: struct32;  // [bp-0x4b8]
    let v19: u128;  // [bp-0x4a8]
    let v20: struct56;  // [bp-0x490]
    let v21: u32;  // [bp-0x490]
    let v22: u32;  // [bp-0x48d]
    let v23: u64;  // [bp-0x448]
    let v24: u64;  // [bp-0x440]
    let v25: u128;  // [bp-0x438]
    let v26: u128;  // [bp-0x428]
    let v27: u64;  // [bp-0x418]
    let v28: Result<struct56, struct16>;  // [bp-0x410], Other Possible Types: u64
    let v29: struct164;  // [bp-0x410]
    let v30: u64;  // [bp-0x408]
    let v31: u64;  // [bp-0x3e0]
    let v32: u128;  // [bp-0x3d8]
    let v33: u128;  // [bp-0x3c8]
    let v34: u128;  // [bp-0x3b8]
    let v35: u128;  // [bp-0x3a8]
    let v36: u128;  // [bp-0x398]
    let v37: u128;  // [bp-0x388]
    let v38: u128;  // [bp-0x378]
    let v39: struct64;  // [bp-0x368]
    let v40: struct64;  // [bp-0x328]
    let v41: u64;  // [bp-0x320]
    let v42: u128;  // [bp-0x318]
    let v43: u128;  // [bp-0x308]
    let v44: u64;  // [bp-0x2f8]
    let v45: void*;  // [bp-0x2f0]
    let v46: void*;  // [bp-0x2e8], Other Possible Types: struct24, struct32, u8
    let v47: Result<struct16, struct16>;  // [bp-0x2e8], Other Possible Types: u192
    let v48: struct24;  // [bp-0x2e8]
    let v49: struct17;  // [bp-0x2e8]
    let v50: Result<struct24, struct17>;  // [bp-0x2e8]
    let v51: u8;  // [bp-0x2e8]
    let v52: u32;  // [bp-0x2e7]
    let v53: u32;  // [bp-0x2e4]
    let v54: u128;  // [bp-0x2e0]
    let v55: void*;  // [bp-0x2d8]
    let v56: u64;  // [bp-0x2d8]
    let v57: void*;  // [bp-0x2c8]
    let v58: void*;  // [bp-0x2b8]
    let v59: u128;  // [bp-0x2a8]
    let v60: u128;  // [bp-0x298]
    let v61: u64;  // [bp-0x288]
    let v62: u64;  // [bp-0x278]
    let v63: u64;  // [bp-0x260]
    let v64: u128;  // [bp-0x248]
    let v65: u128;  // [bp-0x238]
    let v66: u128;  // [bp-0x228]
    let v67: u8;  // [bp-0x218]
    let v69: u128;  // xmm1
    let v73: u64;  // rax
    let v74: u64;  // r15
    let v75: u128;  // xmm0

    uu_dd::uu_app(&v46);
    v28 = clap_builder::builder::command::Command::try_get_matches_from(&v46, a0, a1);
    match v28 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        },
        Ok(_) => {
            v27 = v31;
            v69 = *((&v28 as &char + 32) as &i128);
            v26 = v69;
            v25 = *((&v28 as &char + 16) as &i128);
            v23 = v28 as i64;
            v24 = v30;
            v62 = 0x8000000000000000;
            v63 = 0x8000000000000000;
            v46 = 0 as void*;
            v55 = 0;
            v57 = 0;
            v58 = 0;
            v59 = 0;
            v60 = 0;
            v61 = 2;
            v64 = 0;
            v65 = 0;
            v66 = 0;
            v67 = 3;
            v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, "operands");
            v40 = clap_builder::parser::error::MatchesError::unwrap("operands", &v20);
            if v40.field_0 as i64 {
                v69 = v42;
            }
            v39 = struct64 {
                field_0: v73
                field_8: v41
                field_16: v69
                field_32: v43
                field_48: v44
                field_56: v45
            };
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v39);
            v29 = uu_dd::parseargs::Parser::parse(&v46, v1, v2);
            v17 = *(&v29.field_8 as &i128);
            v19 = *((&v29.field_16 as &char + 8) as &i128);
            if v29.field_0 == 3 {
                v46 = v18;
                v74 = alloc::boxed::Box<T>::new(&v46);
            } else {
                v16 = v38;
                v15 = v37;
                v14 = v36;
                v13 = v35;
                v12 = v34;
                v11 = v33;
                v10 = v32;
                v8 = v29.field_40;
                v4 = v17;
                v6 = v19;
                v3 = v29.field_0;
                if v5 == 0x8000000000000000 {
                    v47 = uu_dd::Input::new_stdin(&v3);
                } else if uu_dd::is_fifo(v6 as i64, v7) as i8 {
                    v47 = uu_dd::Input::new_fifo(v6 as i64, v7, &v3);
                } else {
                    v47 = uu_dd::Input::new_file(v6 as i64, v7, &v3);
                }
                v74 = *((&v47 as &char + 8) as &i64);
                if let Ok(_) = v47 {
                    if v8 as i64 == 0x8000000000000000 {
                        if uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                            v46 = uu_dd::Output::new_file_from_stdout(&v3);
                        } else {
                            v48 = uu_dd::Output::new_stdout(&v3);
                        }
                    } else {
                        if uu_dd::is_fifo(v9, v10 as i64) as i8 {
                            v49 = uu_dd::Output::new_fifo(v9, v10 as i64, &v3);
                        } else {
                            v50 = uu_dd::Output::new_file(v9, v10 as i64, &v3);
                        }
                    }
                    if let Ok(_) = v50 {
                        v22 = v53;
                        v21 = *((&v50 as &char + 1) as &i32) as u32;
                        v75 = *((&v50 as &char + 8) as &i128);
                        v28 = v74;
                        v30 = v56;
                        v51 = v50 as i8;
                        v52 = v21;
                        v53 = v22;
                        v54 = v75;
                        v74 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v28, &v51));
                    }
                }
            }
            return v74;
        },
    }
}
