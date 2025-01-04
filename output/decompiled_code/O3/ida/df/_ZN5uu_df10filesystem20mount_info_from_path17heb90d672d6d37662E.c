__int64 __fastcall uu_df::filesystem::mount_info_from_path(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r15
  __int64 v6; // rbx
  _QWORD *v7; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[24]; // [rsp+8h] [rbp-80h]
  _QWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  _QWORD *v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int128 v14; // [rsp+58h] [rbp-30h]

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a3);
  std::fs::canonicalize(&v7, v3);
  if ( v7 == (_QWORD *)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v7);
    return 0LL;
  }
  else
  {
    v11 = *(_OWORD *)v8;
    v10 = v7;
    v9[0] = a1;
    v9[1] = &a1[19 * a2];
    v7 = &v10;
    *(_QWORD *)v8 = &v10;
    *(_QWORD *)&v8[8] = &v10;
    ((void (__fastcall *)(_QWORD **, _QWORD *, _QWORD **))<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold)(
      &v12,
      v9,
      &v7);
    if ( v13 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>(&v12);
      v5 = 0LL;
    }
    else
    {
      v5 = v12;
      *(_OWORD *)&v8[8] = v14;
      v7 = v12;
      *(_QWORD *)v8 = v13;
      ((void (__fastcall *)(_QWORD **))core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>)(&v7);
    }
    v7 = a1;
    *(_QWORD *)v8 = a2;
    *(_QWORD *)&v8[8] = &v10;
    v6 = ((__int64 (__fastcall *)(_QWORD *, _QWORD **))core::option::Option<T>::or_else)(v5, &v7);
    core::ptr::drop_in_place<std::path::PathBuf>(&v10);
    return v6;
  }
}
