__int64 __fastcall ruff_python_formatter::string::docstring::DocstringLinePrinter::add_one(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  _QWORD *v4; // r12
  __int128 v6; // xmm0
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int128 v10; // [rsp+10h] [rbp-38h]
  int v11; // [rsp+20h] [rbp-28h]
  bool v12; // [rsp+24h] [rbp-24h]

  v4 = *(_QWORD **)(a2 + 136);
  if ( *(_BYTE *)(ruff_formatter::formatter::Formatter<Context>::options(*v4, v4[1]) + 13) == 1
    && *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD))(v4[1] + 48LL))(*v4) + 60) == 2 )
  {
    ruff_python_formatter::string::docstring::CodeExample::add(a2 + 32, a3, a2);
    return ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue(a1, a2);
  }
  else
  {
    v6 = *a3;
    v7 = *((_QWORD *)a3 + 2) == 0LL;
    v8 = *((_DWORD *)a3 + 8);
    v9 = 0x8000000000000000LL;
    v10 = v6;
    v11 = v8;
    v12 = v7;
    ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(a1, a2, &v9);
    return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(&v9);
  }
}