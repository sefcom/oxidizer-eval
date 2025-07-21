fn uu_shred::get_size(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x28]
    let v2: void*;  // rdi
    let v3: struct24;  // 4096
    let v4: struct24;  // rdx

    if *(a0 as &i64) == 0x8000000000000000 {
        v2 = 0;
        v3 = a1;
    } else {
        v2 = uu_shred::get_size::{{closure}}(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        v3 = v4;
    }
    v0 = struct24 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i64)
    };
    return core::option::Option<T>::or_else(v2, v3, &v0);
}
