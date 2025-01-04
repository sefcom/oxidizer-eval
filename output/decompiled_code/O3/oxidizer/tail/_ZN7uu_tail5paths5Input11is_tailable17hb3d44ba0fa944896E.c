fn uu_tail::paths::Input::is_tailable(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: Option<struct24>;  // [sp-0x20], Other Possible Types: i192
    let v1: i64;  // [sp-0x8]
    let v3: i64;  // rbx

    if *((a0 + 24) as &i64) == 0x8000000000000000 {
        v1 = v3;
        v0 = uu_tail::paths::Input::resolve(a0, a2, a3, a4, a5);
        return core::option::Option<T>::map_or(&v0);
    }
    return uu_tail::paths::path_is_tailable(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
}
