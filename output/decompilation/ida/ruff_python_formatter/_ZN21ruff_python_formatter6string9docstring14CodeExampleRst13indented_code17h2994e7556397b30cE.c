__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::indented_code(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  _QWORD *v5; // r12
  __int64 started; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15

  if ( *(_DWORD *)(a1 + 48) == 5 )
    return 8LL;
  result = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (_QWORD *)(result + 56 * v2);
    v4 = *(_QWORD **)(a1 + 8);
    v5 = v4;
    do
    {
      v8 = *v5;
      v9 = v5[1];
      if ( core::str::<impl str>::trim_matches(*v5, v9) )
      {
        started = ruff_python_formatter::string::docstring::Indentation::trim_start_str(a1 + 48, v8, v9);
      }
      else
      {
        started = 1LL;
        v7 = 0LL;
      }
      v5[5] = started;
      v5[6] = v7;
      v5 += 7;
    }
    while ( v5 != v3 );
    return (__int64)v4;
  }
  return result;
}