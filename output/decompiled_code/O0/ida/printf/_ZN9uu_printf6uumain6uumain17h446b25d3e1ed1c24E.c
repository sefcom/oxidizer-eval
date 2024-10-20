__int64 __fastcall uu_printf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  char **v11; // rsi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _Unwind_Exception *v27; // [rsp+0h] [rbp-878h]
  int v28; // [rsp+8h] [rbp-870h]
  __int64 v29; // [rsp+28h] [rbp-850h]
  __int64 v30; // [rsp+50h] [rbp-828h]
  char is_some; // [rsp+8Fh] [rbp-7E9h]
  __int64 v32; // [rsp+F8h] [rbp-780h]
  __int64 one; // [rsp+100h] [rbp-778h]
  __int64 v34; // [rsp+118h] [rbp-760h]
  int v35[26]; // [rsp+128h] [rbp-750h] BYREF
  int v36[178]; // [rsp+190h] [rbp-6E8h] BYREF
  __int64 v37; // [rsp+458h] [rbp-420h] BYREF
  __int64 v38; // [rsp+460h] [rbp-418h]
  _BYTE v39[16]; // [rsp+468h] [rbp-410h] BYREF
  int v40[6]; // [rsp+478h] [rbp-400h] BYREF
  _OWORD v41[4]; // [rsp+490h] [rbp-3E8h] BYREF
  _OWORD v42[4]; // [rsp+4D0h] [rbp-3A8h] BYREF
  _BYTE v43[71]; // [rsp+518h] [rbp-360h] BYREF
  char v44; // [rsp+55Fh] [rbp-319h]
  _BYTE v45[32]; // [rsp+560h] [rbp-318h] BYREF
  _QWORD v46[2]; // [rsp+580h] [rbp-2F8h] BYREF
  _BYTE src[40]; // [rsp+590h] [rbp-2E8h] BYREF
  _BYTE dest[40]; // [rsp+5B8h] [rbp-2C0h] BYREF
  _OWORD v49[2]; // [rsp+5E0h] [rbp-298h] BYREF
  _BYTE v50[32]; // [rsp+600h] [rbp-278h] BYREF
  _OWORD v51[2]; // [rsp+620h] [rbp-258h] BYREF
  __int64 v52; // [rsp+640h] [rbp-238h]
  _BYTE v53[40]; // [rsp+648h] [rbp-230h] BYREF
  _OWORD v54[4]; // [rsp+670h] [rbp-208h] BYREF
  __int64 v55; // [rsp+6B0h] [rbp-1C8h]
  _OWORD v56[2]; // [rsp+6C0h] [rbp-1B8h] BYREF
  char v57; // [rsp+6EFh] [rbp-189h]
  __int64 v58; // [rsp+6F0h] [rbp-188h] BYREF
  _QWORD v59[2]; // [rsp+6F8h] [rbp-180h] BYREF
  _OWORD v60[2]; // [rsp+708h] [rbp-170h] BYREF
  __int64 v61; // [rsp+728h] [rbp-150h]
  _OWORD v62[2]; // [rsp+730h] [rbp-148h] BYREF
  __int64 v63; // [rsp+750h] [rbp-128h]
  _OWORD v64[2]; // [rsp+760h] [rbp-118h] BYREF
  _BYTE v65[32]; // [rsp+780h] [rbp-F8h] BYREF
  _OWORD v66[2]; // [rsp+7A0h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+7C0h] [rbp-B8h]
  _BYTE v68[40]; // [rsp+7C8h] [rbp-B0h] BYREF
  _OWORD v69[4]; // [rsp+7F0h] [rbp-88h] BYREF
  __int64 v70; // [rsp+830h] [rbp-48h]
  _OWORD v71[2]; // [rsp+840h] [rbp-38h] BYREF
  char v72; // [rsp+866h] [rbp-12h]
  char v73; // [rsp+867h] [rbp-11h]

  v73 = 1;
  uu_printf::uu_app(v36);
  v73 = 0;
  clap_builder::builder::command::Command::get_matches_from(v35, v36, a1, a2);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v35, aFormatstring, 12LL, &off_117010);
  core::option::Option<T>::ok_or_else(v39, one);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v37, v39);
  if ( v37 )
  {
    v34 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v37,
            v38,
            &off_117070);
