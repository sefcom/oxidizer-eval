__int64 __fastcall uu_chroot::enter_chroot(__int64 a1, __int64 a2, char a3)
{
  const char *v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r13
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v16[6]; // [rsp+20h] [rbp-88h] BYREF
  int v17; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-50h]
  _BYTE v19[72]; // [rsp+60h] [rbp-48h] BYREF

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, a1, a2);
  <T as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(v16, &v17);
  v4 = (const char *)core::result::Result<T,E>::unwrap(v16);
  v6 = v5;
  v7 = chroot(v4);
  core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v6);
  if ( v7 )
  {
    v15[0] = a1;
    v15[1] = a2;
    v16[0] = &unk_195B0;
    v16[1] = 1LL;
    v16[4] = 0LL;
    v16[2] = &v14;
    v16[3] = 1LL;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int64, __int64, __int64, __int64, _QWORD *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
      v19,
      v16,
      v8,
      v9,
      v10,
      v11,
      v15,
      <std::path::Display as core::fmt::Display>::fmt);
    v18 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
    v17 = 0;
    return alloc::boxed::Box<T>::new(&v17);
  }
  else
  {
    if ( !a3 )
    {
      v13 = std::env::set_current_dir();
      core::result::Result<T,E>::unwrap(v13);
    }
    return 0LL;
  }
}