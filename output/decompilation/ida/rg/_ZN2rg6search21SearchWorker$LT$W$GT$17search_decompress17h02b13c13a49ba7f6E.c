__int64 __fastcall rg::search::SearchWorker<W>::search_decompress(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _BYTE v11[28]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v12[68]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+74h] [rbp-64h]
  int v14; // [rsp+78h] [rbp-60h] BYREF
  _OWORD v15[5]; // [rsp+7Ch] [rbp-5Ch]

  grep_cli::decompress::DecompressionReaderBuilder::build(v12, a2 + 672);
  if ( *(_DWORD *)v12 == 3 )
  {
    *(_QWORD *)&v11[20] = *(_QWORD *)&v12[24];
    *(_OWORD *)&v11[4] = *(_OWORD *)&v12[8];
    *(_QWORD *)&v12[16] = *(_QWORD *)&v12[24];
    *(_OWORD *)v12 = *(_OWORD *)&v11[4];
    result = grep_cli::process::<impl core::convert::From<grep_cli::process::CommandError> for std::io::error::Error>::from(v12);
    *(_QWORD *)a1 = result;
    *(_DWORD *)(a1 + 56) = 1000000001;
  }
  else
  {
    *(_OWORD *)&v11[12] = *(_OWORD *)&v12[16];
    *(_QWORD *)&v11[8] = *(_QWORD *)&v12[12];
    *(_OWORD *)((char *)&v15[1] + 12) = *(_OWORD *)&v12[32];
    *(_OWORD *)((char *)&v15[2] + 12) = *(_OWORD *)&v12[48];
    v15[0] = *(_OWORD *)&v12[4];
    *(_OWORD *)((char *)v15 + 12) = *(_OWORD *)&v11[12];
    v14 = *(_DWORD *)v12;
    rg::search::search_reader((unsigned int)v12, a2 + 736, a2, a2 + 264, a3, a4, (char)&v14);
    v7 = grep_cli::decompress::DecompressionReader::close(&v14);
    *(_QWORD *)v11 = v7;
    v8 = *(_DWORD *)&v12[56];
    if ( *(_DWORD *)&v12[56] == 1000000001 )
    {
      *(_QWORD *)a1 = *(_QWORD *)v12;
      *(_DWORD *)(a1 + 56) = 1000000001;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v11);
    }
    else if ( v7 )
    {
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 56) = 1000000001;
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)v12;
      v9 = *(_OWORD *)&v12[24];
      v10 = *(_OWORD *)&v12[40];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v12[8];
      *(_OWORD *)(a1 + 24) = v9;
      *(_OWORD *)(a1 + 40) = v10;
      *(_DWORD *)(a1 + 56) = v8;
      *(_QWORD *)(a1 + 60) = *(_QWORD *)&v12[60];
      *(_DWORD *)(a1 + 68) = v13;
    }
    return core::ptr::drop_in_place<grep_cli::decompress::DecompressionReader>(&v14);
  }
  return result;
}