fn bat::vscreen::EscapeSequenceOffsetsIterator::next_csi(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x48]
    let v2: struct24;  // r15
    let v3: core::result::Result<usize, std::io::error::Error>;  // rax
    let v4: u32;  // edx
    let v5: u64;  // r13
    let v6: struct32;  // r13
    let v7: core::fmt::Arguments;  // r13
    let v9: core::fmt::Arguments;  // r14
    let v10: Result<struct16, struct64>;  // r14
    let v12: core::fmt::Arguments;  // rbp
    let v13: core::result::Result<usize, std::io::error::Error>;  // rax
    let v14: u32;  // edx
    let v15: alloc::vec::Vec<u8, alloc::alloc::Global>;  // rbp
    let v16: struct24;  // rcx

    v2 = a1 + 16;
    v3 = *((a1 + 40) as &i64);
    v4 = *((a1 + 48) as &i32);
    *((a1 + 48) as &i32) = 1114113;
    if v4 == 1114113 {
        v3 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v2) as u64;
    }
    if v4 == 0x110000 {
        core::option::expect_failed("to not be finished"); /* do not return */
    }
    v6 = v5 + v3;
    v0 = bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(a1);
    v7 = v6;
    if v0.field_0 as i8 {
        v7 = v0.field_16;
    }
    v9 = v7;
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(&v0, a1, a2);
    v10 = v9;
    if v0.field_0 as i8 {
        v10 = v0.field_16;
    }
    v12 = v10;
    v13 = *((a1 + 40) as &i64);
    v14 = *((a1 + 48) as &i32);
    *((a1 + 48) as &i32) = 1114113;
    if v14 == 1114113 {
        v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v2) as u64;
    }
    v15 = v12;
    if v14 == 0x110000 {
        return struct48 {
            field_0: 4
            field_8: a2
            field_16: v6
            field_24: v9
            field_32: v12
            field_40: v15
        };
    }
    v15 = v16 + v13;
    return struct48 {
        field_0: 4
        field_8: a2
        field_16: v6
        field_24: v9
        field_32: v12
        field_40: v15
    };
}
