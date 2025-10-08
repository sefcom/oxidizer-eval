void __fastcall sniffnet::gui::sniffer::Sniffer::switch_page(__int64 a1, char a2)
{
  char v2; // cl
  __int16 v3; // dx
  int v4; // eax
  char v5; // cl
  unsigned int v6; // edx
  unsigned int v7; // edx
  char v8; // al

  v2 = *(_BYTE *)(a1 + 2438);
  v3 = *(_WORD *)(a1 + 2392);
  if ( v2 == 3 )
  {
    v4 = *(unsigned __int8 *)(a1 + 2439);
    if ( v3 == 5 && v4 != 3 && (*(_OWORD *)(a1 + 960) ^ (0LL - *(_OWORD *)(a1 + 976))) != (unsigned __int128)0LL )
    {
      if ( a2 )
      {
        if ( *(_BYTE *)(a1 + 2439) )
        {
          if ( v4 != 1 )
            goto LABEL_14;
LABEL_15:
          *(_BYTE *)(a1 + 2439) = 2;
          *(_BYTE *)(a1 + 1669) = 2;
          *(_QWORD *)(a1 + 2376) = 0LL;
          return;
        }
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 2439) )
          goto LABEL_15;
        if ( v4 == 1 )
        {
LABEL_14:
          v8 = 0;
LABEL_17:
          *(_BYTE *)(a1 + 2439) = v8;
          *(_BYTE *)(a1 + 1669) = v8;
          return;
        }
      }
      v8 = 1;
      goto LABEL_17;
    }
  }
  else if ( v3 == 5 )
  {
    v5 = 8 * v2;
    v6 = 65538;
    if ( a2 )
      v6 = 513;
    v7 = v6 >> v5;
    *(_BYTE *)(a1 + 2438) = v7;
    *(_BYTE *)(a1 + 1668) = v7;
  }
}