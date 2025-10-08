__int64 __fastcall forc_publish::tarball::create_tarball_from_current_dir(__int64 a1, _QWORD *a2)
{
  __int128 v3; // kr00_16
  __int64 v4; // rsi
  __int128 v5; // xmm0
  char v6; // al
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 appended; // rax
  __int128 v12; // [rsp+8h] [rbp-140h] BYREF
  char v13; // [rsp+18h] [rbp-130h]
  _BYTE v14[7]; // [rsp+19h] [rbp-12Fh]
  _BYTE v15[48]; // [rsp+20h] [rbp-128h] BYREF
  __int128 v16; // [rsp+50h] [rbp-F8h]
  __int128 v17; // [rsp+60h] [rbp-E8h]
  __int128 v18; // [rsp+70h] [rbp-D8h]
  __int128 v19; // [rsp+80h] [rbp-C8h]
  int v20; // [rsp+90h] [rbp-B8h]
  __int128 v21; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-98h]
  _OWORD v23[9]; // [rsp+B8h] [rbp-90h] BYREF

  std::env::current_dir(v15);
  v3 = *(_OWORD *)v15;
  if ( !__OFSUB__(-*(_QWORD *)v15, 1LL) )
  {
    forc_publish::validate::validate_dir(v15, *(_QWORD *)&v15[8], *(_QWORD *)&v15[16]);
    if ( v15[0] == 14 )
    {
      tempfile::dir::tempdir(v15);
      v4 = *(_QWORD *)v15;
      if ( v15[16] == 2 )
      {
        *(_BYTE *)a1 = 0;
        *(_QWORD *)(a1 + 8) = v4;
      }
      else
      {
        *(_DWORD *)v14 = *(_DWORD *)&v15[17];
        *(_DWORD *)&v14[3] = *(_DWORD *)&v15[20];
        v12 = *(_OWORD *)v15;
        v13 = v15[16];
        forc_publish::tarball::copy_project_excluding_out(v15);
        v6 = v15[0];
        if ( v15[0] == 14
          && (forc_publish::tarball::process_readme(v15, v12, *((_QWORD *)&v12 + 1)), v6 = v15[0], v15[0] == 14) )
        {
          std::path::Path::join(&v21, *a2, a2[1], &unk_2225B0, 16LL);
          std::fs::File::create(v15, &v21);
          if ( *(_DWORD *)v15 == 1 )
          {
            v7 = *(_QWORD *)&v15[8];
            *(_BYTE *)a1 = 0;
            *(_QWORD *)(a1 + 8) = v7;
          }
          else
          {
            v9 = *(unsigned int *)&v15[4];
            *(_QWORD *)v15 = 0x8000000000000000LL;
            *(_QWORD *)&v15[24] = 0LL;
            *(_QWORD *)&v15[40] = 0LL;
            BYTE12(v16) = 0;
            DWORD2(v16) = 0;
            flate2::gz::GzBuilder::write(v23, v15, v9);
            v19 = v23[6];
            v18 = v23[5];
            v17 = v23[4];
            v16 = v23[3];
            *(_OWORD *)&v15[32] = v23[2];
            *(_OWORD *)&v15[16] = v23[1];
            *(_OWORD *)v15 = v23[0];
            v20 = (int)&stru_10100;
            appended = tar::builder::Builder<W>::append_dir_all(v15, &v12);
            if ( !appended )
            {
              appended = tar::builder::Builder<W>::finish(v15);
              if ( !appended )
              {
                *(_QWORD *)(a1 + 24) = v22;
                *(_OWORD *)(a1 + 8) = v21;
                *(_BYTE *)a1 = 14;
                core::ptr::drop_in_place<tar::builder::Builder<flate2::gz::write::GzEncoder<std::fs::File>>>(v15);
                core::ptr::drop_in_place<tempfile::dir::TempDir>(&v12);
                goto LABEL_17;
              }
            }
            *(_BYTE *)a1 = 0;
            *(_QWORD *)(a1 + 8) = appended;
            core::ptr::drop_in_place<tar::builder::Builder<flate2::gz::write::GzEncoder<std::fs::File>>>(v15);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v21, *((_QWORD *)&v21 + 1));
        }
        else
        {
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v15[32];
          v8 = *(_OWORD *)&v15[1];
          *(_OWORD *)(a1 + 17) = *(_OWORD *)&v15[17];
          *(_OWORD *)(a1 + 1) = v8;
          *(_BYTE *)a1 = v6;
        }
        core::ptr::drop_in_place<tempfile::dir::TempDir>(&v12);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v15[32];
      v5 = *(_OWORD *)v15;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v15[16];
      *(_OWORD *)a1 = v5;
    }
LABEL_17:
    core::ptr::drop_in_place<std::path::PathBuf>(v3, *((_QWORD *)&v3 + 1));
    return a1;
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v3 + 1);
  return a1;
}