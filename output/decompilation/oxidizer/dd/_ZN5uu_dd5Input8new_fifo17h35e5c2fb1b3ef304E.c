fn uu_dd::Input::new_fifo(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i32;  // [sp-0x48]
    let v1: i32;  // [sp-0x44]
    let v2: i32;  // [sp-0x40]
    let v3: i64;  // [bp-0x3c]
    let v4: i8;  // [sp-0x38]
    let v5: i16;  // [sp-0x34]
    let v6: Result<struct4, struct8>;  // [sp-0x30]
    let v8: i32;  // eax
    let v10: i32;  // eax
    let v11: i64;  // rsi
    let v12: i64;  // rdx

    *(&v3 as &i64) = 438;
    v5 = 0;
    v4 = 1;
    v8 = uu_dd::make_linux_iflags(a3 + 64) as i32;
    v2 = v8;
    v6 = std::fs::OpenOptions::open(&v2, a1, a2);
    match v6 {
        Ok(v10) => {
            v1 = *((&v6 as &char + 4) as &i32);
            v0 = 2;
            v11 = *((a3 + 128) as &i64);
            return struct24 {
                field_0: 0
                field_8: v13
                field_12: v10
                field_16: a3
            };
        },
        Err(_) => {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6 as i64);
            *((a0 + 16) as &unsigned long) = v12;
            *(a0 as &i64) = 1;
        },
    }
}
