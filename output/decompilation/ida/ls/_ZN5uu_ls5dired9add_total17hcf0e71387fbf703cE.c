__int64 __fastcall uu_ls::dired::add_total(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = a1[6];
  if ( !v2 )
  {
    v3 = a1[2];
    if ( v3 )
      v2 = *(_QWORD *)(16 * v3 + a1[1] - 8) + 1LL;
    else
      v2 = 0LL;
  }
  result = a2 + v2 + 2;
  a1[6] = result;
  return result;
}
