fn just::function::require(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct32;  // [bp-0x68]
    let v1: i64;  // [bp-0x60]
    let v2: struct24;  // [bp-0x38]
    let v3: u64;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v7: struct12;  // rax
    let v8: u64;  // rax

    v3 = a2;
    v4 = a3;
    v0 = just::which::which(*(a1 as &i64), a2, a3);
    v2 = *((&v0.field_8 as &char + 8) as &i128);
    if v0.field_0 as i32 == 1 {
        *((a0 + 16) as &struct24) = v2;
        *((a0 + 8) as &unsigned long) = v1;
    } else if (((0 ^ v1) & (0 ^ -(v1))) >> 63) as char {
        format!("could not find executable `{}`", &v3);
    } else {
        v7 = 0;
        return struct32 {
            field_0: v8
            field_8: v1
            field_16: v2
        };
    }
}
