fn uu_printf::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x458]
    let v3: struct16;  // [bp-0x440], Other Possible Types: u64
    let v4: u64;  // [bp-0x438]
    let v5: struct24;  // [bp-0x430], Other Possible Types: struct48
    let v6: u64;  // [bp-0x430]
    let v7: iNone;  // [bp-0x410]
    let v8: u64;  // [bp-0x400]
    let v9: u8;  // [bp-0x3f8]
    let v10: u128;  // [bp-0x3f7]
    let v11: iNone;  // [bp-0x3e8]
    let v12: struct40;  // [bp-0x3d8]
    let v13: struct40;  // [bp-0x3d8]
    let v14: u8;  // [bp-0x3d0]
    let v15: iNone;  // [bp-0x3c0]
    let v16: void*;  // [bp-0x3b0]
    let v17: struct16;  // [bp-0x3b0]
    let v19: u64;  // [bp-0x3a0]
    let v20: void*;  // [bp-0x398]
    let v21: u128;  // [bp-0x390]
    let v22: u64;  // [bp-0x388]
    let v23: u64;  // [bp-0x380]
    let v24: u64;  // [bp-0x378]
    let v25: struct56;  // [bp-0x370]
    let v26: struct64;  // [bp-0x338]
    let v27: struct712;  // [bp-0x2f8], Other Possible Types: u8
    let v29: u8;  // [bp-0x2f8]
    let v31: struct56;  // [bp-0x2f8]
    let v32: iNone;  // [bp-0x2f7], Other Possible Types: u128
    let v33: u64;  // [bp-0x2e8]
    let v34: u128;  // [bp-0x2e7]
    let v35: iNone;  // [bp-0x2d8]
    let v37: i64;  // rax
    let v38: u64;  // rbx
    let v39: u64;  // r14
    let v40: u64;  // rax
    let v41: void*;  // rcx
    let v42: u8;  // bl
    let v43: u64;  // rax
    let v44: u128;  // xmm0
    let v46: void*;  // rax
    let v47: u8;  // al
    let v48: iNone;  // xmm0
    let v50: void*;  // rbx
    let v52: u64;  // rdx
    let v54: u64;  // [bp-0x428]
    let v55: iNone;  // [bp-0x41f]
    let v57: u32;  // [bp-0x2e0]

    v27 = uu_printf::uu_app();
    v25 = clap_builder::builder::command::Command::get_matches_from(&v27, a0, a1);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v25);
    v37 = clap_builder::parser::error::MatchesError::unwrap(&v27);
    if v37 {
        v38 = *((v37 + 8) as &i64);
        v39 = *((v37 + 16) as &i64);
        v31 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v25);
        v26 = clap_builder::parser::error::MatchesError::unwrap(&v31);
        if v26.field_0 as i64 {
            core::iter::traits::iterator::Iterator::collect(&v0, &v26);
        }
        v19 = v40;
        v20 = v41;
        v16 = 0;
        v21 = 0;
        v24 = v38;
        v3 = v38;
        v23 = v39;
        v4 = v39;
        loop {
            v6 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v3);
            v43 = v5.field_0;
            if v43 != 7 {
                break;
            }
LABEL_46a8eb:
            v44 = *((&v5.field_0 as &char + 1) as &i128);
            v35 = v7;
            v34 = v55 as i128;
            v32 = v44;
            v29 = v43;
            v12 = uucore::features::format::FormatItem<C>::write(&v29, std::io::stdio::stdout(), &v16);
            if v12.field_0 as i64 != 9223372036854775830 {
                v11 = v15;
                v10 = *((&v12.field_0 as &char + 9) as &i128);
                v8 = v12.field_0;
                v9 = v14;
                alloc::boxed::Box<T>::new(&v8);
                return v46;
            } else if (v14 & 1) {
                return v50;
            }
        }
        if v29 == 8 {
            alloc::boxed::Box<T>::new(&v54);
            v50 = v46;
            return v50;
        }
        if v29 != 9 {
            goto LABEL_46a8eb;
        }
        if (v42 & 1) {
            for (v17 = uucore::features::format::argument::FormatArguments::start_next_batch(); v22 < v20; v17 = uucore::features::format::argument::FormatArguments::start_next_batch()) {
                v3 = struct16 {
                    field_0: v24
                    field_8: v23
                };
                loop {
                    v5 = uucore::features::format::parse_spec_and_escape::{{closure}}(&v3);
                    v47 = v5.field_0;
                    if v47 == 9 {
                        break;
                    }
                    if v47 == 8 {
                        alloc::boxed::Box<T>::new(&v54);
                    }
                    v48 = *((&v5.field_0 as &char + 1) as &i128);
                    v35 = v7;
                    v34 = v55 as i128;
                    v32 = v48;
                    v27 = v47;
                    v13 = uucore::features::format::FormatItem<C>::write(&v27, std::io::stdio::stdout(), &v17);
                    if v13.field_0 as i64 == 9223372036854775830 {
                        if (v14 & 1) {
                            return v50;
                        }
                    } else {
                        v11 = v15;
                        v10 = *((&v13.field_0 as &char + 9) as &i128);
                        v8 = v13.field_0;
                        v9 = v14;
                        alloc::boxed::Box<T>::new(&v8);
                    }
                }
            }
        } else if v22 < v20 {
            if v21 as i64 >= v20 {
                panic!("internal error: entered unreachable code: All args are transformed to Unparsed");
            } else if 9223372036854775830 + *((v21 as i64 * 40 + v19) as &i64) == 32 {
                v6 = uucore::util_name();
                v54 = v52;
                eprint!("{}: warning: ", &v6 as u384);
                eprintln!("ignoring excess arguments, starting with '{}'", &v56);
            } else {
                panic!("internal error: entered unreachable code: All args are transformed to Unparsed");
            }
        }
    } else {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v33 = v5.field_16;
        v27 = *(&v5.field_0 as &i128);
        v57 = 1;
        alloc::boxed::Box<T>::new(&v27);
    }
    return v50;
}
