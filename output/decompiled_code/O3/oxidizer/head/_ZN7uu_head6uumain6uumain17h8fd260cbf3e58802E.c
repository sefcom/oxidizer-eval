fn uu_head::uumain::uumain(a0: u64, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x368], Other Possible Types: i192, struct40
    let v1: i128;  // [bp-0x348]
    let v2: i128;  // [sp-0x338]
    let v3: i128;  // [sp-0x328]
    let v5: struct56;  // [sp-0x310], Other Possible Types: i64
    let v6: i64;  // [sp-0x308]
    let v7: i5696;  // [sp-0x2d8], Other Possible Types: Result<struct48, struct32>, struct712
    let v9: i64;  // rdx
    let v10: i64;  // rbx

    v7 = uu_head::uu_app(a1, v9);
    v0 = uu_head::arg_iterate(a0, a1);
    v10 = *((&v0 as &char + 8) as &i64);
    if v0 {
        return v10;
    }
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v7, v10, v0.field_16);
    if v5 == 0x8000000000000000 {
        v10 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        return v10;
    }
    v5 = struct56 {
        field_0: v11
        field_8: v12
        field_16: v2
        field_32: v3
        field_48: v4
    };
    v7 = uu_head::HeadOptions::get_from(&v5);
    match v7 {
        Err(_) => {
            v0 = struct40 {
                field_0: *((&v7 as &char + 8) as &i128)
                field_16: <UNKNOWN>
                field_24: <UNKNOWN>
            };
            v10 = alloc::boxed::Box<T>::new(&v0);
            return v10;
        },
        Ok(_) => {
            v3 = *((&v7 as &char + 32) as &i128);
            v2 = *((&v7 as &char + 16) as &i128);
            v1 = v7;
            v10 = uu_head::uu_head() as i64;
            return v10;
        },
    }
}
