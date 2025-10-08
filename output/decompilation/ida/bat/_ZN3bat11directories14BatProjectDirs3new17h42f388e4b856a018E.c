__int64 __fastcall bat::directories::BatProjectDirs::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-48h]
  __int64 v16; // [rsp+68h] [rbp-40h] BYREF
  __int128 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+80h] [rbp-28h] BYREF
  __int64 v19; // [rsp+90h] [rbp-18h]

  etcetera::base_strategy::choose_native_strategy(v9);
  if ( __OFSUB__(-*(_QWORD *)v9, 1LL) )
  {
    result = core::ptr::drop_in_place<core::result::Result<etcetera::base_strategy::xdg::Xdg,etcetera::HomeDirError>>(
               v9,
               a2,
               v2,
               -*(_QWORD *)v9);
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v17 = *(_OWORD *)&v9[8];
    v16 = *(_QWORD *)v9;
    std::env::var_os(v9, aBatCachePath, 14LL);
    if ( *(_QWORD *)v9 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v12 = 0x8000000000000000LL;
      <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::cache_dir(v9, &v16);
      std::path::Path::join(&v14, *(_QWORD *)&v9[8], *(_QWORD *)&v9[16], aBat, 3LL);
      core::ptr::drop_in_place<std::path::PathBuf>(v9);
    }
    else
    {
      v12 = *(_OWORD *)v9;
      v13 = *(_QWORD *)&v9[16];
      v15 = *(_QWORD *)&v9[16];
      v14 = *(_OWORD *)v9;
    }
    v4 = aBatConfigDir;
    std::env::var_os(v9, aBatConfigDir, 14LL);
    if ( *(_QWORD *)v9 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v12 = 0x8000000000000000LL;
      <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::config_dir(v9, &v16);
      v4 = *(const char **)&v9[8];
      std::path::Path::join(&v18, *(_QWORD *)&v9[8], *(_QWORD *)&v9[16], aBat, 3LL);
      core::ptr::drop_in_place<std::path::PathBuf>(v9);
    }
    else
    {
      v12 = *(_OWORD *)v9;
      v13 = *(_QWORD *)&v9[16];
      v19 = *(_QWORD *)&v9[16];
      v18 = *(_OWORD *)v9;
    }
    *(_QWORD *)&v9[16] = v15;
    *(_OWORD *)v9 = v14;
    v11 = v19;
    v10 = v18;
    *(_OWORD *)a1 = v14;
    a1[4] = *((_QWORD *)&v10 + 1);
    a1[5] = v11;
    a1[2] = *(_QWORD *)&v9[16];
    a1[3] = v10;
    return core::ptr::drop_in_place<etcetera::base_strategy::xdg::Xdg>(
             &v16,
             v4,
             v5,
             v6,
             v7,
             v8,
             *(_QWORD *)v9,
             *(_QWORD *)&v9[8],
             *(_QWORD *)&v9[16],
             v10,
             *((_QWORD *)&v10 + 1),
             v11);
  }
  return result;
}