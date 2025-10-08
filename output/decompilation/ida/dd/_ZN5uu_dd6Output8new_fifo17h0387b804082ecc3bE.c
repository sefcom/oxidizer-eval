__int64 __fastcall uu_dd::Output::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  char linux_oflags; // al
  unsigned int v14; // edx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+4h] [rbp-44h]
  char v21; // [rsp+Ch] [rbp-3Ch]
  char v22; // [rsp+Dh] [rbp-3Bh]
  _BYTE v23[4]; // [rsp+10h] [rbp-38h] BYREF
  int v24; // [rsp+14h] [rbp-34h]
  __int64 v25; // [rsp+18h] [rbp-30h]

  v6 = *(_QWORD *)(a4 + 136);
  if ( !v6 )
    goto LABEL_6;
  std::fs::File::open(v23, a2, a3);
  if ( (v23[0] & 1) != 0 )
    goto LABEL_12;
  LODWORD(v20) = v24;
  LOBYTE(v19) = 2;
  if ( (uu_dd::Dest::seek(&v19, v6, v7, v8, v9, v10) & 1) == 0 )
  {
    core::ptr::drop_in_place<uu_dd::Dest>(v19, (unsigned int)v20);
LABEL_6:
    if ( *(_DWORD *)a4 != 2 && !*(_QWORD *)(a4 + 8) )
    {
      *(_BYTE *)a1 = 3;
LABEL_14:
      *(_QWORD *)(a1 + 16) = a4;
      return a1;
    }
    v20 = 0x100000001B6LL;
    v21 = *(_BYTE *)(a4 + 146) ^ 1;
    v22 = *(_BYTE *)(a4 + 145);
    BYTE6(v20) = *(_BYTE *)(a4 + 150);
    linux_oflags = uu_dd::make_linux_oflags(a4 + 150);
    v15 = 0;
    if ( (linux_oflags & 1) != 0 )
      v15 = v14;
    v19 = v15;
    std::fs::OpenOptions::open(v23, &v19, a2, a3);
    if ( (v23[0] & 1) == 0 )
    {
      v17 = v24;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = v17;
      goto LABEL_14;
    }
LABEL_12:
    *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
    *(_QWORD *)(a1 + 16) = v16;
    *(_BYTE *)a1 = 4;
    return a1;
  }
  *(_QWORD *)(a1 + 8) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
  *(_QWORD *)(a1 + 16) = v12;
  *(_BYTE *)a1 = 4;
  core::ptr::drop_in_place<uu_dd::Dest>(v19, (unsigned int)v20);
  return a1;
}