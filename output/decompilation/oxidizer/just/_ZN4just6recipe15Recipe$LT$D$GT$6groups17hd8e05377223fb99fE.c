fn just::recipe::Recipe<D>::groups(a1: i64) -> : struct16 {
    let a0: u64;  // rdi
    let v0: struct72;  // [bp-0x48], Other Possible Types: u64
    let v2: struct24;  // rax
    let v3: struct24;  // rax

    v2 = *((a1 + 216) as &i64);
    v3 = v2;
    if v3 {
        v3 = *((a1 + 232) as &i64);
    }
    v0 = struct72 {
        field_0: (v2) as u8 as u64
        field_8: 0
        field_16: v2
        field_24: *((a1 + 224) as &i64)
        field_32: v0
        field_40: 0
        field_48: v2
        field_56: *((a1 + 224) as &i64)
        field_64: v3
    };
    core::iter::traits::iterator::Iterator::collect(a0, &v0);
    return;
}
