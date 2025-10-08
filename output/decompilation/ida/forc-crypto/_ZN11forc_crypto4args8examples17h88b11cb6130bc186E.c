__int64 forc_crypto::args::examples()
{
  __int64 v0; // rbx
  char v2; // [rsp+8h] [rbp-120h] BYREF
  __int128 v3; // [rsp+10h] [rbp-118h] BYREF
  char *v4; // [rsp+20h] [rbp-108h]
  __int128 v5; // [rsp+28h] [rbp-100h]
  __int64 v6; // [rsp+38h] [rbp-F0h]
  __int128 v7; // [rsp+40h] [rbp-E8h]
  __int64 v8; // [rsp+50h] [rbp-D8h]
  __int128 v9; // [rsp+58h] [rbp-D0h]
  __int64 v10; // [rsp+68h] [rbp-C0h]
  __int128 v11; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-A0h]
  __int128 v13; // [rsp+90h] [rbp-98h]
  __int64 v14; // [rsp+A0h] [rbp-88h]
  __int128 v15; // [rsp+B0h] [rbp-78h]
  __int64 v16; // [rsp+C0h] [rbp-68h]
  __int128 v17; // [rsp+D0h] [rbp-58h] BYREF
  char *v18; // [rsp+E0h] [rbp-48h]
  __int128 v19; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F8h] [rbp-30h]
  _BYTE v21[40]; // [rsp+100h] [rbp-28h] BYREF

  *(_QWORD *)&v3 = &off_62F258;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v17, aHashesAnArgume, 66LL, &v3);
  *(_QWORD *)&v3 = &off_62F268;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v11, aHashesAnArgume_0, 72LL, &v3);
  v13 = v11;
  v14 = v12;
  *(_QWORD *)&v3 = &off_62F278;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v11, aHashesAFilePat, 68LL, &v3);
  v15 = v11;
  v16 = v12;
  *(_QWORD *)&v3 = &off_62F288;
  *((_QWORD *)&v3 + 1) = 1LL;
  v4 = &v2;
  v5 = 0LL;
  core::option::Option<T>::map_or_else(&v19, aHashesAFilePat_0, 74LL, &v3);
  v3 = v17;
  v4 = v18;
  v5 = v13;
  v6 = v14;
  v7 = v15;
  v8 = v16;
  v9 = v19;
  v10 = v20;
  alloc::str::join_generic_copy(v21, &v3, 4LL);
  v0 = alloc::vec::Vec<T,A>::into_boxed_slice(v21);
  core::ptr::drop_in_place<[alloc::string::String; 4]>(&v3);
  return v0;
}