fn uu_ls::PathData::get_metadata(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r14
    let v5: u64;  // rbx
    let v6: u64;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    core::cell::once::OnceCell<T>::get_or_try_init(a0 + 72, a0, a1);
    return a0 + 72;
}
