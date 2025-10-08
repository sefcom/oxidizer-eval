bool __fastcall alacritty::config::bindings::Binding<T>::triggers_match(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // si
  int v6; // ecx
  char v7; // di

  if ( (unsigned __int8)core::cmp::PartialEq::ne(
                          *(unsigned int *)(a1 + 48),
                          *(unsigned __int16 *)(a1 + 50),
                          *(unsigned int *)(a2 + 48),
                          *(unsigned __int16 *)(a2 + 50))
    || *(_DWORD *)(a1 + 52) != *(_DWORD *)(a2 + 52) )
  {
    return 0;
  }
  v4 = *(_DWORD *)(a1 + 56);
  v5 = v4;
  if ( !(_BYTE)v4 )
    v5 = 127;
  v6 = *(_DWORD *)(a2 + 56);
  v7 = v6;
  if ( !(_BYTE)v6 )
    v7 = 127;
  return ((unsigned __int8)v5 & (unsigned __int8)v7) != 0
      && ((unsigned __int8)v4 & *(_BYTE *)(a2 + 57)) == 0
      && ((unsigned __int8)v6 & *(_BYTE *)(a1 + 57)) == 0;
}