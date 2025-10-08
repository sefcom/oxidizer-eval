fn uu_mknod::mknod(a0: &[u8], a1: &struct21) -> u64 {
    let v0: core::result::Result<alloc::ffi::c_str::CString, alloc::ffi::c_str::NulError>;  // [bp-0x50]
    let v2: u64;  // r14
    let v3: u32;  // ebp
    let v4: u32;  // ebp
    let v5: u32;  // eax

    v0 = <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(a0);
    v2 = core::result::Result<T,E>::expect(&v0, "src/uu/mknod/src/mknod.rs");
    v3 = *((a1 + 16) as &i32);
    if !(~(v3) & 438) {
        v4 = mknod(v2, v3, *(a1 as &i64));
        if v4 == -1 {
            goto LABEL_45a166;
        }
    } else {
        v5 = umask(0);
        v4 = mknod(v2, v3, *(a1 as &i64));
        umask(v5);
        if v4 == -1 {
LABEL_45a166:
            v0 = <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(uucore::execution_phrase(), a1);
            perror(core::result::Result<T,E>::expect(&v0, "src/uu/mknod/src/mknod.rs"));
        }
    }
    return v4;
}
