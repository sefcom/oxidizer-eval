__int64 fuel_core_version::main()
{
  char v0; // bp
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+48h] [rbp-60h] BYREF
  __int128 v15; // [rsp+58h] [rbp-50h]
  __int64 v16; // [rsp+68h] [rbp-40h]
  _QWORD v17[7]; // [rsp+70h] [rbp-38h] BYREF

  clap_builder::derive::Parser::parse(&v9);
  v0 = BYTE8(v10);
  v13 = v10;
  v12 = v9;
  fuel_core_version::read_fuel_core_version(&v9, &v12);
  v1 = *((_QWORD *)&v9 + 1);
  if ( (_QWORD)v9 )
  {
    v16 = v11;
    v15 = v10;
    v14 = v9;
    fuel_core_version::get_version_file_path(&v9, (__int64)&v12);
    v1 = *((_QWORD *)&v9 + 1);
    v5 = v9;
    if ( !__OFSUB__(-(__int64)v9, 1LL) )
    {
      if ( v0 )
      {
        v11 = v16;
        v10 = v15;
        v9 = v14;
        v6 = fuel_core_version::verify_version_from_file((__int64)&v9);
        core::mem::drop(v5, v1);
        if ( v6 )
        {
          v1 = v6;
          goto LABEL_9;
        }
      }
      else
      {
        v7 = v10;
        v11 = v16;
        v10 = v15;
        v9 = v14;
        v17[0] = v5;
        v17[1] = v1;
        v17[2] = v7;
        v1 = fuel_core_version::write_version_to_file(&v9, (__int64)v17, v2, v16, v3, v4);
        if ( v1 )
          goto LABEL_9;
      }
      v1 = 0LL;
      goto LABEL_9;
    }
    core::ptr::drop_in_place<semver::Version>(&v14);
  }
LABEL_9:
  core::mem::drop(v12, *((_QWORD *)&v12 + 1));
  return v1;
}