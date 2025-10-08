fn ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x48]

    if *(a0 as &i32) != 3 {
        v0 = a0;
        panic!("Expected operator but found operand {}.", &v0);
    }
    return a0 + 8;
}
