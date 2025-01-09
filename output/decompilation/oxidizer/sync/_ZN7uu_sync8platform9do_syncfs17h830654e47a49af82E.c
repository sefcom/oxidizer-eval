fn uu_sync::platform::do_syncfs(a0: u32) -> u64 {
    let v0: i192;  // [sp-0x90], Other Possible Types: Option<struct24>
    let v1: struct24;  // [bp-0x78]
    let v2: struct32;  // [sp-0x60], Other Possible Types: i256
    let v3: Result<struct4, struct8>;  // [sp-0x40], Other Possible Types: i96
    let v5: i256;  // ymm0

    v2 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2);
    if v0 != 0x8000000000000000 {
        do {
            v5 = v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
            v1 = struct24 {
                field_0: v6
                field_16: *((&v0 as &char + 16) as &i64)
            };
            v3 = std::fs::File::open(&v1);
            core::result::Result<T,E>::unwrap(&v3, "src/uu/sync/src/sync.rs");
            syscall(306);
        } while ((v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v2), v0 != 0x8000000000000000));
    }
    return;
}
