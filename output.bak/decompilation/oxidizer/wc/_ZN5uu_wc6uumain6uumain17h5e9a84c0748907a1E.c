fn uu_wc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: Result<struct56, struct8>;  // [sp-0x370], Other Possible Types: i64, struct32
    let v2: struct56;  // [sp-0x338], Other Possible Types: i64
    let v3: i64;  // [sp-0x330]
    let v4: struct32;  // [sp-0x300], Other Possible Types: i256
    let v5: Option<Result<struct24, struct16>>;  // [sp-0x2e0], Other Possible Types: struct712, i5696
    let v7: i64;  // rax

    v5 = uu_wc::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1);
    if v2 == 0x8000000000000000 {
        v7 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        return v7;
    }
    v2 = struct56 {
        field_0: v0
        field_8: v1
        field_16: *((&v0 as &char + 16) as &i128)
        field_32: *((&v0 as &char + 32) as &i128)
        field_48: *((&v0 as &char + 48) as &i64)
    };
    v4 = uu_wc::Settings::new(&v2);
    v5 = uu_wc::Inputs::new(&v2);
    if v0 != 3 {
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: v8
            field_8: v9
            field_16: v10
            field_24: *((&v5 as &char + 24) as &i64)
        };
        v7 = uu_wc::wc(&v0, &v4);
    }
    return v7;
}
