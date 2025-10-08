__int64 __fastcall just::namepath::Namepath::split_last(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !a3 )
    core::option::unwrap_failed(&off_430610);
  v3 = a3 - 1;
  result = a2 + 72 * v3;
  *a1 = result;
  a1[1] = a2;
  a1[2] = v3;
  return result;
}