fn fd::dir_entry::DirEntry::metadata(a0: i64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r14
    let v5: u64;  // rbx
    let v6: u64;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    core::cell::once::OnceCell<T>::get_or_try_init(a0 + 112, a0);
    return a0 + 112;
}
