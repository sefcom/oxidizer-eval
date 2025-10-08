fn starship::utils::get_command_string_output(a1: i64) -> : struct24 {
    let a0: i64;  // rdi

    if !*((a1 + 16) as &i64) {
        return struct24 {
            field_0: *((a1 + 24) as &i128)
            field_16: *((a1 + 40) as &i64)
        };
    }
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
}
