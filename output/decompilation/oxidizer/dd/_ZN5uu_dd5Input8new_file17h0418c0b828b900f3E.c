fn uu_dd::Input::new_file(a1: i64, a2: i64, a3: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x58], Other Possible Types: u32
    let v1: u32;  // [bp-0x54]
    let v2: struct16;  // [bp-0x48]
    let v3: u64;  // [bp-0x48]
    let v4: struct24;  // [bp-0x40]
    let v5: struct16;  // [bp-0x38]
    let v8: u64;  // rdx

    v2 = struct16 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v4 = 1;
    v0 = std::fs::OpenOptions::open(&v3, a1, a2);
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a1, a2);
    if v5.field_0 {
        return Err(struct16 {
            field_0: v5.field_0
            field_8: *(&v5.field_8 as &i64)
        });
    }
    v1 = v5.field_8;
    v0 = 0;
    if !*((a3 + 128) as &i64) {
        return Ok(struct16 {
            field_0: 0
            field_4: v5.field_8
            field_8: a3
        });
    } else if (uu_dd::Source::skip(&v0, *((a3 + 128) as &i64)) & 1) {
        return Err(struct16 {
            field_0: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8)
            field_8: v8
        });
    } else {
        return Ok(struct16 {
            field_0: 0
            field_4: v1
            field_8: a3
        });
    }
}
