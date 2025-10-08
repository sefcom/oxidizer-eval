__int64 __fastcall sniffnet::gui::sniffer::Sniffer::shortcut_esc(__int64 a1)
{
  unsigned __int64 v2; // rax
  _QWORD v3[39]; // [rsp+0h] [rbp-138h] BYREF

  if ( *(_WORD *)(a1 + 2392) == 5 )
  {
    if ( *(_BYTE *)(a1 + 2438) == 3 )
      return 0LL;
    v2 = 0x8000000000000014LL;
  }
  else
  {
    v2 = 0x8000000000000013LL;
  }
  v3[33] = v2;
  return iced_runtime::task::Task<T>::stream(v3);
}