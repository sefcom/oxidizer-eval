__int64 __fastcall just::run::run(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebp
  char v3; // al
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+0h] [rbp-768h] BYREF
  int v11; // [rsp+10h] [rbp-758h]
  __int128 v12; // [rsp+20h] [rbp-748h] BYREF
  __int128 v13; // [rsp+30h] [rbp-738h]
  __int128 v14; // [rsp+40h] [rbp-728h]
  __int128 v15; // [rsp+50h] [rbp-718h]
  __int128 v16; // [rsp+60h] [rbp-708h]
  __int128 v17; // [rsp+70h] [rbp-6F8h]
  __int64 v18; // [rsp+80h] [rbp-6E8h]
  _BYTE v19[71]; // [rsp+88h] [rbp-6E0h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-670h] BYREF
  int v21; // [rsp+100h] [rbp-668h]
  __int128 v22; // [rsp+104h] [rbp-664h]
  _BYTE v23[28]; // [rsp+114h] [rbp-654h]
  _BYTE src[424]; // [rsp+130h] [rbp-638h] BYREF
  _QWORD dest[53]; // [rsp+2D8h] [rbp-490h] BYREF
  _BYTE v26[744]; // [rsp+480h] [rbp-2E8h] BYREF

  just::config::Config::app(v26);
  clap_builder::builder::command::Command::try_get_matches_from(src, v26, a1);
  if ( !__OFSUB__(-*(_QWORD *)src, 1LL) )
  {
    v22 = *(_OWORD *)&src[12];
    *(_OWORD *)v23 = *(_OWORD *)&src[28];
    *(_OWORD *)&v23[12] = *(_OWORD *)&src[40];
    v20 = *(_QWORD *)src;
    v21 = *(_DWORD *)&src[8];
    just::config::Config::from_matches(src, &v20);
    if ( *(_QWORD *)src == 0x8000000000000000LL )
    {
      *(_OWORD *)&v19[7] = *(_OWORD *)&src[8];
      *(_OWORD *)&v19[23] = *(_OWORD *)&src[24];
      *(_OWORD *)&v19[39] = *(_OWORD *)&src[40];
      *(_OWORD *)&v19[55] = *(_OWORD *)&src[56];
      LOBYTE(dest[1]) = 13;
      *(_OWORD *)((char *)&dest[1] + 1) = *(_OWORD *)v19;
      *(_OWORD *)((char *)&dest[3] + 1) = *(_OWORD *)&v19[16];
      *(_OWORD *)((char *)&dest[5] + 1) = *(_OWORD *)&v19[32];
      *(_OWORD *)((char *)&dest[7] + 1) = *(_OWORD *)&v19[48];
      dest[9] = *(_QWORD *)&src[64];
      dest[0] = 0x8000000000000000LL;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( dest[0] != 0x8000000000000000LL )
      {
        *(_WORD *)&src[17] = WORD2(dest[50]);
        *(_OWORD *)&src[1] = *(_OWORD *)((char *)&dest[48] + 4);
        src[19] = HIBYTE(dest[52]);
        v3 = 0;
LABEL_8:
        src[0] = v3;
        core::result::Result<T,E>::unwrap_or_default(v19, src);
        LOWORD(v11) = *(_WORD *)&v19[16];
        v4 = v19[18];
        just::loader::Loader::new(v19, src, v5, v6, v7, v8, *(_QWORD *)v19, *(_QWORD *)&v19[8], v11);
        if ( dest[0] == 0x8000000000000000LL )
        {
          v18 = dest[13];
          v17 = *(_OWORD *)&dest[11];
          v16 = *(_OWORD *)&dest[9];
          v15 = *(_OWORD *)&dest[7];
          v14 = *(_OWORD *)&dest[5];
          v13 = *(_OWORD *)&dest[3];
          v12 = *(_OWORD *)&dest[1];
        }
        else
        {
          *(_QWORD *)&src[104] = dest[13];
          *(_OWORD *)&src[88] = *(_OWORD *)&dest[11];
          *(_OWORD *)&src[72] = *(_OWORD *)&dest[9];
          *(_OWORD *)&src[56] = *(_OWORD *)&dest[7];
          *(_OWORD *)&src[40] = *(_OWORD *)&dest[5];
          *(_OWORD *)&src[24] = *(_OWORD *)&dest[3];
          *(_OWORD *)&src[8] = *(_OWORD *)&dest[1];
          memcpy(&src[112], &dest[14], 0x138uLL);
          *(_QWORD *)src = dest[0];
          just::run::run::{{closure}}(&v12, v19, src);
          if ( (_BYTE)v12 == 56 )
          {
            v2 = 0;
LABEL_13:
            core::ptr::drop_in_place<just::loader::Loader>(v19);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v20);
            return v2;
          }
        }
        *(_QWORD *)&src[96] = v18;
        *(_OWORD *)&src[80] = v17;
        *(_OWORD *)&src[64] = v16;
        *(_OWORD *)&src[48] = v15;
        *(_OWORD *)&src[32] = v14;
        *(_OWORD *)&src[16] = v13;
        *(_OWORD *)src = v12;
        just::run::run::{{closure}}(v4, &v10, src);
        v2 = 1;
        goto LABEL_13;
      }
    }
    *(_QWORD *)&src[8] = &dest[1];
    v3 = 1;
    goto LABEL_8;
  }
  just::run::run::{{closure}}(*(_QWORD *)&src[8], v26, v1, -*(_QWORD *)src);
  return 1;
}