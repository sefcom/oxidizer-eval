fn uu_shred::get_size(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: void*;  // rdi
    let v4: u64;  // 4096
    let v5: u64;  // rdx

    v0 = v2;
    v3 = 0;
    v4 = a1;
    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        v3 = uu_shred::get_size::{{closure}}(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        v4 = v5;
    }
    return core::option::Option<T>::or_else(v3, v4, a0);
}
