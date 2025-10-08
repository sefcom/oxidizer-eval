fn ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(a1: &struct56) -> : struct24 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    if *(a1 as &i64) {
        panic!("Expected SuppressionStarts");
    }
    v1 = *((a1 + 24) as &i64);
    return struct24 {
        field_0: *((a1 + 8) as &i128)
        field_16: v1
    };
}
