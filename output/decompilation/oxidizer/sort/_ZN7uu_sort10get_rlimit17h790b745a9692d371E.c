fn uu_sort::get_rlimit() -> : struct16 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x48]
    let v1: u8;  // [bp-0x30]
    let v2: u32;  // [bp-0x18]
    let v4: void*;  // rcx
    let v5: core::result::Result<(), std::io::error::Error>;  // rcx
    let v6: void*;  // rax
    let v7: i64;  // rdi

    v0 = 0;
    if getrlimit(7, &v0) {
        <T as alloc::slice::hack::ConvertVec>::to_vec("Failed to fetch rlimit", v4);
        v2 = 2;
        v6 = alloc::boxed::Box<T>::new(&v1);
    }
    *((v7 + 8) as &core::result::Result<(), std::io::error::Error>) = v5;
    *(v7 as &void*) = v6;
    return;
}
