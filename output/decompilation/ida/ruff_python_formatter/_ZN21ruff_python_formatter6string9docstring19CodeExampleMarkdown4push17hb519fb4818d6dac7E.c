__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleMarkdown::push(__int64 a1, __int128 *a2)
{
  __int64 started; // rax
  __int128 v3; // xmm0
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  started = ruff_python_formatter::string::docstring::Indentation::trim_start_str(
              a1 + 24,
              *(_QWORD *)a2,
              *((_QWORD *)a2 + 1));
  v9 = *((_QWORD *)a2 + 4);
  v3 = *a2;
  v8[1] = a2[1];
  v8[0] = v3;
  v10 = started;
  v11 = v4;
  return ((__int64 (__fastcall *)(__int64, _OWORD *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
           a1,
           v8,
           &off_57F510,
           v9,
           v5,
           v6);
}