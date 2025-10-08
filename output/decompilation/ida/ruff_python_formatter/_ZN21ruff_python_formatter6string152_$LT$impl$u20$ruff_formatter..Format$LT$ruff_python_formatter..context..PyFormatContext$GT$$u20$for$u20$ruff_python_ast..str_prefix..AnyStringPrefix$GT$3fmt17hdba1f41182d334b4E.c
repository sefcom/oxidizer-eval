_DWORD *__fastcall ruff_python_formatter::string::<impl ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext> for ruff_python_ast::str_prefix::AnyStringPrefix>::fmt(
        _DWORD *a1,
        unsigned __int8 *a2,
        _QWORD *a3)
{
  unsigned __int8 v4; // cl
  __int64 v5; // rdx
  char v7[8]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  __int64 v9; // [rsp+10h] [rbp-18h]

  v4 = a2[1];
  if ( *a2 != 3 || v4 < 2u )
  {
    v8 = ruff_python_ast::str_prefix::AnyStringPrefix::as_str(*a2, v4);
    v9 = v5;
    v7[0] = 4;
    (*(void (__fastcall **)(_QWORD, char *))(a3[1] + 24LL))(*a3, v7);
  }
  *a1 = 4;
  return a1;
}