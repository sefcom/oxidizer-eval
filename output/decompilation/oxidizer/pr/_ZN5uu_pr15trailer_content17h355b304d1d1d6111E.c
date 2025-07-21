fn uu_pr::trailer_content(a1: i8, a2: i8) -> : struct24 {
    let a0: u8;  // sil
    let v1: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v2: i64;  // rdi
    let v3: u64;  // rdi

    if a0 && !a1 {
        v1 = alloc::alloc::Global::alloc_impl(0x8, 120, a1) as u64;
        *(v1 as &i64) = 0;
        *((v1 + 8) as &i64) = 1;
        *((v1 + 16) as &i128) = 0;
        *((v1 + 32) as &i64) = 1;
        *((v1 + 40) as &i128) = 0;
        *((v1 + 56) as &i64) = 1;
        *((v1 + 64) as &i128) = 0;
        *((v1 + 80) as &i64) = 1;
        *((v1 + 88) as &i128) = 0;
        *((v1 + 104) as &i64) = 1;
        *((v1 + 112) as &i64) = 0;
        alloc::slice::hack::into_vec(v3, v1, 5);
        return;
    }
    *(v2 as &i64) = 0;
    *((v2 + 8) as &i64) = 8;
    *((v2 + 16) as &i64) = 0;
    return;
}
