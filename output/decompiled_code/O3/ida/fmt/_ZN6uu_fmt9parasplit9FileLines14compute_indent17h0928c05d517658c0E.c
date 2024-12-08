        __int64 a6)
{
  unsigned __int64 *v7; // r15
  unsigned __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r15
  char v21; // cl
  _QWORD v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = a1;
  v22[0] = a3;
  v22[1] = a3 + a4;
  v22[2] = 0LL;
  result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v22, a2, a3, a3 + a4, a5, a6);
  if ( v9 == 1114112 )
  {
    v12 = 0LL;
    result = 0LL;
    v13 = 0LL;
    goto LABEL_22;
  }
  v14 = v9;
  v13 = 0LL;
  v12 = 0LL;
  v15 = a2;
  do
  {
    if ( result == a5 )
      v13 = v12;
    if ( result >= a5 )
    {
      if ( v14 == 32 )
        goto LABEL_4;
      if ( v14 - 9 >= 5 )
      {
        if ( v14 < 0x80 )
          goto LABEL_21;
        v20 = result;
        v21 = core::unicode::unicode_data::white_space::lookup(v14);
        result = v20;
        v15 = a2;
        if ( !v21 )
          goto LABEL_21;
LABEL_4:
        v12 += uu_fmt::parasplit::char_width(v14);
        goto LABEL_5;
      }
    }
    if ( v14 != 9 )
      goto LABEL_4;
    v17 = *(_QWORD *)(v15 + 64);
    if ( !v17 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_127928);
    if ( (v17 | v12) >> 32 )
    {
      v16 = v12 % v17;
      v19 = v12 / v17;
    }
    else
    {
      v16 = (unsigned int)v12 % (unsigned int)v17;
      v19 = (unsigned int)v12 / (unsigned int)v17;
    }
    v12 = v17 * (v19 + 1);
LABEL_5:
    result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v22, a2, v16, v17, v10, v11);
    v14 = v18;
  }
  while ( v18 != 1114112 );
  result = 0LL;
LABEL_21:
  v7 = a1;
LABEL_22:
  *v7 = result;
  v7[1] = v13;
  v7[2] = v12;
  return result;
}
