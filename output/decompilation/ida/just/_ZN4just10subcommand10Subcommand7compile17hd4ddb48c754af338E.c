void *__fastcall just::subcommand::Subcommand::compile(
        char *dest,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  void *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // r12
  __int64 v10; // r13
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // [rsp+0h] [rbp-768h] BYREF
  __int128 v15; // [rsp+10h] [rbp-758h]
  __int128 v16; // [rsp+20h] [rbp-748h]
  __int128 v17; // [rsp+30h] [rbp-738h]
  __int128 v18; // [rsp+40h] [rbp-728h]
  __int128 v19; // [rsp+50h] [rbp-718h]
  __int64 v20; // [rsp+60h] [rbp-708h]
  _QWORD v21[2]; // [rsp+68h] [rbp-700h] BYREF
  _BYTE v22[104]; // [rsp+78h] [rbp-6F0h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-688h]
  _BYTE src[752]; // [rsp+E8h] [rbp-680h] BYREF
  _QWORD v25[114]; // [rsp+3D8h] [rbp-390h] BYREF

  just::compiler::Compiler::compile(v22, a3, a4, a5);
  v14 = *(_OWORD *)&v22[8];
  v15 = *(_OWORD *)&v22[24];
  v16 = *(_OWORD *)&v22[40];
  v17 = *(_OWORD *)&v22[56];
  v18 = *(_OWORD *)&v22[72];
  v19 = *(_OWORD *)&v22[88];
  v20 = v23;
  if ( __OFSUB__(-*(_QWORD *)v22, 1LL) )
  {
    result = (void *)v20;
    *((_QWORD *)dest + 13) = v20;
    *(_OWORD *)(dest + 88) = v19;
    *(_OWORD *)(dest + 72) = v18;
    v6 = v14;
    v7 = v15;
    v8 = v16;
    *(_OWORD *)(dest + 56) = v17;
    *(_OWORD *)(dest + 40) = v8;
    *(_OWORD *)(dest + 24) = v7;
    *(_OWORD *)(dest + 8) = v6;
    *(_QWORD *)dest = 0x8000000000000000LL;
  }
  else
  {
    memcpy(&v25[14], src, 0x2F0uLL);
    *(_OWORD *)&v25[1] = v14;
    *(_OWORD *)&v25[3] = v15;
    *(_OWORD *)&v25[5] = v16;
    *(_OWORD *)&v25[7] = v17;
    *(_OWORD *)&v25[9] = v18;
    *(_OWORD *)&v25[11] = v19;
    v25[13] = v20;
    v25[0] = *(_QWORD *)v22;
    just::justfile::Justfile::check_unstable((__int64)v22, (__int64)v25, *(_DWORD *)(a2 + 420));
    if ( v22[0] == 56 )
    {
      if ( *(_BYTE *)(a2 + 423) )
      {
        v9 = v25[14];
        if ( v25[14] )
        {
          v10 = v25[13];
          do
          {
            just::color::Color::stderr((__int64)v22, a2 + 388);
            *(_QWORD *)&v14 = v10;
            *((_QWORD *)&v14 + 1) = &unk_431110;
            LOWORD(v16) = *(_WORD *)&v22[16];
            v15 = *(_OWORD *)v22;
            v21[0] = &v14;
            v21[1] = <just::color_display::Wrapper as core::fmt::Display>::fmt;
            *(_QWORD *)v22 = &unk_42DBD8;
            *(_QWORD *)&v22[8] = 2LL;
            *(_QWORD *)&v22[32] = 0LL;
            *(_QWORD *)&v22[16] = v21;
            *(_QWORD *)&v22[24] = 1LL;
            std::io::stdio::_eprint(v22);
            --v9;
          }
          while ( v9 );
        }
      }
      return memcpy(dest, v25, 0x360uLL);
    }
    else
    {
      *((_QWORD *)dest + 13) = *(_QWORD *)&v22[96];
      *(_OWORD *)(dest + 88) = *(_OWORD *)&v22[80];
      *(_OWORD *)(dest + 72) = *(_OWORD *)&v22[64];
      v11 = *(_OWORD *)v22;
      v12 = *(_OWORD *)&v22[16];
      v13 = *(_OWORD *)&v22[32];
      *(_OWORD *)(dest + 56) = *(_OWORD *)&v22[48];
      *(_OWORD *)(dest + 40) = v13;
      *(_OWORD *)(dest + 24) = v12;
      *(_OWORD *)(dest + 8) = v11;
      *(_QWORD *)dest = 0x8000000000000000LL;
      return (void *)core::ptr::drop_in_place<just::compilation::Compilation>(v25);
    }
  }
  return result;
}