fn uu_sort::GlobalSettings::init_precomputed() -> : struct25 {
    let a0: i64;  // rsi
    let v0: struct16;  // [bp-0x28]
    let v1: u32;  // [bp-0x20]
    let v2: u64;  // [bp-0x10]
    let v3: u64;  // [bp-0x8]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: i64;  // rdi

    v3 = v5;
    v2 = v6;
    v0 = struct16 {
        field_0: *((v7 + 8) as &i64)
        field_8: *((v7 + 16) as &i64) * 56 + *((v7 + 8) as &i64)
    };
    *((v7 + 96) as &char) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    *((v7 + 88) as &long long) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    *((v7 + 72) as &long long) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    *((v7 + 80) as &long long) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    return;
}
