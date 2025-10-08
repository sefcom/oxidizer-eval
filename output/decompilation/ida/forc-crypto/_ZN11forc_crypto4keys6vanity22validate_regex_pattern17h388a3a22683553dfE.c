__int64 __fastcall forc_crypto::keys::vanity::validate_regex_pattern(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-C0h]
  __int128 v7; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-A8h]
  __int64 v9; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+30h] [rbp-98h]
  __int64 v11; // [rsp+40h] [rbp-88h]
  _BYTE v12[8]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h]
  __int64 v14; // [rsp+58h] [rbp-70h]
  char **v15; // [rsp+60h] [rbp-68h] BYREF
  __int64 v16; // [rsp+68h] [rbp-60h]
  __int128 *v17; // [rsp+70h] [rbp-58h]
  __int64 v18; // [rsp+78h] [rbp-50h]
  __int64 v19; // [rsp+80h] [rbp-48h]
  _QWORD v20[2]; // [rsp+90h] [rbp-38h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-18h]

  v5 = a2;
  v6 = a3;
  if ( a3 <= 0x80 )
  {
    *(_QWORD *)&v7 = &v5;
    *((_QWORD *)&v7 + 1) = <&T as core::fmt::Display>::fmt;
    v15 = &off_62F008;
    v16 = 1LL;
    v19 = 0LL;
    v17 = &v7;
    v18 = 1LL;
    core::option::Option<T>::map_or_else(v12, 0LL, a3, &v15);
    regex::regex::string::Regex::new(&v9, v13, v14);
    if ( v9 )
    {
      core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v9);
      core::ptr::drop_in_place<alloc::string::String>(v12);
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, v5, v6);
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      v8 = v11;
      v7 = v10;
      v20[0] = &v7;
      v20[1] = <regex::error::Error as core::fmt::Display>::fmt;
      v15 = &off_62F018;
      v16 = 1LL;
      v19 = 0LL;
      v17 = (__int128 *)v20;
      v18 = 1LL;
      core::option::Option<T>::map_or_else(&v21, 0LL, v4, &v15);
      *(_QWORD *)(a1 + 24) = v22;
      *(_OWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = 1LL;
      core::ptr::drop_in_place<regex::error::Error>(&v7);
      if ( v9 )
        core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v9);
      return core::ptr::drop_in_place<alloc::string::String>(v12);
    }
  }
  else
  {
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aRegexPatternTo, 42LL);
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}