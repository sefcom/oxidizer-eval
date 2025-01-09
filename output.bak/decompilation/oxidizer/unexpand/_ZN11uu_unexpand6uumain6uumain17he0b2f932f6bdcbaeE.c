fn uu_unexpand::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x380], Other Possible Types: struct24
    let v1: i128;  // [sp-0x368], Other Possible Types: struct24
    let v2: i64;  // [sp-0x358]
    let v3: Result<struct56, struct8>;  // [sp-0x348], Other Possible Types: struct56
    let v6: struct56;  // [sp-0x310], Other Possible Types: i64
    let v7: i64;  // [sp-0x308]
    let v8: i5696;  // [sp-0x2d8], Other Possible Types: struct712, struct24, Result<struct50, struct24>
    let v10: i64;  // rax

    v0 = uucore::Args::collect_ignore(a0, a1);
    v8 = uu_unexpand::uu_app();
    v1 = uu_unexpand::expand_shortcuts(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v8, &v1);
    if v6 == 0x8000000000000000 {
        v10 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
        return v10;
    }
    v6 = struct56 {
        field_0: v3
        field_8: v11
        field_16: *((&v3 as &char + 16) as &i128)
        field_32: v4
        field_48: v5
    };
    v8 = uu_unexpand::Options::new(&v6);
    v1 = *((&v8 as &char + 8) as &i128);
    v2 = *((&v8 as &char + 24) as &i64);
    match v8 {
        Err(_) => {
            *(&v8.field_0 as &struct24) = struct24 {
                field_0: v1
                field_16: v2
            };
            v10 = alloc::boxed::Box<T>::new(&v8);
            return v10;
        },
        Ok(_) => {
            *(&v3.field_0 as &struct56) = struct56 {
                field_0: v12
                field_8: v1
                field_24: v2
                field_32: *((&v8 as &char + 32) as &i128)
                field_48: *((&v8 as &char + 48) as &i64)
            };
            v10 = uu_unexpand::unexpand(&v3);
            return v10;
        },
    }
}
