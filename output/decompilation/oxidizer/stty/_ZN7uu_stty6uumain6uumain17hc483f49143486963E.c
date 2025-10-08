fn uu_stty::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct42;  // [bp-0x348], Other Possible Types: struct56, u64
    let v1: Result<struct42, struct16>;  // [bp-0x348], Other Possible Types: struct16
    let v2: u64;  // [bp-0x340]
    let v3: struct42;  // [bp-0x310]
    let v4: u64;  // [bp-0x308]
    let v5: struct56;  // [bp-0x2e0], Other Possible Types: struct712
    let v6: u64;  // [bp-0x2d8]
    let v8: u64;  // rdi
    let v9: u64;  // rax

    v5 = uu_stty::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v5, a0, a1);
    v8 = v2;
    if (((0 ^ v1.field_0) & (0 ^ -(v0))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v5 = v0;
    v1 = uu_stty::Options::from(&v5);
    match v1 {
        Err(_) => {
            v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        },
        Ok(v3) => {
            v9 = uu_stty::stty(&v3);
        },
    }
    return v9;
}
