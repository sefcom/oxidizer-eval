fn just::function::quote(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: alloc::string::String;  // [bp-0x70]
    let v1: struct32;  // [bp-0x60]
    let v2: u8;  // [bp-0x28]

    alloc::str::<impl str>::replace(&v2, a2, a3);
    v0 = format!("'{}'", &v2);
    return struct32 {
        field_0: 0
        field_8: *(&v0.vec.buf.inner.cap as &i128)
        field_24: v1
    };
}