LABEL_36:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  }
  else
  {
    v32 = v38;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v41, v35, aArgument_0, 8LL, &off_117028);
    if ( *(_QWORD *)&v41[0] )
    {
      v42[3] = v41[3];
      v42[2] = v41[2];
      v42[1] = v41[1];
      v42[0] = v41[0];
      core::iter::traits::iterator::Iterator::map(v43, v42);
      core::iter::traits::iterator::Iterator::collect(v40, v43);
    }
    else
    {
      alloc::vec::Vec<T>::new(v40);
    }
    v44 = 0;
    v2 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v40);
    v4 = core::slice::<impl [T]>::iter(v2, v3);
    core::iter::traits::iterator::Iterator::peekable(v45, v4, v5);
    v6 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(v32);
    v8 = uucore::features::format::parse_spec_and_escape(v6, v7);
    v46[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(v8, v9);
    v46[1] = v10;
    while ( 1 )
    {
      v11 = (char **)v46;
      <core::iter::sources::from_fn::FromFn<F> as core::iter::traits::iterator::Iterator>::next(src, v46);
      LODWORD(v15) = 0;
      if ( src[0] == 9 )
        break;
      memcpy(dest, src, sizeof(dest));
      if ( dest[0] != 8 && dest[0] != 7 )
        v44 = 1;
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v53, dest);
      if ( v53[0] == 8 )
      {
        v54[1] = *(_OWORD *)&v53[24];
        v54[0] = *(_OWORD *)&v53[8];
        v11 = &off_117058;
        v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v54,
                &off_117058);
        v34 = v15;
        goto LABEL_14;
      }
      v55 = *(_QWORD *)&v53[32];
      v54[3] = *(_OWORD *)&v53[16];
      v54[2] = *(_OWORD *)v53;
      v52 = *(_QWORD *)&v53[32];
      v51[1] = *(_OWORD *)&v53[16];
      v51[0] = *(_OWORD *)v53;
      v29 = std::io::stdio::stdout();
      uucore::features::format::FormatItem<C>::write(v50, v51, v29, v45);
      v11 = (char **)v50;
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v49, v50);
      LODWORD(v15) = 0;
      if ( LODWORD(v49[0]) != 14 )
      {
        v56[1] = v49[1];
        v56[0] = v49[0];
        v11 = &off_117058;
        v26 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v56,
                &off_117058);
        v28 = v12;
        LODWORD(v15) = v26;
        v34 = v26;
        goto LABEL_14;
      }
      v57 = BYTE4(v49[0]) & 1;
      if ( (BYTE4(v49[0]) & 1) != 0 )
      {
        v34 = 0LL;
        goto LABEL_14;
      }
    }
    if ( (v44 & 1) == 0 )
    {
      v34 = 0LL;
LABEL_14:
      core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(
        (int)v40,
        (int)v11,
        v12,
        v15,
        v13,
        v14,
        v27,
        v28);
      goto LABEL_36;
    }
    while ( 1 )
    {
      v58 = core::iter::adapters::peekable::Peekable<I>::peek(v45);
      is_some = core::option::Option<T>::is_some(&v58);
      if ( (is_some & 1) == 0 )
        break;
      v20 = <alloc::string::String as core::convert::AsRef<[u8]>>::as_ref(v32);
      v23 = uucore::features::format::parse_spec_and_escape(v20, v22);
      v59[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(v23, v24);
      v59[1] = v25;
      while ( 1 )
      {
        v11 = (char **)v59;
        <core::iter::sources::from_fn::FromFn<F> as core::iter::traits::iterator::Iterator>::next(v60, v59);
        if ( LOBYTE(v60[0]) == 9 )
          break;
        v63 = v61;
        v62[1] = v60[1];
        v62[0] = v60[0];
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v68, v62);
        if ( v68[0] == 8 )
        {
          v69[1] = *(_OWORD *)&v68[24];
          v69[0] = *(_OWORD *)&v68[8];
          v11 = &off_117040;
          v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v69,
                  &off_117040);
          v34 = v15;
          goto LABEL_14;
        }
        v70 = *(_QWORD *)&v68[32];
        v69[3] = *(_OWORD *)&v68[16];
        v69[2] = *(_OWORD *)v68;
        v67 = *(_QWORD *)&v68[32];
        v66[1] = *(_OWORD *)&v68[16];
        v66[0] = *(_OWORD *)v68;
        v30 = std::io::stdio::stdout();
        uucore::features::format::FormatItem<C>::write(v65, v66, v30, v45);
        v11 = (char **)v65;
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v64, v65);
        LODWORD(v15) = 0;
        if ( LODWORD(v64[0]) != 14 )
        {
          v71[1] = v64[1];
          v71[0] = v64[0];
          v11 = &off_117040;
          v15 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v71,
                  &off_117040);
          v34 = v15;
          goto LABEL_14;
        }
        v72 = BYTE4(v64[0]) & 1;
        if ( (BYTE4(v64[0]) & 1) != 0 )
        {
          v34 = 0LL;
          goto LABEL_14;
        }
      }
    }
    v34 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(
      (int)v40,
      (int)v11,
      v16,
      v17,
      v18,
      v19,
      v27,
      v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  }
  return v34;
}
