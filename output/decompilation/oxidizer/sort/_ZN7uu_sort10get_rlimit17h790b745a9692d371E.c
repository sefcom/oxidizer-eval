fn uu_sort::get_rlimit(a0: &struct16) -> u64 {
    let v0: iNone;  // [sp-0x48]
    let v1: struct24;  // [sp-0x30]
    let v2: i32;  // [sp-0x18]

    v0 = 0;
    if getrlimit(7, &v0) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("Failed to fetch rlimit");
        v2 = 2;
        alloc::boxed::Box<T>::new(&v1);
    }
    return struct16 {
        field_0: v5
        field_8: v4
    };
}
