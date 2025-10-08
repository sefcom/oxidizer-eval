char __fastcall uu_sort::numeric_str_cmp::numeric_str_cmp(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // al
  char result; // al
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  char v17; // cl
  _QWORD v18[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v19[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a1[2];
  v3 = (__int64 *)a2[2];
  v4 = *(unsigned __int8 *)(v2 + 8);
  v5 = *((unsigned __int8 *)v3 + 8);
  if ( (_BYTE)v4 != (_BYTE)v5 )
    return (v4 > v5) - (v4 < v5);
  v6 = *a1;
  v7 = a1[1];
  v8 = *a2;
  v9 = a2[1];
  if ( v9 )
  {
    if ( v7 )
    {
      v10 = *v3;
      if ( *(_QWORD *)v2 != v10 )
      {
        v11 = (*(_QWORD *)v2 > v10) - (*(_QWORD *)v2 < v10);
        goto LABEL_19;
      }
    }
  }
  v18[0] = v6;
  v18[1] = v6 + v7;
  v19[0] = v8;
  v19[1] = v8 + v9;
  while ( 1 )
  {
    v13 = core::iter::traits::iterator::Iterator::try_fold(v18);
    v14 = core::iter::traits::iterator::Iterator::try_fold(v19);
    if ( v13 == 1114112 )
    {
      if ( v14 == 48 )
      {
        v16 = core::iter::traits::iterator::Iterator::try_fold(v19);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v16) )
          goto LABEL_14;
      }
      else if ( v14 == 1114112 )
      {
LABEL_14:
        v11 = 0;
        goto LABEL_19;
      }
      v11 = -1;
      goto LABEL_19;
    }
    if ( v14 == 1114112 )
      break;
    if ( v13 != v14 )
    {
      v11 = (v13 > v14) - (v13 < v14);
      goto LABEL_19;
    }
  }
  v11 = 1;
  if ( v13 == 48 )
  {
    v15 = core::iter::traits::iterator::Iterator::try_fold(v18);
    v11 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v15) ^ 1;
  }
LABEL_19:
  v17 = v11;
  result = -v11;
  if ( v4 )
    return v17;
  return result;
}