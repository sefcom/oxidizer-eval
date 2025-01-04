fn uu_head::uumain::uumain(a0: u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i224;  // [sp-0x368], Other Possible Types: struct24
    let v1: i64;  // [sp-0x358]
    let v2: i384;  // [sp-0x348], Other Possible Types: Result<struct56, struct16>
    let v5: struct56;  // [sp-0x310]
    let v6: i64;  // [sp-0x308]
    let v7: i384;  // [sp-0x2d8], Other Possible Types: struct712, Result<struct48, struct32>
    let v9: i64;  // rbx
    let v10: i64;  // r8
    let v11: i64;  // r9

    v7 = uu_head::uu_app(a1, a2);
    v0 = uu_head::arg_iterate(a0, a1);
    v9 = *((&v0 as &char + 8) as &i64);
    if v0 {
        return v9;
    }
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v7, v9, v1, v10, v11);
    match v2 {
        Err(_) => {
            v9 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            return v9;
        },
        Ok(_) => {
            v5 = struct56 {
                field_0: v12
                field_8: v13
                field_16: v3
                field_32: v4
                field_48: *((&v2 as &char + 48) as &i64)
            };
            v7 = uu_head::HeadOptions::get_from(&v5);
            match v7 {
                Err(_) => {
                    v0 = *((&v7 as &char + 8) as &i224);
                    v9 = alloc::boxed::Box<T>::new(&v0);
                    return v9;
                },
                Ok(_) => {
                    v2 = v7;
                    v9 = uu_head::uu_head() as i64;
                    return v9;
                },
            }
        },
    }
}
