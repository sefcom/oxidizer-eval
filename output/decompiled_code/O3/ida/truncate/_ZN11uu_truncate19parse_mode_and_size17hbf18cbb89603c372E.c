__int64 __fastcall uu_truncate::parse_mode_and_size(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // edx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v13)(); // rdi
  __int64 v14; // rdx
  __int128 v15; // xmm0
  _QWORD v16[2]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v17[2]; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]

  v4 = core::str::<impl str>::trim_matches(a2, a3);
  v6 = v5;
  v16[0] = v4;
  v16[1] = v4 + v5;
  if ( (unsigned int)core::str::validations::next_code_point(v16) )
  {
    v8 = v7;
    if ( v7 <= 0x3E )
    {
      v9 = 0x5000A82000000000LL;
      if ( _bittest64(&v9, v7) )
      {
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v4,
                v6);
        if ( !v10 )
          core::str::slice_error_fail(v4, v6, 1LL, v6, &off_116758);
        v4 = v10;
        v6 = v11;
      }
    }
    result = uucore::parser::parse_size::parse_size_u64(v17, v4, v6);
    v13 = uu_truncate::TruncateMode::Absolute;
    switch ( v8 )
    {
      case '%':
        v13 = uu_truncate::TruncateMode::RoundUp;
        if ( LODWORD(v17[0]) == 3 )
          goto LABEL_18;
        goto LABEL_20;
      case '+':
        v13 = uu_truncate::TruncateMode::Extend;
        if ( LODWORD(v17[0]) != 3 )
          goto LABEL_20;
        goto LABEL_18;
      case '-':
        v13 = uu_truncate::TruncateMode::Reduce;
        if ( LODWORD(v17[0]) != 3 )
          goto LABEL_20;
        goto LABEL_18;
      case '/':
        v13 = uu_truncate::TruncateMode::RoundDown;
        goto LABEL_17;
      case '<':
        v13 = uu_truncate::TruncateMode::AtMost;
        if ( LODWORD(v17[0]) != 3 )
          goto LABEL_20;
        goto LABEL_18;
      case '>':
        v13 = uu_truncate::TruncateMode::AtLeast;
        if ( LODWORD(v17[0]) != 3 )
          goto LABEL_20;
        goto LABEL_18;
      default:
LABEL_17:
        if ( LODWORD(v17[0]) == 3 )
        {
LABEL_18:
          result = core::ops::function::FnOnce::call_once(v13, *((_QWORD *)&v17[0] + 1));
          a1[1] = result;
          a1[2] = v14;
          *a1 = 3LL;
        }
        else
        {
LABEL_20:
          v15 = v17[0];
          *((_OWORD *)a1 + 1) = v17[1];
          *(_OWORD *)a1 = v15;
        }
        break;
    }
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v18, v4, v6);
    *a1 = 1LL;
    *(_OWORD *)(a1 + 1) = v18;
    result = v19;
    a1[3] = v19;
  }
  return result;
}
