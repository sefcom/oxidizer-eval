fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a1: i64, a2: i64, a3: &struct24) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0x58]
    let v1: iNone;  // [bp-0x50]
    let v2: u64;  // [bp-0x40]
    let v3: u128;  // [bp-0x38]
    let v4: u64;  // [bp-0x28]

    if *((a1 + 88) as &i8) {
        v0 = struct32 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::insert(a1, &v0);
    } else if *((a1 + 16) as &i64) < *((a1 + 80) as &i64) {
        v0 = struct32 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
    } else {
        alloc::vec::Vec<T,A>::remove(&v0 as u8, a1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
        v4 = v2;
        v3 = v1;
        v0 = struct32 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
        core::result::Result<T,E>::unwrap(a0, &v3, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
