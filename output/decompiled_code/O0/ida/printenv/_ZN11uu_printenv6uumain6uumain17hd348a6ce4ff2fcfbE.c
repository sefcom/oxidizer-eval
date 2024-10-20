__int64 __fastcall uu_printenv::uumain::uumain(__int64 a1, __int64 a2)
{
  struct _Unwind_Exception *v2; // rax
  int v3; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+0h] [rbp-718h]
  char v10; // [rsp+7h] [rbp-711h]
  int v11; // [rsp+8h] [rbp-710h]
  int v12; // [rsp+10h] [rbp-708h]
  int v13; // [rsp+18h] [rbp-700h]
  struct _Unwind_Exception *v14; // [rsp+20h] [rbp-6F8h]
  int v15; // [rsp+28h] [rbp-6F0h]
  __int64 v16; // [rsp+40h] [rbp-6D8h]
  int v17[26]; // [rsp+50h] [rbp-6C8h] BYREF
  int dest[178]; // [rsp+B8h] [rbp-660h] BYREF
  __int128 v19; // [rsp+380h] [rbp-398h] BYREF
  __int64 v20; // [rsp+390h] [rbp-388h]
  _BYTE v21[24]; // [rsp+398h] [rbp-380h] BYREF
  _BYTE v22[64]; // [rsp+3B0h] [rbp-368h] BYREF
  _QWORD v23[2]; // [rsp+3F0h] [rbp-328h] BYREF
  _QWORD v24[4]; // [rsp+400h] [rbp-318h] BYREF
  _BYTE v25[32]; // [rsp+420h] [rbp-2F8h] BYREF
  _QWORD v26[4]; // [rsp+440h] [rbp-2D8h] BYREF
  _QWORD v27[6]; // [rsp+460h] [rbp-2B8h] BYREF
  _QWORD v28[3]; // [rsp+490h] [rbp-288h] BYREF
  _QWORD v29[3]; // [rsp+4A8h] [rbp-270h] BYREF
  _BYTE v30[48]; // [rsp+4C0h] [rbp-258h] BYREF
  _OWORD v31[3]; // [rsp+4F0h] [rbp-228h] BYREF
  __int128 v32; // [rsp+528h] [rbp-1F0h]
  __int128 v33; // [rsp+538h] [rbp-1E0h]
  __int128 v34; // [rsp+548h] [rbp-1D0h]
  char v35; // [rsp+55Fh] [rbp-1B9h]
  _QWORD v36[4]; // [rsp+560h] [rbp-1B8h] BYREF
  __int128 v37; // [rsp+580h] [rbp-198h] BYREF
  __int64 v38; // [rsp+590h] [rbp-188h]
  _QWORD v39[4]; // [rsp+598h] [rbp-180h] BYREF
  __int128 v40; // [rsp+5B8h] [rbp-160h] BYREF
  __int64 v41; // [rsp+5C8h] [rbp-150h]
  __int128 v42; // [rsp+5D0h] [rbp-148h] BYREF
  __int64 v43; // [rsp+5E0h] [rbp-138h]
  int v44[2]; // [rsp+5F0h] [rbp-128h] BYREF
  _QWORD v45[3]; // [rsp+5F8h] [rbp-120h] BYREF
  int v46[4]; // [rsp+610h] [rbp-108h] BYREF
  __int64 v47; // [rsp+620h] [rbp-F8h]
  _QWORD v48[3]; // [rsp+628h] [rbp-F0h] BYREF
  _BYTE v49[48]; // [rsp+640h] [rbp-D8h] BYREF
  _OWORD v50[2]; // [rsp+670h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+690h] [rbp-88h]
  __int128 v52; // [rsp+6A0h] [rbp-78h]
  char v53; // [rsp+6B4h] [rbp-64h]
  char v54; // [rsp+6B5h] [rbp-63h]
  char v55; // [rsp+6B6h] [rbp-62h]
  char v56; // [rsp+6B7h] [rbp-61h]
  _QWORD *v57; // [rsp+6C8h] [rbp-50h]
  __int64 (__fastcall *v58)(); // [rsp+6D0h] [rbp-48h]
  _QWORD *v59; // [rsp+6D8h] [rbp-40h]
  __int64 (__fastcall *v60)(); // [rsp+6E0h] [rbp-38h]
  _QWORD *v61; // [rsp+6E8h] [rbp-30h]
  __int64 (__fastcall *v62)(); // [rsp+6F0h] [rbp-28h]
  _QWORD *v63; // [rsp+6F8h] [rbp-20h]
  __int64 (__fastcall *v64)(); // [rsp+700h] [rbp-18h]
  _QWORD *v65; // [rsp+708h] [rbp-10h]
  __int64 (__fastcall *v66)(); // [rsp+710h] [rbp-8h]

  v55 = 0;
  v54 = 0;
  v53 = 0;
  v56 = 1;
  uu_printenv::uu_app(dest);
  v56 = 0;
  clap_builder::builder::command::Command::get_matches_from(v17, dest, a1, a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v22,
    v17,
    aVariables,
    *(&uu_printenv::ARG_VARIABLES + 1),
    &off_F5F20);
  core::option::Option<T>::map(v21, v22);
  core::option::Option<T>::unwrap_or_default(&v19, v21);
  v55 = 1;
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v17,
          &unk_1671C,
          *(&uu_printenv::OPT_NULL + 1),
          &off_F5F38) & 1) != 0 )
    v23[0] = "";
  else
    v23[0] = "\n"
             "Try ' --help' for more information.\n"
             "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/printenv/src/printenv.rs";
  v23[1] = 1LL;
  if ( (alloc::vec::Vec<T,A>::is_empty(&v19) & 1) != 0 )
  {
    std::env::vars(v25);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(v24, v25);
    v26[0] = v24[0];
    v26[1] = v24[1];
    v26[2] = v24[2];
    v26[3] = v24[3];
    while ( 1 )
    {
      <std::env::Vars as core::iter::traits::iterator::Iterator>::next(v27, v26);
      if ( v27[0] == 0x8000000000000000LL )
        break;
      v28[0] = v27[0];
      v28[1] = v27[1];
      v28[2] = v27[2];
      v29[0] = v27[3];
      v29[1] = v27[4];
      v29[2] = v27[5];
      v59 = v28;
      v60 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = v28;
      *((_QWORD *)&v32 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v57 = v29;
      v58 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v33 = v29;
      *((_QWORD *)&v33 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v63 = v23;
      v64 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v34 = v23;
      *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
      v31[0] = v32;
      v31[1] = v33;
      v31[2] = v34;
      core::fmt::Arguments::new_v1(v30, &unk_F5F68, v31);
      std::io::stdio::_print(v30);
      core::ptr::drop_in_place<alloc::string::String>(v29);
      core::ptr::drop_in_place<alloc::string::String>(v28);
    }
    core::ptr::drop_in_place<std::env::Vars>(v26);
    v16 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
    v55 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  }
  else
  {
    v35 = 0;
    v55 = 0;
    v38 = v20;
    v37 = v19;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v36, &v37);
    v39[0] = v36[0];
    v39[1] = v36[1];
    v39[2] = v36[2];
    v39[3] = v36[3];
    while ( 1 )
    {
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v39);
      if ( (_QWORD)v40 == 0x8000000000000000LL )
        break;
      v54 = 1;
      v43 = v41;
      v42 = v40;
      v2 = (struct _Unwind_Exception *)<alloc::string::String as core::ops::deref::Deref>::deref(&v42);
      v13 = v3;
      v14 = v2;
      v10 = core::str::<impl str>::contains(v2);
      if ( (v10 & 1) != 0 )
      {
        v35 = 1;
        core::ptr::drop_in_place<alloc::string::String>(&v42);
        v54 = 0;
      }
      else
      {
        v54 = 0;
        v47 = v43;
        *(_OWORD *)v46 = v42;
        std::env::var((int)v44, (int)v46, v5, v6, v7, v8, v9, v11, v12, v13, v14, v15);
        v53 = 1;
        if ( *(_QWORD *)v44 )
        {
          v35 = 1;
        }
        else
        {
          v53 = 0;
          v48[0] = v45[0];
          v48[1] = v45[1];
          v48[2] = v45[2];
          v61 = v48;
          v62 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v51 = v48;
          *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          v65 = v23;
          v66 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v52 = v23;
          *((_QWORD *)&v52 + 1) = <&T as core::fmt::Display>::fmt;
          v50[0] = v51;
          v50[1] = v52;
          core::fmt::Arguments::new_v1(v49, &unk_14348, v50);
          std::io::stdio::_print(v49);
          core::ptr::drop_in_place<alloc::string::String>(v48);
        }
        if ( *(_QWORD *)v44 )
        {
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v44);
        }
        else if ( (v53 & 1) != 0 )
        {
          core::ptr::drop_in_place<alloc::string::String>(v45);
        }
        v53 = 0;
        v54 = 0;
      }
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v39);
    if ( (v35 & 1) != 0 )
      v16 = <T as core::convert::Into<U>>::into(1LL, &off_F5F50);
    else
      v16 = 0LL;
    v55 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v17);
  }
  return v16;
}
