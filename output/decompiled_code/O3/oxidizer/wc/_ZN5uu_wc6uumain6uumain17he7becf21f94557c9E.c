fn uu_wc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x370], Other Possible Types: struct32
    let v5: struct56;  // [sp-0x338], Other Possible Types: i64
    let v6: i64;  // [sp-0x330]
    let v7: i256;  // [sp-0x300], Other Possible Types: struct32
    let v8: i5696;  // [sp-0x2e0], Other Possible Types: Option<Result<struct24, struct16>>, struct712
    let v10: i64;  // rdx
    let v11: i64;  // rax

    v8 = uu_wc::uu_app(a1, v10);
    clap_builder::builder::command::Command::try_get_matches_from(&v0, &v8, a0, a1);
    if v5 == 0x8000000000000000 {
        v11 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v11;
    }
    v5 = struct56 {
        field_0: v0
        field_8: v1
        field_16: v2
        field_32: v3
        field_48: v4
    };
    v7 = uu_wc::Settings::new(&v5);
    v8 = uu_wc::Inputs::new(&v5);
    if v0 != 3 {
        v0 = struct32 {
            field_0: v12
            field_8: v13
            field_16: v14
            field_24: *((&v8 as &char + 24) as &i64)
        };
        v11 = uu_wc::wc(&v0, &v7, v10);
    }
    return v11;
}
