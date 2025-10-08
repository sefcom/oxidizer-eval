__int64 __fastcall ruff_python_formatter::string::docstring::OutputDocstringLine::map(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]

  ruff_python_formatter::string::docstring::DocstringLinePrinter::run_action_queue::{{closure}}(
    &v4,
    a3,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
  return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::OutputDocstringLine>(a2);
}