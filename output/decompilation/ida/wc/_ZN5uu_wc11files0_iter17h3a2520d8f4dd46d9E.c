__int64 __fastcall uu_wc::files0_iter(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int64 v6; // [rsp+10h] [rbp-78h]
  _BYTE v7[40]; // [rsp+18h] [rbp-70h]
  _OWORD v8[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]
  __int64 v10; // [rsp+70h] [rbp-18h]

  std::io::buffered::bufreader::BufReader<R>::with_capacity(v8);
  *(_QWORD *)&v7[32] = v9;
  *(_OWORD *)&v7[16] = v8[1];
  *(_OWORD *)v7 = v8[0];
  v6 = *((_QWORD *)a3 + 2);
  v4 = *a3;
  *(_QWORD *)(a1 + 64) = v10;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v7[24];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v7[8];
  *(_OWORD *)a1 = v4;
  *(_QWORD *)(a1 + 16) = v6;
  result = *(_QWORD *)v7;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v7;
  *(_BYTE *)(a1 + 72) = 0;
  return result;
}