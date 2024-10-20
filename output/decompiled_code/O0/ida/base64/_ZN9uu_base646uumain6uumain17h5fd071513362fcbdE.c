__int64 __fastcall uu_base64::uumain::uumain(__int64 a1, __int64 a2)
{
  int v3; // [rsp+8h] [rbp-180h]
  int v4; // [rsp+10h] [rbp-178h]
  int v5; // [rsp+18h] [rbp-170h]
  int v6; // [rsp+20h] [rbp-168h]
  int v7; // [rsp+28h] [rbp-160h]
  __int64 v8; // [rsp+28h] [rbp-160h]
  int v9; // [rsp+30h] [rbp-158h]
  int v10; // [rsp+38h] [rbp-150h]
  int v11[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v12[2]; // [rsp+50h] [rbp-138h]
  int v13[4]; // [rsp+60h] [rbp-128h]
  __int128 v14; // [rsp+70h] [rbp-118h] BYREF
  __int128 v15; // [rsp+80h] [rbp-108h]
  __int128 v16; // [rsp+90h] [rbp-F8h]
  struct _Unwind_Exception *v17; // [rsp+A0h] [rbp-E8h] BYREF
  int v18; // [rsp+A8h] [rbp-E0h]
  int v19[4]; // [rsp+D0h] [rbp-B8h]
  __int64 v20[2]; // [rsp+E0h] [rbp-A8h]
  int v21[4]; // [rsp+F0h] [rbp-98h]
  int v22[2]; // [rsp+100h] [rbp-88h] BYREF
  __int64 v23; // [rsp+108h] [rbp-80h]
  __int64 v24; // [rsp+110h] [rbp-78h] BYREF
  __int64 v25; // [rsp+118h] [rbp-70h]
  __int64 v26; // [rsp+120h] [rbp-68h]
  _BYTE v27[24]; // [rsp+128h] [rbp-60h] BYREF
  __int128 v28; // [rsp+140h] [rbp-48h]
  __int128 v29; // [rsp+150h] [rbp-38h]
  __int128 v30; // [rsp+160h] [rbp-28h]
  char v31; // [rsp+177h] [rbp-11h]

  v31 = 0;
  uu_base32::base_common::parse_base_cmd_args(&v17, a1, a2, aEncodeDecodeDa, 375LL, &unk_17D08);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v14, &v17);
  if ( (_QWORD)v14 == 2LL )
  {
    v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v14 + 1),
           v15,
           &off_129A58);
LABEL_8:
    v31 = 0;
    return v8;
  }
  *(_OWORD *)v21 = v16;
  *(_OWORD *)v20 = v15;
  *(_OWORD *)v19 = v14;
  v31 = 1;
  *(_OWORD *)v13 = v16;
  *(_OWORD *)v12 = v15;
  *(_OWORD *)v11 = v14;
  uu_base32::base_common::get_input(v27, v11);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v24, v27);
  if ( v24 )
  {
    v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v25,
           v26,
           &off_129A40);
    core::ptr::drop_in_place<uu_base32::base_common::Config>(v11);
    goto LABEL_8;
  }
  *(_QWORD *)v22 = v25;
  v23 = v26;
  v31 = 0;
  v30 = *(_OWORD *)v13;
  v29 = *(_OWORD *)v12;
  v28 = *(_OWORD *)v11;
  v8 = uu_base32::base_common::handle_input(
         (int)v22,
         21,
         v3,
         v4,
         v5,
         v6,
         v7,
         v9,
         v10,
         v11[0],
         v11[2],
         v12[0],
         v12[1],
         v13[0],
         v13[2],
         v14,
         SDWORD2(v14),
         v15,
         SDWORD2(v15),
         v16,
         SDWORD2(v16),
         v17,
         v18);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(v22, 0LL);
  v31 = 0;
  return v8;
}
