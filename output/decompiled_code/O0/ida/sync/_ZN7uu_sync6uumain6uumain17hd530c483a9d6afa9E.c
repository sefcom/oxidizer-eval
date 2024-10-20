__int64 __fastcall uu_sync::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-728h]
  int v30; // [rsp+0h] [rbp-728h]
  int v31; // [rsp+8h] [rbp-720h]
  int v32; // [rsp+8h] [rbp-720h]
  struct _Unwind_Exception *v33; // [rsp+10h] [rbp-718h]
  int v34; // [rsp+10h] [rbp-718h]
  int v35; // [rsp+18h] [rbp-710h]
  int v36; // [rsp+18h] [rbp-710h]
  int v37; // [rsp+20h] [rbp-708h]
  char v38; // [rsp+28h] [rbp-700h]
  int v39; // [rsp+30h] [rbp-6F8h]
  int v40; // [rsp+38h] [rbp-6F0h]
  int v41; // [rsp+40h] [rbp-6E8h]
  char v42; // [rsp+46h] [rbp-6E2h]
  char v43; // [rsp+48h] [rbp-6E0h]
  __int64 v44; // [rsp+50h] [rbp-6D8h]
  __int64 v45; // [rsp+58h] [rbp-6D0h]
  int v46; // [rsp+60h] [rbp-6C8h]
  unsigned int v47; // [rsp+64h] [rbp-6C4h]
  int v48; // [rsp+68h] [rbp-6C0h]
  int v49; // [rsp+70h] [rbp-6B8h]
  int v50; // [rsp+78h] [rbp-6B0h]
  __int64 v51; // [rsp+80h] [rbp-6A8h]
  int v52; // [rsp+88h] [rbp-6A0h]
  __int64 v53; // [rsp+90h] [rbp-698h]
  int v54; // [rsp+98h] [rbp-690h]
  char v55; // [rsp+FFh] [rbp-629h]
  char v56; // [rsp+117h] [rbp-611h]
  char flag; // [rsp+14Fh] [rbp-5D9h]
  __int64 v58; // [rsp+170h] [rbp-5B8h]
  _OWORD v59[6]; // [rsp+180h] [rbp-5A8h] BYREF
  __int64 v60; // [rsp+1E0h] [rbp-548h]
  __int128 v61; // [rsp+1E8h] [rbp-540h] BYREF
  __int128 v62; // [rsp+1F8h] [rbp-530h]
  __int128 v63; // [rsp+208h] [rbp-520h]
  __int128 v64; // [rsp+218h] [rbp-510h]
  __int128 v65; // [rsp+228h] [rbp-500h]
  __int128 v66; // [rsp+238h] [rbp-4F0h]
  __int64 v67; // [rsp+248h] [rbp-4E0h]
  int v68[26]; // [rsp+250h] [rbp-4D8h] BYREF
  int dest[178]; // [rsp+2B8h] [rbp-470h] BYREF
  __int128 v70; // [rsp+580h] [rbp-1A8h]
  __int128 v71; // [rsp+590h] [rbp-198h]
  __int128 v72; // [rsp+5A0h] [rbp-188h]
  __int128 v73; // [rsp+5B0h] [rbp-178h]
  __int128 v74; // [rsp+5C0h] [rbp-168h]
  __int128 v75; // [rsp+5D0h] [rbp-158h]
  __int64 v76; // [rsp+5E0h] [rbp-148h]
  __int128 v77; // [rsp+5F0h] [rbp-138h] BYREF
  __int64 v78; // [rsp+600h] [rbp-128h]
  _BYTE v79[24]; // [rsp+608h] [rbp-120h] BYREF
  _BYTE v80[64]; // [rsp+620h] [rbp-108h] BYREF
  _QWORD v81[2]; // [rsp+660h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+670h] [rbp-B8h]
  __int64 v83; // [rsp+678h] [rbp-B0h] BYREF
  int v84; // [rsp+684h] [rbp-A4h]
  int v85; // [rsp+688h] [rbp-A0h]
  int v86; // [rsp+68Ch] [rbp-9Ch] BYREF
  __int64 v87; // [rsp+690h] [rbp-98h]
  __int64 v88; // [rsp+698h] [rbp-90h]
  __int64 v89; // [rsp+6A0h] [rbp-88h]
  __int64 v90; // [rsp+6A8h] [rbp-80h]
  __int128 v91; // [rsp+6B0h] [rbp-78h] BYREF
  __int64 v92; // [rsp+6C0h] [rbp-68h]
  __int64 v93; // [rsp+6D0h] [rbp-58h]
  __int64 v94; // [rsp+6D8h] [rbp-50h]
  __int128 v95; // [rsp+6E0h] [rbp-48h] BYREF
  __int64 v96; // [rsp+6F0h] [rbp-38h]
  __int64 v97; // [rsp+700h] [rbp-28h]
  __int64 v98; // [rsp+708h] [rbp-20h]
  char v99; // [rsp+716h] [rbp-12h]
  char v100; // [rsp+717h] [rbp-11h]

  v99 = 0;
  v100 = 1;
  uu_sync::uu_app(dest);
  v100 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v68, (int)dest, a1, a2, v2, v3, v29, v31, v33, v35);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v61, v68);
  if ( (_QWORD)v61 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v61 + 1),
             &off_100B70);
  v76 = v67;
  v75 = v66;
  v74 = v65;
  v73 = v64;
  v72 = v63;
  v71 = v62;
  v70 = v61;
  v60 = v67;
  v59[5] = v66;
  v59[4] = v65;
  v59[3] = v64;
  v59[2] = v63;
  v59[1] = v62;
  v59[0] = v61;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v80,
    v59,
    aFiles,
    *(&uu_sync::ARG_FILES + 1),
    &off_100AB0);
  core::option::Option<T>::map(v79, v80);
  core::option::Option<T>::unwrap_or_default(&v77, v79);
  v99 = 1;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v59,
           aData,
           *(&uu_sync::options::DATA + 1),
           &off_100AC8);
  if ( (flag & 1) != 0 && (alloc::vec::Vec<T,A>::is_empty(&v77) & 1) != 0 )
  {
    v58 = uucore::mods::error::USimpleError::new(1LL, aDataNeedsAtLea, 34LL);
LABEL_21:
    if ( (v99 & 1) != 0 )
LABEL_28:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v77);
  }
  else
  {
    v81[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v77);
    v81[1] = v4;
    while ( 1 )
    {
      v82 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v81);
      if ( !v82 )
        break;
      v83 = v82;
      v44 = std::path::Path::new(&v83);
      v45 = v18;
      v47 = nix::sys::stat::_::<impl nix::sys::stat::Mode>::empty();
      v19 = nix::fcntl::open(v44, v45, 2048LL, v47);
      v43 = v20;
      v84 = v19;
      v85 = v20;
      if ( v19 == 1LL )
      {
        v86 = v85;
        if ( (core::cmp::PartialEq::ne(&v86, "\r") & 1) != 0
          || (v42 = <nix::errno::consts::Errno as core::cmp::PartialEq>::eq(&v86, "\r"),
              (v42 & 1) != 0 && (std::path::Path::is_dir(v44, v45) & 1) != 0) )
        {
          v25 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                  v86,
                  v83,
                  v21,
                  v22,
                  v23,
                  v24,
                  v30,
                  v32,
                  v34,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41,
                  v43,
                  v44,
                  v45,
                  v46,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54);
          v39 = v26;
          v40 = v25;
          v27 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v25, v26);
          v36 = v28;
          v37 = v27;
          v87 = v27;
          v88 = v28;
          if ( v27 )
          {
            v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                    v87,
                    v88,
                    &off_100B58);
            goto LABEL_21;
          }
        }
      }
    }
    v56 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v59,
            aFileSystem,
            *(&uu_sync::options::FILE_SYSTEM + 1),
            &off_100AE0);
    if ( (v56 & 1) != 0 )
    {
      v99 = 0;
      v92 = v78;
      v91 = v77;
      v5 = uu_sync::syncfs(&v91);
      v15 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v5, v14);
      v89 = v15;
      v90 = v16;
      if ( v15 )
      {
        v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v89,
                v90,
                &off_100B40);
        goto LABEL_21;
      }
    }
    else
    {
      v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              v59,
              aData,
              *(&uu_sync::options::DATA + 1),
              &off_100AF8);
      if ( (v55 & 1) != 0 )
      {
        v99 = 0;
        v96 = v78;
        v95 = v77;
        v7 = uu_sync::fdatasync(&v95);
        v12 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v7, v11);
        v93 = v12;
        v94 = v13;
        if ( v12 )
        {
          v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v93,
                  v94,
                  &off_100B28);
          goto LABEL_21;
        }
      }
      else
      {
        v6 = uu_sync::sync();
        v9 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v6, v8);
        v97 = v9;
        v98 = v10;
        if ( v9 )
        {
          v58 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v97,
                  v98,
                  &off_100B10);
          goto LABEL_21;
        }
      }
    }
    v58 = 0LL;
    if ( (v99 & 1) != 0 )
      goto LABEL_28;
  }
  v99 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v59);
  return v58;
}
