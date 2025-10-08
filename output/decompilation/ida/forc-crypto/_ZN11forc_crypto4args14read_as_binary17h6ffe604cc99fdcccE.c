__int64 __fastcall forc_crypto::args::read_as_binary(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  __int128 v4; // [rsp+10h] [rbp-18h]

  if ( __OFSUB__(0LL, *a2) )
  {
    a1[1] = 1LL;
    a1[2] = 0LL;
    result = 0LL;
    *a1 = 0LL;
  }
  else
  {
    forc_crypto::args::read_as_binary::{{closure}}(&v3, a2[1], a2[2]);
    result = v3;
    *(_OWORD *)(a1 + 1) = v4;
    *a1 = result;
  }
  return result;
}