__int64 __fastcall uu_sleep::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-638h]
  int v8; // [rsp+8h] [rbp-630h]
  struct _Unwind_Exception *v9; // [rsp+10h] [rbp-628h]
  int v10; // [rsp+18h] [rbp-620h]
  __int64 v11; // [rsp+50h] [rbp-5E8h]
  _OWORD v12[6]; // [rsp+60h] [rbp-5D8h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-578h]
  __int128 v14; // [rsp+C8h] [rbp-570h] BYREF
  __int128 v15; // [rsp+D8h] [rbp-560h]
  __int128 v16; // [rsp+E8h] [rbp-550h]
  __int128 v17; // [rsp+F8h] [rbp-540h]
  __int128 v18; // [rsp+108h] [rbp-530h]
  __int128 v19; // [rsp+118h] [rbp-520h]
  __int64 v20; // [rsp+128h] [rbp-510h]
  int v21[26]; // [rsp+130h] [rbp-508h] BYREF
  int dest[178]; // [rsp+198h] [rbp-4A0h] BYREF
  __int128 v23; // [rsp+460h] [rbp-1D8h]
  __int128 v24; // [rsp+470h] [rbp-1C8h]
  __int128 v25; // [rsp+480h] [rbp-1B8h]
  __int128 v26; // [rsp+490h] [rbp-1A8h]
  __int128 v27; // [rsp+4A0h] [rbp-198h]
  __int128 v28; // [rsp+4B0h] [rbp-188h]
  __int64 v29; // [rsp+4C0h] [rbp-178h]
  _BYTE v30[24]; // [rsp+4C8h] [rbp-170h] BYREF
  _BYTE v31[64]; // [rsp+4E0h] [rbp-158h] BYREF
  __int128 v32; // [rsp+520h] [rbp-118h] BYREF
  __int128 v33; // [rsp+530h] [rbp-108h]
  __int128 v34; // [rsp+540h] [rbp-F8h]
  __int128 v35; // [rsp+550h] [rbp-E8h]
  _BYTE v36[64]; // [rsp+560h] [rbp-D8h] BYREF
  _BYTE v37[64]; // [rsp+5A0h] [rbp-98h] BYREF
  _OWORD v38[4]; // [rsp+5E0h] [rbp-58h] BYREF
  char v39; // [rsp+627h] [rbp-11h]

  v39 = 1;
  uu_sleep::uu_app(dest);
  v39 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v21, (int)dest, a1, a2, v2, v3, v7, v8, v9, v10);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v14, v21);
  if ( (_QWORD)v14 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v14 + 1),
             &off_104918);
  v29 = v20;
  v28 = v19;
  v27 = v18;
  v26 = v17;
  v25 = v16;
  v24 = v15;
  v23 = v14;
  v13 = v20;
  v12[5] = v19;
  v12[4] = v18;
  v12[3] = v17;
  v12[2] = v16;
  v12[1] = v15;
  v12[0] = v14;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v37, v12, aNumber, 6LL, &off_1048E8);
  core::option::Option<T>::ok_or_else(v36, v37);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v32, v36);
  if ( (_QWORD)v32 )
  {
    v38[3] = v35;
    v38[2] = v34;
    v38[1] = v33;
    v38[0] = v32;
    core::iter::traits::iterator::Iterator::map(v31, v38);
    core::iter::traits::iterator::Iterator::collect(v30, v31);
    v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v30);
    v11 = uu_sleep::sleep(v4, v5);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v30);
  }
  else
  {
    v11 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v32 + 1),
            v33,
            &off_104900);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v12);
  return v11;
}
