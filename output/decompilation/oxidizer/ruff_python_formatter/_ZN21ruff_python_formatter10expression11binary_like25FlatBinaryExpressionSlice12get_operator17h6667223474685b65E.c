fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::get_operator(a0: u64, a1: u64, a2: u64) -> long long {
    if a2 < a1 {
        return ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator(a0 + a2 * 32);
    }
    return 0;
}
