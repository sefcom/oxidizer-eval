fn bat::vscreen::EscapeSequenceOffsetsIterator::next_text(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x20]
    let v3: struct8;  // rax
    let v4: u64;  // rax

    v0 = bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(a1);
    v3 = 0;
    return struct24 {
        field_0: v4
        field_8: *(&v0.field_8 as &i128)
    };
}
