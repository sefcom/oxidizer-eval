fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a0: &u64, a1: void*, a2: u32, a3: void*) -> u64 {
    let v0: struct104;  // [bp-0x58], Other Possible Types: struct24, struct32, struct56
    let v5: u64;  // rdx

    if a1->field_58 {
        *(&v0 as &struct56) = struct56 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::insert(a1, 0, &v0);
    } else if a1->field_10 < a1->field_50 {
        *(&v0 as &struct104) = struct104 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, a2);
    } else {
        v0 = alloc::vec::Vec<T,A>::remove(a1, 0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
        *(&v0 as &struct104) = struct104 {
            field_0: a2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0, v5);
        *(&v0 as &struct24) = struct24 {
            field_0: v1
            field_16: v2
        };
        return core::result::Result<T,E>::unwrap(a0, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
