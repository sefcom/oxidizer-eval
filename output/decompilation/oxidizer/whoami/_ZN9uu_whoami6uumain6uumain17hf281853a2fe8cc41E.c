fn uu_whoami::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x330]
    let v1: struct16;  // [bp-0x318]
    let v2: struct56;  // [bp-0x318], Other Possible Types: u64
    let v3: u64;  // [bp-0x310]
    let v4: struct56;  // [bp-0x2e0], Other Possible Types: struct700
    let v5: struct24;  // [bp-0x2e0]
    let v6: u64;  // [bp-0x2d8]
    let v8: u64;  // rdi

    v4 = uu_whoami::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v4, a0, a1);
    v8 = v3;
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v4 = v2;
    uu_whoami::whoami(&v4);
    if v4.field_0 == 0x8000000000000000 {
        return v6;
    }
    v0 = v5;
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v0));
}
