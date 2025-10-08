fn just::function::which(a0: i64, a1: i64, a2: u64, a3: u32) -> long long {
    let v0: struct32;  // [bp-0x28]
    let v3: i64;  // rax
    let v4: u64;  // rdx
    let v5: struct72;  // rsi
    let v8: u64;  // rcx

    v0 = just::which::which(*(a1 as &i64), a2, a3);
    return struct32 {
        field_0: v5
        field_8: v3
        field_16: v8
        field_24: v4
    };
}
