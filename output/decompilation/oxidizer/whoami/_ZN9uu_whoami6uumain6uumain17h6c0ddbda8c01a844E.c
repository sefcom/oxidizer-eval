fn uu_whoami::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i64;  // [sp-0x360]
    let v3: i64;  // [sp-0x358]
    let v4: i64;  // [sp-0x350]
    let v5: i8;  // [bp-0x320]
    let v6: struct24;  // [sp-0x2e8], Other Possible Types: struct712
    let v8: i64;  // rax

    v6 = uu_whoami::uu_app() as u6296;
    clap_builder::builder::command::Command::try_get_matches_from(&v5, &v6, a0, a1);
    if v3 == 0x8000000000000000 {
        v8 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        return v8;
    }
    v6 = uu_whoami::whoami();
    v8 = *((&v6.field_0 as &char + 8) as &i64);
    if v0 != 0x8000000000000000 {
        v0 = v6.field_0 as i64;
        v1 = v8;
        v2 = v6.field_16;
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v0));
        return v8;
    }
    return v8;
}
