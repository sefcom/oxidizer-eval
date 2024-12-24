__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::next_file(__int64 a1, __int64 a2)
{
  __int64 inited; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  char v6; // dl
  unsigned __int8 v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+18h] [rbp-A0h]
  _BYTE v15[20]; // [rsp+24h] [rbp-94h]
  __int64 v16; // [rsp+38h] [rbp-80h]
  __int128 v17; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h]
  __int128 v19; // [rsp+80h] [rbp-38h] BYREF
  __int64 v20; // [rsp+90h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 40) == 2 && (inited = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a2)) != 0 )
  {
    *(_QWORD *)(a1 + 16) = inited;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
  }
  else
  {
    std::sync::mutex::Mutex<T>::lock(&v17, *(_QWORD *)(a2 + 48) + 16LL);
    v5 = core::result::Result<T,E>::unwrap(&v17, &off_200338);
    v7 = v6 & 1;
    <T as alloc::string::ToString>::to_string(&v19, a2 + 56);
    ++*(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)(a2 + 40) == 2 )
      core::option::unwrap_failed(&off_200350);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32);
    v18 = v20;
    v17 = v19;
    std::path::Path::join(&v13, v8, v9, &v17);
    std::fs::File::create(&v17, &v13);
    if ( (_DWORD)v17 )
    {
      LOBYTE(v17) = 4;
      *(_QWORD *)(a1 + 16) = alloc::boxed::Box<T>::new(&v17);
      *(_QWORD *)(a1 + 24) = &off_2001C8;
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(&v13);
    }
    else
    {
      *(_OWORD *)&v15[4] = v13;
      v16 = v14;
      *(_DWORD *)a1 = DWORD1(v17);
      v10 = *(_QWORD *)&v15[12];
      v11 = v16;
      *(_OWORD *)(a1 + 4) = *(_OWORD *)v15;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v11;
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<()>>(v5, v7);
  }
  return a1;
}
