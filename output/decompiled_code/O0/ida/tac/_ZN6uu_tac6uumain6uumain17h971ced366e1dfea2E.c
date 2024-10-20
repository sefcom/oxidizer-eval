__int64 __fastcall uu_tac::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-618h]
  int v11; // [rsp+8h] [rbp-610h]
  struct _Unwind_Exception *v12; // [rsp+10h] [rbp-608h]
  int v13; // [rsp+18h] [rbp-600h]
  __int64 v14; // [rsp+28h] [rbp-5F0h]
  __int64 v15; // [rsp+30h] [rbp-5E8h]
  __int64 v16; // [rsp+38h] [rbp-5E0h]
  char is_empty; // [rsp+47h] [rbp-5D1h]
  __int64 one; // [rsp+68h] [rbp-5B0h]
  char v19; // [rsp+77h] [rbp-5A1h]
  char flag; // [rsp+8Fh] [rbp-589h]
  __int64 v21; // [rsp+A0h] [rbp-578h]
  _OWORD v22[6]; // [rsp+B0h] [rbp-568h] BYREF
  __int64 v23; // [rsp+110h] [rbp-508h]
  __int128 v24; // [rsp+118h] [rbp-500h] BYREF
  __int128 v25; // [rsp+128h] [rbp-4F0h]
  __int128 v26; // [rsp+138h] [rbp-4E0h]
  __int128 v27; // [rsp+148h] [rbp-4D0h]
  __int128 v28; // [rsp+158h] [rbp-4C0h]
  __int128 v29; // [rsp+168h] [rbp-4B0h]
  __int64 v30; // [rsp+178h] [rbp-4A0h]
  int v31[26]; // [rsp+180h] [rbp-498h] BYREF
  int dest[178]; // [rsp+1E8h] [rbp-430h] BYREF
  __int128 v33; // [rsp+4B0h] [rbp-168h]
  __int128 v34; // [rsp+4C0h] [rbp-158h]
  __int128 v35; // [rsp+4D0h] [rbp-148h]
  __int128 v36; // [rsp+4E0h] [rbp-138h]
  __int128 v37; // [rsp+4F0h] [rbp-128h]
  __int128 v38; // [rsp+500h] [rbp-118h]
  __int64 v39; // [rsp+510h] [rbp-108h]
  const char *v40; // [rsp+518h] [rbp-100h]
  __int64 v41; // [rsp+520h] [rbp-F8h]
  _BYTE v42[24]; // [rsp+528h] [rbp-F0h] BYREF
  _OWORD v43[4]; // [rsp+540h] [rbp-D8h] BYREF
  _OWORD v44[4]; // [rsp+580h] [rbp-98h] BYREF
  _BYTE v45[71]; // [rsp+5C0h] [rbp-58h] BYREF
  char v46; // [rsp+607h] [rbp-11h]

  v46 = 1;
  uu_tac::uu_app(dest);
  v46 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v31, (int)dest, a1, a2, v2, v3, v10, v11, v12, v13);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v24, v31);
  if ( (_QWORD)v24 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v24 + 1),
             &off_28C260);
  v39 = v30;
  v38 = v29;
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v33 = v24;
  v23 = v30;
  v22[5] = v29;
  v22[4] = v28;
  v22[3] = v27;
  v22[2] = v26;
  v22[1] = v25;
  v22[0] = v24;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v22,
           aBefore,
           *(&uu_tac::options::BEFORE + 1),
           &off_28C1E8);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v22,
          aRegex,
          *(&uu_tac::options::REGEX + 1),
          &off_28C200);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v22,
          aSeparator,
          *(&uu_tac::options::SEPARATOR + 1),
          &off_28C218);
  v4 = core::option::Option<T>::map(one);
  v15 = core::option::Option<T>::unwrap_or(
          v4,
          v5,
          "\n"
          "Try ' --help' for more information.\n"
          "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/tac/src/tac.rs",
          1LL);
  v16 = v6;
  is_empty = core::str::<impl str>::is_empty();
  if ( (is_empty & 1) != 0 )
  {
    v40 = "";
    v41 = 1LL;
  }
  else
  {
    v40 = (const char *)v15;
    v41 = v16;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v43,
    v22,
    aFile,
    *(&uu_tac::options::FILE + 1),
    &off_28C230);
  if ( *(_QWORD *)&v43[0] )
  {
    v44[3] = v43[3];
    v44[2] = v43[2];
    v44[1] = v43[1];
    v44[0] = v43[0];
    core::iter::traits::iterator::Iterator::map(v45, v44);
    core::iter::traits::iterator::Iterator::collect(v42, v45);
  }
  else
  {
    v14 = alloc::alloc::exchange_malloc(16LL, 8LL);
    if ( (v14 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v14, &off_28C248);
    *(_QWORD *)v14 = asc_4FFDB;
    *(_QWORD *)(v14 + 8) = 1LL;
    alloc::slice::<impl [T]>::into_vec(v42, v14, 1LL);
  }
  v7 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v42);
  v21 = uu_tac::tac(v7, v8, flag & 1, v19 & 1, v40, v41);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v42);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v22);
  return v21;
}
