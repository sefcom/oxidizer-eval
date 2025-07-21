fn uu_dd::Input::new_fifo(a1: i64, a2: i64, a3: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: u32;  // [bp-0x48]
    let v1: u32;  // [bp-0x44]
    let v2: u32;  // [bp-0x40]
    let v3: u64;  // [bp-0x3c]
    let v4: u8;  // [bp-0x38]
    let v5: struct16;  // [bp-0x34]
    let v6: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x30]
    let v7: u32;  // [bp-0x2c]
    let v9: u32;  // eax
    let v11: u32;  // eax
    let v12: i64;  // rdi
    let v13: u64;  // rdx
    let v15: i64;  // rdi
    let v16: u64;  // rdx
    let v17: i64;  // rdi

    v3 = 438;
    v5 = 0;
    v4 = 1;
    v9 = uu_dd::make_linux_iflags(a2 + 64) as i32;
    v2 = v9;
    v6 = std::fs::OpenOptions::open(&v2, a0, a1);
    match v6 {
        Err(_) => {
            *((v12 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64));
            *((v12 + 16) as &u64) = v13;
            *(v12 as &i64) = 1;
            return;
        },
        Ok(v11) => {
            v1 = v11;
            v0 = 2;
            if *((a2 + 128) as &i64) {
                if uu_dd::Source::skip(&v0, *((a2 + 128) as &i64)) {
                    *((v15 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
                    *((v15 + 16) as &u64) = v16;
                    *(v15 as &i64) = 1;
                    return;
                }
                v11 = v1;
            }
            *((v17 + 8) as &u32) = v0;
            *((v17 + 12) as &u32) = v11;
            *((v17 + 16) as &struct_2 *) = a2;
            *(v17 as &i64) = 0;
            return;
        },
    }
}
