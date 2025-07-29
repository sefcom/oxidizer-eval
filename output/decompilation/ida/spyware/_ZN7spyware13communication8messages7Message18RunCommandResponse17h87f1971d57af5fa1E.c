unsigned __int64 __fastcall spyware::communication::messages::Message::RunCommandResponse(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 56) = *((_QWORD *)a2 + 6);
  v2 = *a2;
  v3 = a2[1];
  *(_OWORD *)(a1 + 40) = a2[2];
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 8) = v2;
  result = 0x8000000000000001LL;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return result;
}