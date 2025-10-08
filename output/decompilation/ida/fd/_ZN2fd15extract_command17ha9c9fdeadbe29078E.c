__int64 __fastcall fd::extract_command(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // xmm0
  _OWORD v7[2]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = 0x8000000000000000LL;
  v4 = *(_QWORD *)(a2 + 352);
  *(_QWORD *)(a2 + 352) = 0x8000000000000000LL;
  if ( __OFSUB__(-(__int64)v4, 1LL) )
  {
    v4 = 0x8000000000000001LL;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 376);
    v9 = *(_OWORD *)(a2 + 360);
  }
  v8 = v4;
  core::option::Option<T>::or_else(v7, &v8, *(unsigned int *)(a2 + 492), a3);
  result = *(_QWORD *)&v7[0];
  if ( __OFSUB__(-*(_QWORD *)&v7[0], 1LL) )
  {
    result = *((_QWORD *)&v7[0] + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7[0] + 1);
    v3 = 0x8000000000000001LL;
  }
  else if ( *(_QWORD *)&v7[0] != 0x8000000000000001LL )
  {
    v6 = v7[0];
    *(_OWORD *)(a1 + 16) = v7[1];
    *(_OWORD *)a1 = v6;
    return result;
  }
  *(_QWORD *)a1 = v3;
  return result;
}