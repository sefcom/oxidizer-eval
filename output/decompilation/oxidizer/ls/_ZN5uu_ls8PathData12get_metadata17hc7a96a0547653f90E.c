fn uu_ls::PathData::get_metadata(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    return core::cell::once::OnceCell<T>::get_or_try_init(a0 + 72);
}
