__int64 __fastcall uu_sort::tokenize_default(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  char v5; // bp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  alloc::vec::Vec<T,A>::push(a3, 0LL, 0LL);
  v12[0] = a1;
  v12[1] = a2 + a1;
  v12[2] = 0LL;
  v4 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = v4;
      v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v12);
      if ( v7 != 32 )
        break;
LABEL_5:
      v4 = 1;
      if ( (v5 & 1) == 0 )
      {
LABEL_6:
        v8 = *(_QWORD *)(a3 + 16);
        if ( !v8 )
          core::option::unwrap_failed(&off_1FFA28);
        *(_QWORD *)(16 * v8 + *(_QWORD *)(a3 + 8) - 8) = v6;
        alloc::vec::Vec<T,A>::push(a3, v6, 0LL);
        v4 = 1;
      }
    }
    if ( v7 == 1114112 )
      break;
    if ( v7 - 9 < 5 )
      goto LABEL_5;
    v4 = 0;
    if ( v7 >= 0x80 )
    {
      v9 = v6;
      v4 = core::unicode::unicode_data::white_space::lookup(v7);
      v6 = v9;
      if ( !(((v4 & 1) == 0) | v5 & 1) )
        goto LABEL_6;
    }
  }
  v10 = *(_QWORD *)(a3 + 16);
  if ( !v10 )
    core::option::unwrap_failed(&off_1FFA10);
  result = 16 * v10;
  *(_QWORD *)(result + *(_QWORD *)(a3 + 8) - 8) = a2;
  return result;
}
