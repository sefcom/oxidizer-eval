fn uu_wc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i64;  // [sp-0x360]
    let v3: i64;  // [sp-0x358]
    let v4: i64;  // [sp-0x338]
    let v5: i64;  // [sp-0x330]
    let v6: struct32;  // [sp-0x300], Other Possible Types: i256
    let v7: i256;  // [sp-0x2e0], Other Possible Types: struct712, struct32
    let v9: i64;  // rax
    let v13: i64;  // rax

    v7 = uu_wc::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v7, a0, a1);
    if v4 == 0x8000000000000000 {
        v9 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v9;
    }
    v4 = v0;
    v6 = uu_wc::Settings::new(&v4);
    v7 = uu_wc::Inputs::new(&v4);
    if v0 != 3 {
        v0 = v7;
        v1 = *((&v7 as &char + 8) as &i64);
        v2 = *((&v7 as &char + 16) as &i64);
        v3 = *((&v7 as &char + 24) as &i64);
        v13 = uu_wc::wc(&v0, &v6);
        return v9;
    }
    return v9;
}
