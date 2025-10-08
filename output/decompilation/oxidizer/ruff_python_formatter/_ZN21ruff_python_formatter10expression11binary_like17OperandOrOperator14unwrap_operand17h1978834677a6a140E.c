fn ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operand(a0: i64) -> long long {
    let v0: u64;  // [bp-0x48]

    if *(a0 as &i32) == 3 {
        v0 = a0 + 8;
        panic!("Expected operand but found operator {}.", &v0);
    }
    return a0;
}
