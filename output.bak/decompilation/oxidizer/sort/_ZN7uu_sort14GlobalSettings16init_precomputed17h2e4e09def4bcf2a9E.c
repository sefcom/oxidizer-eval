fn uu_sort::GlobalSettings::init_precomputed(a0: &struct25) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x10]
    let v3: u64;  // [sp-0x8]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // r15
    let v8: u64;  // rax

    v3 = v5;
    v2 = v6;
    v7 = a0->field_8;
    v0 = v7;
    v1 = a0->field_10 * 56 + v7;
    a0->field_60 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v0);
    a0->field_58 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v7, v1);
    *(&a0->field_48 as &long long) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v7, v1);
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v7, v1);
    a0->field_50 = v8;
    return v8;
}
