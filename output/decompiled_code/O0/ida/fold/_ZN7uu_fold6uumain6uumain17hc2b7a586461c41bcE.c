__int64 __fastcall uu_fold::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-758h]
  int v13; // [rsp+8h] [rbp-750h]
  struct _Unwind_Exception *v14; // [rsp+10h] [rbp-748h]
  int v15; // [rsp+18h] [rbp-740h]
  _OWORD *v16; // [rsp+28h] [rbp-730h]
  __int64 one; // [rsp+58h] [rbp-700h]
  char v18; // [rsp+67h] [rbp-6F1h]
  char flag; // [rsp+7Fh] [rbp-6D9h]
  __int64 v20; // [rsp+98h] [rbp-6C0h]
  _BYTE v21[24]; // [rsp+A8h] [rbp-6B0h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-698h]
  __int64 v23; // [rsp+D0h] [rbp-688h]
  __int128 v24; // [rsp+E0h] [rbp-678h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-668h]
  __int128 v26; // [rsp+100h] [rbp-658h] BYREF
  __int64 v27; // [rsp+110h] [rbp-648h]
  __int128 v28; // [rsp+118h] [rbp-640h]
  __int64 v29; // [rsp+128h] [rbp-630h]
  _OWORD v30[6]; // [rsp+130h] [rbp-628h] BYREF
  __int64 v31; // [rsp+190h] [rbp-5C8h]
  __int128 v32; // [rsp+198h] [rbp-5C0h] BYREF
  __int128 v33; // [rsp+1A8h] [rbp-5B0h]
  __int128 v34; // [rsp+1B8h] [rbp-5A0h]
  __int128 v35; // [rsp+1C8h] [rbp-590h]
  __int128 v36; // [rsp+1D8h] [rbp-580h]
  __int128 v37; // [rsp+1E8h] [rbp-570h]
  __int64 v38; // [rsp+1F8h] [rbp-560h]
  int v39[26]; // [rsp+200h] [rbp-558h] BYREF
  int dest[178]; // [rsp+268h] [rbp-4F0h] BYREF
  int v41[4]; // [rsp+530h] [rbp-228h] BYREF
  __int64 v42; // [rsp+540h] [rbp-218h]
  __int128 v43; // [rsp+550h] [rbp-208h]
  __int128 v44; // [rsp+560h] [rbp-1F8h]
  __int128 v45; // [rsp+570h] [rbp-1E8h]
  __int128 v46; // [rsp+580h] [rbp-1D8h]
  __int128 v47; // [rsp+590h] [rbp-1C8h]
  __int128 v48; // [rsp+5A0h] [rbp-1B8h]
  __int64 v49; // [rsp+5B0h] [rbp-1A8h]
  __int128 v50; // [rsp+5C0h] [rbp-198h]
  __int64 v51; // [rsp+5D0h] [rbp-188h]
  __int64 v52; // [rsp+5D8h] [rbp-180h]
  __int128 v53; // [rsp+5E0h] [rbp-178h] BYREF
  __int64 v54; // [rsp+5F0h] [rbp-168h]
  __int64 v55; // [rsp+5F8h] [rbp-160h]
  __int128 v56; // [rsp+600h] [rbp-158h] BYREF
  __int64 v57; // [rsp+610h] [rbp-148h]
  __int64 v58; // [rsp+618h] [rbp-140h] BYREF
  __int64 v59; // [rsp+620h] [rbp-138h]
  _BYTE v60[16]; // [rsp+628h] [rbp-130h] BYREF
  _BYTE v61[16]; // [rsp+638h] [rbp-120h] BYREF
  _BYTE v62[24]; // [rsp+648h] [rbp-110h] BYREF
  _OWORD v63[4]; // [rsp+660h] [rbp-F8h] BYREF
  _OWORD v64[4]; // [rsp+6A0h] [rbp-B8h] BYREF
  _BYTE v65[64]; // [rsp+6E0h] [rbp-78h] BYREF
  __int64 v66; // [rsp+720h] [rbp-38h]
  __int128 v67; // [rsp+728h] [rbp-30h] BYREF
  __int64 v68; // [rsp+738h] [rbp-20h]
  char v69; // [rsp+746h] [rbp-12h]
  char v70; // [rsp+747h] [rbp-11h]

  v70 = 0;
  v69 = 0;
  uucore::Args::collect_lossy(v21, a1, a2);
  v2 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v21, &off_107798);
  uu_fold::handle_obsolete(&v26, v2, v3);
  v70 = 1;
  v23 = v27;
  v22 = v26;
  v69 = 1;
  v25 = v29;
  v24 = v28;
  uu_fold::uu_app(dest);
  v70 = 0;
  v42 = v23;
  *(_OWORD *)v41 = v22;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v39,
    (int)dest,
    (int)v41,
    v4,
    v5,
    v6,
    v12,
    v13,
    v14,
    v15);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v32, v39);
  if ( (_QWORD)v32 == 0x8000000000000000LL )
  {
    v20 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v32 + 1),
            &off_107840);
  }
  else
  {
    v49 = v38;
    v48 = v37;
    v47 = v36;
    v46 = v35;
    v45 = v34;
    v44 = v33;
    v43 = v32;
    v31 = v38;
    v30[5] = v37;
    v30[4] = v36;
    v30[3] = v35;
    v30[2] = v34;
    v30[1] = v33;
    v30[0] = v32;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v30, aBytes, 5LL, &off_1077B0);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v30, aSpaces, 6LL, &off_1077C8);
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v30, aWidth, 5LL, &off_1077E0);
    v52 = one;
    if ( one )
    {
      <alloc::string::String as core::clone::Clone>::clone(&v53, v52);
      v50 = v53;
      v51 = v54;
    }
    else
    {
      v69 = 0;
      v50 = v24;
      v51 = v25;
    }
    if ( (_QWORD)v50 == 0x8000000000000000LL )
    {
      v55 = 80LL;
      goto LABEL_10;
    }
    v57 = v51;
    v56 = v50;
    v7 = <alloc::string::String as core::ops::deref::Deref>::deref(&v56);
    core::str::<impl str>::parse(v61, v7, v8);
    core::result::Result<T,E>::map_err(v60, v61, &v56);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v58, v60);
    if ( !v58 )
    {
      v55 = v59;
      core::ptr::drop_in_place<alloc::string::String>(&v56);
LABEL_10:
      clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v63, v30, aFile, 4LL, &off_1077F8);
      if ( *(_QWORD *)&v63[0] )
      {
        v64[3] = v63[3];
        v64[2] = v63[2];
        v64[1] = v63[1];
        v64[0] = v63[0];
        core::iter::traits::iterator::Iterator::cloned(v65, v64);
        core::iter::traits::iterator::Iterator::collect(v62, v65);
      }
      else
      {
        v66 = alloc::alloc::exchange_malloc(24LL, 8LL);
        alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v67, asc_163F0, 1LL);
        v16 = (_OWORD *)v66;
        if ( (v66 & 7) != 0 )
          core::panicking::panic_misaligned_pointer_dereference(8LL, v66, &off_107810);
        *(_QWORD *)(v66 + 16) = v68;
        *v16 = v67;
        alloc::slice::<impl [T]>::into_vec(v62, v66, 1LL);
      }
      v9 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v62);
      v20 = uu_fold::fold(v9, v10, flag & 1, v18 & 1, v55);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v62);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v30);
      if ( (v69 & 1) != 0 )
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v24);
      goto LABEL_22;
    }
    v20 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v58,
            v59,
            &off_107828);
    core::ptr::drop_in_place<alloc::string::String>(&v56);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v30);
  }
  if ( (v69 & 1) != 0 )
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v24);
LABEL_22:
  v69 = 0;
  v70 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v21);
  return v20;
}
