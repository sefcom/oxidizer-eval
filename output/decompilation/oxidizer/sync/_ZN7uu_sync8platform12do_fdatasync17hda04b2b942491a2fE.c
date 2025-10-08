fn uu_sync::platform::do_fdatasync(a0: i64) -> void {
    let v0: Option<struct24>;  // [bp-0x78]
    let v1: Option<struct24>;  // [bp-0x78]
    let v2: struct32;  // [bp-0x60]
    let v3: Result<struct4, struct8>;  // [bp-0x40]
    let v5: u32;  // eax

    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        do {
            v3 = std::fs::File::open(&v0);
            v5 = core::result::Result<T,E>::unwrap(&v3, "src/uu/sync/src/sync.rs");
            syscall(75);
            v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
        } while (v1 as i64 != 0x8000000000000000);
    }
    return;
}
