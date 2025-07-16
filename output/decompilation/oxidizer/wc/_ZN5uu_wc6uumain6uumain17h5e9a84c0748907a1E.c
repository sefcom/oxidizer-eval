fn uu_wc::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u256;  // [bp-0x370], Other Possible Types: Result<struct56, struct16>
    let v1: u128;  // [bp-0x370]
    let v2: u64;  // [bp-0x340]
    let v3: u128;  // [bp-0x338]
    let v4: u64;  // [bp-0x330]
    let v5: u8;  // [bp-0x318]
    let v6: u64;  // [bp-0x308]
    let v7: struct32;  // [bp-0x300]
    let v8: u256;  // [bp-0x2e0]
    let v9: struct32;  // [bp-0x2e0]
    let v11: u64;  // rax

    uu_wc::uu_app(&v8);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v8, a0, a1);
    match v0 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(_) => {
            v6 = v2;
            memcpy(&v5, &v0 as u128, 16);
            memcpy(&v0, &v0, 16);
            v3 = v1;
            v7 = uu_wc::Settings::new(&v3);
            v9 = uu_wc::Inputs::new(&v3);
            if v9.field_0 as i64 == 3 {
                return v11;
            }
            v0 = v8;
            v11 = uu_wc::wc(&v0, &v7);
            return v11;
        },
    }
}
