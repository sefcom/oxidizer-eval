__int64 __fastcall forc_crypto::keys::vanity::RegexMatcher::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _BYTE v5[24]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v6; // [rsp+18h] [rbp-80h]
  __int64 v7; // [rsp+20h] [rbp-78h]
  __int128 v8; // [rsp+30h] [rbp-68h]
  __int64 v9; // [rsp+40h] [rbp-58h]
  _BYTE v10[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  _QWORD v13[2]; // [rsp+68h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+78h] [rbp-20h] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v14[0] = v13;
  v14[1] = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)v5 = &off_62F008;
  *(_QWORD *)&v5[8] = 1LL;
  v7 = 0LL;
  *(_QWORD *)&v5[16] = v14;
  v6 = 1LL;
  core::option::Option<T>::map_or_else(v10, 0LL, a3, v5);
  regex::regex::string::Regex::new(v5, v11, v12);
  v3 = *(_QWORD *)v5;
  v8 = *(_OWORD *)&v5[8];
  v9 = v6;
  if ( *(_QWORD *)v5 )
  {
    *(_QWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v8;
    core::ptr::drop_in_place<alloc::string::String>(v10);
    *(_QWORD *)a1 = v3;
  }
  else
  {
    *(_QWORD *)&v5[16] = v9;
    *(_OWORD *)v5 = v8;
    *(_QWORD *)(a1 + 8) = ((__int64 (__fastcall *)(_BYTE *))anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from)(v5);
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::string::String>(v10);
  }
  return a1;
}