__int64 __fastcall uu_dd::Output::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+4h] [rbp-44h]
  char v15; // [rsp+Ch] [rbp-3Ch]
  char v16; // [rsp+Dh] [rbp-3Bh]
  int v17; // [rsp+10h] [rbp-38h] BYREF
  int v18; // [rsp+14h] [rbp-34h]
  __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a4 + 136);
  if ( !v6 )
    goto LABEL_6;
  std::fs::File::open(&v17, a2, a3);
  if ( v17 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
    *(_QWORD *)(a1 + 16) = v10;
    *(_BYTE *)a1 = 4;
    return a1;
  }
  LODWORD(v14) = v18;
  LOBYTE(v13) = 2;
  if ( !uu_dd::Dest::seek(&v13, v6) )
  {
    core::ptr::drop_in_place<uu_dd::Dest>(v13, (unsigned int)v14);
LABEL_6:
    if ( *(_QWORD *)a4 && (unsigned int)*(_QWORD *)a4 != 1 || *(_QWORD *)(a4 + 8) )
    {
      v14 = 0x100000001B6LL;
      v15 = *(_BYTE *)(a4 + 146) ^ 1;
      v16 = *(_BYTE *)(a4 + 145);
      BYTE6(v14) = *(_BYTE *)(a4 + 150);
      if ( !(unsigned int)uu_dd::make_linux_oflags(a4 + 150) )
        v9 = 0;
      v13 = v9;
      std::fs::OpenOptions::open(&v17, &v13, a2, a3);
      if ( v17 )
        goto LABEL_12;
      v11 = v18;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = v11;
    }
    else
    {
      *(_BYTE *)a1 = 3;
    }
    *(_QWORD *)(a1 + 16) = a4;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
  *(_QWORD *)(a1 + 16) = v8;
  *(_BYTE *)a1 = 4;
  core::ptr::drop_in_place<uu_dd::Dest>(v13, (unsigned int)v14);
  return a1;
}
