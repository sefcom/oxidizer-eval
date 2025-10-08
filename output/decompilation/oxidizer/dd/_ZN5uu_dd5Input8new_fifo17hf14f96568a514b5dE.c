fn uu_dd::Input::new_fifo(a1: i64, a2: i64, a3: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x40], Other Possible Types: u32
    let v1: struct72;  // [bp-0x3c]
    let v3: struct24;  // [bp-0x30]
    let v4: u64;  // [bp-0x2c]
    let v5: struct40;  // [bp-0x28]
    let v6: u16;  // [bp-0x24]
    let v8: u32;  // edx
    let v11: u64;  // rdx

    v4 = 438;
    v6 = 0;
    v5 = 1;
    v3 = ((uu_dd::make_linux_iflags(a3 + 64) & 1) ? v8 : 0);
    v0 = std::fs::OpenOptions::open(&v3, a1, a2)?;
    v0 = 2;
    if !*((a3 + 128) as &i64) {
        return Ok(struct16 {
            field_0: 2
            field_4: v1
            field_8: a3
        });
    } else if (uu_dd::Source::skip(&v0, *((a3 + 128) as &i64)) & 1) {
        return Err(struct16 {
            field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11)
            field_8: v11
        });
    } else {
        return Ok(struct16 {
            field_0: 2
            field_4: v1
            field_8: a3
        });
    }
}
