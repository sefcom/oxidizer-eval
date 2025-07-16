fn uu_env::parse_signal_value(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xb8]
    let v1: u64;  // [bp-0xa8]
    let v2: u32;  // [bp-0xa0]
    let v3: alloc::string::String;  // [bp-0x88]
    let v4: u32;  // [bp-0x80]
    let v5: u32;  // [bp-0x78]
    let v6: void*;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: u8;  // [bp-0x48]
    let v10: alloc::string::String;  // [bp-0x40]
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rdx

    v3 = alloc::str::<impl str>::to_uppercase(a1, a2);
    v12 = uucore::features::signals::signal_by_name_or_value(v4, v5);
    v6 = 0;
    v7 = a1;
    v8 = a2;
    v9 = 1;
    v10 = format!("{}: invalid signal", &v6);
    v2 = 125;
    memcpy(&v0, &v10, 16);
    v1 = v10.vec.len;
    v13 = alloc::boxed::Box<T>::new(&v0);
    if !v12 {
        return Ok(struct16 {
            field_0: v13
            field_8: &g_548908
        });
    } else if v14 {
        return struct16 {
            field_0: 0
            field_8: v14
        };
    } else {
        return Ok(struct16 {
            field_0: v13
            field_8: &g_548908
        });
    }
}
