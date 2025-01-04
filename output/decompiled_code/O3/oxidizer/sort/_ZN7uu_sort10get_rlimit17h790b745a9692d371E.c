fn uu_sort::get_rlimit(a0: &struct16) -> u64 {
    let v0: i128;  // [sp-0x48]
    let v1: struct24;  // [sp-0x30], Other Possible Types: i192
    let v2: i32;  // [sp-0x18]
    let v4: i64;  // rcx
    let v5: i64;  // rax

    v0 = 0;
    if !getrlimit(7, &v0) {
        v4 = v0;
        v5 = 0;
    } else {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("Failed to fetch rlimit");
        v2 = 2;
        v5 = alloc::boxed::Box<T>::new(&v1);
        v4 = &g_5ffc90;
    }
    return struct16 {
        field_0: v5
        field_8: v4
    };
}
