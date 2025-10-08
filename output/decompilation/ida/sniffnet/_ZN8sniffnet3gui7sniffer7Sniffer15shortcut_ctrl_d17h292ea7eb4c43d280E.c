__int64 __fastcall sniffnet::gui::sniffer::Sniffer::shortcut_ctrl_d(__int64 a1)
{
  __int16 v2[132]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v3; // [rsp+108h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 2439) != 2 || !*(_QWORD *)(a1 + 1832) )
    return 0LL;
  v2[0] = 4;
  v3 = 0x8000000000000010LL;
  return iced_runtime::task::Task<T>::stream(v2);
}