__int64 __fastcall rg::flags::hiargs::State::new(__int64 a1)
{
  char is_terminal; // bp
  __int64 result; // rax
  __int64 v3; // rcx
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  std::io::stdio::stdout();
  is_terminal = std::sys::io::is_terminal::isatty::is_terminal();
  rg::flags::hiargs::current_dir(v4);
  result = v4[0];
  v3 = v4[1];
  if ( !__OFSUB__(-v4[0], 1LL) )
  {
    *(_QWORD *)(a1 + 16) = v4[2];
    *(_BYTE *)(a1 + 24) = is_terminal;
    *(_BYTE *)(a1 + 25) = 0;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = result;
  return result;
}