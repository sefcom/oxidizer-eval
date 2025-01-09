fn uu_mv::is_empty_dir(a0: u32, a1: u32) -> u64 {
    let v0: struct9;  // [sp-0x58]
    let v1: i64;  // [sp-0x48]
    let v3: i8;  // [sp-0x10]
    let v6: i32;  // ebx

    v0 = std::fs::read_dir(a0, a1);
    if v3 != 2 {
        v1 = 2;
        core::option::Option<T>::get_or_insert_with(&v1);
        return v6;
    }
    return 0;
}
