fn uu_ls::PathData::file_type(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u32;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell<T>::get_or_try_init(a0 + 248, a0, a1);
    if *(v3) {
        return v3 + 1;
    }
    return 0;
}
