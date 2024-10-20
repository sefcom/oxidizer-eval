__int64 __fastcall uu_numfmt::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  char v4; // dl
  int *v5; // rsi
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // edx
  int v11; // ecx
  struct _Unwind_Exception *v13; // [rsp+0h] [rbp-A58h]
  struct _Unwind_Exception *v14; // [rsp+0h] [rbp-A58h]
  int v15; // [rsp+8h] [rbp-A50h]
  int v16[2]; // [rsp+8h] [rbp-A50h]
  struct _Unwind_Exception *v17; // [rsp+10h] [rbp-A48h]
  int v18; // [rsp+18h] [rbp-A40h]
  __int64 v19; // [rsp+90h] [rbp-9C8h]
  int v20[4]; // [rsp+A0h] [rbp-9B8h] BYREF
  int v21[4]; // [rsp+B0h] [rbp-9A8h]
  int v22[4]; // [rsp+C0h] [rbp-998h]
  int v23[4]; // [rsp+D0h] [rbp-988h]
  int v24[4]; // [rsp+E0h] [rbp-978h]
  struct _Unwind_Exception *v25[2]; // [rsp+F0h] [rbp-968h]
  int v26[2]; // [rsp+100h] [rbp-958h]
  __int128 v27; // [rsp+108h] [rbp-950h] BYREF
  __int128 v28; // [rsp+118h] [rbp-940h]
  __int128 v29; // [rsp+128h] [rbp-930h]
  __int128 v30; // [rsp+138h] [rbp-920h]
  __int128 v31; // [rsp+148h] [rbp-910h]
  __int128 v32; // [rsp+158h] [rbp-900h]
  __int64 v33; // [rsp+168h] [rbp-8F0h]
  int v34[26]; // [rsp+170h] [rbp-8E8h] BYREF
  int v35[178]; // [rsp+1D8h] [rbp-880h] BYREF
  int v36[4]; // [rsp+4A0h] [rbp-5B8h]
  int v37[4]; // [rsp+4B0h] [rbp-5A8h]
  int v38[4]; // [rsp+4C0h] [rbp-598h]
  int v39[4]; // [rsp+4D0h] [rbp-588h]
  int v40[4]; // [rsp+4E0h] [rbp-578h]
  struct _Unwind_Exception *v41[2]; // [rsp+4F0h] [rbp-568h]
  int v42[2]; // [rsp+500h] [rbp-558h]
  int v43[52]; // [rsp+510h] [rbp-548h] BYREF
  _QWORD src[26]; // [rsp+5E0h] [rbp-478h] BYREF
  _BYTE v45[208]; // [rsp+6B0h] [rbp-3A8h] BYREF
  _BYTE v46[208]; // [rsp+780h] [rbp-2D8h] BYREF
  _OWORD v47[2]; // [rsp+850h] [rbp-208h] BYREF
  _BYTE dest[208]; // [rsp+870h] [rbp-1E8h] BYREF
  int v49[2]; // [rsp+940h] [rbp-118h] BYREF
  __int64 v50; // [rsp+948h] [rbp-110h]
  _OWORD v51[4]; // [rsp+950h] [rbp-108h] BYREF
  _OWORD v52[4]; // [rsp+990h] [rbp-C8h] BYREF
  int v53[16]; // [rsp+9D0h] [rbp-88h] BYREF
  __int64 v54; // [rsp+A10h] [rbp-48h] BYREF
  int v55[2]; // [rsp+A18h] [rbp-40h] BYREF
  char v56; // [rsp+A20h] [rbp-38h]
  __int64 v57; // [rsp+A28h] [rbp-30h]
  __int64 v58; // [rsp+A30h] [rbp-28h]
  __int64 v59; // [rsp+A38h] [rbp-20h] BYREF
  char v60; // [rsp+A46h] [rbp-12h]
  char v61; // [rsp+A47h] [rbp-11h]

  v60 = 0;
  v61 = 1;
  uu_numfmt::uu_app(v35);
  v61 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v34,
    (int)v35,
    a1,
    a2,
    v2,
    v3,
    (__int64)v13,
    v15,
    v17,
    v18);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v27, v34);
  if ( (_QWORD)v27 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v27 + 1),
             &off_11C0B0);
  *(_QWORD *)v42 = v33;
  *(_OWORD *)v41 = v32;
  *(_OWORD *)v40 = v31;
  *(_OWORD *)v39 = v30;
  *(_OWORD *)v38 = v29;
  *(_OWORD *)v37 = v28;
  *(_OWORD *)v36 = v27;
  *(_QWORD *)v26 = v33;
  *(_OWORD *)v25 = v32;
  *(_OWORD *)v24 = v31;
  *(_OWORD *)v23 = v30;
  *(_OWORD *)v22 = v29;
  *(_OWORD *)v21 = v28;
  *(_OWORD *)v20 = v27;
  uu_numfmt::parse_options(v46);
  core::result::Result<T,E>::map_err(v45, v46);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v45);
  if ( src[0] == 2LL )
  {
    v47[1] = *(_OWORD *)&src[3];
    v47[0] = *(_OWORD *)&src[1];
    v19 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v47,
            &off_11C098);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    memcpy(v43, dest, sizeof(v43));
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v51, v20, aNumber, 6LL, &off_11C068);
    if ( *(_QWORD *)&v51[0] )
    {
      v52[3] = v51[3];
      v52[2] = v51[2];
      v52[1] = v51[1];
      v52[0] = v51[0];
      core::iter::traits::iterator::Iterator::map(v53, v52);
      v5 = v43;
      *(_QWORD *)v49 = uu_numfmt::handle_args((__int64)v53, (__int64)v43);
      v50 = v9;
      v60 = 1;
    }
    else
    {
      v54 = std::io::stdio::stdin();
      *(_QWORD *)v55 = std::io::stdio::Stdin::lock(&v54);
      v56 = v4 & 1;
      v5 = v43;
      *(_QWORD *)v49 = uu_numfmt::handle_buffer((__int64)v55, (__int64)v43);
      v50 = v6;
      v60 = 1;
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(v55);
    }
    if ( *(_QWORD *)v49 != 0LL )
    {
      v60 = 0;
      v57 = *(_QWORD *)v49;
      v58 = v50;
      *(_QWORD *)v16 = std::io::stdio::stdout();
      v59 = *(_QWORD *)v16;
      v14 = (struct _Unwind_Exception *)<std::io::stdio::Stdout as std::io::Write>::flush(&v59);
      v5 = (int *)aErrorFlushingS;
      core::result::Result<T,E>::expect(v14, aErrorFlushingS, 21LL, &off_11C080);
      v19 = v57;
    }
    else
    {
      v19 = 0LL;
    }
    v10 = v49[0];
    v11 = 0;
    if ( *(_QWORD *)v49 != 0LL && (v60 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v49);
    v60 = 0;
    core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>((int)v43, (int)v5, v10, v11, v7, v8, v14, v16[0]);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
  }
  return v19;
}
