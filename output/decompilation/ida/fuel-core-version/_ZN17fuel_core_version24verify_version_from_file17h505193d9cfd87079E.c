__int64 __fastcall fuel_core_version::verify_version_from_file(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v7; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+10h] [rbp-98h]
  __int64 v9; // [rsp+20h] [rbp-88h]
  _OWORD v10[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+50h] [rbp-58h]
  _QWORD v12[4]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+80h] [rbp-28h] BYREF

  v8 = xmmword_17400;
  v7 = xmmword_173F0;
  v9 = 0LL;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int128 *))<semver::Version as core::cmp::PartialEq>::eq)(
                          a1,
                          &v7) )
  {
    core::ptr::drop_in_place<semver::Version>(&v7);
    *(_QWORD *)&v10[0] = a1;
    *((_QWORD *)&v10[0] + 1) = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
    *(_QWORD *)&v7 = &off_12FC08;
    *((_QWORD *)&v7 + 1) = 2LL;
    v9 = 0LL;
    *(_QWORD *)&v8 = v10;
    *((_QWORD *)&v8 + 1) = 1LL;
    ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v7);
    v1 = 0LL;
  }
  else
  {
    core::ptr::drop_in_place<semver::Version>(&v7);
    v10[1] = xmmword_17400;
    v10[0] = xmmword_173F0;
    v11 = 0LL;
    v12[0] = v10;
    v12[1] = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
    v12[2] = a1;
    v12[3] = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
    *(_QWORD *)&v7 = &off_12FBD8;
    *((_QWORD *)&v7 + 1) = 3LL;
    v9 = 0LL;
    *(_QWORD *)&v8 = v12;
    *((_QWORD *)&v8 + 1) = 2LL;
    ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
      v13,
      &v7,
      v2,
      v3,
      v4,
      v5);
    core::ptr::drop_in_place<semver::Version>(v10);
    v1 = eyre::error::<impl eyre::Report>::from_adhoc(v13);
  }
  core::ptr::drop_in_place<semver::Version>(a1);
  return v1;
}