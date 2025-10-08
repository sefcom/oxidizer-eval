__int64 __fastcall just::function::semver_matches(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v9; // xmm0
  const char *v10; // rsi
  __int128 *v11; // rdi
  __int128 v12; // xmm0
  _BYTE v14[24]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v15; // [rsp+20h] [rbp-E8h]
  __int64 v16; // [rsp+28h] [rbp-E0h]
  _BYTE v17[24]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int128 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h]
  __int128 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h]
  __int128 v24; // [rsp+A0h] [rbp-68h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  __int128 v26; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+E0h] [rbp-28h]

  semver::parse::<impl core::str::traits::FromStr for semver::VersionReq>::from_str(v14, a5, a6);
  if ( __OFSUB__(0LL, *(_QWORD *)v14) )
  {
    just::function::semver_matches::{{closure}}(v17, *(_QWORD *)&v14[8]);
    v23 = *(_QWORD *)&v17[16];
    v9 = *(_OWORD *)v17;
    v22 = *(_OWORD *)v17;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v17[16];
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v22 = *(_OWORD *)v14;
    v23 = *(_QWORD *)&v14[16];
    v20 = *(_OWORD *)v14;
    v21 = *(_QWORD *)&v14[16];
    semver::parse::<impl core::str::traits::FromStr for semver::Version>::from_str(v14, a3, a4);
    if ( *(_QWORD *)v14 )
    {
      v28 = v15;
      v24 = *(_OWORD *)&v14[8];
      v25 = v15;
      *(_OWORD *)&v17[8] = *(_OWORD *)&v14[8];
      v18 = v15;
      *(_QWORD *)v17 = *(_QWORD *)v14;
      v19 = v16;
      v10 = aFalse;
      if ( (unsigned __int8)semver::VersionReq::matches(&v20, v17) )
        v10 = aTrue;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, v10);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v14[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v14;
      *(_QWORD *)a1 = 0LL;
      core::ptr::drop_in_place<semver::Version>(v17);
      v11 = &v20;
    }
    else
    {
      just::function::semver_matches::{{closure}}(&v26, *(_QWORD *)&v14[8]);
      v12 = v26;
      v24 = v26;
      v25 = v27;
      *(_QWORD *)(a1 + 24) = v27;
      *(_OWORD *)(a1 + 8) = v12;
      *(_QWORD *)a1 = 1LL;
      v11 = &v22;
    }
    core::ptr::drop_in_place<semver::VersionReq>(v11);
  }
  return a1;
}