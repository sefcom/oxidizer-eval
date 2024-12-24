fn uu_expand::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x3a8]
    let v1: i128;  // [sp-0x398]
    let v2: i128;  // [sp-0x388]
    let v3: i448;  // [sp-0x378]
    let v4: i64;  // [sp-0x370]
    let v5: struct80;  // [sp-0x340], Other Possible Types: i448, Result<struct56, struct16>
    let v6: i192;  // [sp-0x2f0], Other Possible Types: struct24
    let v7: i5696;  // [sp-0x2d8], Other Possible Types: struct712, Result<struct75, struct57>
    let v9: i64;  // rcx
    let v10: i64;  // rax

    v7 = uu_expand::uu_app(a1, a2);
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v6 = uu_expand::expand_shortcuts(&v0);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v7, &v6, v9);
    if v3 == 0x8000000000000000 {
        v10 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v10;
    }
    v3 = v5;
    v7 = uu_expand::Options::new(&v3);
    v0 = *((&v7 as &char + 8) as &i128);
    v1 = *((&v7 as &char + 24) as &i128);
    v2 = *((&v7 as &char + 40) as &i128);
    match v7 {
        Err(_) => {
            v7 = v0;
            v10 = alloc::boxed::Box<T>::new(&v7);
            return v10;
        },
        Ok(_) => {
            v5 = struct80 {
                field_0: v11
                field_8: v0
                field_24: v1
                field_40: v2
                field_56: *((&v7 as &char + 56) as &i128)
                field_72: *((&v7 as &char + 72) as &i64)
            };
            v10 = uu_expand::expand(&v5);
            return v10;
        },
    }
}
