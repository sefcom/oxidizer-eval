__int64 __fastcall uu_wc::files0_iter(__int64 a1, __int64 a2, unsigned int a3, __int128 *a4)
{
  __int128 v5; // xmm0
  __int64 result; // rax
  __int64 v7; // [rsp+10h] [rbp-88h]
  _BYTE v8[40]; // [rsp+18h] [rbp-80h]
  __int64 v9; // [rsp+48h] [rbp-50h]
  _OWORD v10[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp-18h]

  std::io::buffered::bufreader::BufReader<R>::with_capacity(v10, 0x2000LL, a2, a3);
  v9 = v13;
  *(_QWORD *)&v8[32] = v11;
  *(_OWORD *)&v8[16] = v10[1];
  *(_OWORD *)v8 = v10[0];
  v7 = *((_QWORD *)a4 + 2);
  v5 = *a4;
  *(_QWORD *)(a1 + 64) = v12;
  *(_QWORD *)(a1 + 72) = v9;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v8[24];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v8[8];
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v7;
  result = *(_QWORD *)v8;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v8;
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
