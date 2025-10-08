__int64 __fastcall alacritty::cli::ParsedOptions::from_options(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-160h] BYREF
  __int64 v8; // [rsp+10h] [rbp-158h] BYREF
  __int64 v9; // [rsp+18h] [rbp-150h]
  __int64 v10; // [rsp+20h] [rbp-148h]
  _QWORD *v11; // [rsp+28h] [rbp-140h]
  __int128 v12; // [rsp+30h] [rbp-138h] BYREF
  __int128 v13; // [rsp+40h] [rbp-128h]
  __int64 v14; // [rsp+50h] [rbp-118h]
  _QWORD v15[4]; // [rsp+60h] [rbp-108h] BYREF
  __int128 v16; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v17[48]; // [rsp+90h] [rbp-D8h]
  __int128 v18; // [rsp+C0h] [rbp-A8h]
  __int64 v19; // [rsp+D0h] [rbp-98h]
  _BYTE v20[48]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v21; // [rsp+110h] [rbp-58h]
  __int128 v22; // [rsp+120h] [rbp-48h]
  __int64 v23; // [rsp+130h] [rbp-38h]

  v11 = a1;
  v8 = 0LL;
  v9 = 8LL;
  v10 = 0LL;
  if ( a3 )
  {
    v3 = a2;
    v4 = a2 + 24 * a3;
    do
    {
      v7 = v3;
      toml::de::from_str(v20, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
      if ( *(_DWORD *)v20 == 2 )
      {
        v13 = *(_OWORD *)&v20[24];
        v12 = *(_OWORD *)&v20[8];
        <alloc::string::String as core::clone::Clone>::clone(v20, v7);
        *(_OWORD *)&v17[24] = v13;
        *(_OWORD *)&v17[8] = v12;
        v16 = *(_OWORD *)v20;
        *(_QWORD *)v17 = *(_QWORD *)&v20[16];
        alloc::vec::Vec<T,A>::push(&v8, &v16);
      }
      else
      {
        v19 = v23;
        v18 = v22;
        *(_OWORD *)&v17[32] = v21;
        *(_OWORD *)&v17[16] = *(_OWORD *)&v20[32];
        *(_OWORD *)v17 = *(_OWORD *)&v20[16];
        v16 = *(_OWORD *)v20;
        v15[0] = &v7;
        v15[1] = <&T as core::fmt::Display>::fmt;
        v15[2] = &v16;
        v15[3] = <toml::de::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v12 = &off_881658;
        *((_QWORD *)&v12 + 1) = 3LL;
        v14 = 0LL;
        *(_QWORD *)&v13 = v15;
        *((_QWORD *)&v13 + 1) = 2LL;
        std::io::stdio::_eprint(&v12);
        core::ptr::drop_in_place<toml::de::error::Error>(&v16);
      }
      v3 += 24LL;
    }
    while ( v3 != v4 );
  }
  v5 = v11;
  v11[2] = v10;
  *v5 = v8;
  result = v9;
  v5[1] = v9;
  return result;
}