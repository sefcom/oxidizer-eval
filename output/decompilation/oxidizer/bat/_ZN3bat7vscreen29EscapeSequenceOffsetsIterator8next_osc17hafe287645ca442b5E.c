fn bat::vscreen::EscapeSequenceOffsetsIterator::next_osc(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x8c]
    let v2: u64;  // [bp-0x80]
    let v3: u8;  // [bp-0x70]
    let v4: i64;  // [bp-0x60]
    let v6: core::option::Option<&str>;  // r13
    let v7: u64;  // rax
    let v8: u32;  // ebp
    let v9: struct24;  // edx
    let v10: core::fmt::rt::Argument;  // rdi
    let v13: u32;  // edx
    let v15: u32;  // edx
    let v17: struct24;  // rcx

    v6 = a1 + 16;
    *((a1 + 48) as &i32) = 1114113;
    if v8 == 1114113 {
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v6);
        v8 = v9;
    }
    if v8 == 0x110000 {
        core::option::expect_failed("to not be finished"); /* do not return */
    }
    v2 = v7;
    loop {
        bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(v10, a1);
        if *(&v3 as &i32) != 1 {
            break;
        }
        v13 = *((a1 + 48) as &i32);
        *((a1 + 48) as &i32) = 1114113;
        if v13 == 1114113 {
            <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v6);
        }
        match (v13) {
            1114112 => {
                goto LABEL_0x845caf;
            }
            7 => {
                goto LABEL_845caf;
            }
            27 => {
                v15 = *((a1 + 48) as &i32);
                *((a1 + 48) as &i32) = 1114113;
                if v15 == 1114113 {
                    <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v6);
                }
                if v15 == 92 || v15 == 0x110000 {
                    goto LABEL_845caf;
                }
                continue;
                break;
            }
            _ => {
                v0 = v13;
                panic!("this should not be reached: char {}", &v0);
            }
        }
    }
LABEL_845caf:
    return struct40 {
        field_0: 3
        field_8: a2
        field_16: v17 + v2
        field_24: v4
        field_32: v4
    };
}
