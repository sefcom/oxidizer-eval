__int64 __fastcall uu_df::filesystem::mount_info_from_path(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v20; // [rsp+0h] [rbp-168h]
  int v21; // [rsp+8h] [rbp-160h]
  int v22; // [rsp+10h] [rbp-158h]
  int v23; // [rsp+18h] [rbp-150h]
  int v24; // [rsp+20h] [rbp-148h]
  int v25; // [rsp+28h] [rbp-140h]
  int v26; // [rsp+30h] [rbp-138h]
  int v27; // [rsp+38h] [rbp-130h]
  struct _Unwind_Exception *v28; // [rsp+40h] [rbp-128h]
  int v29; // [rsp+48h] [rbp-120h]
  __int64 v30; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+90h] [rbp-D8h]
  _QWORD v32[3]; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-B0h]
  __int64 v35; // [rsp+C0h] [rbp-A8h]
  _BYTE v36[24]; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v37[24]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-70h]
  __int64 v39; // [rsp+100h] [rbp-68h]
  __int64 v40; // [rsp+108h] [rbp-60h]
  _BYTE v41[32]; // [rsp+110h] [rbp-58h] BYREF
  _QWORD v42[2]; // [rsp+130h] [rbp-38h] BYREF
  int v43[2]; // [rsp+140h] [rbp-28h] BYREF
  __int64 v44; // [rsp+148h] [rbp-20h]
  _QWORD *v45; // [rsp+150h] [rbp-18h]

  v30 = a3;
  if ( (a4 & 1) != 0 )
  {
    v5 = <&T as core::convert::AsRef<U>>::as_ref(&v30);
    std::path::Path::canonicalize(v37, v5, v9);
    core::result::Result<T,E>::ok(v36, v37);
    <core::option::Option<T> as core::ops::try_trait::Try>::branch(&v33, v36);
    if ( v33 == 0x8000000000000000LL )
      return <core::option::Option<T> as core::ops::try_trait::FromResidual>::from_residual();
    v38 = v33;
    v39 = v34;
    v40 = v35;
    v32[0] = v33;
    v32[1] = v34;
    v32[2] = v35;
  }
  else
  {
    v4 = <&T as core::convert::AsRef<U>>::as_ref(&v30);
    std::path::Path::to_path_buf(v32, v4, v6);
  }
  v7 = core::slice::<impl [T]>::iter(a1, a2);
  v29 = v8;
  v10 = core::iter::traits::iterator::Iterator::map(v7, v8);
  v26 = v11;
  v27 = v10;
  v12 = core::iter::traits::iterator::Iterator::filter(v10, v11);
  v24 = v13;
  v25 = v12;
  v14 = core::iter::traits::iterator::Iterator::map(v12, v13);
  v22 = v15;
  v23 = v14;
  v42[0] = v14;
  v42[1] = v15;
  core::iter::traits::iterator::Iterator::find(v41, v42, v32);
  v21 = core::option::Option<T>::map(v41);
  *(_QWORD *)v43 = a1;
  v44 = a2;
  v45 = v32;
  v31 = core::option::Option<T>::or_else(
          v21,
          (int)v43,
          v16,
          a1,
          v17,
          v18,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
  core::ptr::drop_in_place<std::path::PathBuf>(v32);
  return v31;
}
