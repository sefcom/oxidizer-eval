fn uu_wc::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct30;  // [bp-0x358]
    let v1: struct32;  // [bp-0x338]
    let v2: struct32;  // [bp-0x318], Other Possible Types: struct56, u64
    let v3: struct16;  // [bp-0x318], Other Possible Types: struct32
    let v4: u64;  // [bp-0x310]
    let v5: struct56;  // [bp-0x2e0], Other Possible Types: struct712
    let v6: u64;  // [bp-0x2d8]
    let v8: u64;  // rdi
    let v9: u64;  // rax

    v5 = uu_wc::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1);
    v8 = v4;
    if (((0 ^ v3.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = v2;
    v0 = uu_wc::Settings::new(&v5);
    v3 = uu_wc::Inputs::new(&v5);
    if v3.field_0 == 3 {
        return v9;
    }
    v1 = v2;
    v9 = uu_wc::wc(&v1, &v0);
    return v9;
}
