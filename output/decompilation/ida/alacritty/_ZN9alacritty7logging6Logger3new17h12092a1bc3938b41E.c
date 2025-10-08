__int64 __fastcall alacritty::logging::Logger::new(__int64 a1, __int128 *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int64 result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  int v8; // edx
  _BYTE v9[72]; // [rsp+8h] [rbp-150h]
  __int128 v10; // [rsp+50h] [rbp-108h] BYREF
  __int128 v11; // [rsp+60h] [rbp-F8h]
  __int128 v12; // [rsp+70h] [rbp-E8h]
  __int128 v13; // [rsp+80h] [rbp-D8h]
  __int64 v14; // [rsp+90h] [rbp-C8h]
  _BYTE v15[48]; // [rsp+98h] [rbp-C0h]
  _BYTE v16[40]; // [rsp+C8h] [rbp-90h]
  _BYTE v17[35]; // [rsp+F5h] [rbp-63h]
  __int64 v18; // [rsp+118h] [rbp-40h]

  alacritty::logging::OnDemandLogFile::new(&v10);
  *(_OWORD *)&v9[56] = v13;
  *(_OWORD *)&v9[40] = v12;
  *(_OWORD *)&v9[24] = v11;
  *(_OWORD *)&v9[8] = v10;
  *(_DWORD *)v9 = 0;
  v9[4] = 0;
  v2 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v10, v2);
  *(_OWORD *)&v17[3] = v10;
  *(_OWORD *)&v17[19] = v11;
  v18 = v12;
  v14 = *(_QWORD *)&v9[64];
  v13 = *(_OWORD *)&v9[48];
  v12 = *(_OWORD *)&v9[32];
  v11 = *(_OWORD *)&v9[16];
  v10 = *(_OWORD *)v9;
  *(_DWORD *)v15 = 0;
  v15[4] = 0;
  *(_OWORD *)&v15[5] = *(_OWORD *)v17;
  *(_OWORD *)&v15[21] = *(_OWORD *)&v17[16];
  *(_QWORD *)&v15[32] = *(_QWORD *)&v17[27];
  *(_QWORD *)&v15[40] = v18;
  v3 = *a2;
  *(_OWORD *)&v16[24] = a2[1];
  *(_OWORD *)&v16[8] = v3;
  *(_DWORD *)v16 = 0;
  v16[4] = 0;
  result = std::time::Instant::now(&v10);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)&v9[64];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v9[48];
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v9[32];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v9[16];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v9;
  v5 = *(_OWORD *)&v15[16];
  v6 = *(_OWORD *)&v15[32];
  *(_OWORD *)a1 = *(_OWORD *)v15;
  *(_OWORD *)(a1 + 16) = v5;
  *(_OWORD *)(a1 + 32) = v6;
  v7 = *(_OWORD *)v16;
  *(_OWORD *)(a1 + 136) = *(_OWORD *)&v16[16];
  *(_QWORD *)(a1 + 152) = *(_QWORD *)&v16[32];
  *(_OWORD *)(a1 + 120) = v7;
  *(_QWORD *)(a1 + 160) = result;
  *(_DWORD *)(a1 + 168) = v8;
  return result;
}