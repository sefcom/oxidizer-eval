__int64 __fastcall sniffnet::gui::sniffer::Sniffer::reset_button_pressed(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int16 v3[132]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v4; // [rsp+108h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 2439) == 3 )
    return 0LL;
  v2 = 0x800000000000000DLL;
  if ( (*(_OWORD *)(a1 + 960) ^ (0LL - *(_OWORD *)(a1 + 976))) != (unsigned __int128)0LL || *(_BYTE *)(a1 + 2438) != 3 )
  {
    v3[0] = 2;
    v2 = 0x8000000000000010LL;
  }
  v4 = v2;
  return iced_runtime::task::Task<T>::stream(v3);
}