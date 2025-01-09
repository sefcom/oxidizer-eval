__int64 __fastcall uu_fmt::parasplit::WordSplit::analyze_tabs(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // [rsp+0h] [rbp-58h]
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a3 + a4;
  v14[0] = a3;
  v14[1] = v6;
  v14[2] = 0LL;
  v7 = 0LL;
  v8 = 1LL;
LABEL_2:
  v9 = 0LL;
  while ( 1 )
  {
    result = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v14, a2, a3, v6, a5, a6);
    if ( (_DWORD)a3 == 32 )
      goto LABEL_4;
    if ( (_DWORD)a3 == (_DWORD)&loc_110000 )
      break;
    v6 = (unsigned int)(a3 - 9);
    if ( (unsigned int)v6 < 5 )
    {
      if ( (_DWORD)a3 != 9 )
        goto LABEL_4;
      if ( !v7 )
      {
        v7 = 1LL;
        v13 = v9;
        goto LABEL_2;
      }
      v6 = *(_QWORD *)(a2 + 64);
      if ( !v6 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_126758);
      if ( (v6 | v9) >> 32 )
      {
        a3 = v9 % v6;
        v12 = v9 / v6;
      }
      else
      {
        a3 = (unsigned int)v9 % (unsigned int)v6;
        v12 = (unsigned int)v9 / (unsigned int)v6;
      }
      v9 = v6 * (v12 + 1);
      v7 = 1LL;
    }
    else
    {
      if ( (unsigned int)a3 < 0x80 )
        goto LABEL_19;
      v11 = result;
      v6 = (unsigned int)core::unicode::unicode_data::white_space::lookup((unsigned int)a3);
      result = v11;
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_4:
      ++v9;
    }
  }
  v8 = 0LL;
LABEL_19:
  *a1 = v7;
  a1[1] = v13;
  a1[2] = v9;
  a1[3] = v8;
  a1[4] = result;
  return result;
}
