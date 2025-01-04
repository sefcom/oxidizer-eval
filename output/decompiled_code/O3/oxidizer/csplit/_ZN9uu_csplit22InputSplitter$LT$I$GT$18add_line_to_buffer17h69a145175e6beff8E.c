fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a0: &Option<struct24>, a1: void*, a2: u32, a3: &struct24) -> u64 {
    let v0: struct56;  // [bp-0x58], Other Possible Types: struct32, i192
    let v4: i64;  // rdx

    if *((a1 + 88) as &i8) {
        *(&v0.field_0 as &struct32) = struct32 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
        };
        alloc::vec::Vec<T,A>::insert(a1, 0, &v0);
    } else if *((a1 + 16) as &i64) < *((a1 + 80) as &i64) {
        v0 = struct56 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, a2);
    } else {
        v0 = alloc::vec::Vec<T,A>::remove(a1, None, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
        v0 = struct56 {
            field_0: a2
            field_8: *(a3 as &i128)
            field_24: *((a3 + 16) as &i64)
            field_32: *((&v0 as &char + 8) as &i128)
            field_48: v1
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, v4);
        v0 = *(&v0.field_32 as &i192);
        return core::result::Result<T,E>::unwrap(a0, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
