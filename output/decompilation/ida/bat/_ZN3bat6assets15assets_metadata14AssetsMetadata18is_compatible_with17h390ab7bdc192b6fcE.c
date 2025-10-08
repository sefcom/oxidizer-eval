__int64 __fastcall bat::assets::assets_metadata::AssetsMetadata::is_compatible_with(_QWORD *a1)
{
  __int128 *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r14
  __int128 v9; // [rsp+0h] [rbp-88h] BYREF
  __int128 v10; // [rsp+10h] [rbp-78h]
  __int64 v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[16]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF
  __int128 v16; // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+70h] [rbp-18h]

  semver::Version::parse(&v9);
  v1 = &v9;
  core::result::Result<T,E>::expect(v12, &v9);
  LODWORD(v6) = 0;
  if ( !__OFSUB__(0LL, *a1) )
  {
    v1 = (__int128 *)a1[1];
    bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::{{closure}}(&v15, v1, a1[2]);
    if ( (_QWORD)v15 )
    {
      v10 = v16;
      v11 = v17;
      v9 = v15;
      if ( v13 == (_QWORD)v16 )
      {
        v6 = v14;
        v7 = *((_QWORD *)&v10 + 1);
        ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<semver::Version>)(
          &v9,
          v1,
          v2,
          v3,
          v4,
          v5);
        LOBYTE(v6) = v6 == v7;
        goto LABEL_7;
      }
      ((void (__fastcall *)(__int128 *))core::ptr::drop_in_place<semver::Version>)(&v9);
    }
    LODWORD(v6) = 0;
  }
LABEL_7:
  core::ptr::drop_in_place<semver::Version>(v12, v1, v2, v3, v4, v5, v9, *((_QWORD *)&v9 + 1), v10);
  return (unsigned int)v6;
}