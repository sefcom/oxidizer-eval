__int64 __fastcall just::argument_parser::ArgumentParser::rest(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  v1 = a1[3];
  if ( a1[1] < v1 )
    core::slice::index::slice_start_index_len_fail(v1, a1[1], &off_42DB18);
  return *a1 + 16 * v1;
}