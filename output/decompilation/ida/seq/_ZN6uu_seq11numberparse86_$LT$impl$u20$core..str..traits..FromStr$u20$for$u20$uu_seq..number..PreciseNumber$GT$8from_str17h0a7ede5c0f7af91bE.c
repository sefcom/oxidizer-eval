__int64 __fastcall uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _BYTE v11[40]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-28h]

  <uucore::features::extendedbigdecimal::ExtendedBigDecimal as uucore::features::parser::num_parser::ExtendedParser>::extended_parse(v11);
  if ( *(_QWORD *)v11 != 0x8000000000000009LL )
  {
    if ( *(_QWORD *)v11 != 0x8000000000000008LL )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 2LL;
      core::ptr::drop_in_place<uucore::features::parser::num_parser::ExtendedParserError<uucore::features::extendedbigdecimal::ExtendedBigDecimal>>(v11);
      return a1;
    }
    v6 = *(_OWORD *)&v11[8];
    goto LABEL_9;
  }
  v6 = *(_OWORD *)&v11[8];
  v7 = 0LL;
  if ( *(__int64 *)&v11[8] < (__int64)0x8000000000000005LL )
    v7 = *(_QWORD *)&v11[8] - 0x7FFFFFFFFFFFFFFFLL;
  v8 = 6LL;
  if ( _bittest64(&v8, v7) )
  {
    *(_QWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v11[24];
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 56) = 0LL;
    return a1;
  }
  v9 = 9LL;
  if ( _bittest64(&v9, v7) )
  {
LABEL_9:
    v14 = v12;
    v13 = *(_OWORD *)&v11[24];
    *(_OWORD *)v11 = v6;
    *(_OWORD *)&v11[16] = *(_OWORD *)&v11[24];
    *(_QWORD *)&v11[32] = v12;
    uu_seq::numberparse::compute_num_digits(a1, a2, a3, (__int128 *)v11);
    return a1;
  }
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 2LL;
  core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v6, *((_QWORD *)&v6 + 1));
  return a1;
}