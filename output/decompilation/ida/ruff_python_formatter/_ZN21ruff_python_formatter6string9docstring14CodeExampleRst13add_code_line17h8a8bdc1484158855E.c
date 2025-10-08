__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __m256i v16; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+30h] [rbp-88h]
  __int128 v19; // [rsp+40h] [rbp-78h]
  __int128 v20; // [rsp+58h] [rbp-60h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int128 v22; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp-38h]

  if ( *((_DWORD *)a2 + 12) == 5 )
  {
    v19 = a2[4];
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v18 = a2[3];
    v17 = v8;
    *(_OWORD *)&v16.m256i_u64[2] = v7;
    *(_OWORD *)v16.m256i_i8 = v6;
    return ((__int64 (__fastcall *)(__int64, __m256i *, __int64, __int64))ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line)(
             a1,
             &v16,
             a3,
             a4);
  }
  v23 = *((_QWORD *)a2 + 8);
  v22 = a2[3];
  ruff_python_formatter::string::docstring::indent_with_suffix(&v16);
  if ( v16.m256i_i64[3] )
  {
    ruff_python_formatter::string::docstring::Indentation::from_str(&v20, v16.m256i_i64[0], v16.m256i_i64[1]);
    if ( (char)<ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(
                 &v20,
                 (char *)a2 + 24) > 0 )
    {
      if ( (<ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(&v20, &v22) & 0x80u) != 0LL )
      {
        *((_QWORD *)a2 + 8) = v21;
        a2[3] = v20;
      }
      ruff_python_formatter::string::docstring::CodeExampleRst::push(a2, a3);
      v16.m256i_i64[0] = 0x8000000000000004LL;
      result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v16, &off_57F330);
      goto LABEL_12;
    }
    v16.m256i_i64[3] = *((_QWORD *)a2 + 2);
    *(_OWORD *)&v16.m256i_u64[1] = *a2;
    v16.m256i_i64[0] = 0x8000000000000006LL;
    result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v16, &off_57F348);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 16) )
    {
      ruff_python_formatter::string::docstring::indent_with_suffix(&v16);
      if ( !v16.m256i_i64[3]
        || (ruff_python_formatter::string::docstring::Indentation::from_str(&v16, v16.m256i_i64[0], v16.m256i_i64[1]),
            (char)<ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(
                    &v16,
                    (char *)a2 + 24) > 0) )
      {
        ruff_python_formatter::string::docstring::CodeExampleRst::push(a2, a3);
        v16.m256i_i64[0] = 0x8000000000000004LL;
        result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v16, &off_57F318);
LABEL_12:
        *(_OWORD *)(a1 + 64) = a2[4];
        v10 = *a2;
        v11 = a2[1];
        v12 = a2[2];
        *(_OWORD *)(a1 + 48) = a2[3];
        *(_OWORD *)(a1 + 32) = v12;
        *(_OWORD *)(a1 + 16) = v11;
        *(_OWORD *)a1 = v10;
        return result;
      }
    }
    v19 = a2[4];
    v13 = *a2;
    v14 = a2[1];
    v15 = a2[2];
    v18 = a2[3];
    v17 = v15;
    *(_OWORD *)&v16.m256i_u64[2] = v14;
    *(_OWORD *)v16.m256i_i8 = v13;
    ((void (__fastcall *)(__m256i *, __int64))ruff_python_formatter::string::docstring::CodeExampleRst::push_format_action)(
      &v16,
      a4);
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}