__int64 __fastcall uu_dircolors::guess_syntax()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  bool v5; // zf
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  __int64 v8; // [rsp+18h] [rbp-20h]
  __int64 v9; // [rsp+20h] [rbp-18h]

  std::env::_var(&v6, aShell, 5LL);
  if ( !v6 )
  {
    if ( v9 )
    {
      v0 = v8;
      v3 = std::path::Path::file_name(v8);
      if ( v3 )
      {
        if ( v4 == 4 )
        {
          v5 = *(_DWORD *)v3 == 1752392564;
LABEL_16:
          LOBYTE(v0) = v5;
          v1 = v7;
          if ( !v7 )
            return v0;
          goto LABEL_4;
        }
        if ( v4 == 3 )
        {
          v5 = (*(_WORD *)v3 ^ 0x7363 | *(unsigned __int8 *)(v3 + 2) ^ 0x68) == 0;
          goto LABEL_16;
        }
      }
      v0 = 0;
    }
    else
    {
      LOBYTE(v0) = 3;
    }
    v1 = v7;
    if ( !v7 )
      return v0;
    goto LABEL_4;
  }
  v1 = v7;
  LOBYTE(v0) = 3;
  if ( v7 != 0x8000000000000000LL && v7 )
LABEL_4:
    _rust_dealloc(v8, v1, 1LL);
  return v0;
}
