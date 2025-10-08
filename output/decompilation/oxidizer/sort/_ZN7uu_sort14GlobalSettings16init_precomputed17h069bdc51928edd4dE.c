fn uu_sort::GlobalSettings::init_precomputed() -> : struct25 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x28]
    let v1: i64;  // [bp-0x20]
    let v2: u64;  // [bp-0x10]
    let v3: u64;  // [bp-0x8]
    let v5: u64;  // r15
    let v6: u64;  // r14

    v3 = v5;
    v2 = v6;
    v0 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 16) as &i64) * 56 + *((a0 + 8) as &i64)
    };
    *((a0 + 96) as &u8) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    *((a0 + 88) as &u64) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    *((a0 + 72) as &u64) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    *((a0 + 80) as &u64) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v0.field_0, v1);
    return;
}
