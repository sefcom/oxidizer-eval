fn uu_cksum::had_reset(a0: i64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v2: u64;  // rbp
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rax

    v2 = a0 + a1 * 24;
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0);
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0);
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v0 = struct16 {
        field_0: a0
        field_8: v2
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0);
    return 0;
}
