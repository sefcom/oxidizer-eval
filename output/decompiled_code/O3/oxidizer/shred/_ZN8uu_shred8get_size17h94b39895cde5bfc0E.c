fn uu_shred::get_size(a0: &u64, a1: u64, a2: i64) -> u64 {
    let v0: u128;  // [sp-0x28]
    let v1: u64;  // [sp-0x18]
    let v3: void*;  // rdi
    let v4: u64;  // 4096
    let v5: u64;  // rdx

    if *(a0) == 0x8000000000000000 {
        v3 = 0;
        v4 = a1;
    } else {
        v3 = uu_shred::get_size::{{closure}}(a0[1], a0[2]);
        v4 = v5;
    }
    v1 = a0[2];
    v0 = *(&a0 as &i128);
    return core::option::Option<T>::or_else(v3, v4);
}
