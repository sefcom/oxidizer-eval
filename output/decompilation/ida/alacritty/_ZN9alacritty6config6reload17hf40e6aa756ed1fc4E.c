void *__fastcall alacritty::config::reload(char *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  void *result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  _QWORD v10[2]; // [rsp+0h] [rbp-8C8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-8B8h] BYREF
  __int128 v12; // [rsp+20h] [rbp-8A8h]
  __int128 v13; // [rsp+30h] [rbp-898h]
  __int128 v14; // [rsp+40h] [rbp-888h]
  __int128 v15; // [rsp+50h] [rbp-878h]
  __int64 v16; // [rsp+60h] [rbp-868h]
  _QWORD v17[132]; // [rsp+68h] [rbp-860h] BYREF
  char **v18; // [rsp+488h] [rbp-440h] BYREF
  __int128 v19; // [rsp+490h] [rbp-438h]
  __int128 v20; // [rsp+4A0h] [rbp-428h]
  __int128 v21; // [rsp+4B0h] [rbp-418h]
  __int128 v22; // [rsp+4C0h] [rbp-408h]
  __int128 v23; // [rsp+4D0h] [rbp-3F8h]
  __int64 v24; // [rsp+4E0h] [rbp-3E8h]
  _BYTE src[960]; // [rsp+4E8h] [rbp-3E0h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
  {
    *(_QWORD *)&v11 = v10;
    *((_QWORD *)&v11 + 1) = <&T as core::fmt::Debug>::fmt;
    v18 = &off_881DB8;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v19 + 1) = &v11;
    v20 = 1uLL;
    v5 = log::__private_api::loc(&off_881DC8);
    v17[0] = aAlacrittyConfi_3;
    v17[1] = 17LL;
    v17[2] = aAlacrittyConfi_3;
    v17[3] = 17LL;
    v17[4] = v5;
    log::__private_api::log(&v18, 4LL, v17);
  }
  alacritty::config::load_from(&v18);
  v11 = v19;
  v12 = v20;
  v13 = v21;
  v14 = v22;
  v15 = v23;
  v16 = v24;
  if ( v18 == (char **)&byte_6 )
  {
    result = (void *)v16;
    *((_QWORD *)dest + 11) = v16;
    *(_OWORD *)(dest + 72) = v15;
    v7 = v11;
    v8 = v12;
    v9 = v13;
    *(_OWORD *)(dest + 56) = v14;
    *(_OWORD *)(dest + 40) = v9;
    *(_OWORD *)(dest + 24) = v8;
    *(_OWORD *)(dest + 8) = v7;
    *(_QWORD *)dest = 6LL;
  }
  else
  {
    memcpy(&v17[12], src, 0x3C0uLL);
    *(_OWORD *)&v17[1] = v11;
    *(_OWORD *)&v17[3] = v12;
    *(_OWORD *)&v17[5] = v13;
    *(_OWORD *)&v17[7] = v14;
    *(_OWORD *)&v17[9] = v15;
    v17[11] = v16;
    v17[0] = v18;
    alacritty::config::after_loading(v17, a4);
    return memcpy(dest, v17, 0x420uLL);
  }
  return result;
}