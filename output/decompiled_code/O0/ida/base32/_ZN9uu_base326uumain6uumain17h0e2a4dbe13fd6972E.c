__int64 __fastcall uu_base32::uumain::uumain(int a1, struct _Unwind_Exception *a2)
{
  __int64 v3; // [rsp+28h] [rbp-160h]
  int v4[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v5[2]; // [rsp+50h] [rbp-138h]
  int v6[4]; // [rsp+60h] [rbp-128h]
  __int128 v7; // [rsp+70h] [rbp-118h] BYREF
  __int128 v8; // [rsp+80h] [rbp-108h]
  __int128 v9; // [rsp+90h] [rbp-F8h]
  _BYTE v10[48]; // [rsp+A0h] [rbp-E8h] BYREF
  int v11[4]; // [rsp+D0h] [rbp-B8h]
  __int64 v12[2]; // [rsp+E0h] [rbp-A8h]
  int v13[4]; // [rsp+F0h] [rbp-98h]
  int v14[2]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v15; // [rsp+108h] [rbp-80h]
  __int64 v16; // [rsp+110h] [rbp-78h] BYREF
  __int64 v17; // [rsp+118h] [rbp-70h]
  __int64 v18; // [rsp+120h] [rbp-68h]
  _BYTE v19[24]; // [rsp+128h] [rbp-60h] BYREF
  _OWORD v20[3]; // [rsp+140h] [rbp-48h] BYREF
  char v21; // [rsp+177h] [rbp-11h]

  v21 = 0;
  uu_base32::base_common::parse_base_cmd_args(
    (__int64)v10,
    a1,
    a2,
    (__int64)aEncodeDecodeDa,
    375LL,
    (__int64)&unk_17D08,
    21LL);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v7, v10);
  if ( (_QWORD)v7 == 2LL )
  {
    v3 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v7 + 1),
           v8,
           &off_129A58);
LABEL_8:
    v21 = 0;
    return v3;
  }
  *(_OWORD *)v13 = v9;
  *(_OWORD *)v12 = v8;
  *(_OWORD *)v11 = v7;
  v21 = 1;
  *(_OWORD *)v6 = v9;
  *(_OWORD *)v5 = v8;
  *(_OWORD *)v4 = v7;
  uu_base32::base_common::get_input(v19, v4);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v16, v19);
  if ( v16 )
  {
    v3 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v17,
           v18,
           &off_129A40);
    core::ptr::drop_in_place<uu_base32::base_common::Config>(v4);
    goto LABEL_8;
  }
  *(_QWORD *)v14 = v17;
  v15 = v18;
  v21 = 0;
  v20[2] = *(_OWORD *)v6;
  v20[1] = *(_OWORD *)v5;
  v20[0] = *(_OWORD *)v4;
  v3 = uu_base32::base_common::handle_input((__int64)v14, 2u, (__int64)v20);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(v14);
  v21 = 0;
  return v3;
}
