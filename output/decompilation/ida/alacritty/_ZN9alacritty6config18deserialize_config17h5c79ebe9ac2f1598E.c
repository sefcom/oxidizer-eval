__int64 __fastcall alacritty::config::deserialize_config(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 (__fastcall *v15)(); // r14
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // [rsp+0h] [rbp-158h] BYREF
  __int64 v26; // [rsp+10h] [rbp-148h]
  _BYTE v27[72]; // [rsp+18h] [rbp-140h] BYREF
  __int128 v28; // [rsp+60h] [rbp-F8h]
  __int128 v29; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v30; // [rsp+80h] [rbp-D8h]
  __int128 v31; // [rsp+90h] [rbp-C8h]
  __int128 v32; // [rsp+A0h] [rbp-B8h]
  __int64 v33; // [rsp+B0h] [rbp-A8h]
  __int128 v34; // [rsp+C0h] [rbp-98h]
  __int64 v35; // [rsp+D0h] [rbp-88h]
  _QWORD v36[2]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD *v37; // [rsp+F0h] [rbp-68h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+F8h] [rbp-60h]
  __int64 v39; // [rsp+100h] [rbp-58h]

  v36[0] = a2;
  v36[1] = a3;
  std::fs::read_to_string(v27);
  v7 = *(_QWORD *)&v27[8];
  result = *(_QWORD *)v27;
  if ( __OFSUB__(-*(_QWORD *)v27, 1LL) )
  {
    *(_QWORD *)a1 = 3LL;
    *(_QWORD *)(a1 + 8) = v7;
    return result;
  }
  v8 = *(_QWORD *)&v27[16];
  v25 = *(_OWORD *)v27;
  v26 = *(_QWORD *)&v27[16];
  *(_DWORD *)v27 = 0;
  v9 = core::char::methods::encode_utf8_raw(65279LL, v27);
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v7, v8, v9, v10) )
  {
    alloc::string::String::split_off(v27, &v25, 3LL);
    core::ptr::drop_in_place<alloc::string::String>(&v25);
    v26 = *(_QWORD *)&v27[16];
    v25 = *(_OWORD *)v27;
  }
  v11 = std::path::Path::extension(a2, a3);
  v13 = v12;
  v14 = 1LL;
  if ( v11 )
    v14 = v11;
  else
    v13 = 0LL;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v13, aYaml_0, 4LL)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v13, aYml, 3LL) )
  {
    goto LABEL_18;
  }
  v15 = (__int64 (__fastcall *)())*((_QWORD *)&v25 + 1);
  v16 = v26;
  core::str::<impl str>::trim_matches(*((_QWORD *)&v25 + 1), v26);
  if ( !v17 )
    goto LABEL_18;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 2 )
  {
    v37 = v36;
    v38 = <&T as core::fmt::Debug>::fmt;
    *(_QWORD *)v27 = &off_881E68;
    *(_QWORD *)&v27[8] = 2LL;
    *(_QWORD *)&v27[32] = 0LL;
    *(_QWORD *)&v27[16] = &v37;
    *(_QWORD *)&v27[24] = 1LL;
    v18 = log::__private_api::loc(&off_881E88);
    *(_QWORD *)&v29 = aAlacrittyConfi_3;
    *((_QWORD *)&v29 + 1) = 17LL;
    *(_QWORD *)&v30 = aAlacrittyConfi_3;
    *((_QWORD *)&v30 + 1) = 17LL;
    *(_QWORD *)&v31 = v18;
    log::__private_api::log(v27, 2LL, &v29);
  }
  v37 = (_QWORD *)0x8000000000000000LL;
  v38 = v15;
  v39 = v16;
  serde_yaml::de::Deserializer::de(v27, &v37);
  v19 = *(_QWORD *)&v27[8];
  if ( *(_QWORD *)v27 != 0x8000000000000007LL )
  {
    v33 = *(_QWORD *)&v27[64];
    v32 = *(_OWORD *)&v27[48];
    v31 = *(_OWORD *)&v27[32];
    v30 = *(_OWORD *)&v27[16];
    v29 = *(_OWORD *)v27;
    alacritty::config::prune_yaml_nulls(&v29, a4);
    toml::ser::to_string(v27, &v29);
    v34 = *(_OWORD *)&v27[8];
    v35 = *(_QWORD *)&v27[24];
    if ( *(_DWORD *)v27 == 1 )
    {
      *(_QWORD *)(a1 + 24) = v35;
      *(_OWORD *)(a1 + 8) = v34;
      *(_QWORD *)a1 = 5LL;
      core::ptr::drop_in_place<serde_yaml::value::Value>(&v29);
      return core::ptr::drop_in_place<alloc::string::String>(&v25);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v25);
    v26 = v35;
    v25 = v34;
    core::ptr::drop_in_place<serde_yaml::value::Value>(&v29);
LABEL_18:
    toml::de::from_str(v27, *((_QWORD *)&v25 + 1), v26);
    v20 = *(_QWORD *)v27;
    v29 = *(_OWORD *)&v27[8];
    v30 = *(_OWORD *)&v27[24];
    if ( *(_QWORD *)v27 == 2LL )
    {
      v21 = v29;
      *(_OWORD *)(a1 + 24) = v30;
      *(_OWORD *)(a1 + 8) = v21;
      *(_QWORD *)a1 = 7LL;
    }
    else
    {
      v22 = *(_OWORD *)&v27[40];
      v23 = *(_OWORD *)&v27[56];
      *(_OWORD *)(a1 + 72) = v28;
      *(_OWORD *)(a1 + 56) = v23;
      *(_OWORD *)(a1 + 40) = v22;
      v24 = v29;
      *(_OWORD *)(a1 + 24) = v30;
      *(_OWORD *)(a1 + 8) = v24;
      *(_QWORD *)a1 = v20;
    }
    return core::ptr::drop_in_place<alloc::string::String>(&v25);
  }
  *(_QWORD *)a1 = 6LL;
  *(_QWORD *)(a1 + 8) = v19;
  return core::ptr::drop_in_place<alloc::string::String>(&v25);
}