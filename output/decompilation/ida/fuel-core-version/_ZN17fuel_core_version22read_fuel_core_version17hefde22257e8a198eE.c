__int64 __fastcall fuel_core_version::read_fuel_core_version(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+0h] [rbp-F8h] BYREF
  __m256i v12; // [rsp+8h] [rbp-F0h]
  __int128 v13; // [rsp+28h] [rbp-D0h]
  __int128 v14; // [rsp+38h] [rbp-C0h]
  __int128 v15; // [rsp+48h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A0h]
  __m256i v17; // [rsp+60h] [rbp-98h]
  _BYTE v18[40]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-50h]
  __int128 v20; // [rsp+B8h] [rbp-40h]
  __int128 v21; // [rsp+C8h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-20h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  std::fs::read_to_string(&v11, v3);
  v4 = v11;
  v5 = v12.m256i_i64[0];
  if ( __OFSUB__(-v11, 1LL) )
  {
    result = eyre::error::<impl eyre::Report>::from_std(v12.m256i_i64[0], &off_12FC70);
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    <toml::value::Value as core::str::traits::FromStr>::from_str(v18, v12.m256i_i64[0], v12.m256i_i64[1]);
    v17 = *(__m256i *)&v18[8];
    if ( *(_QWORD *)v18 == 2LL )
    {
      *(__m256i *)v18 = v17;
      core::ptr::drop_in_place<alloc::string::String>(v4, v5);
      fuel_core_version::find_dependency_version(&v11, v18);
      v7 = v11;
      if ( v11 == 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 8) = eyre::error::<impl eyre::Report>::from_adhoc();
        *(_QWORD *)a1 = 0LL;
      }
      else
      {
        v8 = v12.m256i_i64[0];
        semver::parse::<impl core::str::traits::FromStr for semver::Version>::from_str(
          &v11,
          v12.m256i_i64[0],
          v12.m256i_i64[1]);
        v9 = v11;
        v10 = v12.m256i_i64[0];
        if ( v11 )
        {
          *(_QWORD *)(a1 + 32) = v12.m256i_i64[3];
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v12.m256i_u64[1];
          *(_QWORD *)a1 = v9;
          *(_QWORD *)(a1 + 8) = v10;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = eyre::error::<impl eyre::Report>::from_std(v12.m256i_i64[0]);
          *(_QWORD *)a1 = 0LL;
        }
        core::ptr::drop_in_place<alloc::string::String>(v7, v8);
      }
      return core::ptr::drop_in_place<toml::value::Value>(v18);
    }
    else
    {
      v16 = v22;
      v15 = v21;
      v14 = v20;
      v13 = v19;
      v12 = v17;
      v11 = *(_QWORD *)v18;
      *(_QWORD *)(a1 + 8) = ((__int64 (__fastcall *)(__int64 *))eyre::error::<impl eyre::Report>::from_std)(&v11);
      *(_QWORD *)a1 = 0LL;
      return core::ptr::drop_in_place<alloc::string::String>(v4, v5);
    }
  }
  return result;
}