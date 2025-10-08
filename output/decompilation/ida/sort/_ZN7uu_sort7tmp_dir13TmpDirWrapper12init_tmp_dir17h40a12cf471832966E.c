__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(__int64 a1)
{
  __int64 v2; // rt0
  char v3; // of
  __int128 v4; // [rsp+0h] [rbp-118h]
  __int64 v5; // [rsp+10h] [rbp-108h]
  _BYTE v6[24]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v7; // [rsp+38h] [rbp-E0h]
  __int128 v8; // [rsp+40h] [rbp-D8h]
  __int128 v9; // [rsp+50h] [rbp-C8h]
  __int128 v10; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+70h] [rbp-A8h]
  __int128 v12; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+88h] [rbp-90h]
  __int64 v14; // [rsp+90h] [rbp-88h]
  __int64 v15; // [rsp+98h] [rbp-80h]
  __int64 v16; // [rsp+A0h] [rbp-78h]
  __int16 v17; // [rsp+A8h] [rbp-70h]
  _BYTE v18[24]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-50h]
  __int128 v20; // [rsp+D0h] [rbp-48h]
  __int128 v21; // [rsp+E0h] [rbp-38h]
  __int128 v22; // [rsp+F0h] [rbp-28h]
  __int64 v23; // [rsp+100h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 40) != 2 )
    core::panicking::panic(aAssertionFaile_9, 41LL, &off_18CAD8);
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)v6 = 0LL;
    core::panicking::assert_failed(0LL, a1 + 56, &unk_26A60, v6, &off_18CB08);
  }
  v16 = 6LL;
  v14 = 1LL;
  v15 = 0LL;
  v17 = 0;
  LODWORD(v12) = 0;
  *((_QWORD *)&v12 + 1) = aUutilsSort;
  v13 = 11LL;
  tempfile::Builder::tempdir_in(&v10, &v12, a1);
  if ( (_BYTE)v11 == 2 )
  {
    uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(v18, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v10);
    v23 = v19;
    v22 = *(_OWORD *)&v18[8];
    v9 = v21;
    v8 = v20;
    *(_OWORD *)&v6[8] = *(_OWORD *)&v18[8];
    v7 = v19;
    *(_QWORD *)v6 = *(_QWORD *)v18;
    return alloc::boxed::Box<T>::new(v6);
  }
  else
  {
    v4 = v10;
    v5 = v11;
    core::ptr::drop_in_place<core::option::Option<tempfile::dir::TempDir>>(a1 + 24);
    *(_QWORD *)(a1 + 40) = v5;
    *(_OWORD *)(a1 + 24) = v4;
    if ( *(_BYTE *)(a1 + 40) == 2 )
      core::option::unwrap_failed(&off_18CAF0);
    std::path::Path::to_path_buf(v18, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    v2 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 48));
    if ( (v2 < 0) ^ v3 | (v2 == 0) )
      BUG();
    v7 = *(_QWORD *)(a1 + 48);
    *(_OWORD *)v6 = *(_OWORD *)v18;
    *(_QWORD *)&v6[16] = *(_QWORD *)&v18[16];
    ctrlc::init_and_set_handler(&v12, v6);
    if ( (_DWORD)v12 == 3 )
    {
      return 0LL;
    }
    else
    {
      *(_OWORD *)v6 = v12;
      return uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(v6);
    }
  }
}