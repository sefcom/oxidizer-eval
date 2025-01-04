fn uu_whoami::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x370]
    let v1: i64;  // [sp-0x368]
    let v2: i64;  // [sp-0x360]
    let v3: i64;  // [sp-0x358]
    let v4: i64;  // [sp-0x350]
    let v5: i128;  // [sp-0x348]
    let v6: i128;  // [sp-0x338]
    let v7: i64;  // [sp-0x328]
    let v8: i448;  // [sp-0x320], Other Possible Types: Result<struct56, struct16>
    let v9: i192;  // [sp-0x2e8], Other Possible Types: struct712, struct24
    let v11: i64;  // r8
    let v12: i64;  // r9
    let v15: i64;  // rax
    let v16: i64;  // rsi
    let v17: i64;  // rdx

    v9 = uu_whoami::uu_app(a1, a2);
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v9, a0, a1, v11, v12);
    match v8 {
        Err(_) => {
            v15 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v15;
        },
        Ok(_) => {
            v7 = *((&v8 as &char + 48) as &i64);
            v6 = *((&v8 as &char + 32) as &i128);
            v5 = *((&v8 as &char + 16) as &i128);
            v3 = v8;
            v4 = *((&v8 as &char + 8) as &i64);
            v9 = uu_whoami::whoami(v16, v17);
            v15 = *((&v9 as &char + 8) as &i64);
            if v0 != 0x8000000000000000 {
                v0 = v9;
                v1 = v15;
                v2 = *((&v9 as &char + 16) as &i64);
                v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v0, v16, v2));
                return v15;
            }
            return v15;
        },
    }
}
