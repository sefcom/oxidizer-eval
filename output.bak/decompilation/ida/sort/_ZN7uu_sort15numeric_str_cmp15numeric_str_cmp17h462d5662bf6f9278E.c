__int64 __fastcall uu_sort::numeric_str_cmp::numeric_str_cmp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // cl
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned __int8 v13; // al
  unsigned int v14; // ecx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  _QWORD v17[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v19[48]; // [rsp+28h] [rbp-30h] BYREF

  v2 = a1[2];
  v3 = a2[2];
  v4 = *(_BYTE *)(v2 + 8);
  v5 = *(_BYTE *)(v3 + 8);
  if ( v4 != v5 )
  {
    result = (unsigned int)-(v4 < v5);
    LOBYTE(result) = v4 < v5 ? -1 : 1;
    return result;
  }
  v6 = *a1;
  v7 = a1[1];
  v8 = *a2;
  v9 = a2[1];
  if ( !v9 || !v7 || *(_QWORD *)v2 == *(_QWORD *)v3 )
  {
    v17[0] = v6;
    v17[1] = v6 + v7;
    v18[0] = v8;
    v18[1] = v8 + v9;
    while ( 1 )
    {
      v11 = core::iter::traits::iterator::Iterator::try_fold(v17, v18);
      v12 = core::iter::traits::iterator::Iterator::try_fold(v18, v19);
      if ( v11 == 1114112 )
        break;
      if ( v12 == 1114112 )
      {
        v13 = 1;
        if ( v11 == 48 )
        {
          v15 = core::iter::traits::iterator::Iterator::try_fold(v17);
          v13 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v15) ^ 1;
        }
        goto LABEL_13;
      }
      if ( v11 != v12 )
      {
        LODWORD(v2) = -(v11 < v12);
        goto LABEL_12;
      }
    }
    if ( v12 == 48 )
    {
      v16 = core::iter::traits::iterator::Iterator::try_fold(v18);
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v16) )
        goto LABEL_18;
    }
    else if ( v12 == 1114112 )
    {
LABEL_18:
      v13 = 0;
      goto LABEL_13;
    }
    v13 = -1;
    goto LABEL_13;
  }
  LOBYTE(v2) = -(*(_QWORD *)v2 < *(_QWORD *)v3);
LABEL_12:
  v13 = v2 | 1;
LABEL_13:
  v14 = v13;
  result = (unsigned __int8)-v13;
  if ( v4 )
    return v14;
  return result;
}
