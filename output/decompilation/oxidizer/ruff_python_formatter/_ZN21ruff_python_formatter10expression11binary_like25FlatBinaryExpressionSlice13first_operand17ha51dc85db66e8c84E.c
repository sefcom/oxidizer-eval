fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::first_operand(a0: i64, a1: u64) -> long long {
    if a1 && *(a0 as &i32) != 3 {
        return a0;
    }
    panic!("internal error: entered unreachable code: Expected an operand");
}
