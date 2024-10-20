__int64 __fastcall uu_pwd::uumain::uumain(int a1, char a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-5E8h]
  int v12; // [rsp+0h] [rbp-5E8h]
  int v13; // [rsp+8h] [rbp-5E0h]
  int v14; // [rsp+8h] [rbp-5E0h]
  struct _Unwind_Exception *v15; // [rsp+10h] [rbp-5D8h]
  int v16; // [rsp+10h] [rbp-5D8h]
  int v17; // [rsp+18h] [rbp-5D0h]
  int v18; // [rsp+18h] [rbp-5D0h]
  int v19; // [rsp+20h] [rbp-5C8h]
  int v20; // [rsp+28h] [rbp-5C0h]
  int v21; // [rsp+30h] [rbp-5B8h]
  int v22; // [rsp+38h] [rbp-5B0h]
  int v23; // [rsp+40h] [rbp-5A8h]
  int v24; // [rsp+48h] [rbp-5A0h]
  __int64 v25; // [rsp+48h] [rbp-5A0h]
  int v26; // [rsp+50h] [rbp-598h]
  char is_ok; // [rsp+56h] [rbp-592h]
  char v28; // [rsp+57h] [rbp-591h]
  __int64 v29; // [rsp+58h] [rbp-590h]
  int v30; // [rsp+60h] [rbp-588h]
  int v31; // [rsp+68h] [rbp-580h]
  char flag; // [rsp+6Fh] [rbp-579h]
  int v33; // [rsp+80h] [rbp-568h]
  __int64 v34; // [rsp+80h] [rbp-568h]
  int v35; // [rsp+88h] [rbp-560h]
  struct _Unwind_Exception *v36[2]; // [rsp+90h] [rbp-558h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-548h]
  __int128 v38; // [rsp+B0h] [rbp-538h]
  __int128 v39; // [rsp+C0h] [rbp-528h]
  __int128 v40; // [rsp+D0h] [rbp-518h]
  __int128 v41; // [rsp+E0h] [rbp-508h]
  __int64 v42; // [rsp+F0h] [rbp-4F8h]
  __int128 v43; // [rsp+F8h] [rbp-4F0h] BYREF
  __int128 v44; // [rsp+108h] [rbp-4E0h]
  __int128 v45; // [rsp+118h] [rbp-4D0h]
  __int128 v46; // [rsp+128h] [rbp-4C0h]
  __int128 v47; // [rsp+138h] [rbp-4B0h]
  __int128 v48; // [rsp+148h] [rbp-4A0h]
  __int64 v49; // [rsp+158h] [rbp-490h]
  int v50[26]; // [rsp+160h] [rbp-488h] BYREF
  int dest[178]; // [rsp+1C8h] [rbp-420h] BYREF
  struct _Unwind_Exception *v52[2]; // [rsp+490h] [rbp-158h]
  __int128 v53; // [rsp+4A0h] [rbp-148h]
  __int128 v54; // [rsp+4B0h] [rbp-138h]
  __int128 v55; // [rsp+4C0h] [rbp-128h]
  __int128 v56; // [rsp+4D0h] [rbp-118h]
  __int128 v57; // [rsp+4E0h] [rbp-108h]
  __int64 v58; // [rsp+4F0h] [rbp-F8h]
  __int128 v59; // [rsp+500h] [rbp-E8h]
  __int64 v60; // [rsp+510h] [rbp-D8h]
  __int128 v61; // [rsp+518h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+528h] [rbp-C0h]
  _BYTE v63[24]; // [rsp+530h] [rbp-B8h] BYREF
  _BYTE v64[24]; // [rsp+548h] [rbp-A0h] BYREF
  _BYTE v65[32]; // [rsp+560h] [rbp-88h] BYREF
  __int128 v66; // [rsp+580h] [rbp-68h]
  __int64 v67; // [rsp+590h] [rbp-58h]
  __int64 v68; // [rsp+5A0h] [rbp-48h]
  __int64 v69; // [rsp+5A8h] [rbp-40h]
  int v70[4]; // [rsp+5B0h] [rbp-38h] BYREF
  __int64 v71; // [rsp+5C0h] [rbp-28h]
  char v72; // [rsp+5D6h] [rbp-12h]
  char v73; // [rsp+5D7h] [rbp-11h]

  v72 = 0;
  v73 = 1;
  uu_pwd::uu_app(dest);
  v73 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v50, (int)dest, a1, a2, v2, v3, v11, v13, v15, v17);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v43, v50);
  if ( (_QWORD)v43 != 0x8000000000000000LL )
  {
    v58 = v49;
    v57 = v48;
    v56 = v47;
    v55 = v46;
    v54 = v45;
    v53 = v44;
    *(_OWORD *)v52 = v43;
    v42 = v49;
    v41 = v48;
    v40 = v47;
    v39 = v46;
    v38 = v45;
    v37 = v44;
    *(_OWORD *)v36 = v43;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v36, aPhysical, 8LL, &off_F9A70);
    if ( (flag & 1) != 0 )
    {
      uu_pwd::physical_path(v64);
      goto LABEL_13;
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v36, aLogical, 7LL, &off_F9A88);
    if ( (v28 & 1) == 0 )
    {
      std::env::var(v65, aPosixlyCorrect, 15LL);
      is_ok = core::result::Result<T,E>::is_ok(v65);
      if ( (is_ok & 1) == 0 )
      {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v65);
        uu_pwd::physical_path(v64);
LABEL_13:
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v63,
          v64);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v61, v63);
        if ( (_QWORD)v61 == 0x8000000000000000LL )
        {
          v34 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  *((_QWORD *)&v61 + 1),
                  v62,
                  &off_F9AB8);
        }
        else
        {
          v67 = v62;
          v66 = v61;
          v60 = v62;
          v59 = v61;
          v72 = 0;
          v71 = v62;
          *(_OWORD *)v70 = v61;
          v25 = uucore::mods::display::println_verbatim(
                  (int)v70,
                  (int)v63,
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
                  v29,
                  v30,
                  v31,
                  a1,
                  a2,
                  v33,
                  v35,
                  v36[0],
                  (int)v36[1]);
          v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25);
          v8 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v6, v7);
          v68 = v8;
          v69 = v9;
          if ( !v8 )
          {
            v34 = 0LL;
            v72 = 0;
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
            return v34;
          }
          v34 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v68,
                  v69,
                  &off_F9AA0);
        }
        v72 = 0;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
        return v34;
      }
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v65);
    }
    uu_pwd::logical_path(v64);
    goto LABEL_13;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v43 + 1),
           &off_F9AD0);
}
