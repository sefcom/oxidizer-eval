__int64 __fastcall uu_seq::numberparse::parse_no_decimal_no_exponent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  __int128 v7; // xmm0
  __int128 v9; // xmm0
  char v10; // cl
  char v11; // al
  __int128 v12; // [rsp+0h] [rbp-98h] BYREF
  __int128 v13; // [rsp+10h] [rbp-88h]
  __int64 v14; // [rsp+20h] [rbp-78h]
  _OWORD v15[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  _BYTE v17[8]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+68h] [rbp-30h]

  bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(v15);
  if ( *(_QWORD *)&v15[0] == 0x8000000000000000LL )
  {
    alloc::str::<impl str>::to_ascii_lowercase(v17, a2, a3);
    v4 = v18;
    v5 = v19;
    v6 = 0x8000000000000000LL;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aInf_1, 3LL)
      || (v6 = 0x8000000000000000LL,
          (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aInfinity, 8LL))
      || (v6 = 0x8000000000000001LL,
          (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aInf, 4LL))
      || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aInfinity_0, 9LL) )
    {
      *(_QWORD *)&v12 = v6;
      core::ptr::drop_in_place<alloc::string::String>(v17);
      *(_QWORD *)(a1 + 32) = v14;
      v7 = v12;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v7;
      *(_OWORD *)(a1 + 40) = 0LL;
      if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
        return a1;
      goto LABEL_11;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aNan_2, 3LL);
    v11 = 1;
    if ( !v10 )
      v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aNan, 4LL);
    *(_BYTE *)(a1 + 8) = v11;
    *(_QWORD *)a1 = 0x8000000000000004LL;
    core::ptr::drop_in_place<alloc::string::String>(v17);
  }
  else
  {
    v14 = v16;
    v13 = v15[1];
    v12 = v15[0];
    if ( !(unsigned __int8)uu_seq::numberparse::is_minus_zero_int(a2, a3, (__int64)&v12) )
    {
      *(_QWORD *)(a1 + 32) = v14;
      v9 = v12;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v9;
      *(_QWORD *)(a1 + 40) = a3;
      *(_QWORD *)(a1 + 48) = 0LL;
      if ( *(_QWORD *)&v15[0] != 0x8000000000000000LL )
        return a1;
      goto LABEL_11;
    }
    *(_QWORD *)a1 = 0x8000000000000002LL;
    *(_QWORD *)(a1 + 40) = a3;
    *(_QWORD *)(a1 + 48) = 0LL;
    core::ptr::drop_in_place<bigdecimal::BigDecimal>(&v12);
  }
  if ( *(_QWORD *)&v15[0] == 0x8000000000000000LL )
LABEL_11:
    core::ptr::drop_in_place<core::result::Result<bigdecimal::BigDecimal,bigdecimal::ParseBigDecimalError>>(v15);
  return a1;
}
