__int64 __fastcall uu_df::filesystem::mount_info_from_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  __int128 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int128 v15; // [rsp+28h] [rbp-60h]
  _QWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v17[8]; // [rsp+48h] [rbp-40h] BYREF

  v6 = <&T as core::convert::AsRef<U>>::as_ref(a4);
  std::fs::canonicalize(&v12, v6);
  if ( __OFSUB__(-v12, 1LL) )
  {
    result = core::ptr::drop_in_place<std::io::error::Error>(v13, v6, v7, -v12);
    *(_WORD *)a1 = 257;
  }
  else
  {
    *(_QWORD *)((char *)&v15 + 1) = *(_QWORD *)((char *)&v13 + 1);
    *((_QWORD *)&v15 + 1) = *((_QWORD *)&v13 + 1);
    v14 = v12;
    LOBYTE(v15) = v13;
    v16[0] = a2;
    v16[1] = a2 + 152 * a3;
    v17[0] = v17;
    v17[1] = &v14;
    v17[2] = v17;
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::try_fold(&v12, v16, v17);
    if ( (_QWORD)v13 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>>(
        0x8000000000000000LL,
        *((_QWORD *)&v13 + 1));
      v9 = 0LL;
    }
    else
    {
      v9 = v12;
      core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>(v13, *((_QWORD *)&v13 + 1));
    }
    v12 = a2;
    *(_QWORD *)&v13 = a3;
    *((_QWORD *)&v13 + 1) = &v14;
    v10 = ((__int64 (__fastcall *)(__int64, __int64 *))core::option::Option<T>::or_else)(v9, &v12);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 8) = v10;
      v11 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 2;
      v11 = 1;
    }
    *(_BYTE *)a1 = v11;
    return core::mem::drop(v14, v15);
  }
  return result;
}