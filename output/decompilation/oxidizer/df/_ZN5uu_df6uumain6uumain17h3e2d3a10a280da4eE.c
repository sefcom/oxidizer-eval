fn uu_df::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x450], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x448]
    let v2: i64;  // [sp-0x440]
    let v3: iNone;  // [bp-0x438], Other Possible Types: unsigned long, struct24
    let v4: i64;  // [sp-0x430]
    let v5: i64;  // [bp-0x428], Other Possible Types: int
    let v6: i64;  // [sp-0x418]
    let v7: i64;  // [sp-0x410]
    let v8: i64;  // [sp-0x408]
    let v9: iNone;  // [sp-0x3f8], Other Possible Types: struct64, unsigned long, struct32
    let v10: i8;  // [bp-0x3b8], Other Possible Types: unsigned long
    let v11: iNone;  // [sp-0x3b0]
    let v12: iNone;  // [sp-0x3a0]
    let v13: iNone;  // [sp-0x390]
    let v14: iNone;  // [sp-0x380]
    let v15: iNone;  // [sp-0x370]
    let v16: i64;  // [sp-0x360], Other Possible Types: int
    let v17: i64;  // [sp-0x358]
    let v18: struct64;  // [sp-0x328]
    let v19: struct86;  // [sp-0x2e8], Other Possible Types: struct712, struct56, int
    let v20: struct24;  // [sp-0x2e8], Other Possible Types: int
    let v21: i64;  // [bp-0x2d8], Other Possible Types: int
    let v22: i32;  // [sp-0x2d0]
    let v25: i64;  // rbx
    let v26: i64;  // rax
    let v27: iNone;  // xmm0
    let v28: iNone;  // xmm1
    let v29: iNone;  // xmm0
    let v30: iNone;  // xmm1
    let v35: i64;  // rsi

    v19 = uu_df::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v19, a0, a1);
    if v16 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        return v25;
    }
    v16 = *(&v10 as &i448);
    v19 = uu_df::Options::from(&v16);
    v26 = v19.field_0 as i64;
    if v10 == 0x8000000000000000 {
        v9 = core::ops::function::FnOnce::call_once(&v19);
        v29 = v9.field_0;
        v30 = v9.field_16;
        v3 = v29;
        v5 = v30;
        v21 = v30;
        v19 = v29;
        v25 = alloc::boxed::Box<T>::new(&v19);
        return v25;
    }
    v27 = *((&v19.field_0 as &char + 8) as &i128);
    v28 = *(&v19.field_24 as &i128);
    v13 = *(&v19.field_40 as &i128);
    v14 = *((&v19.field_48 as &char + 8) as &i128);
    v15 = *((&v19.field_0 as &char + 72) as &i128);
    v3 = v27;
    v11 = v27;
    v12 = v28;
    v10 = v26;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958);
    v9 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_df9OPT_PATHS17hdb48872164be5ec7E, g_541958, &v19);
    if !v9 {
        v20 = uu_df::get_all_filesystems(&v10);
        if v0 == 0x8000000000000000 {
            v25 = uu_df::uumain::uumain::{{closure}}(v1, v2);
            return v25;
        }
        v0 = v20.field_0;
        v1 = v20.field_8;
        v2 = v21;
        if !v2 {
            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v22 = 1;
            return v25;
        }
        v8 = v2;
        v6 = v0;
        v7 = v1;
    } else {
        v18 = v9;
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
        v20 = uu_df::get_named_filesystems(v1);
        v35 = v21;
        if v3 == 0x8000000000000000 {
            uu_df::uumain::uumain::{{closure}}(v4, v35);
            goto LABEL_473e29;
        } else {
            v3 = v20.field_0;
            v4 = v20.field_8;
            v5 = v35;
            if !v35 {
LABEL_473e29:
                return v25;
            }
        }
    }
    v9 = *(&v6 as &i192);
    uu_df::table::Table::new(&v20, &v10, &v9);
    println!("{}", &v20);
    return 0;
}
