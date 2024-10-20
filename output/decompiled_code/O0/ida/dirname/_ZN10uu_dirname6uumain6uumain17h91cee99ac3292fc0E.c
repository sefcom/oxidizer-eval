__int64 __fastcall uu_dirname::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  struct _Unwind_Exception *v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+0h] [rbp-AB8h]
  __int64 v19; // [rsp+0h] [rbp-AB8h]
  int v20; // [rsp+0h] [rbp-AB8h]
  __int64 v21; // [rsp+8h] [rbp-AB0h]
  int v22; // [rsp+8h] [rbp-AB0h]
  __int64 v23; // [rsp+8h] [rbp-AB0h]
  int v24; // [rsp+10h] [rbp-AA8h]
  struct _Unwind_Exception *v25; // [rsp+10h] [rbp-AA8h]
  int v26; // [rsp+10h] [rbp-AA8h]
  char is_none; // [rsp+16h] [rbp-AA2h]
  char v28; // [rsp+17h] [rbp-AA1h]
  int v29; // [rsp+18h] [rbp-AA0h]
  int v30; // [rsp+18h] [rbp-AA0h]
  int v31; // [rsp+18h] [rbp-AA0h]
  int v32; // [rsp+18h] [rbp-AA0h]
  __int64 v33; // [rsp+20h] [rbp-A98h]
  int v34; // [rsp+20h] [rbp-A98h]
  int v35; // [rsp+20h] [rbp-A98h]
  __int64 v36; // [rsp+28h] [rbp-A90h]
  int v37; // [rsp+28h] [rbp-A90h]
  char is_absolute; // [rsp+2Fh] [rbp-A89h]
  __int64 v39; // [rsp+30h] [rbp-A88h]
  int v40; // [rsp+30h] [rbp-A88h]
  int v41[2]; // [rsp+30h] [rbp-A88h]
  int v42; // [rsp+38h] [rbp-A80h]
  int v43; // [rsp+38h] [rbp-A80h]
  int v44[2]; // [rsp+38h] [rbp-A80h]
  int v45; // [rsp+40h] [rbp-A78h]
  struct _Unwind_Exception *v46; // [rsp+40h] [rbp-A78h]
  struct _Unwind_Exception *v47; // [rsp+40h] [rbp-A78h]
  int v48; // [rsp+48h] [rbp-A70h]
  int v49; // [rsp+48h] [rbp-A70h]
  int v50; // [rsp+48h] [rbp-A70h]
  struct _Unwind_Exception *v51; // [rsp+50h] [rbp-A68h]
  int v52; // [rsp+58h] [rbp-A60h]
  char is_empty; // [rsp+96h] [rbp-A22h]
  char flag; // [rsp+AFh] [rbp-A09h]
  __int64 v55; // [rsp+C0h] [rbp-9F8h]
  _OWORD v56[6]; // [rsp+D0h] [rbp-9E8h] BYREF
  __int64 v57; // [rsp+130h] [rbp-988h]
  __int128 v58; // [rsp+140h] [rbp-978h] BYREF
  __int128 v59; // [rsp+150h] [rbp-968h]
  __int128 v60; // [rsp+160h] [rbp-958h]
  __int128 v61; // [rsp+170h] [rbp-948h]
  __int128 v62; // [rsp+180h] [rbp-938h]
  __int128 v63; // [rsp+190h] [rbp-928h]
  __int64 v64; // [rsp+1A0h] [rbp-918h]
  int v65[26]; // [rsp+1A8h] [rbp-910h] BYREF
  int v66[178]; // [rsp+210h] [rbp-8A8h] BYREF
  int dest[178]; // [rsp+4D8h] [rbp-5E0h] BYREF
  __int128 v68; // [rsp+7A0h] [rbp-318h]
  __int128 v69; // [rsp+7B0h] [rbp-308h]
  __int128 v70; // [rsp+7C0h] [rbp-2F8h]
  __int128 v71; // [rsp+7D0h] [rbp-2E8h]
  __int128 v72; // [rsp+7E0h] [rbp-2D8h]
  __int128 v73; // [rsp+7F0h] [rbp-2C8h]
  __int64 v74; // [rsp+800h] [rbp-2B8h]
  char v75; // [rsp+80Fh] [rbp-2A9h] BYREF
  _BYTE v76[24]; // [rsp+810h] [rbp-2A8h] BYREF
  _BYTE v77[64]; // [rsp+828h] [rbp-290h] BYREF
  _BYTE v78[64]; // [rsp+868h] [rbp-250h] BYREF
  _BYTE v79[64]; // [rsp+8A8h] [rbp-210h] BYREF
  _QWORD v80[2]; // [rsp+8E8h] [rbp-1D0h] BYREF
  __int64 v81; // [rsp+8F8h] [rbp-1C0h]
  __int64 v82; // [rsp+900h] [rbp-1B8h] BYREF
  int v83[2]; // [rsp+908h] [rbp-1B0h]
  int v84[2]; // [rsp+910h] [rbp-1A8h]
  _BYTE v85[56]; // [rsp+918h] [rbp-1A0h] BYREF
  _BYTE v86[64]; // [rsp+950h] [rbp-168h] BYREF
  _BYTE v87[48]; // [rsp+990h] [rbp-128h] BYREF
  _BYTE v88[48]; // [rsp+9C0h] [rbp-F8h] BYREF
  _BYTE v89[48]; // [rsp+9F0h] [rbp-C8h] BYREF
  _BYTE v90[48]; // [rsp+A20h] [rbp-98h] BYREF
  __int128 v91; // [rsp+A50h] [rbp-68h] BYREF
  __int128 v92; // [rsp+A60h] [rbp-58h]
  char v93; // [rsp+A77h] [rbp-41h]
  char *v94; // [rsp+A88h] [rbp-30h]
  __int64 (__fastcall *v95)(); // [rsp+A90h] [rbp-28h]
  __int64 v96; // [rsp+A98h] [rbp-20h]
  __int64 v97[3]; // [rsp+AA0h] [rbp-18h] BYREF

  v93 = 1;
  uu_dirname::uu_app(dest);
  clap_builder::builder::command::Command::after_help(
    (int)v66,
    (int)dest,
    (int)aOutputEachName,
    149,
    v2,
    v3,
    v18,
    v21,
    v24,
    v29,
    v33,
    v36,
    v39,
    v42,
    v45,
    v48,
    v51,
    v52);
  v93 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v65, (int)v66, a1, a2, v4, v5, v19, v22, v25, v30);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v58, v65);
  if ( (_QWORD)v58 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v58 + 1),
             &off_F8720);
  v74 = v64;
  v73 = v63;
  v72 = v62;
  v71 = v61;
  v70 = v60;
  v69 = v59;
  v68 = v58;
  v57 = v64;
  v56[5] = v63;
  v56[4] = v62;
  v56[3] = v61;
  v56[2] = v60;
  v56[1] = v59;
  v56[0] = v58;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v56, aZero_0, 4LL, &off_F86B8);
  v75 = uucore::mods::line_ending::LineEnding::from_zero_flag(flag & 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v79, v56, aDir, 3LL, &off_F86D0);
  core::option::Option<T>::unwrap_or_default(v78, v79);
  core::iter::traits::iterator::Iterator::cloned(v77, v78);
  core::iter::traits::iterator::Iterator::collect(v76, v77);
  is_empty = alloc::vec::Vec<T,A>::is_empty(v76);
  if ( (is_empty & 1) != 0 )
  {
    v55 = uucore::mods::error::UUsageError::new(
            1,
            (int)aMissingOperand,
            15,
            v6,
            v7,
            v8,
            v20,
            v23,
            v26,
            v31,
            v34,
            v37,
            v40,
            v43,
            v46,
            v49);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v76);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v56);
  }
  else
  {
    v80[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v76);
    v80[1] = v9;
    while ( 1 )
    {
      v81 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v80);
      if ( !v81 )
        break;
      v82 = v81;
      *(_QWORD *)v41 = std::path::Path::new(v81);
      *(_QWORD *)v44 = v11;
      v12 = std::path::Path::parent();
      v47 = v13;
      v50 = v12;
      *(_QWORD *)v83 = v12;
      *(_QWORD *)v84 = v13;
      if ( v12 )
      {
        v32 = v83[0];
        v35 = v84[0];
        std::path::Path::components(v86);
        <std::path::Components as core::iter::traits::iterator::Iterator>::next(v85, v86);
        is_none = core::option::Option<T>::is_none(v85);
        if ( (is_none & 1) != 0 )
        {
          core::fmt::Arguments::new_const(v87, &off_F86F8);
          std::io::stdio::_print(v87);
        }
        else
        {
          v23 = uucore::mods::display::print_verbatim(
                  v32,
                  v35,
                  v14,
                  v15,
                  v16,
                  v17,
                  v20,
                  v23,
                  v26,
                  v32,
                  v35,
                  v37,
                  v41[0],
                  v44[0],
                  v47,
                  v50);
          v96 = v23;
          if ( v23 )
          {
            v97[0] = v96;
            core::result::unwrap_failed(aCalledResultUn, 43LL, v97, &off_F8838, &off_F8708);
          }
        }
      }
      else
      {
        is_absolute = std::path::Path::is_absolute(*(_QWORD *)v41, *(_QWORD *)v44);
        if ( (is_absolute & 1) != 0
          || (v28 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v82, &off_F86E8), (v28 & 1) != 0) )
        {
          core::fmt::Arguments::new_const(v88, &off_F86E8);
          std::io::stdio::_print(v88);
        }
        else
        {
          core::fmt::Arguments::new_const(v89, &off_F86F8);
          std::io::stdio::_print(v89);
        }
      }
      v94 = &v75;
      v95 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      *(_QWORD *)&v92 = &v75;
      *((_QWORD *)&v92 + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      v91 = v92;
      core::fmt::Arguments::new_v1(v90, &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v91);
      std::io::stdio::_print(v90);
    }
    v55 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v76);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v56);
  }
  return v55;
}
