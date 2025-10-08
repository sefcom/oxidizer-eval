fn bat::line_range::LineRanges::from(a1: &struct24) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0xc8]
    let v1: u64;  // [bp-0xc8]
    let v2: void*;  // [bp-0xb0]
    let v3: void*;  // [bp-0x78]
    let v4: u64;  // [bp-0x40]
    let v6: u64;  // r13
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: u64;  // rdx

    v6 = *((a1 + 8) as &i64);
    v7 = core::iter::traits::iterator::Iterator::reduce(v6, *((a1 + 16) as &i64) * 32 + v6);
    v2 = 0;
    v3 = 0;
    v4 = v6;
    v0 = itertools::minmax::minmax_impl(&v2);
    if !v0 || v0 as u32 == 1 {
        v8 = v1;
    }
    return struct48 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
        field_24: -(((v7 & 1) < 1) as u8 as u64) | v9
        field_32: v8
        field_40: v1
    };
}
