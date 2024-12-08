        unsigned __int8 a5)
{
  int v8; // ebx
  __int64 v9; // r9
  const char *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  _QWORD v17[2]; // [rsp+10h] [rbp-128h] BYREF
  _QWORD v18[3]; // [rsp+20h] [rbp-118h] BYREF
  char v19; // [rsp+38h] [rbp-100h]
  __int128 v20; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-E8h]
  __int128 v22; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v23; // [rsp+68h] [rbp-D0h]
  __int128 v24; // [rsp+78h] [rbp-C0h]
  __int128 v25; // [rsp+88h] [rbp-B0h]

  std::fs::metadata(&v22);
  v8 = v22;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v22);
  if ( v8 != 2 )
  {
    uu_cp::OverwriteMode::verify((__int64)&v22, a4, a2, a3, a5, v9);
    if ( (_DWORD)v22 != 13 )
    {
      v14 = v22;
      v15 = v23;
      v16 = v24;
      result = a1;
      *(_OWORD *)(a1 + 48) = v25;
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v14;
      return result;
    }
    result = std::fs::remove_file(a2, a3);
    if ( result )
    {
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
  }
  <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&v22, a2, a3);
  v10 = (const char *)core::result::Result<T,E>::unwrap(&v22);
  v12 = v11;
  if ( mkfifo(v10, 0x1B6u) == -1 )
  {
    v18[0] = 1LL;
    v18[1] = a2;
    v18[2] = a3;
    v19 = 1;
    v17[0] = v18;
    v17[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v22 = &off_1B59C0;
    *((_QWORD *)&v22 + 1) = 2LL;
    *(_QWORD *)&v24 = 0LL;
    *(_QWORD *)&v23 = v17;
    *((_QWORD *)&v23 + 1) = 1LL;
    core::option::Option<T>::map_or_else(&v20, &v22);
    *(_QWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)a1 = 4LL;
    return core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v10, v12);
  }
  else
  {
    *(_QWORD *)a1 = 13LL;
    return core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v10, v12);
  }
}
