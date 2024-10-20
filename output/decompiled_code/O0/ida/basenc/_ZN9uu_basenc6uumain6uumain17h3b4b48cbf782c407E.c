__int64 __fastcall uu_basenc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // [rsp+0h] [rbp-1A8h]
  int v5; // [rsp+8h] [rbp-1A0h]
  int v6; // [rsp+10h] [rbp-198h]
  int v7; // [rsp+18h] [rbp-190h]
  int v8; // [rsp+20h] [rbp-188h]
  int v9; // [rsp+28h] [rbp-180h]
  unsigned __int8 v10; // [rsp+2Fh] [rbp-179h]
  int v11; // [rsp+30h] [rbp-178h]
  __int64 v12; // [rsp+30h] [rbp-178h]
  int v13; // [rsp+38h] [rbp-170h]
  int v14[4]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v15[2]; // [rsp+50h] [rbp-158h]
  int v16[4]; // [rsp+60h] [rbp-148h]
  __int128 v17; // [rsp+70h] [rbp-138h] BYREF
  __int128 v18; // [rsp+80h] [rbp-128h]
  __int128 v19; // [rsp+90h] [rbp-118h]
  struct _Unwind_Exception *v20; // [rsp+A0h] [rbp-108h]
  struct _Unwind_Exception v21; // [rsp+A8h] [rbp-100h] BYREF
  int v22[4]; // [rsp+E0h] [rbp-C8h]
  __int64 v23[2]; // [rsp+F0h] [rbp-B8h]
  int v24[4]; // [rsp+100h] [rbp-A8h]
  struct _Unwind_Exception *v25; // [rsp+110h] [rbp-98h]
  int v26[2]; // [rsp+120h] [rbp-88h] BYREF
  __int64 v27; // [rsp+128h] [rbp-80h]
  __int64 v28; // [rsp+130h] [rbp-78h] BYREF
  __int64 v29; // [rsp+138h] [rbp-70h]
  __int64 v30; // [rsp+140h] [rbp-68h]
  _BYTE v31[24]; // [rsp+148h] [rbp-60h] BYREF
  __int128 v32; // [rsp+160h] [rbp-48h]
  __int128 v33; // [rsp+170h] [rbp-38h]
  __int128 v34; // [rsp+180h] [rbp-28h]
  char v35; // [rsp+197h] [rbp-11h]

  v35 = 0;
  uu_basenc::parse_cmd_args(&v21, a1, a2);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v17, &v21);
  if ( (_QWORD)v17 == 2LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v17 + 1),
             v18,
             &off_12D5E8);
  v25 = v20;
  *(_OWORD *)v24 = v19;
  *(_OWORD *)v23 = v18;
  *(_OWORD *)v22 = v17;
  v35 = 1;
  *(_OWORD *)v16 = v19;
  *(_OWORD *)v15 = v18;
  *(_OWORD *)v14 = v17;
  v10 = (unsigned __int8)v20;
  uu_base32::base_common::get_input(v31, v14);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v28, v31);
  if ( v28 )
  {
    v12 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v29,
            v30,
            &off_12D5D0);
    core::ptr::drop_in_place<uu_base32::base_common::Config>(v14);
  }
  else
  {
    *(_QWORD *)v26 = v29;
    v27 = v30;
    v35 = 0;
    v34 = *(_OWORD *)v16;
    v33 = *(_OWORD *)v15;
    v32 = *(_OWORD *)v14;
    v2 = v10;
    v12 = uu_base32::base_common::handle_input(
            (int)v26,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9,
            v11,
            v13,
            v14[0],
            v14[2],
            v15[0],
            v15[1],
            v16[0],
            v16[2],
            v17,
            SDWORD2(v17),
            v18,
            SDWORD2(v18),
            v19,
            SDWORD2(v19),
            v20,
            v21.exception_class);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(v26, v2);
  }
  v35 = 0;
  return v12;
}
