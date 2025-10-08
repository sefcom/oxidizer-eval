__int64 __fastcall uu_fmt::parasplit::WordSplit::analyze_tabs(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r15
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[0] = a3;
  v13[1] = a3 + a4;
  v13[2] = 0LL;
  v4 = 0LL;
LABEL_2:
  v5 = 0LL;
  result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v13);
  if ( v7 != 32 )
    goto LABEL_6;
  do
  {
LABEL_5:
    ++v5;
    result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v13);
  }
  while ( v7 == 32 );
  while ( 1 )
  {
LABEL_6:
    if ( v7 == 1114112 )
    {
      v11 = 0LL;
      goto LABEL_21;
    }
    if ( v7 - 9 >= 5 )
      break;
    if ( v7 != 9 )
      goto LABEL_5;
    if ( !v4 )
    {
      v4 = 1LL;
      v12 = v5;
      goto LABEL_2;
    }
    v9 = *(_QWORD *)(a2 + 64);
    if ( !v9 )
      core::panicking::panic_const::panic_const_div_by_zero(&off_F05F8);
    if ( (v9 | v5) >> 32 )
      v10 = v5 / v9;
    else
      v10 = (unsigned int)v5 / (unsigned int)v9;
    v5 = v9 * (v10 + 1);
    v4 = 1LL;
    result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v13);
    if ( v7 == 32 )
      goto LABEL_5;
  }
  if ( v7 >= 0x80 )
  {
    v8 = result;
    if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v7) )
      goto LABEL_5;
    result = v8;
  }
  v11 = 1LL;
LABEL_21:
  *a1 = v4;
  a1[1] = v12;
  a1[2] = v5;
  a1[3] = v11;
  a1[4] = result;
  return result;
}