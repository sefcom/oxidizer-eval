__int64 forc_crypto::keys::parse_secret::examples()
{
  __int64 v0; // rbx
  char v2; // [rsp+8h] [rbp-90h] BYREF
  __int128 v3; // [rsp+10h] [rbp-88h] BYREF
  char *v4; // [rsp+20h] [rbp-78h]
  __int128 v5; // [rsp+28h] [rbp-70h]
  __int64 v6; // [rsp+38h] [rbp-60h]
  __int128 v7; // [rsp+40h] [rbp-58h] BYREF
  char *v8; // [rsp+50h] [rbp-48h]
  __int128 v9; // [rsp+58h] [rbp-40h] BYREF
  __int64 v10; // [rsp+68h] [rbp-30h]
  _BYTE v11[40]; // [rsp+70h] [rbp-28h] BYREF

  *(_QWORD *)&v3 = &off_62F2D8;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v7, aParsesTheSecre, 143LL, &v3);
  *(_QWORD *)&v3 = &off_62F2E8;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v9, aParsesTheSecre_0, 145LL, &v3);
  v3 = v7;
  v4 = v8;
  v5 = v9;
  v6 = v10;
  alloc::str::join_generic_copy(v11, &v3, 2LL);
  v0 = alloc::vec::Vec<T,A>::into_boxed_slice(v11);
  core::ptr::drop_in_place<forc_crypto::keys::vanity::HexMatcher>(&v3);
  return v0;
}