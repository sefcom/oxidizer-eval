fn uu_expand::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct56;  // [bp-0x3b0], Other Possible Types: u8
    let v1: struct16;  // [bp-0x378], Other Possible Types: struct80
    let v2: struct56;  // [bp-0x378], Other Possible Types: u64
    let v3: u128;  // [bp-0x328]
    let v4: iNone;  // [bp-0x318]
    let v5: iNone;  // [bp-0x308]
    let v6: u8;  // [bp-0x2f0]
    let v7: struct712;  // [bp-0x2d8]
    let v8: Result<struct75, struct57>;  // [bp-0x2d8]
    let v9: iNone;  // [bp-0x2d0]
    let v10: iNone;  // [bp-0x2c0]
    let v11: iNone;  // [bp-0x2b0]
    let v12: u128;  // [bp-0x2a0]

    v7 = uu_expand::uu_app();
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    uu_expand::expand_shortcuts(&v6, &v0);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v7, &v6);
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1.field_8);
    }
    v0 = v2;
    v8 = uu_expand::Options::new(&v0);
    v3 = v9;
    v4 = v10;
    v5 = v11;
    match v8 {
        Ok(_) => {
            v1 = struct80 {
                field_0: v8 as i64
                field_8: v3
                field_24: v4
                field_40: v5
                field_56: v12
                field_72: *((&v8 as &char + 72) as &i64)
            };
            return uu_expand::expand(&v1);
        },
        Err(_) => {
            return alloc::boxed::Box<T>::new(&v3) as u64;
        },
    }
}
