__int64 __fastcall ruff_python_formatter::string::docstring::needs_chaperone_space(
        char a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v14; // [rsp+8h] [rbp-30h] BYREF
  _DWORD v15[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  LOBYTE(v4) = 1;
  if ( (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(a2, a3) & 1) == 0 )
  {
    if ( (a4 & 1) == 0 )
    {
      if ( (a1 & 2) != 0 )
      {
        v15[0] = 0;
        v11 = core::char::methods::encode_utf8_raw(5 * (unsigned int)((a1 & 1) == 0) + 34, v15);
        return (unsigned int)core::slice::<impl [T]>::ends_with(a2, a3, v11, v12);
      }
      return 0;
    }
    if ( (a1 & 2) == 0 )
      return 0;
    v14 = 0;
    v7 = core::char::methods::encode_utf8_raw(5 * (unsigned int)((a1 & 1) == 0) + 34, &v14);
    v9 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v7, v8, a2, a3);
    if ( !v9 || (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(v9, v10) & 1) != 0 )
      return 0;
  }
  return v4;
}