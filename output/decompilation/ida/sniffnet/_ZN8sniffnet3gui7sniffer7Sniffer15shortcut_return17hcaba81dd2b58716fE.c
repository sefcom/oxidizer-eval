__int64 __fastcall sniffnet::gui::sniffer::Sniffer::shortcut_return(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // eax
  _QWORD v4[39]; // [rsp+0h] [rbp-138h] BYREF

  if ( *(_BYTE *)(a1 + 2439) == 3 && *(_BYTE *)(a1 + 2438) == 3 && *(_WORD *)(a1 + 2392) == 5 )
  {
    v1 = 0x800000000000000CLL;
LABEL_11:
    v4[33] = v1;
    return iced_runtime::task::Task<T>::stream(v4);
  }
  v2 = *(unsigned __int16 *)(a1 + 2392);
  switch ( v2 )
  {
    case 2:
      v1 = 0x800000000000000DLL;
      goto LABEL_11;
    case 3:
      v1 = 0x800000000000002ALL;
      goto LABEL_11;
    case 4:
      v1 = 0x8000000000000018LL;
      goto LABEL_11;
  }
  return 0LL;
}