fn bat::vscreen::join(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x38], Other Possible Types: struct24
    let v1: u8;  // [bp-0x20]
    let v2: u32;  // [bp-0x18]
    let v3: u8;  // [bp-0x10]

    v0 = struct16 {
        field_0: a2
        field_8: &g_aced18
    };
    core::iter::traits::iterator::Iterator::collect(&v1, &v0);
    v0 = alloc::str::join_generic_copy(v2, *(&v3 as &i64), &g_5a2fea);
    return struct24 {
        field_0: v0.field_0
        field_16: a1
    };
}
