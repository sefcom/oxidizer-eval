unsigned __int64 __fastcall uu_od::output_info::OutputInfo::calculate_alignment(
        _OWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  bool v15; // cf
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // [rsp+8h] [rbp-90h] BYREF
  __int128 v20; // [rsp+10h] [rbp-88h] BYREF
  __int128 v21; // [rsp+20h] [rbp-78h]
  __int128 v22; // [rsp+30h] [rbp-68h]
  __int128 v23; // [rsp+40h] [rbp-58h]
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( a3 >= 9 )
  {
    v19 = 8 * a3;
    v24[0] = &v19;
    v24[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v24[2] = &unk_1B3B0;
    v24[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v20 = &unk_102560;
    *((_QWORD *)&v20 + 1) = 3LL;
    *(_QWORD *)&v22 = 0LL;
    *(_QWORD *)&v21 = v24;
    *((_QWORD *)&v21 + 1) = 2LL;
    core::panicking::panic_fmt(&v20, &off_102590);
  }
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  result = <uu_od::parse_formats::ParsedFormatterItemInfo as uu_od::output_info::TypeSizeInfo>::byte_size(a2);
  if ( !result )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1025A8);
  v8 = result;
  if ( result <= a3 )
  {
    v9 = <uu_od::parse_formats::ParsedFormatterItemInfo as uu_od::output_info::TypeSizeInfo>::print_width(a2);
    v10 = (unsigned __int8)((unsigned __int8)a3 / (unsigned __int8)v8);
    v11 = a4 - v10 * v9;
    do
    {
      if ( HIDWORD(v11) )
        v12 = v11 / v10;
      else
        v12 = (unsigned int)v11 / (unsigned int)v10;
      v13 = (v10 == 0) + v10;
      v14 = 0LL;
      do
      {
        if ( v14 > 7 )
          core::panicking::panic_bounds_check(v14, 8LL, &off_1025C0);
        *((_QWORD *)&v20 + v14) += v12;
        v11 -= v12;
        v14 += v8;
        --v13;
      }
      while ( v13 );
      result = v10 >> 1;
      v8 *= 2LL;
      v15 = v10 < 2;
      v10 >>= 1;
    }
    while ( !v15 );
  }
  v16 = v20;
  v17 = v21;
  v18 = v22;
  a1[3] = v23;
  a1[2] = v18;
  a1[1] = v17;
  *a1 = v16;
  return result;
}