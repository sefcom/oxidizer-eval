__int64 __fastcall uu_hostname::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  __int64 v7; // [rsp+0h] [rbp-4E8h]
  int v8; // [rsp+0h] [rbp-4E8h]
  int v9; // [rsp+8h] [rbp-4E0h]
  int v10; // [rsp+8h] [rbp-4E0h]
  struct _Unwind_Exception *v11; // [rsp+10h] [rbp-4D8h]
  int v12; // [rsp+10h] [rbp-4D8h]
  __int64 v13; // [rsp+10h] [rbp-4D8h]
  int v14; // [rsp+18h] [rbp-4D0h]
  int v15; // [rsp+18h] [rbp-4D0h]
  struct _Unwind_Exception *v16; // [rsp+20h] [rbp-4C8h]
  int v17; // [rsp+28h] [rbp-4C0h]
  __int64 one; // [rsp+38h] [rbp-4B0h]
  __int64 v19; // [rsp+50h] [rbp-498h]
  _OWORD v20[6]; // [rsp+60h] [rbp-488h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-428h]
  __int128 v22; // [rsp+C8h] [rbp-420h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-410h]
  __int128 v24; // [rsp+E8h] [rbp-400h]
  __int128 v25; // [rsp+F8h] [rbp-3F0h]
  __int128 v26; // [rsp+108h] [rbp-3E0h]
  __int128 v27; // [rsp+118h] [rbp-3D0h]
  __int64 v28; // [rsp+128h] [rbp-3C0h]
  int v29[26]; // [rsp+130h] [rbp-3B8h] BYREF
  int v30[178]; // [rsp+198h] [rbp-350h] BYREF
  __int128 v31; // [rsp+460h] [rbp-88h]
  __int128 v32; // [rsp+470h] [rbp-78h]
  __int128 v33; // [rsp+480h] [rbp-68h]
  __int128 v34; // [rsp+490h] [rbp-58h]
  __int128 v35; // [rsp+4A0h] [rbp-48h]
  __int128 v36; // [rsp+4B0h] [rbp-38h]
  __int64 v37; // [rsp+4C0h] [rbp-28h]
  int v38[3]; // [rsp+4C8h] [rbp-20h]
  char v39; // [rsp+4D7h] [rbp-11h]

  v39 = 1;
  uu_hostname::uu_app(v30);
  v39 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v29, (int)v30, a1, a2, v2, v3, v7, v9, v11, v14);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v22, v29);
  if ( (_QWORD)v22 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v22 + 1),
             &off_104488);
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v33 = v24;
  v32 = v23;
  v31 = v22;
  v21 = v28;
  v20[5] = v27;
  v20[4] = v26;
  v20[3] = v25;
  v20[2] = v24;
  v20[1] = v23;
  v20[0] = v22;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v20,
          aHost,
          *(&uu_hostname::OPT_HOST + 1),
          &off_104470);
  *(_QWORD *)v38 = one;
  if ( one )
  {
    v13 = hostname::set(v38[0], (int)aHost, one, 0, v4, v5, v8, v10, v12, v15, v16, v17);
    v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v13);
  }
  else
  {
    v19 = uu_hostname::display_hostname(v20);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v20);
  return v19;
}
