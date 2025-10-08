fn bat::vscreen::EscapeSequenceOffsetsIterator::next_nf(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x48]
    let v1: i8;  // [bp-0x38]
    let v3: struct24;  // r12
    let v4: struct16;  // r15
    let v5: struct24;  // edx
    let v6: struct32;  // rbp
    let v7: struct16;  // rax
    let v8: struct24;  // edx

    v3 = a1 + 16;
    v4 = *((a1 + 40) as &i64);
    v5 = *((a1 + 48) as &i32);
    *((a1 + 48) as &i32) = 1114113;
    if v5 == 1114113 {
        v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v3) as u64;
    }
    if v5 == 0x110000 {
        core::option::expect_failed("to not be finished"); /* do not return */
    }
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(&v0, a1, v5);
    if !(v0 & 1) {
        return struct32 {
            field_0: 2
            field_8: a2
            field_16: v4
            field_24: v4
        };
    }
    v6 = *(&v1 as &i64);
    v7 = *((a1 + 40) as &i64);
    v8 = *((a1 + 48) as &i32);
    *((a1 + 48) as &i32) = 1114113;
    if v8 != 1114113 {
        return struct32 {
            field_0: 2
            field_8: a2
            field_16: v4
            field_24: v6
        };
    }
    v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v3) as u64;
    return struct32 {
        field_0: 2
        field_8: a2
        field_16: v4
        field_24: v6
    };
}
