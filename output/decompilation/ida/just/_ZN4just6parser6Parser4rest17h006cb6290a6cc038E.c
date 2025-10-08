__int64 __fastcall just::parser::Parser::rest(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdi

  v2 = a1[4];
  v3 = a1[11];
  if ( v3 > v2 )
    core::slice::index::slice_start_index_len_fail(v3, v2, &off_4306A8);
  return a1[3] + 72 * v3;
}