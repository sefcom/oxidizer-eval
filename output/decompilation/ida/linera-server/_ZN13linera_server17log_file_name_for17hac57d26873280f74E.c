__int64 __fastcall linera_server::log_file_name_for(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 result; // rax
  char *v5; // [rsp+8h] [rbp-450h] BYREF
  __int64 v6; // [rsp+10h] [rbp-448h] BYREF
  __int128 v7; // [rsp+18h] [rbp-440h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-430h]
  __int128 v9; // [rsp+30h] [rbp-428h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-418h]
  __int64 (__fastcall *v11)(); // [rsp+48h] [rbp-410h]
  __int128 v12; // [rsp+50h] [rbp-408h] BYREF
  __int128 *v13; // [rsp+60h] [rbp-3F8h]
  __int64 v14; // [rsp+68h] [rbp-3F0h]
  __int64 v15; // [rsp+70h] [rbp-3E8h]
  _BYTE v16[128]; // [rsp+248h] [rbp-210h] BYREF
  char v17; // [rsp+2C8h] [rbp-190h] BYREF

  if ( *(_DWORD *)a2 > 1u )
  {
    a1[1] = aServer_0;
    a1[2] = 6LL;
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    linera_service::util::read_json(&v12, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
    core::result::Result<T,E>::expect(v16, &v12, &off_2339350);
    v5 = &v17;
    if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
    {
      v6 = a2 + 64;
      *(_QWORD *)&v9 = &v5;
      *((_QWORD *)&v9 + 1) = <&T as core::fmt::Display>::fmt;
      v10 = &v6;
      v11 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_2339320;
      *((_QWORD *)&v12 + 1) = 2LL;
      v15 = 0LL;
      v13 = &v9;
      v14 = 2LL;
      core::option::Option<T>::map_or_else(&v7, 0LL, v2, &v12);
      v12 = v7;
      v3 = v8;
    }
    else
    {
      *(_QWORD *)&v7 = &v5;
      *((_QWORD *)&v7 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_2339340;
      *((_QWORD *)&v12 + 1) = 1LL;
      v15 = 0LL;
      v13 = &v7;
      v14 = 1LL;
      core::option::Option<T>::map_or_else(&v9, 0LL, v2, &v12);
      v12 = v9;
      v3 = v10;
    }
    v13 = (__int128 *)v3;
    a1[2] = v3;
    *(_OWORD *)a1 = v12;
    return core::ptr::drop_in_place<linera_client::config::ValidatorServerConfig>(v16);
  }
  return result;
}