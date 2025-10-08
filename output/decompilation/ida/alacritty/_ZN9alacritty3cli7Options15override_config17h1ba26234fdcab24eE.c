__int64 __fastcall alacritty::cli::Options::override_config(__int64 a1, __int64 *a2, __int64 a3)
{
  int v5; // eax
  char v6; // cl
  char v7; // bp
  __int64 v8; // rdi
  char v9; // al
  int v10; // edx
  __int64 v11; // rsi
  _BOOL8 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax

  v5 = 0;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 456)) )
    *((_BYTE *)a2 + 1049) = 1;
  if ( *(_QWORD *)(a1 + 408) != 0x8000000000000000LL )
    v5 = alacritty::cli::parse_hex_or_decimal(*(_QWORD *)(a1 + 416), *(_QWORD *)(a1 + 424), a3, 0x8000000000000000LL);
  *((_DWORD *)a2 + 96) = v5;
  *((_DWORD *)a2 + 97) = a3;
  v6 = *(_BYTE *)(a1 + 480);
  v7 = v6 | *((_BYTE *)a2 + 8);
  *((_BYTE *)a2 + 8) = v7;
  v8 = *a2;
  v9 = *(_BYTE *)(a1 + 483);
  v10 = *(unsigned __int8 *)(a1 + 484);
  v11 = 3LL;
  if ( *(_BYTE *)(a1 + 484) )
  {
    if ( v10 == 1 )
      goto LABEL_14;
    if ( v10 == 2 )
    {
      v11 = 4LL;
      goto LABEL_14;
    }
    v12 = v9 == 1;
    v13 = v9 == 0;
    v11 = 5LL;
  }
  else
  {
    if ( v6 )
      goto LABEL_14;
    v12 = v9 == 1;
    v13 = v9 == 0;
    v11 = 2LL;
  }
  if ( !v13 )
    v11 = v12;
LABEL_14:
  v14 = core::cmp::Ord::max(v8, v11);
  *a2 = v14;
  *((_BYTE *)a2 + 13) |= *(_BYTE *)(a1 + 481);
  if ( v7 )
    *a2 = core::cmp::Ord::max(v14, 3LL);
  return alacritty::cli::ParsedOptions::override_config(a1 + 384, a2);
}