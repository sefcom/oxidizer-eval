fn uu_ls::PathData::file_type(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: i64;  // rax

    v0 = v2;
    v3 = core::cell::once::OnceCell<T>::get_or_try_init(a0 + 248);
    return (*(v3 as &i32) ? v3 + 4 : 0);
}
