__int64 forc_fmt::examples()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+0h] [rbp-188h] BYREF
  __int128 v3; // [rsp+8h] [rbp-180h] BYREF
  __int64 v4; // [rsp+18h] [rbp-170h]
  __int128 v5; // [rsp+20h] [rbp-168h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-158h]
  __int128 v7; // [rsp+38h] [rbp-150h]
  __int64 v8; // [rsp+48h] [rbp-140h]
  __int128 v9; // [rsp+50h] [rbp-138h]
  __int64 v10; // [rsp+60h] [rbp-128h]
  __int128 v11; // [rsp+68h] [rbp-120h]
  __int64 v12; // [rsp+78h] [rbp-110h]
  __int128 v13; // [rsp+80h] [rbp-108h]
  __int64 v14; // [rsp+90h] [rbp-F8h]
  __int128 v15; // [rsp+98h] [rbp-F0h]
  __int64 v16; // [rsp+A8h] [rbp-E0h]
  __int128 v17; // [rsp+B0h] [rbp-D8h]
  __int64 v18; // [rsp+C0h] [rbp-C8h]
  __int128 v19; // [rsp+D0h] [rbp-B8h]
  __int64 v20; // [rsp+E0h] [rbp-A8h]
  __int128 v21; // [rsp+F0h] [rbp-98h]
  __int64 v22; // [rsp+100h] [rbp-88h]
  __int128 v23; // [rsp+110h] [rbp-78h]
  __int64 v24; // [rsp+120h] [rbp-68h]
  __int128 v25; // [rsp+130h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+140h] [rbp-48h]
  __int128 v27; // [rsp+148h] [rbp-40h] BYREF
  __int64 v28; // [rsp+158h] [rbp-30h]
  _BYTE v29[40]; // [rsp+160h] [rbp-28h] BYREF

  *(_QWORD *)&v5 = &off_80A4D0;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v25, aRunTheFormatte, 85LL, &v5);
  *(_QWORD *)&v5 = &off_80A4E0;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v3, aRunTheFormatte_0, 98LL, &v5);
  v17 = v3;
  v18 = v4;
  *(_QWORD *)&v5 = &off_80A4F0;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v3, aRunFormatterAg, 81LL, &v5);
  v19 = v3;
  v20 = v4;
  *(_QWORD *)&v5 = &off_80A500;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v3, aRunFormatterAg_0, 95LL, &v5);
  v21 = v3;
  v22 = v4;
  *(_QWORD *)&v5 = &off_80A510;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v3, aRunFormatterAg_1, 68LL, &v5);
  v23 = v3;
  v24 = v4;
  *(_QWORD *)&v5 = &off_80A520;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = &v2;
  v7 = 0LL;
  core::option::Option<T>::map_or_else(&v27, aRunFormatterAg_2, 82LL, &v5);
  v5 = v25;
  v6 = v26;
  v7 = v17;
  v8 = v18;
  v9 = v19;
  v10 = v20;
  v11 = v21;
  v12 = v22;
  v14 = v24;
  v13 = v23;
  v16 = v28;
  v15 = v27;
  alloc::str::join_generic_copy(v29, &v5);
  v0 = alloc::vec::Vec<T,A>::into_boxed_slice(v29);
  core::ptr::drop_in_place<[alloc::string::String; 6]>(&v5);
  return v0;
}