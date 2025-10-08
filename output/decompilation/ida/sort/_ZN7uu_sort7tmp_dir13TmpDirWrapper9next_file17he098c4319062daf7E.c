__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::next_file(__int64 a1, __int64 a2)
{
  __int64 inited; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rbx
  char v6; // dl
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+18h] [rbp-A0h]
  _BYTE v14[20]; // [rsp+24h] [rbp-94h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int128 v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-68h]
  __int128 v18; // [rsp+80h] [rbp-38h] BYREF
  __int64 v19; // [rsp+90h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 40) == 2 && (inited = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a2)) != 0 )
  {
    *(_QWORD *)(a1 + 16) = inited;
    *(_QWORD *)(a1 + 24) = v3;
    result = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
  }
  else
  {
    std::sync::poison::mutex::Mutex<T>::lock(&v16, *(_QWORD *)(a2 + 48) + 16LL);
    v5 = core::result::Result<T,E>::unwrap(&v16, &off_18CB88);
    v7 = v6 & 1;
    v8 = core::fmt::num::imp::<impl usize>::_fmt(*(_QWORD *)(a2 + 56), v14, 20LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v8, v9);
    v19 = v17;
    ++*(_QWORD *)(a2 + 56);
    v18 = v16;
    if ( *(_BYTE *)(a2 + 40) == 2 )
      core::option::unwrap_failed(&off_18CBA0);
    std::path::Path::join(&v12, *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), &v18);
    std::fs::File::create(&v16, &v12);
    if ( (_DWORD)v16 == 1 )
    {
      *(_QWORD *)&v16 = 0x8000000000000003LL;
      *(_QWORD *)(a1 + 16) = alloc::boxed::Box<T>::new(&v16);
      *(_QWORD *)(a1 + 24) = &off_18C448;
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(&v12);
    }
    else
    {
      *(_OWORD *)&v14[4] = v12;
      v15 = v13;
      *(_DWORD *)a1 = DWORD1(v16);
      v10 = *(_QWORD *)&v14[12];
      v11 = v15;
      *(_OWORD *)(a1 + 4) = *(_OWORD *)v14;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v11;
    }
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>>>(
             v5,
             v7);
  }
  return result;
}