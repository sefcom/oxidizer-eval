__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(__int64 a1)
{
  __int64 v2; // rt0
  char v3; // of
  __int128 v4; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v5; // [rsp+18h] [rbp-D0h]
  __m256i v6; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v7; // [rsp+40h] [rbp-A8h]
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int128 v9; // [rsp+60h] [rbp-88h] BYREF
  __int64 v10; // [rsp+70h] [rbp-78h]
  __int64 v11; // [rsp+78h] [rbp-70h]
  __int64 v12; // [rsp+80h] [rbp-68h]
  __int64 v13; // [rsp+88h] [rbp-60h]
  __int16 v14; // [rsp+90h] [rbp-58h]
  __m256i v15; // [rsp+98h] [rbp-50h] BYREF
  __int128 v16; // [rsp+B8h] [rbp-30h]
  __int128 v17; // [rsp+C8h] [rbp-20h]

  if ( *(_BYTE *)(a1 + 40) != 2 )
    core::panicking::panic(aAssertionFaile_16, 41LL, &off_200238);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v6.m256i_i64[0] = 0LL;
    core::panicking::assert_failed(0LL, a1 + 56, &byte_240F8, &v6, &off_200268);
  }
  v13 = 6LL;
  v11 = 1LL;
  v12 = 0LL;
  v14 = 0;
  LODWORD(v9) = 0;
  *((_QWORD *)&v9 + 1) = aUutilsSort;
  v10 = 11LL;
  tempfile::Builder::tempdir_in(&v4, &v9, a1);
  if ( (_BYTE)v5 == 2 )
  {
    uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v15, a1, v4);
    *(_OWORD *)&v6.m256i_u64[2] = *(_OWORD *)&v15.m256i_u64[2];
    *(_OWORD *)&v6.m256i_i8[1] = *(_OWORD *)&v15.m256i_i8[1];
    v7 = v16;
    v8 = v17;
    v6.m256i_i8[0] = v15.m256i_i8[0];
    return alloc::boxed::Box<T>::new(&v6);
  }
  else
  {
    core::ptr::drop_in_place<core::option::Option<tempfile::dir::TempDir>>(a1 + 24);
    *(_QWORD *)(a1 + 40) = v5;
    *(_OWORD *)(a1 + 24) = v4;
    if ( *(_BYTE *)(a1 + 40) == 2 )
      core::option::unwrap_failed(&off_200250);
    std::path::Path::to_path_buf(&v15, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    v2 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 48));
    if ( (v2 < 0) ^ v3 | (v2 == 0) )
      BUG();
    v6.m256i_i64[3] = *(_QWORD *)(a1 + 48);
    *(_OWORD *)v6.m256i_i8 = *(_OWORD *)v15.m256i_i8;
    v6.m256i_i64[2] = v15.m256i_i64[2];
    ctrlc::init_and_set_handler(&v9, &v6, 1LL);
    if ( (_DWORD)v9 == 3 )
    {
      return 0LL;
    }
    else
    {
      *(_OWORD *)v6.m256i_i8 = v9;
      return uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v6);
    }
  }
}
