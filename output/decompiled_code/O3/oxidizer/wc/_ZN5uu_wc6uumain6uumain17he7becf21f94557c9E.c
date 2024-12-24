fn uu_wc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i448;  // [sp-0x370], Other Possible Types: struct32, Result<struct56, struct16>
    let v1: i448;  // [sp-0x338]
    let v2: i64;  // [sp-0x330]
    let v3: i256;  // [sp-0x300], Other Possible Types: struct32
    let v4: Option<Result<struct24, struct16>>;  // [sp-0x2e0], Other Possible Types: i5696, struct712
    let v6: i64;  // rdx
    let v7: i64;  // rax

    v4 = uu_wc::uu_app(a1, v6);
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a0, a1);
    if v1 == 0x8000000000000000 {
        v7 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        return v7;
    }
    v1 = v0;
    v3 = uu_wc::Settings::new(&v1);
    v4 = uu_wc::Inputs::new(&v1);
    if v0 != 3 {
        v0 = struct32 {
            field_0: v8
            field_8: v9
            field_16: v10
            field_24: *((&v4 as &char + 24) as &i64)
        };
        v7 = uu_wc::wc(&v0, &v3, v6);
    }
    return v7;
}
