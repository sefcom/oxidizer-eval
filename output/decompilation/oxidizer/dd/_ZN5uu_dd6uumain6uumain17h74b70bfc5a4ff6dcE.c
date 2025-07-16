fn uu_dd::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x578]
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
    let v13: u8;  // [bp-0x4f8]
    let v14: u128;  // [bp-0x4e8]
    let v15: u8;  // [bp-0x4d8]
    let v16: u128;  // [bp-0x4c8]
    let v17: u128;  // [bp-0x4b8]
    let v18: u8;  // [bp-0x4a8]
    let v19: struct56;  // [bp-0x490]
    let v20: u32;  // [bp-0x490]
    let v21: u32;  // [bp-0x48d]
    let v22: u64;  // [bp-0x448]
    let v23: u64;  // [bp-0x440]
    let v24: u8;  // [bp-0x438]
    let v25: u128;  // [bp-0x428]
    let v26: u64;  // [bp-0x418]
    let v27: Result<struct56, struct16>;  // [bp-0x410], Other Possible Types: u64
    let v28: struct164;  // [bp-0x410]
    let v29: u64;  // [bp-0x408]
    let v30: u64;  // [bp-0x3e0]
    let v31: u128;  // [bp-0x3d8]
    let v32: u128;  // [bp-0x3c8]
    let v33: u128;  // [bp-0x3b8]
    let v34: u128;  // [bp-0x398]
    let v35: u8;  // [bp-0x388]
    let v36: u128;  // [bp-0x378]
    let v37: u512;  // [bp-0x368]
    let v38: struct64;  // [bp-0x328]
    let v39: u64;  // [bp-0x320]
    let v40: u128;  // [bp-0x318]
    let v41: u128;  // [bp-0x308]
    let v42: u64;  // [bp-0x2f8]
    let v43: void*;  // [bp-0x2f0]
    let v44: u128;  // [bp-0x2e8], Other Possible Types: void*, Result<struct24, struct17>
    let v45: Result<struct16, struct16>;  // [bp-0x2e8], Other Possible Types: u192
    let v46: Result<struct24, struct17>;  // [bp-0x2e8]
    let v47: struct17;  // [bp-0x2e8]
    let v48: Result<struct24, struct17>;  // [bp-0x2e8]
    let v49: u8;  // [bp-0x2e8]
    let v50: u32;  // [bp-0x2e7]
    let v51: u32;  // [bp-0x2e4]
    let v52: u128;  // [bp-0x2e0]
    let v53: void*;  // [bp-0x2d8]
    let v54: u64;  // [bp-0x2d8]
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
    let v67: u128;  // xmm1
    let v71: u64;  // rax
    let v72: u128;  // xmm1
    let v73: u64;  // r15
    let v74: u128;  // xmm0

    uu_dd::uu_app(&v44);
    v27 = clap_builder::builder::command::Command::try_get_matches_from(&v44, a0, a1);
    match v27 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        },
        Ok(_) => {
            v26 = v30;
            v67 = *((&v27 as &char + 32) as &i128);
            v25 = v67;
            memcpy(&v24, &v27, 16);
            v22 = v27 as i64;
            v23 = v29;
            v60 = 0x8000000000000000;
            v61 = 0x8000000000000000;
            v44 = 0 as void*;
            v53 = 0;
            v55 = 0;
            v56 = 0;
            v57 = 0;
            v58 = 0;
            v59 = 2;
            v62 = 0;
            v63 = 0;
            v64 = 0;
            v65 = 3;
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v22, "operands");
            v38 = clap_builder::parser::error::MatchesError::unwrap("operands", &v19);
            if v38.field_0 as i64 {
                v67 = v40;
            }
            v37 = struct64 {
                field_0: v71
                field_8: v39
                field_16: v67
                field_32: v41
                field_48: v42
                field_56: v43
            };
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v37);
            v28 = uu_dd::parseargs::Parser::parse(&v44, v1, v2);
            memcpy(&v17, &v28, 16);
            memcpy(&v18, &v28 as u8, 16);
            if v28.field_0 == 3 {
                memcpy(&v53, &v18, 16);
                v44 = v17;
                v73 = alloc::boxed::Box<T>::new(&v44);
            } else {
                v16 = v36;
                memcpy(&v15, &v35 as u128, 16);
                v14 = v34;
                memcpy(&v13, &v28 as u128, 16);
                v12 = v33;
                v11 = v32;
                v10 = v31;
                v8 = *(&(&v28.field_32)[1] as &i128) as u128;
                v72 = *(&v18 as &i128);
                v4 = v17;
                v6 = v72;
                v3 = v28.field_0;
                if v5 == 0x8000000000000000 {
                    v45 = uu_dd::Input::new_stdin(&v3);
                } else if uu_dd::is_fifo(v6 as i64, v7) as i8 {
                    v45 = uu_dd::Input::new_fifo(v6 as i64, v7, &v3);
                } else {
                    v45 = uu_dd::Input::new_file(v6 as i64, v7, &v3);
                }
                v73 = *((&v45 as &char + 8) as &i64);
                if let Ok(_) = v45 {
                    if v8 as i64 == 0x8000000000000000 {
                        if uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                            v44 = uu_dd::Output::new_file_from_stdout(&v3);
                        } else {
                            v46 = uu_dd::Output::new_stdout(&v3);
                        }
                    } else {
                        if uu_dd::is_fifo(v9, v10 as i64) as i8 {
                            v47 = uu_dd::Output::new_fifo(v9, v10 as i64, &v3);
                        } else {
                            v48 = uu_dd::Output::new_file(v9, v10 as i64, &v3);
                        }
                    }
                    if let Ok(_) = v48 {
                        v21 = v51;
                        v20 = *((&v48 as &char + 1) as &i32) as u32;
                        v74 = *((&v45 as &char + 8) as &i128);
                        v27 = v73;
                        v29 = v54;
                        v49 = v48 as i8;
                        v50 = v20;
                        v51 = v21;
                        v52 = v74;
                        v73 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v27, &v49));
                    }
                }
            }
            return v73;
        },
    }
}
