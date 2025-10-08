__int64 __fastcall forc_crypto::keys::vanity::Arg::validate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rdi
  _QWORD v7[3]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]

  v2 = a1 + 16;
  v3 = 0LL;
  if ( __OFSUB__(0LL, *(_QWORD *)(a1 + 16)) )
    v2 = 0LL;
  v4 = core::option::Option<T>::map_or(v2);
  v5 = a1 + 40;
  if ( __OFSUB__(0LL, *(_QWORD *)(a1 + 40)) )
    v5 = 0LL;
  if ( (unsigned __int64)(v4 + core::option::Option<T>::map_or(v5)) >= 0x41 )
  {
    v7[0] = &off_62F028;
    v7[1] = 1LL;
    v7[2] = 8LL;
    v8 = 0LL;
    return ((__int64 (__fastcall *)(_QWORD *))anyhow::__private::format_err)(v7);
  }
  return v3;
}