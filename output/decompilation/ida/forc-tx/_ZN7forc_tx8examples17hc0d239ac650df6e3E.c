__int64 forc_tx::examples()
{
  __int64 v0; // rbx
  char v2; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v3; // [rsp+10h] [rbp-D8h] BYREF
  char *v4; // [rsp+20h] [rbp-C8h]
  __int128 v5; // [rsp+28h] [rbp-C0h]
  __int64 v6; // [rsp+38h] [rbp-B0h]
  __int128 v7; // [rsp+40h] [rbp-A8h]
  __int64 v8; // [rsp+50h] [rbp-98h]
  __int128 v9; // [rsp+60h] [rbp-88h]
  __int64 v10; // [rsp+70h] [rbp-78h]
  __int128 v11; // [rsp+78h] [rbp-70h] BYREF
  char *v12; // [rsp+88h] [rbp-60h]
  __int128 v13; // [rsp+90h] [rbp-58h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-48h]
  __int128 v15; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-30h]
  _BYTE v17[40]; // [rsp+C0h] [rbp-28h] BYREF

  *(_QWORD *)&v3 = &off_1D13A8;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v11, aScriptExampleF, 198LL, &v3);
  *(_QWORD *)&v3 = &off_1D13B8;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v13, aMultipleInputs, 2213LL, &v3);
  v9 = v13;
  v10 = v14;
  *(_QWORD *)&v3 = &off_1D13C8;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v15, aAnExampleConst, 2715LL, &v3);
  v3 = v11;
  v4 = v12;
  v5 = v9;
  v6 = v10;
  v7 = v15;
  v8 = v16;
  alloc::str::join_generic_copy(v17, &v3);
  v0 = alloc::vec::Vec<T,A>::into_boxed_slice(v17);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&v3);
  return v0;
}