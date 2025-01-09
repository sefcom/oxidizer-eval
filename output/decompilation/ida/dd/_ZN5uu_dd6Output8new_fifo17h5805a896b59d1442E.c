__int64 __fastcall uu_dd::Output::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+4h] [rbp-44h]
  char v16; // [rsp+Ch] [rbp-3Ch]
  char v17; // [rsp+Dh] [rbp-3Bh]
  int v18; // [rsp+10h] [rbp-38h] BYREF
  int v19; // [rsp+14h] [rbp-34h]
  __int64 v20; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a4 + 136);
  if ( !v6 )
    goto LABEL_6;
  std::fs::File::open(&v18, a2, a3);
  if ( v18 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
    *(_QWORD *)(a1 + 16) = v11;
    *(_BYTE *)a1 = 4;
    return a1;
  }
  LODWORD(v15) = v19;
  LOBYTE(v14) = 2;
  if ( !uu_dd::Dest::seek(&v14, v6, v7) )
  {
    core::ptr::drop_in_place<uu_dd::Dest>(v14, (unsigned int)v15);
LABEL_6:
    if ( *(_QWORD *)a4 && (unsigned int)*(_QWORD *)a4 != 1 || *(_QWORD *)(a4 + 8) )
    {
      v15 = 0x100000001B6LL;
      v16 = *(_BYTE *)(a4 + 146) ^ 1;
      v17 = *(_BYTE *)(a4 + 145);
      BYTE6(v15) = *(_BYTE *)(a4 + 150);
      if ( !uu_dd::make_linux_oflags((unsigned __int8 *)(a4 + 150)) )
        v10 = 0;
      v14 = v10;
      std::fs::OpenOptions::open(&v18, &v14, a2, a3);
      if ( v18 )
        goto LABEL_12;
      v12 = v19;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = v12;
    }
    else
    {
      *(_BYTE *)a1 = 3;
    }
    *(_QWORD *)(a1 + 16) = a4;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
  *(_QWORD *)(a1 + 16) = v9;
  *(_BYTE *)a1 = 4;
  core::ptr::drop_in_place<uu_dd::Dest>(v14, (unsigned int)v15);
  return a1;
}
