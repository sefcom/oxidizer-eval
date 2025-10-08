__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbp
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm0
  char **v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm0
  unsigned __int64 v19; // [rsp+8h] [rbp-80h] BYREF
  __int128 v20; // [rsp+10h] [rbp-78h]
  __int128 v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h]

  v6 = *a3;
  v7 = a3[1];
  if ( (unsigned __int8)ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end(a2, *a3, v7) )
  {
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    v23 = a2[3];
    v22 = v10;
    v21 = v9;
    v20 = v8;
    v19 = 0x8000000000000002LL;
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v19, &off_57F4C8);
    *(_QWORD *)&v22 = a3[4];
    v11 = *(_OWORD *)a3;
    v21 = *((_OWORD *)a3 + 1);
    v20 = v11;
    v19 = 0x8000000000000003LL;
    v12 = &off_57F4E0;
LABEL_3:
    result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v19, v12);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  <str as ruff_python_trivia::whitespace::PythonWhitespace>::trim_whitespace(v6, v7);
  if ( v14 )
  {
    ruff_python_formatter::string::docstring::Indentation::from_str(&v19, v6, v7);
    if ( (<ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(
            &v19,
            (char *)a2 + 24) & 0x80u) != 0LL )
    {
      *(_QWORD *)&v21 = *((_QWORD *)a2 + 2);
      v20 = *a2;
      v19 = 0x8000000000000006LL;
      alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v19, &off_57F498);
      *(_QWORD *)&v22 = a3[4];
      v18 = *(_OWORD *)a3;
      v21 = *((_OWORD *)a3 + 1);
      v20 = v18;
      v19 = 0x8000000000000003LL;
      v12 = &off_57F4B0;
      goto LABEL_3;
    }
  }
  ruff_python_formatter::string::docstring::CodeExampleMarkdown::push(a2, a3);
  v19 = 0x8000000000000004LL;
  result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v19, &off_57F480);
  v15 = *a2;
  v16 = a2[1];
  v17 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v17;
  *(_OWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  return result;
}