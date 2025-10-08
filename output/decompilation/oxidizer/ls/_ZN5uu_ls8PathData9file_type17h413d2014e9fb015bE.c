fn uu_ls::PathData::file_type(a0: i64, a1: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rbx

    v0 = v2;
    core::cell::once::OnceCell<T>::get_or_try_init(a0 + 248, a0, a1);
    return a0 + 252;
}
