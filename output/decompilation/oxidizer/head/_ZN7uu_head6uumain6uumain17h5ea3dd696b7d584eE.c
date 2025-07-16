fn uu_head::uumain::uumain(a1: i32) -> Result<struct16, struct16> {
    let a0: u32;  // rsi
    let v0: u224;  // [bp-0x368]
    let v1: u64;  // [bp-0x360]
    let v2: u64;  // [bp-0x358]
    let v3: u256;  // [bp-0x348]
    let v4: u128;  // [bp-0x348]
    let v5: Result<struct56, struct16>;  // [bp-0x348]
    let v6: u64;  // [bp-0x340]
    let v7: u64;  // [bp-0x318]
    let v8: u256;  // [bp-0x310]
    let v9: u8;  // [bp-0x2f0]
    let v10: u64;  // [bp-0x2e0]
    let v11: u8;  // [bp-0x2d8], Other Possible Types: Result<struct48, struct32>
    let v12: u64;  // [bp-0x2c0]
    let v14: u64;  // rdi
    let v15: u32;  // rcx

    uu_head::uu_app(&v11);
    uu_head::arg_iterate(v14, a0, v15);
    if v0 {
        return;
    }
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v11, v1, v2);
    match v4 as u640 {
        Err(_) => {
            uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
            return;
        },
        Ok(_) => {
            v10 = v7;
            memcpy(&v9, &v5 as u128, 16);
            v8 = v3;
            v11 = uu_head::HeadOptions::get_from(&v8);
            match v11 {
                Ok(_) => {
                    memcpy(&v5 as u128, &v11 as u8, 16);
                    memcpy(&v5, &v11, 16);
                    v4 = v11 as i128 as u128;
                    uu_head::uu_head(&v4 as u640);
                    return;
                },
                Err(_) => {
                    memcpy(&v0 as u8, &v11 as u8, 16);
                    v0 = struct28 {
                        field_0: <UNKNOWN>
                        field_16: v12
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v0);
                    return;
                },
            }
        },
    }
}
