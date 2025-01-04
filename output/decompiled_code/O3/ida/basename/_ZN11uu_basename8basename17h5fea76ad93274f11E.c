_QWORD *__fastcall uu_basename::basename(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  char v17[8]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-E8h]
  __int64 v19; // [rsp+18h] [rbp-E0h]
  __int128 v20; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-C8h]
  _BYTE v22[56]; // [rsp+60h] [rbp-98h] BYREF
  char v23[96]; // [rsp+98h] [rbp-60h] BYREF

  v8 = a2;
  v9 = core::str::<impl str>::trim_end_matches(a2, a3);
  if ( v10 )
    v8 = v9;
  else
    v10 = a3;
  std::sys::os_str::bytes::Slice::to_owned(v17, v8, v10);
  std::path::Path::components(&v20, v18, v19);
  v23[0] = 10;
  core::iter::traits::iterator::Iterator::fold(v22, &v20, v23);
  if ( v22[0] == 10 )
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  else
  {
    v11 = std::path::Component::as_os_str(v22);
    std::sys::os_str::bytes::Slice::to_str(&v20, v11);
    if ( (_QWORD)v20 )
      core::option::unwrap_failed(&off_10EAF0);
    v12 = *((_QWORD *)&v20 + 1);
    v13 = v21;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v20 + 1), v21, a4, a5) )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12, v13);
    }
    else
    {
      v14 = <&str as core::str::pattern::Pattern>::strip_suffix_of(a4, a5, v12, v13);
      if ( v14 )
        v12 = v14;
      else
        v15 = v13;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v20, v12, v15);
    }
    a1[2] = v21;
    *(_OWORD *)a1 = v20;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v17);
  return a1;
}
