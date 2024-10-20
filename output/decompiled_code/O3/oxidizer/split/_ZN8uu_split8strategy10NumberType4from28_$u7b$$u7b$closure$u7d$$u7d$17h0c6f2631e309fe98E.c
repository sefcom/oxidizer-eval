fn uu_split::strategy::NumberType::from::{{closure}}(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x68]
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x40]
    let v5: i64;  // [sp-0x30]
    let v6: i64;  // [sp-0x28]
    let v7: i64;  // [sp-0x20]
    let v8: i8;  // [sp-0x18]
    let v10: i64;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v7 = 32;
    v8 = 3;
    v3 = 0;
    v4 = 0;
    v5 = &v0;
    v6 = &g_50bfc8;
    if !<str as core::fmt::Display>::fmt(*(a1 as &i64), *((a1 + 8) as &i64), &v3) as i8 {
        v10 = v2;
        *((a0 + 24) as &i64) = v10;
        *((a0 + 8) as &i64) = v0;
        *(a0 as &i64) = 1;
        return v10;
    }
    core::result::unwrap_failed(); /* do not return */
}
