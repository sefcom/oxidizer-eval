void __fastcall spyware::communication::messages::Message::GetBasicInfoResponse(_OWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  a1[3] = a2[3];
  a1[2] = v4;
  a1[1] = v3;
  *a1 = v2;
}