void *__fastcall rg::files(__int64 a1, _BYTE *a2)
{
  void *result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  void (__fastcall *v5)(__int128 *, __int64); // rbp
  char v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  char v10; // [rsp+Fh] [rbp-439h] BYREF
  __int64 v11; // [rsp+10h] [rbp-438h]
  __int64 i; // [rsp+18h] [rbp-430h] BYREF
  __int128 v13; // [rsp+20h] [rbp-428h] BYREF
  __int128 v14; // [rsp+30h] [rbp-418h]
  __int128 v15; // [rsp+40h] [rbp-408h]
  __int128 v16; // [rsp+50h] [rbp-3F8h]
  __int128 v17; // [rsp+60h] [rbp-3E8h]
  __int128 v18; // [rsp+70h] [rbp-3D8h]
  __int128 v19; // [rsp+80h] [rbp-3C8h]
  __int64 v20; // [rsp+90h] [rbp-3B8h]
  __int64 v21; // [rsp+98h] [rbp-3B0h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE dest[200]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v24[336]; // [rsp+178h] [rbp-2D0h] BYREF
  _OWORD v25[24]; // [rsp+2C8h] [rbp-180h] BYREF

  v10 = a2[360];
  result = rg::flags::hiargs::HiArgs::walk_builder(v25, (__int64)a2);
  if ( *(_QWORD *)&v25[0] == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v25[0] + 1);
    *(_BYTE *)a1 = 1;
    return result;
  }
  memcpy(dest, &v25[1], sizeof(dest));
  v22 = v25[0];
  ignore::walk::WalkBuilder::build(v24, &v22);
  memcpy(v25, v24, 0x148uLL);
  *((_QWORD *)&v25[20] + 1) = &v10;
  core::ptr::drop_in_place<ignore::walk::WalkBuilder>(&v22);
  memcpy(v24, v25, sizeof(v24));
  v3 = rg::flags::hiargs::HiArgs::sort(a2, v24);
  v11 = v4;
  rg::flags::hiargs::HiArgs::path_printer_builder((__int64)&v22, (__int64)a2);
  rg::flags::hiargs::HiArgs::stdout((__int64)&v13, a2);
  grep_printer::path::PathPrinterBuilder::build(v24, &v22, &v13);
  core::ptr::drop_in_place<grep_printer::path::PathPrinterBuilder>(&v22);
  v5 = *(void (__fastcall **)(__int128 *, __int64))(v11 + 24);
  if ( (a2[907] & 1) != 0 )
  {
    v5(&v13, v3);
    if ( (_DWORD)v13 != 3 )
    {
      *(_QWORD *)&dest[96] = v20;
      *(_OWORD *)&dest[80] = v19;
      *(_OWORD *)&dest[64] = v18;
      *(_OWORD *)&dest[48] = v17;
      *(_OWORD *)&dest[32] = v16;
      *(_OWORD *)&dest[16] = v15;
      *(_OWORD *)dest = v14;
      v22 = v13;
      goto LABEL_11;
    }
  }
  else
  {
    v5(&v13, v3);
    if ( (_DWORD)v13 != 3 )
    {
      *(_QWORD *)&dest[96] = v20;
      *(_OWORD *)&dest[80] = v19;
      *(_OWORD *)&dest[64] = v18;
      *(_OWORD *)&dest[48] = v17;
      *(_OWORD *)&dest[32] = v16;
      *(_OWORD *)&dest[16] = v15;
      *(_OWORD *)dest = v14;
      v22 = v13;
      v7 = rg::haystack::Haystack::path((__int64)&v22);
      v8 = grep_printer::path::PathPrinter<W>::write(v24, v7);
      for ( i = v8; !v8; i = v8 )
      {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&i);
        core::ptr::drop_in_place<rg::haystack::Haystack>(&v22);
        v5(&v13, v3);
        if ( (_DWORD)v13 == 3 )
          goto LABEL_12;
        *(_QWORD *)&dest[96] = v20;
        *(_OWORD *)&dest[80] = v19;
        *(_OWORD *)&dest[64] = v18;
        *(_OWORD *)&dest[48] = v17;
        *(_OWORD *)&dest[32] = v16;
        *(_OWORD *)&dest[16] = v15;
        *(_OWORD *)dest = v14;
        v22 = v13;
        v9 = rg::haystack::Haystack::path((__int64)&v22);
        v8 = grep_printer::path::PathPrinter<W>::write(v24, v9);
      }
      v21 = v8;
      if ( (unsigned __int8)std::io::error::Error::kind(v8) != 11 )
      {
        *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v8);
        *(_BYTE *)a1 = 1;
        core::ptr::drop_in_place<rg::haystack::Haystack>(&v22);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(
          v3,
          v11);
        return (void *)core::ptr::drop_in_place<grep_printer::path::PathPrinter<grep_cli::wtr::StandardStream>>(v24);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v21);
LABEL_11:
      core::ptr::drop_in_place<rg::haystack::Haystack>(&v22);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
  }
  v6 = 0;
LABEL_13:
  core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v3, v11);
  *(_BYTE *)(a1 + 1) = v6;
  *(_BYTE *)a1 = 0;
  return (void *)core::ptr::drop_in_place<grep_printer::path::PathPrinter<grep_cli::wtr::StandardStream>>(v24);
}