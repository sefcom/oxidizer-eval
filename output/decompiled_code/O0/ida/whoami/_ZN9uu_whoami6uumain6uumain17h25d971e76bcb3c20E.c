__int64 __fastcall uu_whoami::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-5A8h]
  int v12; // [rsp+0h] [rbp-5A8h]
  int v13; // [rsp+8h] [rbp-5A0h]
  int v14; // [rsp+8h] [rbp-5A0h]
  struct _Unwind_Exception *v15; // [rsp+10h] [rbp-598h]
  int v16; // [rsp+10h] [rbp-598h]
  int v17; // [rsp+18h] [rbp-590h]
  int v18; // [rsp+18h] [rbp-590h]
  int v19; // [rsp+20h] [rbp-588h]
  int v20; // [rsp+28h] [rbp-580h]
  int v21; // [rsp+30h] [rbp-578h]
  int v22; // [rsp+38h] [rbp-570h]
  int v23; // [rsp+40h] [rbp-568h]
  int v24; // [rsp+48h] [rbp-560h]
  __int64 v25; // [rsp+48h] [rbp-560h]
  int v26; // [rsp+50h] [rbp-558h]
  __int64 v27; // [rsp+58h] [rbp-550h]
  int v28; // [rsp+70h] [rbp-538h]
  __int64 v29; // [rsp+70h] [rbp-538h]
  char v30; // [rsp+78h] [rbp-530h]
  int v31[4]; // [rsp+80h] [rbp-528h] BYREF
  struct _Unwind_Exception *v32[2]; // [rsp+90h] [rbp-518h]
  __int128 v33; // [rsp+A0h] [rbp-508h]
  __int128 v34; // [rsp+B0h] [rbp-4F8h]
  __int128 v35; // [rsp+C0h] [rbp-4E8h]
  __int128 v36; // [rsp+D0h] [rbp-4D8h]
  __int64 v37; // [rsp+E0h] [rbp-4C8h]
  __int128 v38; // [rsp+E8h] [rbp-4C0h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-4B0h]
  __int128 v40; // [rsp+108h] [rbp-4A0h]
  __int128 v41; // [rsp+118h] [rbp-490h]
  __int128 v42; // [rsp+128h] [rbp-480h]
  __int128 v43; // [rsp+138h] [rbp-470h]
  __int64 v44; // [rsp+148h] [rbp-460h]
  int v45[26]; // [rsp+150h] [rbp-458h] BYREF
  int dest[178]; // [rsp+1B8h] [rbp-3F0h] BYREF
  int v47[4]; // [rsp+480h] [rbp-128h]
  struct _Unwind_Exception *v48[2]; // [rsp+490h] [rbp-118h]
  __int128 v49; // [rsp+4A0h] [rbp-108h]
  __int128 v50; // [rsp+4B0h] [rbp-F8h]
  __int128 v51; // [rsp+4C0h] [rbp-E8h]
  __int128 v52; // [rsp+4D0h] [rbp-D8h]
  __int64 v53; // [rsp+4E0h] [rbp-C8h]
  __int128 v54; // [rsp+4F0h] [rbp-B8h]
  __int64 v55; // [rsp+500h] [rbp-A8h]
  __int128 v56; // [rsp+510h] [rbp-98h] BYREF
  __int64 v57; // [rsp+520h] [rbp-88h]
  _BYTE v58[24]; // [rsp+528h] [rbp-80h] BYREF
  __int128 v59; // [rsp+540h] [rbp-68h]
  __int64 v60; // [rsp+550h] [rbp-58h]
  __int64 v61; // [rsp+560h] [rbp-48h]
  __int64 v62; // [rsp+568h] [rbp-40h]
  int v63[4]; // [rsp+570h] [rbp-38h] BYREF
  __int64 v64; // [rsp+580h] [rbp-28h]
  char v65; // [rsp+596h] [rbp-12h]
  char v66; // [rsp+597h] [rbp-11h]

  v65 = 0;
  v66 = 1;
  uu_whoami::uu_app(dest);
  v66 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v45, (int)dest, a1, a2, v2, v3, v11, v13, v15, v17);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v38, v45);
  if ( (_QWORD)v38 != 0x8000000000000000LL )
  {
    v53 = v44;
    v52 = v43;
    v51 = v42;
    v50 = v41;
    v49 = v40;
    *(_OWORD *)v48 = v39;
    *(_OWORD *)v47 = v38;
    v37 = v44;
    v36 = v43;
    v35 = v42;
    v34 = v41;
    v33 = v40;
    *(_OWORD *)v32 = v39;
    *(_OWORD *)v31 = v38;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v31);
    uu_whoami::whoami(v58);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v56, v58);
    if ( (_QWORD)v56 == 0x8000000000000000LL )
    {
      v29 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v56 + 1),
              v57,
              &off_F94D0);
    }
    else
    {
      v60 = v57;
      v59 = v56;
      v55 = v57;
      v54 = v56;
      v65 = 0;
      v64 = v57;
      *(_OWORD *)v63 = v56;
      v25 = uucore::mods::display::println_verbatim(
              (int)v63,
              (int)v58,
              0,
              1,
              v4,
              v5,
              v12,
              v14,
              v16,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24,
              v26,
              v27,
              a1,
              a2,
              v28,
              v30,
              v31[0],
              v31[2],
              v32[0],
              (int)v32[1]);
      v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25);
      v8 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v6, v7);
      v61 = v8;
      v62 = v9;
      if ( !v8 )
      {
        v29 = 0LL;
        v65 = 0;
        return v29;
      }
      v29 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v61,
              v62,
              &off_F94B8);
    }
    v65 = 0;
    return v29;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v38 + 1),
           &off_F94E8);
}
