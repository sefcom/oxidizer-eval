fn bat::line_range::LineRanges::check(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x48]
    let v1: struct16;  // [bp-0x40]
    let v2: struct16;  // [bp-0x30]
    let v4: struct24;  // rax
    let v5: struct24;  // rax

    v0 = a1;
    v1 = struct16 {
        field_0: a2
        field_8: a3
    };
    v2 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 16) as &i64) * 32 + *((a0 + 8) as &i64)
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v0, &v1);
    if v4 as u8 {
        return 0;
    }
    v5 = v4;
    if !(a2 & 1) {
        return v5 & -0x100 | 2 - (a1 < *((a0 + 24) as &i64));
    }
    v5 = v4 & -0x100 | 2;
    return v4 & -0x100 | 2;
}
