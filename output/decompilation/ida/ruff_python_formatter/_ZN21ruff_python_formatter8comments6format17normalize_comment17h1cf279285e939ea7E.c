__int64 __fastcall ruff_python_formatter::comments::format::normalize_comment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r15
  _QWORD *v10; // r14
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 started; // r12
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(); // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int128 v26; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+20h] [rbp-78h]
  _QWORD *v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+38h] [rbp-60h]
  _QWORD v32[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v34[7]; // [rsp+60h] [rbp-38h] BYREF

  v4 = ruff_formatter::source_code::SourceCodeSlice::text(a2, a3, a4);
  v6 = (void *)core::str::<impl str>::trim_end_matches(v4, v5);
  v8 = v7;
  ruff_python_formatter::comments::format::strip_comment_prefix(&v26, v6);
  if ( (_DWORD)v26 != 4 )
  {
    v11 = DWORD1(v26);
    v6 = (void *)*((_QWORD *)&v26 + 1);
    v8 = (__int64)v27;
    *(_DWORD *)(a1 + 8) = v26;
    *(_DWORD *)(a1 + 12) = v11;
    result = 1LL;
LABEL_8:
    *(_QWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)a1 = result;
    return result;
  }
  v9 = *((_QWORD *)&v26 + 1);
  v10 = v27;
  v33[0] = *((_QWORD *)&v26 + 1);
  v33[1] = v27;
  if ( !v27 )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    v8 = 1LL;
    v6 = &unk_8A7AE;
    goto LABEL_7;
  }
  v26 = xmmword_85BF0;
  LODWORD(v27) = 39;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *))core::str::pattern::Pattern::is_prefix_of)(
                          &v26,
                          v9,
                          v10) )
  {
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
LABEL_7:
    result = 0LL;
    goto LABEL_8;
  }
  LODWORD(v26) = 0;
  v13 = core::char::methods::encode_utf8_raw(160LL, &v26);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v9, v10, v13, v14) )
  {
    started = core::str::<impl str>::trim_start_matches(v9, v10);
    v17 = v16;
    v34[0] = started;
    v34[1] = v16;
    v18 = core::str::<impl str>::trim_start_matches(started, v16);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v18, v19, &unk_8A7A7, 5LL) )
    {
      v20 = v33;
LABEL_16:
      v30 = v20;
      v31 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v26 = &off_57CC78;
      *((_QWORD *)&v26 + 1) = 1LL;
      v29 = 0LL;
      v23 = &v30;
      goto LABEL_17;
    }
    LODWORD(v26) = 0;
    v24 = core::char::methods::encode_utf8_raw(32LL, &v26);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(started, v17, v24, v25) )
    {
      v20 = v34;
      goto LABEL_16;
    }
    v21 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            2LL,
            v9,
            v10);
    if ( !v21 )
      core::str::slice_error_fail(v9, v10, 2LL, v10, &off_57CC88);
  }
  else
  {
    v21 = core::str::<impl str>::trim_start_matches(v9, v10);
  }
  v30 = (_QWORD *)v21;
  v31 = v22;
  v32[0] = &v30;
  v32[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v26 = &off_57CC78;
  *((_QWORD *)&v26 + 1) = 1LL;
  v29 = 0LL;
  v23 = v32;
LABEL_17:
  v27 = v23;
  v28 = 1LL;
  result = ((__int64 (__fastcall *)(__int64, __int128 *))core::option::Option<T>::map_or_else)(a1 + 8, &v26);
  *(_QWORD *)a1 = 0LL;
  return result;
}