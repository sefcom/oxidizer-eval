
  fn ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::get_operator::h6667223474685b65(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    if arg3 >= arg2
    {
        return 0;
    }
    
    /* tailcall */
    ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator::hcb470d71bae65a05(arg1.byte_offset(arg3 << 5))
}
