__int64 __fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::get_operator(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( a3 >= a2 )
    return 0LL;
  else
    return ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator(32 * a3 + a1);
}