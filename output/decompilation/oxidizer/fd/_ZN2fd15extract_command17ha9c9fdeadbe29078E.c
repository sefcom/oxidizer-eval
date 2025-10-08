fn fd::extract_command(a0: i64, a1: i64, a2: u8) -> int {
    let v0: Option<struct32>;  // [bp-0x50]
    let v1: u64;  // [bp-0x50]
    let v2: i64;  // [bp-0x48]
    let v3: iNone;  // [bp-0x40]
    let v4: u64;  // [bp-0x30]
    let v8: u64;  // r14
    let v9: u64;  // rax
    let v11: u64;  // r14
    let v12: u64;  // r14

    v8 = 0x8000000000000000;
    v9 = *((a1 + 352) as &i64);
    *((a1 + 352) as &i64) = 0x8000000000000000;
    v4 = v9;
    v0 = core::option::Option<T>::or_else(&v4, *((a1 + 492) as &i32), a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v11 = 9223372036854775809;
        return struct16 {
            field_0: v12
            field_8: v2
        };
    }
    return Ok(struct32 {
        field_0: v0 as i128
        field_16: v3
    });
}
