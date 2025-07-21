fn uu_wc::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct56, struct16>;  // [bp-0x370], Other Possible Types: struct32
    let v1: struct56;  // [bp-0x370]
    let v2: struct56;  // [bp-0x338]
    let v3: u64;  // [bp-0x330]
    let v4: struct32;  // [bp-0x300]
    let v5: struct32;  // [bp-0x2e0], Other Possible Types: u8
    let v6: struct32;  // [bp-0x2e0]
    let v8: u64;  // rax

    uu_wc::uu_app(&v5);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1);
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        },
        Ok(v2) => {
            v4 = uu_wc::Settings::new(&v2);
            v5 = uu_wc::Inputs::new(&v2);
            if v5.field_0 as i64 == 3 {
                return v8;
            }
            v0 = v6;
            v8 = uu_wc::wc(&v0, &v4);
            return v8;
        },
    }
}
