fn uu_shred::get_size(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i128;  // [sp-0x28]
    let v1: i64;  // [sp-0x18]
    let v3: i64;  // rdi

    if *(a0 as &i64) == 0x8000000000000000 {
        v3 = 0;
    } else {
        v3 = uu_shred::get_size::{{closure}}(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    }
    v1 = *((a0 + 16) as &i64);
    v0 = *(a0 as &i128);
    return core::option::Option<T>::or_else(v3, a1);
}
