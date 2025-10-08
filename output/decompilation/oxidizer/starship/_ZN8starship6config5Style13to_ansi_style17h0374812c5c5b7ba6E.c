fn starship::config::Style::to_ansi_style(a0: i64, a1: void*, a2: i64) -> long long {
    let v1: u64;  // rax
    let v3: i32;  // ecx
    let v4: u64;  // rax

    if a2 {
        return struct24 {
            field_0: *(a1 as &i64)
            field_8: a1[8] as i8
            field_9: <UNKNOWN>
            field_13: <UNKNOWN>
        };
    }
    v4 = a1[16] as i8;
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: v4 as u8
    };
}
