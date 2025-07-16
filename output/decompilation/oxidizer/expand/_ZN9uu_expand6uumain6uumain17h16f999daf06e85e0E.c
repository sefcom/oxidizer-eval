fn uu_expand::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x3a8]
    let v1: u128;  // [bp-0x398]
    let v2: u8;  // [bp-0x388]
    let v3: u128;  // [bp-0x378]
    let v4: u64;  // [bp-0x370]
    let v5: u8;  // [bp-0x368]
    let v6: u8;  // [bp-0x358]
    let v7: u64;  // [bp-0x348]
    let v8: Result<struct56, struct16>;  // [bp-0x340], Other Possible Types: u64
    let v9: u64;  // [bp-0x340]
    let v10: u128;  // [bp-0x328]
    let v11: u128;  // [bp-0x318]
    let v12: u64;  // [bp-0x310]
    let v13: u128;  // [bp-0x308]
    let v14: u64;  // [bp-0x2f8]
    let v15: u8;  // [bp-0x2f0]
    let v16: u8;  // [bp-0x2d8], Other Possible Types: Result<struct75, struct57>
    let v17: u128;  // [bp-0x2c0]
    let v18: u128;  // [bp-0x2a0]
    let v20: u64;  // rax

    uu_expand::uu_app(&v16);
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    uu_expand::expand_shortcuts(&v15, &v0);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v16, &v15);
    match v8 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(_) => {
            v7 = v12;
            memcpy(&v6, &v8 as u8, 16);
            memcpy(&v5, &v8, 16);
            v3 = v9;
            v16 = uu_expand::Options::new(&v3);
            v20 = v16 as i64;
            memcpy(&v0, &v16 as u8, 16);
            v1 = v17;
            memcpy(&v2, &v16 as u128, 16);
            if v20 != 0x8000000000000000 {
                v14 = *((&v16 as &char + 72) as &i64);
                v13 = v18;
                memcpy(&v8 as u64, &v0, 16);
                v10 = v1;
                v11 = v2;
                v8 = v20;
                return uu_expand::expand(&v8);
            }
            memcpy(&v16 as u8, &v2, 16);
            v16 = v0;
            return alloc::boxed::Box<T>::new(&v16);
        },
    }
}
