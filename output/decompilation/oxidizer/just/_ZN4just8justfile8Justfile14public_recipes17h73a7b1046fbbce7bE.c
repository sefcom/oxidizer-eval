fn just::justfile::Justfile::public_recipes(a0: i64, a1: i64, a2: u8) -> long long {
    let v0: u8;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: core::option::Option<&str>;  // [bp-0x68]
    let v3: struct24;  // [bp-0x60], Other Possible Types: struct72
    let v5: u64;  // rax
    let v6: u64;  // rax

    v5 = *((a1 + 696) as &i64);
    v6 = v5;
    if v6 {
        v6 = *((a1 + 712) as &i64);
    }
    v3 = struct72 {
        field_0: (v5) as u8 as u64
        field_8: 0
        field_16: v5
        field_24: *((a1 + 704) as &i64)
        field_32: v3
        field_40: 0
        field_48: v5
        field_56: *((a1 + 704) as &i64)
        field_64: v6
    };
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    if (a2 & 1) {
        alloc::slice::<impl [T]>::sort_by_key(v1, v2);
    }
    return struct24 {
        field_0: *(&v0 as &i128)
        field_16: v2
    };
}
