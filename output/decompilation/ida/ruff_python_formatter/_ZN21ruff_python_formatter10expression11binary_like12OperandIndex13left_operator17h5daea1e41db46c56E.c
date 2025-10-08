__int64 __fastcall ruff_python_formatter::expression::binary_like::OperandIndex::left_operator(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  ruff_python_formatter::expression::binary_like::OperatorIndex::new(a1 - 1);
  return a1 - 1;
}