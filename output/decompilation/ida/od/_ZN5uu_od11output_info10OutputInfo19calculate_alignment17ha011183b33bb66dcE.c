_OWORD *__fastcall uu_od::output_info::OutputInfo::calculate_alignment(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  bool v16; // cf
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v21; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+10h] [rbp-98h] BYREF
  __int128 v23; // [rsp+20h] [rbp-88h]
  __int128 v24; // [rsp+30h] [rbp-78h]
  __int128 v25; // [rsp+40h] [rbp-68h]
  _QWORD v26[10]; // [rsp+58h] [rbp-50h] BYREF

  if ( a4 >= 9 )
  {
    v21 = 8 * a4;
    v26[0] = &v21;
    v26[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v26[2] = &unk_E1C8;
    v26[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v22 = &unk_143668;
    *((_QWORD *)&v22 + 1) = 3LL;
    *(_QWORD *)&v24 = 0LL;
    *(_QWORD *)&v23 = v26;
    *((_QWORD *)&v23 + 1) = 2LL;
    core::panicking::panic_fmt(&v22, &off_143698);
  }
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64))(a3 + 24))(a2);
  if ( !v8 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1436B0);
  v9 = v8;
  v10 = (*(__int64 (__fastcall **)(__int64))(a3 + 32))(a2);
  if ( v9 <= a4 )
  {
    v11 = (unsigned __int8)((unsigned __int8)a4 / (unsigned __int8)v9);
    v12 = a5 - v11 * v10;
    do
    {
      if ( HIDWORD(v12) )
        v13 = v12 / v11;
      else
        v13 = (unsigned int)v12 / (unsigned int)v11;
      v14 = 0LL;
      do
      {
        v15 = v9 * v14;
        if ( v9 * v14 > 7 )
          core::panicking::panic_bounds_check(v9 * v14, 8LL, &off_1436C8);
        v14 = <usize as core::iter::range::Step>::forward_unchecked(v14);
        *((_QWORD *)&v22 + v15) += v13;
        v12 -= v13;
      }
      while ( v14 < v11 );
      v9 *= 2LL;
      v16 = v11 < 2;
      v11 >>= 1;
    }
    while ( !v16 );
  }
  v17 = v22;
  v18 = v23;
  v19 = v24;
  a1[3] = v25;
  a1[2] = v19;
  a1[1] = v18;
  *a1 = v17;
  return a1;
}
