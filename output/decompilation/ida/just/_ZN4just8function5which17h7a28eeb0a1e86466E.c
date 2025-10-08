__int64 *__fastcall just::function::which(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  char v7[8]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]
  __int64 v10; // [rsp+18h] [rbp-10h]

  just::which::which(v7, *a2);
  v2 = v8;
  v3 = v9;
  v4 = v10;
  v5 = 1LL;
  if ( (v7[0] & 1) == 0 )
  {
    v5 = 0LL;
    if ( __OFSUB__(-v8, 1LL) )
    {
      v2 = 0LL;
      v3 = 1LL;
      v4 = 0LL;
    }
  }
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  *a1 = v5;
  return a1;
}