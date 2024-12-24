fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a0: &u64, a1: void*, a2: u32, a3: void*) -> u64 {
    let v0: struct104;  // [bp-0x58], Other Possible Types: i192, struct56, struct32
    let v3: i64;  // rdx

    if *((a1 + 88) as &i8) {
        v0 = struct56 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::insert(a1, 0, &v0);
    } else if *((a1 + 16) as &i64) < *((a1 + 80) as &i64) {
        v0 = struct104 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, a2);
    } else {
        v0 = alloc::vec::Vec<T,A>::remove(a1, 0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
        v0 = struct104 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, v3);
        v0 = *((&v0.field_0 as &char + 32) as &i192);
        return core::result::Result<T,E>::unwrap(a0, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
