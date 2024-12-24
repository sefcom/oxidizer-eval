char __fastcall uu_sort::numeric_str_cmp::numeric_str_cmp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // cl
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  char result; // al
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  _QWORD v15[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v17[48]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a1[2];
  v3 = a2[2];
  v4 = *(_BYTE *)(v2 + 8);
  v5 = *(_BYTE *)(v3 + 8);
  if ( v4 != v5 )
    return v4 < v5 ? -1 : 1;
  v6 = *a1;
  v7 = a1[1];
  v8 = *a2;
  v9 = a2[1];
  if ( v9 && v7 && *(_QWORD *)v2 != *(_QWORD *)v3 )
  {
    LOBYTE(v2) = -(*(_QWORD *)v2 < *(_QWORD *)v3);
LABEL_12:
    result = v2 | 1;
    if ( v4 )
      return result;
    if ( result != -1 )
      return -1;
    return 1;
  }
  v15[0] = v6;
  v15[1] = v6 + v7;
  v16[0] = v8;
  v16[1] = v8 + v9;
  while ( 1 )
  {
    v11 = core::iter::traits::iterator::Iterator::try_fold(v15, v16);
    v12 = core::iter::traits::iterator::Iterator::try_fold(v16, v17);
    if ( v11 == (_DWORD)&loc_110000 )
    {
      if ( v12 == 48 )
      {
        v14 = core::iter::traits::iterator::Iterator::try_fold(v16);
        if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14) )
          goto LABEL_24;
      }
      else if ( v12 != (_DWORD)&loc_110000 )
      {
LABEL_24:
        result = -1;
        if ( v4 )
          return result;
        return 1;
      }
      return 0;
    }
    if ( v12 == (_DWORD)&loc_110000 )
      break;
    if ( v11 != v12 )
    {
      LODWORD(v2) = -(v11 < v12);
      goto LABEL_12;
    }
  }
  if ( v11 == 48 )
  {
    v13 = core::iter::traits::iterator::Iterator::try_fold(v15);
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v13) )
      return 0;
  }
  result = 1;
  if ( v4 )
    return result;
  return -1;
}
