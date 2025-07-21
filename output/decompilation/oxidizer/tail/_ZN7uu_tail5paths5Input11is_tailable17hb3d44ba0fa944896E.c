fn uu_tail::paths::Input::is_tailable(a0: i64) -> long long {
    let v0: u8;  // [bp-0x20]
    let v1: u64;  // [bp-0x8]
    let v3: i64;  // rsi
    let v4: u64;  // rbx
    let v5: void*;  // rdx

    v3 = a0;
    if *((a0 + 24) as &i64) != 0x8000000000000000 {
        return uu_tail::paths::path_is_tailable(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    }
    v1 = v4;
    uu_tail::paths::Input::resolve(a0, v5);
    return core::option::Option<T>::map_or(&v0);
}
