__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleRst::push(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+20h] [rbp-18h]
  __int128 v11; // [rsp+28h] [rbp-10h]

  v6 = *a2;
  v10 = *((_QWORD *)a2 + 4);
  v7 = *a2;
  v9[1] = a2[1];
  v9[0] = v7;
  v11 = v6;
  return ((__int64 (__fastcall *)(__int64, _OWORD *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
           a1,
           v9,
           &off_57F3D8,
           a4,
           a5,
           a6);
}