__int64 (__fastcall *__fastcall uu_truncate::parse_mode_and_size(_QWORD *a1, __int64 a2, __int64 a3))()
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned int v6; // edx
  unsigned int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 (__fastcall *result)(); // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  _QWORD v14[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+40h] [rbp-28h]

  v3 = core::str::<impl str>::trim_matches(a2, a3);
  v5 = v4;
  v14[0] = v3;
  v14[1] = v3 + v4;
  if ( (core::str::validations::next_code_point(v14) & 1) != 0 )
  {
    v7 = v6;
    if ( v6 <= 0x3E )
    {
      v8 = 0x5000A82000000000LL;
      if ( _bittest64(&v8, v6) )
      {
        v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
               v3,
               v5);
        if ( !v9 )
          core::str::slice_error_fail(v3, v5, 1LL, v5, &off_E4130);
        v5 = v10;
        v3 = v9;
      }
    }
    uucore::features::parser::parse_size::parse_size_u64(v15, v3, v5);
    result = uu_truncate::TruncateMode::Absolute;
    switch ( v7 )
    {
      case '%':
        result = (__int64 (__fastcall *)())uu_truncate::TruncateMode::RoundUp;
        if ( LODWORD(v15[0]) == 4 )
          goto LABEL_18;
        goto LABEL_20;
      case '+':
        result = uu_truncate::TruncateMode::Extend;
        if ( LODWORD(v15[0]) != 4 )
          goto LABEL_20;
        goto LABEL_18;
      case '-':
        result = uu_truncate::TruncateMode::Reduce;
        if ( LODWORD(v15[0]) != 4 )
          goto LABEL_20;
        goto LABEL_18;
      case '/':
        result = uu_truncate::TruncateMode::RoundDown;
        goto LABEL_17;
      case '<':
        result = uu_truncate::TruncateMode::AtMost;
        if ( LODWORD(v15[0]) != 4 )
          goto LABEL_20;
        goto LABEL_18;
      case '>':
        result = uu_truncate::TruncateMode::AtLeast;
        if ( LODWORD(v15[0]) != 4 )
          goto LABEL_20;
        goto LABEL_18;
      default:
LABEL_17:
        if ( LODWORD(v15[0]) == 4 )
        {
LABEL_18:
          result = (__int64 (__fastcall *)())((__int64 (__fastcall *)(_QWORD))result)(*((_QWORD *)&v15[0] + 1));
          a1[1] = result;
          a1[2] = v12;
          *a1 = 4LL;
        }
        else
        {
LABEL_20:
          v13 = v15[0];
          *((_OWORD *)a1 + 1) = v15[1];
          *(_OWORD *)a1 = v13;
        }
        break;
    }
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v3, v5);
    *a1 = 1LL;
    *(_OWORD *)(a1 + 1) = v16;
    result = v17;
    a1[3] = v17;
  }
  return result;
}