fn uu_unexpand::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x398]
    let v1: &u64;  // [bp-0x390]
    let v2: u64;  // [bp-0x388]
    let v3: struct16;  // [bp-0x380], Other Possible Types: struct56
    let v4: struct56;  // [bp-0x380], Other Possible Types: u64
    let v5: u128;  // [bp-0x348]
    let v6: u64;  // [bp-0x338]
    let v7: struct56;  // [bp-0x328]
    let v8: struct24;  // [bp-0x2f0]
    let v9: Result<struct50, struct32>;  // [bp-0x2d8]
    let v10: struct712;  // [bp-0x2d8]
    let v11: iNone;  // [bp-0x2d0]
    let v12: u64;  // [bp-0x2c0]
    let v13: u128;  // [bp-0x2b8]
    let v15: u64;  // rbx

    uucore::Args::collect_ignore(&v0, a0, a1);
    v10 = uu_unexpand::uu_app();
    v8 = uu_unexpand::expand_shortcuts(v1, v2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v10, &v8);
    if (((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char {
        v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3.field_8);
    } else {
        v7 = v4;
        v9 = uu_unexpand::Options::new(&v7);
        v5 = v11;
        v6 = v12;
        match v9 {
            Err(_) => {
                v15 = alloc::boxed::Box<T>::new(&v5) as u64;
            },
            Ok(_) => {
                v3 = struct56 {
                    field_0: v9 as i64
                    field_8: v5
                    field_24: v6
                    field_32: v13
                    field_48: *((&v9 as &char + 48) as &i64)
                };
                v15 = uu_unexpand::unexpand(&v3);
            },
        }
    }
    return v15;
}
