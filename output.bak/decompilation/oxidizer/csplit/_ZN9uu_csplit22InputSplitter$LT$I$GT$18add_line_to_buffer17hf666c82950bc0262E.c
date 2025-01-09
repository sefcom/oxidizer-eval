fn uu_csplit::InputSplitter<I>::add_line_to_buffer(a0: &Option<struct24>, a1: void*, a2: u32, a3: &struct24) -> u64 {
    let v0: struct32;  // [bp-0x58], Other Possible Types: struct56, struct24
    let v5: u64;  // rax

    if a1->field_38 {
        *(&v0 as &struct32) = struct32 {
            field_0: a2
            field_8: a3->field_0
            field_24: a3->field_10
        };
        alloc::vec::Vec<T,A>::insert(a1, 0, &v0);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if a1->field_10 < a1->field_30 {
        *(&v0 as &struct56) = struct56 {
            field_0: a2
            field_8: a3->field_0
            field_24: a3->field_10
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
        };
        alloc::vec::Vec<T,A>::push(a1, &v0);
    }
    v0 = alloc::vec::Vec<T,A>::remove(a1, None, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
    *(&v0 as &struct56) = struct56 {
        field_0: a2
        field_8: a3->field_0
        field_24: a3->field_10
        field_32: v0.field_8
        field_48: v1
    };
    alloc::vec::Vec<T,A>::push(a1, &v0);
    v0 = struct24 {
        field_0: v2
        field_16: v3
    };
    v5 = core::result::Result<T,E>::unwrap(a0, &v0, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/csplit/src/csplit.rs");
}
