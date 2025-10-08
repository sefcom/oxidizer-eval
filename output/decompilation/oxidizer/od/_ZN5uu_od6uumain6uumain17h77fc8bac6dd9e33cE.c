fn uu_od::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x4b8]
    let v1: u64;  // [bp-0x4b0]
    let v2: u64;  // [bp-0x4a8]
    let v3: u64;  // [bp-0x4a0]
    let v4: u64;  // [bp-0x498]
    let v5: u64;  // [bp-0x490]
    let v6: u128;  // [bp-0x488]
    let v7: u128;  // [bp-0x478]
    let v8: u32;  // [bp-0x470]
    let v9: u128;  // [bp-0x468]
    let v10: u64;  // [bp-0x460]
    let v11: u128;  // [bp-0x458]
    let v12: u64;  // [bp-0x450]
    let v13: u128;  // [bp-0x448]
    let v14: u8;  // [bp-0x440]
    let v15: u8;  // [bp-0x43f]
    let v16: u128;  // [bp-0x438]
    let v17: u64;  // [bp-0x428]
    let v18: i64;  // [bp-0x420]
    let v19: u64;  // [bp-0x418]
    let v20: u128;  // [bp-0x410]
    let v21: u8;  // [bp-0x400]
    let v22: struct56;  // [bp-0x3f8]
    let v23: u64;  // [bp-0x3f0]
    let v24: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x3c0], Other Possible Types: struct25
    let v25: u64;  // [bp-0x388]
    let v26: u64;  // [bp-0x380]
    let v27: u64;  // [bp-0x378]
    let v28: u8;  // [bp-0x370]
    let v29: Result<struct99, struct24>;  // [bp-0x368], Other Possible Types: struct112, struct56, u64
    let v30: struct16;  // [bp-0x368]
    let v31: u64;  // [bp-0x360]
    let v32: u64;  // [bp-0x358]
    let v33: u128;  // [bp-0x330]
    let v34: u128;  // [bp-0x320]
    let v35: struct712;  // [bp-0x2e0]
    let v37: u64;  // rbx
    let v38: iNone;  // xmm0
    let v39: iNone;  // xmm1
    let v40: u64;  // rbx
    let v41: u64;  // rdx

    uucore::Args::collect_ignore(&v0, a0, a1);
    v35 = uu_od::uu_app();
    v30 = clap_builder::builder::command::Command::try_get_matches_from(&v35, v1, v2);
    if (((0 ^ v30.field_0) & (0 ^ -(v29))) >> 63) as char {
        v37 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
    } else {
        v22 = v29;
        v29 = uu_od::OdOptions::new(&v22, v1, v2);
        v37 = v31;
        if let Ok(_) = v29 {
            v13 = *((&v29 as &char + 88) as &i128) as u128;
            v38 = *((&v29 as &char + 24) as &i128);
            v39 = *((&v29 as &char + 40) as &i128);
            v11 = v34;
            v9 = v33;
            *(&v7 as void*) = v39;
            v6 = v38;
            v3 = v29 as i64;
            v4 = v37;
            v5 = v32;
            v28 = *((&v13 as &char + 10) as &i8);
            v27 = v12;
            v25 = v5;
            v26 = v6 as i64;
            v29 = uu_od::open_input_peek_reader(v7 as i64, v8, v12, v29 as i64, v4);
            v40 = v13 as i64;
            v24 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v40 as u8 + 4, v41);
            v18 = &v29;
            v16 = *(&v24.buf.inner.cap as &i128) as u128;
            v17 = v24.len;
            v19 = 4;
            v20 = 0;
            v21 = v15;
            v24 = uu_od::output_info::OutputInfo::new(v40, v10, v11 as i64, v14 as u64);
            v37 = uu_od::odfunc(&v25, &v16 as u8, &v24);
        }
    }
    return v37;
}
