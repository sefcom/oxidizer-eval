fn uu_ls::PathData::get_metadata(a0: u64, a1: i64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u32;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell<T>::get_or_try_init(a0 + 72);
    if *(v3) != 2 {
        return v3;
    }
    return 0;
}
