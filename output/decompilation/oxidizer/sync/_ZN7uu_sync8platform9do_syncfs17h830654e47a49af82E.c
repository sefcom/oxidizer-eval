fn uu_sync::platform::do_syncfs(a0: i64) -> long long {
    let v0: Option<struct24>;  // [sp-0x90]
    let v1: struct24;  // [bp-0x90]
    let v2: struct24;  // [bp-0x78]
    let v3: struct32;  // [bp-0x60]
    let v4: Result<struct4, struct8>;  // [bp-0x40]
    let v6: u32;  // eax

    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if let Some(v2) = v0 {
        do {
            v4 = std::fs::File::open(&v2);
            v6 = core::result::Result<T,E>::unwrap(&v4, "src/uu/sync/src/sync.rs") as i32;
            syscall(306);
            v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v0 as i64 != 0x8000000000000000);
    }
    return;
}
