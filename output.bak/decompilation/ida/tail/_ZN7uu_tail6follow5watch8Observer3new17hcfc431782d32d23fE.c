bool __fastcall uu_tail::follow::watch::Observer::new(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        __int128 *a5,
        unsigned int a6)
{
  bool result; // al
  unsigned int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2

  result = uu_tail::platform::unix::supports_pid_checks(a6);
  v11 = 0;
  if ( result )
    v11 = a6;
  *(_OWORD *)(a1 + 120) = a5[4];
  v12 = *a5;
  v13 = a5[1];
  v14 = a5[2];
  *(_OWORD *)(a1 + 104) = a5[3];
  *(_OWORD *)(a1 + 88) = v14;
  *(_OWORD *)(a1 + 72) = v13;
  *(_OWORD *)(a1 + 56) = v12;
  *(_BYTE *)(a1 + 140) = a2;
  *(_BYTE *)(a1 + 142) = a3;
  *(_BYTE *)(a1 + 141) = a4;
  *(_QWORD *)a1 = 3LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 8LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 136) = v11;
  return result;
}
