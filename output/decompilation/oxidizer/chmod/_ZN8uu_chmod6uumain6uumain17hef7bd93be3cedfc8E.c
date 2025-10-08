fn uu_chmod::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x70c]
    let v1: u8;  // [bp-0x70b]
    let v2: u8;  // [bp-0x70a]
    let v3: u8;  // [bp-0x709]
    let v4: i64;  // [bp-0x708]
    let v5: u64;  // [bp-0x700]
    let v6: std::io::error::Error;  // [bp-0x6f8]
    let v7: u32;  // [bp-0x6ec]
    let v8: alloc::string::String;  // [bp-0x6e8]
    let v9: u64;  // [bp-0x6e8]
    let v10: u64;  // [bp-0x6e0]
    let v11: u64;  // [bp-0x6d8]
    let v12: void*;  // [bp-0x6d0], Other Possible Types: struct16, struct24
    let v13: u64;  // [bp-0x6d0]
    let v14: u64;  // [bp-0x6d0]
    let v15: u64;  // [bp-0x6c8]
    let v16: u64;  // [bp-0x6c8]
    let v17: u64;  // [bp-0x6c8]
    let v18: void*;  // [bp-0x6c0], Other Possible Types: u64
    let v19: u8;  // [bp-0x6b8]
    let v20: iNone;  // [bp-0x6b0]
    let v21: u64;  // [bp-0x6a0]
    let v22: u64;  // [bp-0x698]
    let v23: u64;  // [bp-0x690]
    let v24: iNone;  // [bp-0x688]
    let v25: iNone;  // [bp-0x678]
    let v26: u64;  // [bp-0x668]
    let v27: u64;  // [bp-0x660]
    let v28: u128;  // [bp-0x658]
    let v29: u64;  // [bp-0x648]
    let v30: alloc::string::String;  // [bp-0x620]
    let v31: u64;  // [bp-0x610]
    let v32: Option<struct24>;  // [bp-0x608], Other Possible Types: Result<struct16, struct11>, struct39, struct712, u128
    let v33: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x608]
    let v34: u64;  // [bp-0x608]
    let v35: struct56;  // [bp-0x608]
    let v36: u64;  // [bp-0x600]
    let v37: u64;  // [bp-0x5f8]
    let v38: i8;  // [bp-0x5f0], Other Possible Types: u32
    let v39: i8;  // [bp-0x5e0]
    let v40: struct64;  // [bp-0x338]
    let v41: core::iter::adapters::skip::Skip<core::iter::adapters::zip::Zip<core::slice::iter::Iter<u16>, core::slice::iter::IterMut<u32>>>;  // [bp-0x2f8], Other Possible Types: struct24, u128
    let v42: u128;  // [bp-0x2f8]
    let v43: struct712;  // [bp-0x2f8]
    let v44: u64;  // [bp-0x2e8]
    let v45: u32;  // [bp-0x2e0]
    let v47: u64;  // r14
    let v48: u64;  // r12
    let v49: u64;  // rbx
    let v50: i64;  // rbx
    let v51: u64;  // rdx
    let v52: u32;  // ebp
    let v53: u64;  // rax
    let v54: u64;  // r12
    let v55: u32;  // ebp

    v41 = core::iter::traits::iterator::Iterator::skip(a0, a1);
    v32 = uu_chmod::extract_negative_modes(&v41);
    v47 = v32 as i64;
    v48 = v36;
    v28 = *(&v38 as &i128);
    v29 = *(&v39 as &i64);
    v32 = uu_chmod::uu_app();
    v43 = clap_builder::builder::command::Command::after_help(&v32);
    v12 = clap_builder::builder::command::Command::try_get_matches_from(&v43, &v28);
    if v12.field_0 == 0x8000000000000000 {
        v49 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
    } else {
        v26 = v21;
        v25 = v20;
        v24 = *(&v18 as &i128);
        v22 = v12.field_0;
        v23 = v15;
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "changes");
        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "quiet");
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "verbose");
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v22, "preserve-root");
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v32, &v22, "RFILE");
        v50 = clap_builder::parser::error::MatchesError::unwrap("RFILE", &v32);
        if v50 {
            v33 = std::fs::metadata(v50, v51);
            if let Ok(_) = v33 {
                goto LABEL_459f57;
            }
            v6 = v36;
            v12 = 0;
            v15 = *((v50 + 8) as &i64);
            v18 = *((v50 + 16) as &i64);
            v19 = 1;
            v30 = format!("cannot stat attributes of {}: {}", &v12, &v6);
            v45 = 1;
            v42 = *(&v30.vec.buf.inner.cap as &i128);
            v44 = v31;
            v49 = alloc::boxed::Box<T>::new(&v42) as u64;
        } else {
LABEL_459f57:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v34, &v22, "MODE");
            v53 = clap_builder::parser::error::MatchesError::unwrap("MODE", &v34);
            if v47 == 0x8000000000000000 {
                core::option::unwrap(v53);
                v8 = <alloc::string::String as core::clone::Clone>::clone(v53);
            } else {
                v9 = v47;
                v10 = v48;
                v11 = v37;
            }
            v5 = v48;
            v4 = v47;
            v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v22);
            v40 = clap_builder::parser::error::MatchesError::unwrap(&v32);
            if v40.field_0 as i64 {
                core::iter::traits::iterator::Iterator::collect(&v32, &v40);
                v41 = *(&v36 as &i128);
                if v35.field_0 == 0x8000000000000000 {
                    goto LABEL_45a04d;
                }
                v15 = v41;
                v13 = v35.field_0;
                v16 = v15;
                if v50 {
                    goto LABEL_45a071;
                }
LABEL_45a1c1:
                v54 = v9;
                v47 = v10;
                v27 = v11;
                if v18 {
                    goto LABEL_45a096;
                }
LABEL_45a1e4:
                v41 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
                v37 = v44;
                v32 = *(&v41.field_0 as &i128);
                v38 = 1;
                v49 = alloc::boxed::Box<T>::new(&v32) as u64;
                v47 = v4;
            } else {
LABEL_45a04d:
                v14 = 0;
                v17 = 8;
                v18 = 0;
                v16 = v17;
                if !v50 {
                    goto LABEL_45a1c1;
                }
LABEL_45a071:
                vvar_729{stack -1744} = struct24 OrderedDict([(0, 𝜙@64b [((4563021, None), vvar_681{stack -1744}), ((4563366, None), vvar_680{stack -1744})]), (8, 𝜙@64b [((4563021, None), vvar_682{stack -1736}), ((4563366, None), vvar_619{stack -1736})]), (16, 𝜙@64b [((4563021, None), vvar_683{stack -1728}), ((4563366, None), None)])])
                alloc::vec::Vec<T,A>::push(&v12, &v9);
                v54 = 0x8000000000000000;
                if !v18 {
                    goto LABEL_45a1e4;
                }
LABEL_45a096:
                v32 = uucore::features::perms::configure_symlink_and_recursion(&v22, 1);
                v49 = v32 as i64;
                v55 = v36;
                if let Err(_) = v32 {
                    v32 = struct39 {
                        field_0: v54
                        field_8: v47
                        field_16: v27
                        field_24: v52
                        field_28: v7
                        field_32: v3
                        field_33: v2
                        field_34: v1
                        field_35: v0
                        field_36: v55 as u8 & 1
                        field_37: (v55 >> 8) as u8 & 1
                        field_38: (v55 >> 16) as u8
                    };
                    v49 = uu_chmod::Chmoder::chmod(&v32, v16, v18);
                    v47 = v4;
                }
            }
        }
    }
    return v49;
}
