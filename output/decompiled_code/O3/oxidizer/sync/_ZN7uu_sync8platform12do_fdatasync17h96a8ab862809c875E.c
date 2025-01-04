fn uu_sync::platform::do_fdatasync(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x90], Other Possible Types: Option<struct24>
    let v1: i128;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: struct32;  // [sp-0x60], Other Possible Types: i256
    let v4: i64;  // [sp-0x40], Other Possible Types: Result<struct4, struct8>
    let v6: i256;  // ymm0
    let v7: i128;  // xmm0
    let v8: i64;  // rdx
    let v9: i32;  // eax

    v3 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v0 != 0x8000000000000000 {
        do {
            v2 = *((&v0 as &char + 16) as &i64);
            v7 = v0;
            v6 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
            v1 = v7;
            v4 = std::fs::File::open(&v1, v8);
            v9 = core::result::Result<T,E>::unwrap(&v4, "src/uu/sync/src/sync.rs") as i32;
            syscall(75);
            v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v0 != 0x8000000000000000);
    }
    return;
}
