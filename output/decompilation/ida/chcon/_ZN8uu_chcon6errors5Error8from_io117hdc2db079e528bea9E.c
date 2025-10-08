__int64 __fastcall uu_chcon::errors::Error::from_io1(__int64 a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+10h] [rbp-28h] BYREF
  __int64 v3; // [rsp+20h] [rbp-18h]

  <T as core::convert::Into<U>>::into(&v2);
  *(_QWORD *)(a1 + 32) = aGettingSecurit;
  *(_QWORD *)(a1 + 40) = 24LL;
  *(_OWORD *)(a1 + 8) = v2;
  result = v3;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 48) = 0x3D00000002LL;
  *(_DWORD *)a1 = 17;
  return result;
}