unsigned __int64 __fastcall uu_fmt::parasplit::FileLines::compute_indent(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 *v6; // r15
  unsigned __int64 result; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // r15
  unsigned int v13; // edx
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  char v18; // cl
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1;
  v20[0] = a3;
  v20[1] = a3 + a4;
  v20[2] = 0LL;
  result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v20);
  if ( v8 == 1114112 )
  {
    v9 = 0LL;
    result = 0LL;
    v10 = 0LL;
    goto LABEL_22;
  }
  v11 = v8;
  v10 = 0LL;
  v9 = 0LL;
  v12 = a2;
  do
  {
    if ( result == a5 )
      v10 = v9;
    if ( result >= a5 )
    {
      v14 = 32LL;
      if ( v11 == 32 )
        goto LABEL_4;
      if ( v11 - 9 >= 5 )
      {
        if ( v11 < 0x80 )
          goto LABEL_21;
        v17 = result;
        v18 = core::unicode::unicode_data::white_space::lookup(v11);
        result = v17;
        v12 = a2;
        v14 = v11;
        if ( !v18 )
          goto LABEL_21;
LABEL_4:
        v9 += uu_fmt::parasplit::char_width(v14);
        goto LABEL_5;
      }
    }
    v14 = v11;
    if ( v11 != 9 )
      goto LABEL_4;
    v15 = *(_QWORD *)(v12 + 64);
    if ( !v15 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_F04C0);
    if ( (v15 | v9) >> 32 )
      v16 = v9 / v15;
    else
      v16 = (unsigned int)v9 / (unsigned int)v15;
    v9 = v15 * (v16 + 1);
LABEL_5:
    result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v20);
    v11 = v13;
  }
  while ( v13 != 1114112 );
  result = 0LL;
LABEL_21:
  v6 = a1;
LABEL_22:
  *v6 = result;
  v6[1] = v10;
  v6[2] = v9;
  return result;
}