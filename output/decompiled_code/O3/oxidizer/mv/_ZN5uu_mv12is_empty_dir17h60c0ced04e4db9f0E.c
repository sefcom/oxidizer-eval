fn uu_mv::is_empty_dir(a0: u32, a1: u32) -> u64 {
    let v0: struct9;  // [sp-0x58], Other Possible Types: i72
    let v1: i64;  // [sp-0x48]
    let v2: i72;  // [bp-0x18]
    let v3: i8;  // [sp-0x10]
    let v5: i64;  // rdx
    let v7: i64;  // rbx

    v0 = std::fs::read_dir(a0, a1);
    if v3 != 2 {
        v2 = v0;
        v1 = 2;
        core::option::Option<T>::get_or_insert_with(&v1, &v2, v5);
        return v7 | -0x100 | !v1;
    }
    v1 = v0;
    return 0;
}
