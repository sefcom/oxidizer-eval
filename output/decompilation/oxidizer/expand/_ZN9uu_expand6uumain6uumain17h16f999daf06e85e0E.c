fn uu_expand::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u384;  // [bp-0x3a8]
    let v1: u128;  // [bp-0x3a8]
    let v2: u128;  // [bp-0x398]
    let v3: u128;  // [bp-0x388]
    let v4: struct56;  // [bp-0x378]
    let v5: Result<struct56, struct16>;  // [bp-0x340], Other Possible Types: struct80
    let v6: struct56;  // [bp-0x340]
    let v7: u8;  // [bp-0x2f0]
    let v8: Result<struct75, struct57>;  // [bp-0x2d8], Other Possible Types: struct48, u8
    let v9: u128;  // [bp-0x2b0]
    let v10: u128;  // [bp-0x2a0]
    let v12: u64;  // rax

    uu_expand::uu_app(&v8);
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    uu_expand::expand_shortcuts(&v7, &v0);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v8, &v7);
    match v5 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v5 as &char + 8) as &i64));
        },
        Ok(v4) => {
            v8 = uu_expand::Options::new(&v4);
            v12 = v8 as i64;
            v1 = *((&v8 as &char + 8) as &i128);
            v2 = *((&v8 as &char + 24) as &i128);
            v3 = v9;
            if v12 != 0x8000000000000000 {
                v5 = struct80 {
                    field_0: v12
                    field_8: v1
                    field_24: v2
                    field_40: v3
                    field_56: v10
                    field_72: *((&v8 as &char + 72) as &i64)
                };
                return uu_expand::expand(&v5);
            }
            v8 = v0;
            return alloc::boxed::Box<T>::new(&v8);
        },
    }
}
