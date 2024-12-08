fn uu_unexpand::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x380], Other Possible Types: struct24
    let v1: i192;  // [sp-0x368], Other Possible Types: struct24
    let v3: i8;  // [bp-0x348], Other Possible Types: struct56
    let v7: i64;  // [sp-0x310], Other Possible Types: struct56
    let v8: i64;  // [sp-0x308]
    let v9: i400;  // [sp-0x2d8], Other Possible Types: struct24, Result<struct50, struct32>, struct712
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rcx
    let v14: i64;  // rax

    v0 = uucore::Args::collect_ignore(a0, a1);
    v9 = uu_unexpand::uu_app(v11, v12);
    v1 = uu_unexpand::expand_shortcuts(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    clap_builder::builder::command::Command::try_get_matches_from(&v3, &v9, &v1, v13);
    if v7 == 0x8000000000000000 {
        v14 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v14;
    }
    *(&v7.field_0 as &struct56) = struct56 {
        field_0: v3
        field_8: v15
        field_16: v4
        field_32: v5
        field_48: v6
    };
    v9 = uu_unexpand::Options::new(&v7);
    v1 = *((&v9 as &char + 8) as &i128);
    v1.field_16 = (stack_base)[704] as i64;
    match v9 {
        Err(_) => {
            v9 = struct24 {
                field_0: v1
                field_16: v2
            };
            v14 = alloc::boxed::Box<T>::new(&v9);
            return v14;
        },
        Ok(_) => {
            v3 = struct56 {
                field_0: v16
                field_8: v1
                field_24: v2
                field_32: *((&v9 as &char + 32) as &i128)
                field_48: *((&v9 as &char + 48) as &i64)
            };
            v14 = uu_unexpand::unexpand(&v3);
            return v14;
        },
    }
}
