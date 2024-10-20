__int64 __fastcall uu_dd::Output::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  char v7; // cl
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v18; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  int v20; // [rsp+18h] [rbp-40h]
  char v21; // [rsp+1Ch] [rbp-3Ch]
  char v22; // [rsp+1Dh] [rbp-3Bh]
  int v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-34h]
  __int64 v25; // [rsp+28h] [rbp-30h]

  v6 = *(_BYTE *)(a4 + 145);
  v7 = *(_BYTE *)(a4 + 146);
  v19 = 0x1B600000000LL;
  v20 = 256;
  v21 = v7 ^ 1;
  v22 = v6;
  BYTE2(v20) = *(_BYTE *)(a4 + 150);
  v8 = (BYTE2(v20) << 10) | 0x4000;
  if ( !*(_BYTE *)(a4 + 152) )
    v8 = BYTE2(v20) << 10;
  v9 = v8 | 0x10000;
  if ( !*(_BYTE *)(a4 + 153) )
    v9 = v8;
  v10 = v9 | 0x1000;
  if ( !*(_BYTE *)(a4 + 154) )
    v10 = v9;
  v11 = v10 | 0x40000;
  if ( !*(_BYTE *)(a4 + 158) )
    v11 = v10;
  v12 = v11 | 0x100;
  if ( !*(_BYTE *)(a4 + 159) )
    v12 = v11;
  v13 = v12 | 0x20000;
  if ( !*(_BYTE *)(a4 + 160) )
    v13 = v12;
  v14 = v13 | 0x800;
  if ( !*(_BYTE *)(a4 + 157) )
    v14 = v13;
  v15 = v14 | 0x101000;
  if ( !*(_BYTE *)(a4 + 155) )
    v15 = v14;
  if ( v15 )
    LODWORD(v19) = v15;
  std::fs::OpenOptions::_open(&v23, &v19, a2, a3);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 8) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                            v25,
                            a2,
                            a3);
    *(_QWORD *)(a1 + 16) = &anon_47fcc33835ba2501a8fd1dfb926be52d_4_llvm_7315772993864627227;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v16 = v24;
    v18 = v24;
    if ( !*(_BYTE *)(a4 + 147) )
    {
      v19 = std::fs::File::set_len(&v18, *(_QWORD *)(a4 + 136));
      if ( v19 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(&v19);
        v16 = v18;
      }
    }
    uu_dd::Output::prepare_file(a1, v16, a4);
  }
  return a1;
}
