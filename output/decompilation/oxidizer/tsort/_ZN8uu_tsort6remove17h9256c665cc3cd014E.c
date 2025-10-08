fn uu_tsort::remove(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: u64;  // [bp-0x10]
    let v5: u64;  // rdx

    v0 = a1;
    v1 = a2;
    v2 = *((a0 + 8) as &i64);
    v3 = *((a0 + 16) as &i64) * 16 + *((a0 + 8) as &i64);
    return core::option::Option<T>::inspect(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v2, &v0) as i8, v5, a0);
}
