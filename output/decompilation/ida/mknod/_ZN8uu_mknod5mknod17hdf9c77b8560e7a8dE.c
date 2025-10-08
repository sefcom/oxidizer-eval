__int64 __fastcall uu_mknod::mknod(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  __mode_t v7; // ebp
  unsigned int v8; // ebp
  __mode_t v9; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  const char *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r12
  _BYTE v16[80]; // [rsp+8h] [rbp-50h] BYREF

  <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(v16, a1, a2);
  v4 = (const char *)core::result::Result<T,E>::expect(v16, &off_E3FF0);
  v6 = v5;
  v7 = *(_DWORD *)(a3 + 16);
  if ( (~v7 & 0x1B6) != 0 )
  {
    v9 = umask(0);
    v8 = mknod(v4, v7, *(_QWORD *)a3);
    umask(v9);
    if ( v8 == -1 )
    {
LABEL_6:
      v11 = uucore::execution_phrase();
      <&[u8] as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(v16, v11, v12);
      v13 = (const char *)core::result::Result<T,E>::expect(v16, &off_E4008);
      v15 = v14;
      perror(v13);
      core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v13, v15);
    }
  }
  else
  {
    v8 = mknod(v4, v7, *(_QWORD *)a3);
    if ( v8 == -1 )
      goto LABEL_6;
  }
  core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v6);
  return v8;
}