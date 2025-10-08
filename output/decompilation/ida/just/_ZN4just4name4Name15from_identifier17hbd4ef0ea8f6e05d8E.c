__int64 __fastcall just::name::Name::from_identifier(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _QWORD v6[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *((_BYTE *)a2 + 64) != 24 )
  {
    v6[0] = 0LL;
    core::panicking::assert_failed(0LL, a2 + 4, &unk_6E88E, v6, &off_4305C8);
  }
  result = *((_QWORD *)a2 + 8);
  *(_QWORD *)(a1 + 64) = result;
  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  return result;
}