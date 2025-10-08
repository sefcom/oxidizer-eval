__int64 __fastcall ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  bool v7; // zf
  unsigned __int64 v8; // rdx
  int v9; // r13d
  __int128 v10; // xmm0
  __int64 result; // rax
  __int64 v12; // [rsp+10h] [rbp-78h]
  __int128 v13; // [rsp+18h] [rbp-70h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+50h] [rbp-38h]

  v4 = a2;
  v12 = a3 + 24;
  do
  {
    v5 = *(_QWORD *)(a3 + 8);
    v6 = *(_QWORD *)(a3 + 16);
    v7 = (*(_BYTE *)a3 & 1) == 0;
    *(_QWORD *)a3 = 0LL;
    if ( v7 )
    {
      v5 = core::str::iter::SplitInternal<P>::next(v12, a2);
      v6 = v8;
    }
    if ( !v5 )
    {
      ruff_python_formatter::string::docstring::CodeExample::finish(v4 + 32, v4);
      return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(a1, v4);
    }
    v9 = *(_DWORD *)(v4 + 144);
    v10 = *(_OWORD *)core::option::Option<T>::get_or_insert_with(a3, v12);
    v15[0] = v5;
    v15[1] = v6;
    v17 = v9;
    v16 = v10;
    if ( HIDWORD(v6) )
    {
      core::result::Result<T,E>::unwrap(1LL, &off_57CC48);
    }
    else
    {
      core::result::Result<T,E>::unwrap(0LL, &off_57CC48);
      LODWORD(v6) = v6 + 1;
    }
    core::result::Result<T,E>::unwrap(0LL, &off_57CC48);
    *(_DWORD *)(v4 + 144) += v6;
    a2 = v4;
    ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one(&v13, v4, v15);
  }
  while ( (_DWORD)v13 == 4 );
  result = v14;
  *(_QWORD *)(a1 + 16) = v14;
  *(_OWORD *)a1 = v13;
  return result;
}