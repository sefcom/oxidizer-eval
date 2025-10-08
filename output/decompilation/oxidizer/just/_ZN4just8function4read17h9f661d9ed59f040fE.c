fn just::function::read(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x70]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: struct24;  // [bp-0x58]
    let v5: i64;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v7: struct24;  // [bp-0x40]
    let v8: u64;  // [bp-0x30]
    let v9: u64;  // [bp-0x28]
    let v10: u64;  // [bp-0x20]

    v9 = a2;
    v10 = a3;
    v4 = just::execution_context::ExecutionContext::working_directory(*((*(a1 as &i64) + 16) as &i64), *((*(a1 as &i64) + 24) as &i64));
    v7 = std::path::Path::join(v5, v6, a2, a3);
    v0 = std::fs::read_to_string(&v7);
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        return struct32 {
            field_0: 0
            field_8: v0 as i128
            field_24: v3
        };
    }
    v7 = just::function::read::{{closure}}(&v9, v2);
    return struct32 {
        field_0: 1
        field_8: *(&v7.field_0 as &i128)
        field_24: v8
    };
}
