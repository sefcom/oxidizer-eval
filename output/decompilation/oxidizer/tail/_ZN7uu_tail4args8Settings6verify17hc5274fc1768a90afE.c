fn uu_tail::args::Settings::verify(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x18]
    let v2: u8;  // al
    let v3: u8;  // al
    let v4: u64;  // rax

    v0 = struct16 {
        field_0: *((a0 + 32) as &i64)
        field_8: *((a0 + 40) as &i64) * 48 + *((a0 + 32) as &i64)
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    v3 = *((a0 + 76) as &i8);
    if v2 {
        if v3 != 2 {
            return v3 & 1;
        }
    } else {
        if v3 != 2 {
            return 0;
        }
    }
    return v4 & -0x100 | (v4 == 3) * 2;
}
