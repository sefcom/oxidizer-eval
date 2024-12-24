fn uu_unexpand::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x380], Other Possible Types: struct24
    let v1: i128;  // [sp-0x368], Other Possible Types: struct24
    let v3: Result<struct56, struct16>;  // [sp-0x348], Other Possible Types: i448, struct56
    let v4: i448;  // [sp-0x310]
    let v5: i64;  // [sp-0x308]
    let v6: i400;  // [sp-0x2d8], Other Possible Types: Result<struct50, struct32>, struct712
    let v8: i64;  // rsi
    let v9: i64;  // rdx
    let v10: i64;  // rcx
    let v11: i64;  // rax

    v0 = uucore::Args::collect_ignore(a0, a1);
    v6 = uu_unexpand::uu_app(v8, v9);
    v1 = uu_unexpand::expand_shortcuts(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v6, &v1, v10);
    if v4 == 0x8000000000000000 {
        v11 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v11;
    }
    v4 = v3;
    v6 = uu_unexpand::Options::new(&v4);
    v1 = *((&v6 as &char + 8) as &i128);
    v1.field_16 = (stack_base)[704] as i64;
    match v6 {
        Err(_) => {
            v6 = v1;
            v11 = alloc::boxed::Box<T>::new(&v6);
            return v11;
        },
        Ok(_) => {
            v3 = struct56 {
                field_0: v12
                field_8: v1
                field_24: v2
                field_32: *((&v6 as &char + 32) as &i128)
                field_48: *((&v6 as &char + 48) as &i64)
            };
            v11 = uu_unexpand::unexpand(&v3);
            return v11;
        },
    }
}
