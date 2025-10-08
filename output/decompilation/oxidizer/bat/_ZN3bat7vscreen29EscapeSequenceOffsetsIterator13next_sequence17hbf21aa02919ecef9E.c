fn bat::vscreen::EscapeSequenceOffsetsIterator::next_sequence(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: struct24;  // r13
    let v4: core::option::Option<(usize, char)>;  // r14
    let v5: struct8;  // ebp
    let v6: struct8;  // edx
    let v7: struct16;  // r12
    let v8: Result<struct80, struct9>;  // rax
    let v9: struct24;  // rax
    let v10: struct8;  // rcx

    v0 = v2;
    v3 = a1 + 16;
    v4 = *((a1 + 40) as &i64);
    v5 = *((a1 + 48) as &i32);
    *((a1 + 48) as &i32) = 1114113;
    if v5 == 1114113 {
        v4 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v3) as u64;
        v5 = v6;
    }
    if v5 == 0x110000 {
        core::option::expect_failed("to not be finished"); /* do not return */
    }
    v7 = a1 + 40;
    core::option::Option<T>::get_or_insert_with(v7, v3);
    v8 = *((a1 + 48) as &i32);
    if v8 as u32 == 91 {
        return bat::vscreen::EscapeSequenceOffsetsIterator::next_csi(a0, a1, v4);
    } else if v8 as u32 == 93 {
        return bat::vscreen::EscapeSequenceOffsetsIterator::next_osc(a0, a1, v4);
    } else if v8 as u32 == 0x110000 {
        return struct24 {
            field_0: 1
            field_8: v4
            field_16: v9 + v4
        };
    } else if (v8 as u32 & -0x10) != 32 {
        return struct24 {
            field_0: 1
            field_8: v4
            field_16: v10 + *(v7 as &i64)
        };
    } else {
        return bat::vscreen::EscapeSequenceOffsetsIterator::next_nf(a0, a1, v4);
    }
}
