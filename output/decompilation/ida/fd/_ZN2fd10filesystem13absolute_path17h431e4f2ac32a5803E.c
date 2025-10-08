__int64 __fastcall fd::filesystem::absolute_path(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  fd::filesystem::path_absolute_form((__int64)v5, a2, a3);
  result = v5[0];
  v4 = v5[1];
  if ( !__OFSUB__(-v5[0], 1LL) )
    a1[2] = v5[2];
  a1[1] = v4;
  *a1 = result;
  return result;
}