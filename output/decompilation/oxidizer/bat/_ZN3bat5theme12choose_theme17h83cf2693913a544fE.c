fn bat::theme::choose_theme(a1: i64, a2: i32) -> : struct24 {
    let a0: i64;  // rdi

    if !a2 {
        return struct24 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i64)
        };
    }
    return struct24 {
        field_0: *((a1 + 24) as &i128)
        field_16: *((a1 + 40) as &i64)
    };
}
