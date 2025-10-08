
  int64_t ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::get_operator::h6667223474685b65(void* arg1, int64_t arg2, int64_t arg3)

{
    if (arg3 >= arg2)
        return 0;
    
    /* tailcall */
    return ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator::hcb470d71bae65a05(arg1 + (arg3 << 5));
}
