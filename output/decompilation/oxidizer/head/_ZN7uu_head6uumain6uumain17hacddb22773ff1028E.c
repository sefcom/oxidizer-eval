fn uu_head::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct32, struct24>;  // [bp-0x368], Other Possible Types: struct32
    let v1: u64;  // [bp-0x360]
    let v2: u64;  // [bp-0x358]
    let v3: struct16;  // [bp-0x348], Other Possible Types: struct48
    let v4: struct56;  // [bp-0x348]
    let v5: u64;  // [bp-0x340]
    let v6: struct56;  // [bp-0x310]
    let v7: u64;  // [bp-0x308]
    let v8: struct712;  // [bp-0x2d8]
    let v9: Result<struct48, struct32>;  // [bp-0x2d8]
    let v10: struct48;  // [bp-0x2d8]
    let v11: u64;  // [bp-0x2c0]
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // rdi

    v8 = uu_head::uu_app();
    v0 = uu_head::arg_iterate(a0, a1);
    v13 = v1;
    v14 = v2;
    match v0 {
        Ok(_) => {
            v0 = v0 as i64;
            return alloc::boxed::Box<T>::new(&v0) as u64;
        },
        Err(_) => {
            v3 = clap_builder::builder::command::Command::try_get_matches_from(&v8, v1, v2);
            v15 = v5;
            if v3.field_0 == 0x8000000000000000 {
                return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
            }
            v6 = v4;
            v9 = uu_head::HeadOptions::get_from(&v6);
            match v9 {
                Ok(v3) => {
                    return uu_head::uu_head(&v3);
                },
                Err(_) => {
                    v0 = struct32 {
                        field_0: 9223372036854775812
                        field_8: *((&v9 as &char + 8) as &i128)
                        field_24: v11
                    };
                    return alloc::boxed::Box<T>::new(&v0) as u64;
                },
            }
        },
    }
}
