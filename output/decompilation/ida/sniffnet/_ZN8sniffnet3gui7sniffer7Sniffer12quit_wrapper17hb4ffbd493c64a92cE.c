__int64 __fastcall sniffnet::gui::sniffer::Sniffer::quit_wrapper(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  _WORD v8[132]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 v9; // [rsp+108h] [rbp-40h]

  if ( (*(_OWORD *)(a1 + 960) ^ (0LL - *(_OWORD *)(a1 + 976))) == (unsigned __int128)0LL
    || *(_BYTE *)(a1 + 2439) == 3
    || *(_BYTE *)(a1 + 2436) )
  {
    v9 = 0x800000000000002ALL;
    return iced_runtime::task::Task<T>::stream(v8);
  }
  else
  {
    v9 = 0x8000000000000013LL;
    v2 = iced_runtime::task::Task<T>::stream(v8);
    v9 = 0x8000000000000014LL;
    v3 = iced_runtime::task::Task<T>::stream(v8);
    v4 = iced_runtime::task::Task<T>::chain(v2, &off_2DF54C0, v3);
    v6 = v5;
    v8[0] = 3;
    v9 = 0x8000000000000010LL;
    v7 = iced_runtime::task::Task<T>::stream(v8);
    return iced_runtime::task::Task<T>::chain(v4, v6, v7);
  }
}