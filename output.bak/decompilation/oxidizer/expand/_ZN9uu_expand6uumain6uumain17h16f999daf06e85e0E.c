fn uu_expand::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x3a8]
    let v1: i128;  // [sp-0x398]
    let v2: i128;  // [sp-0x388]
    let v3: struct56;  // [sp-0x378], Other Possible Types: i64
    let v4: i64;  // [sp-0x370]
    let v5: struct80;  // [sp-0x340], Other Possible Types: Result<struct56, struct8>
    let v6: struct24;  // [sp-0x2f0], Other Possible Types: i192
    let v7: i5696;  // [sp-0x2d8], Other Possible Types: Result<struct75, struct49>, struct48, struct712
    let v9: i64;  // rax

    v7 = uu_expand::uu_app();
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v6 = uu_expand::expand_shortcuts(&v0);
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v7, &v6);
    if v3 == 0x8000000000000000 {
        v9 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v9;
    }
    v3 = struct56 {
        field_0: v5
        field_8: v10
        field_16: *((&v5 as &char + 16) as &i128)
        field_32: *((&v5 as &char + 32) as &i128)
        field_48: *((&v5 as &char + 48) as &i64)
    };
    v7 = uu_expand::Options::new(&v3);
    v0 = *((&v7 as &char + 8) as &i128);
    v1 = *((&v7 as &char + 24) as &i128);
    v2 = *((&v7 as &char + 40) as &i128);
    match v7 {
        Err(_) => {
            v7 = struct48 {
                field_0: v0
                field_16: v1
                field_32: v2
            };
            v9 = alloc::boxed::Box<T>::new(&v7);
            return v9;
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
            v9 = uu_expand::expand(&v5);
            return v9;
        },
    }
}
