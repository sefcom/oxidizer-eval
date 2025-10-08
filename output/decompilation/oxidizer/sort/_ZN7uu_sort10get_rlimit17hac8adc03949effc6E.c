fn uu_sort::get_rlimit() -> : struct16 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x48]
    let v1: struct24;  // [bp-0x30]
    let v2: core::fmt::Arguments;  // [bp-0x18]
    let v4: void*;  // rax
    let v5: u64;  // rcx

    v0 = 0;
    if getrlimit(7, &v0) {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Failed to fetch rlimit");
        v2 = 2;
        v4 = alloc::boxed::Box<T>::new(&v1) as u64;
    }
    return struct16 {
        field_0: v4
        field_8: v5
    };
}
