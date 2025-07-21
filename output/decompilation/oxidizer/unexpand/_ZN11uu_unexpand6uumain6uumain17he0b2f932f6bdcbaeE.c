fn uu_unexpand::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x380]
    let v1: u32;  // [bp-0x378]
    let v2: u64;  // [bp-0x370]
    let v3: struct24;  // [bp-0x368], Other Possible Types: u128
    let v4: u192;  // [bp-0x368]
    let v5: u64;  // [bp-0x358]
    let v6: Result<struct56, struct16>;  // [bp-0x348], Other Possible Types: struct56
    let v7: u448;  // [bp-0x348]
    let v8: struct56;  // [bp-0x310]
    let v9: Result<struct50, struct32>;  // [bp-0x2d8], Other Possible Types: struct24, u8
    let v10: u64;  // [bp-0x2c0]
    let v11: u128;  // [bp-0x2b8]
    let v14: u64;  // rax

    v0 = uucore::Args::collect_ignore(a0, a1);
    uu_unexpand::uu_app(&v9);
    v3 = uu_unexpand::expand_shortcuts(v1, v2);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v9, &v3);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64));
        },
        Ok(v8) => {
            v9 = uu_unexpand::Options::new(&v8);
            v14 = v9 as i64;
            v3 = *((&v9 as &char + 8) as &i128);
            v5 = v10;
            if v14 != 0x8000000000000000 {
                v6 = struct56 {
                    field_0: v14
                    field_8: v3
                    field_24: v5
                    field_32: v11
                    field_48: *((&v9 as &char + 48) as &i64)
                };
                return uu_unexpand::unexpand(&v6);
            }
            v9 = v4;
            return alloc::boxed::Box<T>::new(&v9);
        },
    }
}
