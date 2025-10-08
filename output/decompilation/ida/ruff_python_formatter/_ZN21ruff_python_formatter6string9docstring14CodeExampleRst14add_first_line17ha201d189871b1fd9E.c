__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line(
        _OWORD *a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rbp
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  unsigned __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+8h] [rbp-90h]
  __int128 v16; // [rsp+18h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int128 v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

  if ( *((_DWORD *)a2 + 12) != 5 )
    core::panicking::panic(aAssertionFaile_6, 43LL, &off_57F360);
  ruff_python_formatter::string::docstring::indent_with_suffix(&v14);
  if ( !(_QWORD)v16 )
  {
    v17 = *((_QWORD *)a3 + 4);
    v10 = *a3;
    v16 = a3[1];
    v15 = v10;
    v14 = 0x8000000000000003LL;
    result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v14, &off_57F378);
    goto LABEL_9;
  }
  v6 = v14;
  v7 = v15;
  if ( *((_BYTE *)a2 + 72)
    && (unsigned __int8)ruff_python_formatter::string::docstring::is_rst_option(*((_QWORD *)&v15 + 1)) )
  {
    v17 = *((_QWORD *)a3 + 4);
    v8 = *a3;
    v16 = a3[1];
    v15 = v8;
    v14 = 0x8000000000000003LL;
    result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v14, &off_57F3C0);
LABEL_9:
    a1[4] = a2[4];
    v11 = *a2;
    v12 = a2[1];
    v13 = a2[2];
    a1[3] = a2[3];
    a1[2] = v13;
    a1[1] = v12;
    *a1 = v11;
    return result;
  }
  ruff_python_formatter::string::docstring::Indentation::from_str(&v18, v6, v7);
  if ( (char)<ruff_python_formatter::string::docstring::Indentation as core::cmp::PartialOrd>::partial_cmp(
               &v18,
               (char *)a2 + 24) > 0 )
  {
    *((_QWORD *)a2 + 8) = v19;
    a2[3] = v18;
    ruff_python_formatter::string::docstring::CodeExampleRst::push(a2, a3);
    v14 = 0x8000000000000004LL;
    result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v14, &off_57F390);
    goto LABEL_9;
  }
  *(_QWORD *)&v16 = *((_QWORD *)a2 + 2);
  v15 = *a2;
  v14 = 0x8000000000000006LL;
  result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, &v14, &off_57F3A8);
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}