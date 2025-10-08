__int64 __fastcall rg::search::SearchWorker<W>::search_preprocessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  _BYTE v12[72]; // [rsp+10h] [rbp-1F8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v14; // [rsp+70h] [rbp-198h]
  _OWORD v15[4]; // [rsp+78h] [rbp-190h] BYREF
  _OWORD v16[3]; // [rsp+B8h] [rbp-150h] BYREF
  __int128 v17; // [rsp+E8h] [rbp-120h]
  __int64 v18; // [rsp+F8h] [rbp-110h]
  _BYTE v19[264]; // [rsp+100h] [rbp-108h] BYREF

  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 608)) )
    core::option::unwrap_failed(&off_3EB8D0);
  std::process::Command::new(v19, a2 + 608);
  std::process::Command::arg(v19, a3, a4);
  std::fs::File::open(v12, a3, a4);
  if ( *(_DWORD *)v12 == 1 )
  {
    v6 = *(_QWORD *)&v12[8];
LABEL_6:
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 56) = 1000000001;
    return core::ptr::drop_in_place<std::process::Command>(v19);
  }
  std::process::Command::stdin(v19, 3LL);
  grep_cli::process::CommandReaderBuilder::build(v12, a2 + 808, v19);
  if ( *(_DWORD *)v12 == 2 )
  {
    v14 = *(_QWORD *)&v12[24];
    v13 = *(_OWORD *)&v12[8];
    v6 = rg::search::SearchWorker<W>::search_preprocessor::{{closure}}(v19, &v13);
    goto LABEL_6;
  }
  v15[1] = *(_OWORD *)&v12[16];
  v15[2] = *(_OWORD *)&v12[32];
  v15[3] = *(_OWORD *)&v12[48];
  v15[0] = *(_OWORD *)v12;
  rg::search::search_reader((unsigned int)v16, a2 + 704, a2, a2 + 264, a3, a4, (char)v15);
  if ( DWORD2(v17) == 1000000001 )
  {
    *(_QWORD *)v12 = rg::search::SearchWorker<W>::search_preprocessor::{{closure}}(v19, *(_QWORD *)&v16[0]);
    *(_DWORD *)&v12[56] = 1000000001;
  }
  else
  {
    *(_QWORD *)&v12[64] = v18;
    *(_OWORD *)&v12[48] = v17;
    *(_OWORD *)&v12[32] = v16[2];
    *(_OWORD *)&v12[16] = v16[1];
    *(_OWORD *)v12 = v16[0];
  }
  v7 = grep_cli::process::CommandReader::close(v15);
  *(_QWORD *)&v13 = v7;
  v8 = *(_DWORD *)&v12[56];
  if ( *(_DWORD *)&v12[56] == 1000000001 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v12;
    *(_DWORD *)(a1 + 56) = 1000000001;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v13);
  }
  else
  {
    if ( !v7 )
    {
      *(_QWORD *)a1 = *(_QWORD *)v12;
      v10 = *(_OWORD *)&v12[24];
      v11 = *(_OWORD *)&v12[40];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v12[8];
      *(_OWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 40) = v11;
      *(_DWORD *)(a1 + 56) = v8;
      *(_QWORD *)(a1 + 60) = *(_QWORD *)&v12[60];
      *(_DWORD *)(a1 + 68) = *(_DWORD *)&v12[68];
      core::ptr::drop_in_place<grep_cli::process::CommandReader>(v15);
      return core::ptr::drop_in_place<std::process::Command>(v19);
    }
    *(_QWORD *)a1 = v7;
    *(_DWORD *)(a1 + 56) = 1000000001;
  }
  core::ptr::drop_in_place<grep_cli::process::CommandReader>(v15);
  return core::ptr::drop_in_place<std::process::Command>(v19);
}