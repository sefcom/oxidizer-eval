fn uu_df::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x450], Other Possible Types: i64
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: i128;  // [bp-0x438], Other Possible Types: struct24
    let v4: i64;  // [sp-0x430]
    let v5: i128;  // [bp-0x428]
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i64;  // [sp-0x408]
    let v9: i256;  // [sp-0x3f8], Other Possible Types: struct32, struct64
    let v10: i64;  // [sp-0x3f0]
    let v11: i64;  // [sp-0x3e8]
    let v12: i64;  // [bp-0x3b8]
    let v13: i128;  // [bp-0x3b0]
    let v14: i128;  // [sp-0x3a0]
    let v15: i128;  // [sp-0x390]
    let v16: i128;  // [sp-0x380]
    let v17: i128;  // [sp-0x370]
    let v18: i448;  // [sp-0x360]
    let v19: i64;  // [sp-0x358]
    let v20: struct64;  // [sp-0x328], Other Possible Types: i512
    let v21: i448;  // [sp-0x2e8], Other Possible Types: struct56, struct86, struct712, struct32, struct24
    let v22: i64;  // [sp-0x2d8]
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i128;  // xmm0
    let v28: i128;  // xmm1
    let v30: i128;  // xmm1
    let v35: i64;  // rsi

    v21 = uu_df::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v12, &v21, a0, a1);
    if v18 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
        return v25;
    }
    v21 = uu_df::Options::from(&v18);
    v26 = v21;
    if v12 == 0x8000000000000000 {
        v9 = core::ops::function::FnOnce::call_once(&v21);
        v30 = *((&v9 as &char + 16) as &i128);
        v3 = v9;
        v5 = v30;
        v21 = struct32 {
            field_0: v29
            field_16: v30
        };
        alloc::boxed::Box<T>::new(&v21);
        return v25;
    }
    v27 = *((&v21 as &char + 8) as &i128);
    v28 = *((&v21 as &char + 24) as &i128);
    v15 = *((&v21 as &char + 40) as &i128);
    v16 = *((&v21 as &char + 56) as &i128);
    v17 = *((&v21 as &char + 72) as &i128);
    v3 = v27;
    v13 = v27;
    v14 = v28;
    v12 = v26;
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v18, _ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958, &v21);
    if !v9 {
        v21 = uu_df::get_all_filesystems(&v12);
        if v0 == 0x8000000000000000 {
            uu_df::uumain::uumain::{{closure}}(v1, v2);
            return v25;
        }
        v0 = v21;
        v1 = *((&v21 as &char + 8) as &i64);
        v2 = v22;
        if !v2 {
            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v21 = v3;
            alloc::boxed::Box<T>::new(&v21);
            return v25;
        }
        v8 = v2;
        v6 = v0;
        v7 = v1;
    } else {
        v20 = v9;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
        uu_df::get_named_filesystems();
        v35 = v22;
        if v3 == 0x8000000000000000 {
            uu_df::uumain::uumain::{{closure}}(v4, v35);
            goto LABEL_473e29;
        } else {
            v3 = v21;
            v4 = *((&v21 as &char + 8) as &i64);
            v5 = v35;
            if !v35 {
LABEL_473e29:
                return v25;
            }
        }
    }
    v11 = v8;
    v9 = v6;
    v10 = v7;
    uu_df::table::Table::new(&v21, &v12, &v9);
    println!("{}", &v21);
    v25 = 0;
    return 0;
}
