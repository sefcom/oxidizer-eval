fn uu_sync::platform::do_fdatasync(a0: i64) -> long long {
    let v0: i8;  // [bp-0x90]
    let v1: u128;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: u128;  // [bp-0x78], Other Possible Types: Result<struct4, struct8>
    let v4: u64;  // [bp-0x68]
    let v5: Option<struct24>;  // [bp-0x60]
    let v6: u8;  // [bp-0x40]
    let v8: u64;  // rdx
    let v9: u32;  // eax

    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0, v8);
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v8);
    if *(&v0 as &i64) != 0x8000000000000000 {
        do {
            v4 = v2;
            v3 = v1;
            v3 = std::fs::File::open(v8);
            v9 = core::result::Result<T,E>::unwrap(&v6, "src/uu/sync/src/sync.rs") as i32;
            syscall(75);
            v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v8);
        } while (v1 as i64 != 0x8000000000000000);
    }
    return;
}
