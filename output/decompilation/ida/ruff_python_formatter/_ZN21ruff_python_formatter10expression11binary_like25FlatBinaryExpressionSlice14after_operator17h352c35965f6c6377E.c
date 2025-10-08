__int64 __fastcall ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::after_operator(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rdx

  v3 = a3 + 1;
  if ( a2 < v3 )
    core::slice::index::slice_start_index_len_fail(v3, a2, &off_57D618, a2 - v3);
  return 32 * v3 + a1;
}