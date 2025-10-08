__int64 forc_crypto::address::examples()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v3[24]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v4[3]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v5; // [rsp+38h] [rbp-40h]
  _BYTE v6[40]; // [rsp+50h] [rbp-28h] BYREF

  v4[0] = &off_62F248;
  v4[1] = 1LL;
  v4[2] = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(v3, aConvertAnAddre, 132LL, v4);
  alloc::str::join_generic_copy(v6, v3, 1LL);
  v0 = alloc::vec::Vec<T,A>::into_boxed_slice(v6);
  core::ptr::drop_in_place<forc_crypto::address::Args>(v3);
  return v0;
}