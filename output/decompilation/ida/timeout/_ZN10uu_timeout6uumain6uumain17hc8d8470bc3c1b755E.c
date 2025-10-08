__int64 __fastcall uu_timeout::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // [rsp+8h] [rbp-360h] BYREF
  __int64 v6; // [rsp+10h] [rbp-358h]
  _BYTE v7[40]; // [rsp+18h] [rbp-350h]
  __int128 v8; // [rsp+40h] [rbp-328h]
  _QWORD v9[2]; // [rsp+50h] [rbp-318h] BYREF
  int v10; // [rsp+60h] [rbp-308h]
  __int128 v11; // [rsp+64h] [rbp-304h]
  __int128 v12; // [rsp+74h] [rbp-2F4h]
  int v13; // [rsp+84h] [rbp-2E4h]
  __int64 dest; // [rsp+88h] [rbp-2E0h] BYREF
  __int64 v15; // [rsp+90h] [rbp-2D8h]
  __int64 v16; // [rsp+98h] [rbp-2D0h]
  __int128 v17; // [rsp+A0h] [rbp-2C8h]
  __int128 v18; // [rsp+B0h] [rbp-2B8h]
  __int128 v19; // [rsp+C0h] [rbp-2A8h]

  uu_timeout::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v5, &dest, a1, a2);
  if ( __OFSUB__(-v5, 1LL) )
    return alloc::boxed::Box<T>::new(v6, &dest, v2, -v5);
  v11 = *(_OWORD *)&v7[4];
  v12 = *(_OWORD *)&v7[20];
  v13 = *(_DWORD *)&v7[36];
  v9[0] = v5;
  v9[1] = v6;
  v10 = *(_DWORD *)v7;
  uu_timeout::Config::from(&dest, v9);
  if ( dest == 0x8000000000000000LL )
  {
    v4 = v15;
  }
  else
  {
    v8 = v19;
    *(_OWORD *)&v7[24] = v18;
    *(_OWORD *)&v7[8] = v17;
    v5 = dest;
    v6 = v15;
    *(_QWORD *)v7 = v16;
    v4 = uu_timeout::timeout(v15, v16, v17, DWORD2(v17), v19, v18, DWORD2(v18), SBYTE8(v19), SBYTE9(v19), SBYTE10(v19));
    core::ptr::drop_in_place<uu_timeout::Config>(&v5);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v9);
  return v4;
}