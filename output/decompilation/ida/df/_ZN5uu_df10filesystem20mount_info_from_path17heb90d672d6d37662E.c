__int64 __fastcall uu_df::filesystem::mount_info_from_path(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r15
  __int64 v17; // rbx
  _QWORD *v18; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v19[24]; // [rsp+8h] [rbp-80h]
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-50h]
  _QWORD *v23; // [rsp+48h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  __int128 v25; // [rsp+58h] [rbp-30h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a3);
  std::fs::canonicalize(&v18, v3);
  if ( v18 == (_QWORD *)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v18);
    return 0LL;
  }
  else
  {
    v22 = *(_OWORD *)v19;
    v21 = v18;
    v20[0] = a1;
    v20[1] = &a1[19 * a2];
    v18 = &v21;
    *(_QWORD *)v19 = &v21;
    *(_QWORD *)&v19[8] = &v21;
    ((void (__fastcall *)(_QWORD **, _QWORD *, _QWORD **, __int64, __int64, __int64))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold)(
      &v23,
      v20,
      &v18,
      v4,
      v5,
      v6);
    if ( v24 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>(&v23);
      v16 = 0LL;
    }
    else
    {
      v16 = v23;
      *(_OWORD *)&v19[8] = v25;
      v18 = v23;
      *(_QWORD *)v19 = v24;
      ((void (__fastcall *)(_QWORD **, _QWORD *, __int64, __int64, __int64, __int64))core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>)(
        &v18,
        v20,
        v8,
        v9,
        v10,
        v11);
    }
    v18 = a1;
    *(_QWORD *)v19 = a2;
    *(_QWORD *)&v19[8] = &v21;
    v17 = ((__int64 (__fastcall *)(_QWORD *, _QWORD **, __int64, __int64, __int64, __int64))core::option::Option<T>::or_else)(
            v16,
            &v18,
            v12,
            v13,
            v14,
            v15);
    core::ptr::drop_in_place<std::path::PathBuf>(&v21);
    return v17;
  }
}
