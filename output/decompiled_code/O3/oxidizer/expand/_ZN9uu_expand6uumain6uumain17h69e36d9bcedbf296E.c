fn uu_expand::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [bp-0x3a8]
    let v1: i128;  // [sp-0x398]
    let v2: i128;  // [sp-0x388]
    let v3: struct56;  // [sp-0x378], Other Possible Types: i64
    let v4: i64;  // [sp-0x370]
    let v5: struct80;  // [bp-0x340], Other Possible Types: i8
    let v9: struct24;  // [sp-0x2f0], Other Possible Types: i192
    let v10: i5696;  // [sp-0x2d8], Other Possible Types: struct48, struct712, Result<struct75, struct57>
    let v12: i64;  // rcx
    let v13: i64;  // rax

    v10 = uu_expand::uu_app(a1, a2);
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v9 = uu_expand::expand_shortcuts(&v0);
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v10, &v9, v12);
    if v3 == 0x8000000000000000 {
        v13 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v13;
    }
    v3 = struct56 {
        field_0: v5
        field_8: v14
        field_16: v6
        field_32: v7
        field_48: v8
    };
    v10 = uu_expand::Options::new(&v3);
    v0 = *((&v10 as &char + 8) as &i128);
    v1 = *((&v10 as &char + 24) as &i128);
    v2 = *((&v10 as &char + 40) as &i128);
    match v10 {
        Err(_) => {
            v10 = struct48 {
                field_0: v0
                field_16: v1
                field_32: v2
            };
            v13 = alloc::boxed::Box<T>::new(&v10);
            return v13;
        },
        Ok(_) => {
            v5 = struct80 {
                field_0: v15
                field_8: v0
                field_24: v1
                field_40: v2
                field_56: *((&v10 as &char + 56) as &i128)
                field_72: *((&v10 as &char + 72) as &i64)
            };
            v13 = uu_expand::expand(&v5);
            return v13;
        },
    }
}
