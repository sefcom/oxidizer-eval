fn uu_uniq::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x43c]
    let v1: u8;  // [bp-0x43b]
    let v2: u8;  // [bp-0x43a]
    let v3: u8;  // [bp-0x439]
    let v4: struct32;  // [bp-0x438], Other Possible Types: struct56, struct24
    let v5: struct16;  // [bp-0x438], Other Possible Types: u128
    let v6: u64;  // [bp-0x430]
    let v7: u64;  // [bp-0x428]
    let v8: u32;  // [bp-0x420]
    let v9: struct56;  // [bp-0x400]
    let v10: void*;  // [bp-0x3f8]
    let v11: u64;  // [bp-0x3c8]
    let v12: u64;  // [bp-0x3c0]
    let v13: u128;  // [bp-0x3b8]
    let v14: u64;  // [bp-0x3a8]
    let v15: iNone;  // [bp-0x398]
    let v16: iNone;  // [bp-0x388]
    let v17: iNone;  // [bp-0x378]
    let v18: iNone;  // [bp-0x368]
    let v19: struct24;  // [bp-0x350]
    let v20: u64;  // [bp-0x340]
    let v21: struct64;  // [bp-0x338]
    let v22: struct64;  // [bp-0x338]
    let v23: struct56;  // [bp-0x2f8]
    let v24: struct56;  // [bp-0x2f8]
    let v25: struct64;  // [bp-0x2f8]
    let v26: struct16;  // [bp-0x2f8], Other Possible Types: u128
    let v27: struct24;  // [bp-0x2f8]
    let v28: struct712;  // [bp-0x2f8]
    let v29: u128;  // [bp-0x2e8]
    let v30: u64;  // [bp-0x2d8]
    let v31: u64;  // [bp-0x2d0]
    let v32: u8;  // [bp-0x2c8]
    let v33: u8;  // [bp-0x2c7]
    let v34: u8;  // [bp-0x2c6]
    let v35: u8;  // [bp-0x2c5]
    let v36: u8;  // [bp-0x2c4]
    let v37: u8;  // [bp-0x2c3]
    let v38: u8;  // [bp-0x2c2]
    let v40: u64;  // rdi
    let v41: u128;  // xmm1
    let v42: u64;  // r12
    let v43: u8;  // r14b
    let v44: u64;  // r13
    let v45: u64;  // r13
    let v46: u8;  // al
    let v47: u128;  // xmm2
    let v48: u128;  // xmm0
    let v49: u64;  // r13
    let v50: u64;  // r13
    let v51: u128;  // [bp-0x2f8]

    v23 = uu_uniq::handle_obsolete(a0, a1);
    v14 = v30;
    v18 = *(&v23.field_0 as &i128);
    v13 = v23.field_16;
    v17 = *(&v23.field_40 as &i128);
    v28 = uu_uniq::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v28, &v13);
    v40 = v6;
    if (((0 ^ v5.field_0) & (0 ^ -(v5.field_0))) >> 63) as char {
        return uu_uniq::map_clap_errors(v10);
    }
    v9 = v4;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN7uu_uniq9ARG_FILES17ha4e252c7d2c0f63cE.field_0, g_4f5730.field_0);
    v21 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_uniq9ARG_FILES17ha4e252c7d2c0f63cE.field_0, g_4f5730.field_0, &v24);
    if v21.field_0 as i64 {
        v25 = v22;
        v4 = uu_uniq::uumain::uumain::{{closure}}(&v25);
        v41 = *(&v4.field_16 as &i128);
        v26 = *(&v4.field_0 as &i128);
        v29 = v41;
    } else {
        v26 = core::tuple::<impl core::default::Default for (U,T)>::default();
    }
    v42 = *((&v26 as &char + 8) as &i64);
    v12 = v24.field_16;
    v11 = *((&v24.field_16 as &char + 8) as &i64);
    v27 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17hbfe7c58267454596E.field_0, g_4f56e0.field_0, &v9);
    if v27.field_0 as i32 == 1 {
        return v45;
    }
    v16 = *(&v27.field_8 as &i128);
    v51 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17hc91f46c3f1b101eaE.field_0, g_4f56f0.field_0, &v9);
    if v27.field_0 as i32 != 1 {
        v15 = *(&v27.field_8 as &i128);
        v0 = 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options8REPEATED17hd07a5dab9cab0439E.field_0, g_4f56d0.field_0) {
            v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options12ALL_REPEATED17h0214dcb1196ec6c8E.field_0, g_4f5690.field_0);
        }
        v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options6UNIQUE17h1cd24165939a0252E.field_0, g_4f5700.field_0);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options12ALL_REPEATED17h0214dcb1196ec6c8E.field_0, g_4f5690.field_0) {
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, _ZN7uu_uniq7options5GROUP17h82257da62b27380eE.field_0, g_4f5720.field_0);
        }
        v2 = uu_uniq::get_delimiter(&v9);
        v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options5COUNT17hc63dc82d31c0a183E.field_0, g_4f56b0.field_0);
        v4 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h0df0a8947801ce63E.field_0, g_4f56a0.field_0, &v9);
        v44 = v6;
        v45 = v44;
        if !(v4.field_0 as i8 & 1) {
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options11IGNORE_CASE17ha8d0002db21b3552E.field_0, g_4f56c0.field_0);
            v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN7uu_uniq7options15ZERO_TERMINATED17hfebae49d51f1a3b8E.field_0, g_4f5710.field_0);
            v47 = BinaryOp SarNV;
            v48 = BinaryOp SarNV;
            v32 = v0;
            v33 = v3;
            v34 = 1;
            v38 = v2;
            v35 = v43;
            *(&v51 as void*) = ~(v48) & v18 | (v16 & 0xffffffffffffffff0000000000000000 | 1) & v48;
            *(&v29 as void*) = ~(v47) & v17 | ((v15 >> 64) as u64 CONCAT 1) & v47;
            v30 = v44;
            v31 = v7;
            v36 = v1;
            v37 = v46;
            if v43 {
                v19 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("printing all duplicated lines and repeat counts is meaningless\nTry 'uniq --help' for more information.");
                v7 = v20;
                v5 = *(&v19.field_0 as &i128);
                v8 = 1;
                v45 = alloc::boxed::Box<T>::new(&v4) as u64;
            } else {
                v4 = uu_uniq::open_input_file(v51 as i64, v42);
                if (v4.field_0 as i8 & 1) {
                    v49 = v6;
                    v45 = v49;
                } else {
                    v4 = uu_uniq::open_output_file(v12, v11);
                    v50 = v6;
                    if v4.field_0 as i32 == 1 {
                        v45 = v50;
                    } else {
                        v45 = uu_uniq::Uniq::print_uniq(&v51, v49, v7, v50, v7);
                    }
                }
            }
        }
    }
    return v45;
}
