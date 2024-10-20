__int64 __fastcall uu_dd::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // esi
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  __int64 v27; // [rsp+0h] [rbp-CB8h]
  struct _Unwind_Exception *v28; // [rsp+0h] [rbp-CB8h]
  int v29; // [rsp+8h] [rbp-CB0h]
  int v30; // [rsp+8h] [rbp-CB0h]
  struct _Unwind_Exception *v31; // [rsp+10h] [rbp-CA8h]
  int v32; // [rsp+18h] [rbp-CA0h]
  char v33; // [rsp+5Fh] [rbp-C59h]
  __int64 v34; // [rsp+70h] [rbp-C48h]
  char is_fifo; // [rsp+E7h] [rbp-BD1h]
  __int64 v36; // [rsp+160h] [rbp-B58h]
  _OWORD v37[6]; // [rsp+170h] [rbp-B48h] BYREF
  __int64 v38; // [rsp+1D0h] [rbp-AE8h]
  __int128 v39; // [rsp+1D8h] [rbp-AE0h] BYREF
  __int128 v40; // [rsp+1E8h] [rbp-AD0h]
  __int128 v41; // [rsp+1F8h] [rbp-AC0h]
  __int128 v42; // [rsp+208h] [rbp-AB0h]
  __int128 v43; // [rsp+218h] [rbp-AA0h]
  __int128 v44; // [rsp+228h] [rbp-A90h]
  __int64 v45; // [rsp+238h] [rbp-A80h]
  int v46[26]; // [rsp+240h] [rbp-A78h] BYREF
  int v47[178]; // [rsp+2A8h] [rbp-A10h] BYREF
  __int128 v48; // [rsp+570h] [rbp-748h]
  __int128 v49; // [rsp+580h] [rbp-738h]
  __int128 v50; // [rsp+590h] [rbp-728h]
  __int128 v51; // [rsp+5A0h] [rbp-718h]
  __int128 v52; // [rsp+5B0h] [rbp-708h]
  __int128 v53; // [rsp+5C0h] [rbp-6F8h]
  __int64 v54; // [rsp+5D0h] [rbp-6E8h]
  int v55[4]; // [rsp+5D8h] [rbp-6E0h] BYREF
  _QWORD v56[3]; // [rsp+5E8h] [rbp-6D0h] BYREF
  _QWORD v57[16]; // [rsp+600h] [rbp-6B8h] BYREF
  _QWORD src[21]; // [rsp+680h] [rbp-638h] BYREF
  _BYTE v59[168]; // [rsp+728h] [rbp-590h] BYREF
  _BYTE v60[216]; // [rsp+7D0h] [rbp-4E8h] BYREF
  _BYTE v61[24]; // [rsp+8A8h] [rbp-410h] BYREF
  _BYTE v62[64]; // [rsp+8C0h] [rbp-3F8h] BYREF
  _BYTE v63[64]; // [rsp+900h] [rbp-3B8h] BYREF
  _BYTE v64[64]; // [rsp+940h] [rbp-378h] BYREF
  _OWORD v65[2]; // [rsp+980h] [rbp-338h] BYREF
  _BYTE dest[168]; // [rsp+9A0h] [rbp-318h] BYREF
  __int128 v67; // [rsp+A48h] [rbp-270h] BYREF
  _QWORD *v68; // [rsp+A58h] [rbp-260h] BYREF
  __int64 v69; // [rsp+A60h] [rbp-258h] BYREF
  __int128 v70; // [rsp+A68h] [rbp-250h]
  _BYTE v71[24]; // [rsp+A78h] [rbp-240h] BYREF
  __int128 v72; // [rsp+A90h] [rbp-228h]
  _QWORD *v73; // [rsp+AA0h] [rbp-218h] BYREF
  __int64 v74; // [rsp+AA8h] [rbp-210h] BYREF
  __int128 v75; // [rsp+AB0h] [rbp-208h]
  _BYTE v76[24]; // [rsp+AC0h] [rbp-1F8h] BYREF
  __int128 v77; // [rsp+AD8h] [rbp-1E0h]
  __int64 v78; // [rsp+AE8h] [rbp-1D0h] BYREF
  __int128 v79; // [rsp+AF0h] [rbp-1C8h]
  _BYTE v80[24]; // [rsp+B00h] [rbp-1B8h] BYREF
  __int128 v81; // [rsp+B18h] [rbp-1A0h]
  __int128 v82; // [rsp+B28h] [rbp-190h]
  __int64 v83; // [rsp+B38h] [rbp-180h]
  _QWORD *v84; // [rsp+B40h] [rbp-178h] BYREF
  __int128 v85; // [rsp+B48h] [rbp-170h] BYREF
  __int64 v86; // [rsp+B58h] [rbp-160h]
  _BYTE v87[24]; // [rsp+B60h] [rbp-158h] BYREF
  __int128 v88; // [rsp+B78h] [rbp-140h]
  __int64 v89; // [rsp+B88h] [rbp-130h]
  _QWORD *v90; // [rsp+B90h] [rbp-128h] BYREF
  __int128 v91; // [rsp+B98h] [rbp-120h] BYREF
  __int64 v92; // [rsp+BA8h] [rbp-110h]
  _BYTE v93[24]; // [rsp+BB0h] [rbp-108h] BYREF
  __int128 v94; // [rsp+BC8h] [rbp-F0h]
  __int64 v95; // [rsp+BD8h] [rbp-E0h]
  __int128 v96; // [rsp+BE0h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+BF0h] [rbp-C8h]
  _BYTE v98[24]; // [rsp+BF8h] [rbp-C0h] BYREF
  __int128 v99; // [rsp+C10h] [rbp-A8h]
  __int64 v100; // [rsp+C20h] [rbp-98h]
  __int128 v101; // [rsp+C28h] [rbp-90h] BYREF
  __int64 v102; // [rsp+C38h] [rbp-80h]
  _BYTE v103[24]; // [rsp+C40h] [rbp-78h] BYREF
  __int128 v104; // [rsp+C58h] [rbp-60h]
  __int64 v105; // [rsp+C68h] [rbp-50h]
  __int128 v106; // [rsp+C70h] [rbp-48h] BYREF
  __int128 v107; // [rsp+C80h] [rbp-38h] BYREF
  __int64 v108; // [rsp+C90h] [rbp-28h]
  char v109; // [rsp+CA5h] [rbp-13h]
  char v110; // [rsp+CA6h] [rbp-12h]
  char v111; // [rsp+CA7h] [rbp-11h]

  v110 = 0;
  v109 = 0;
  v111 = 1;
  uu_dd::uu_app(v47);
  v111 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v46, (int)v47, a1, a2, v2, v3, v27, v29, v31, v32);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v39, v46);
  if ( (_QWORD)v39 != 0x8000000000000000LL )
  {
    v54 = v45;
    v53 = v44;
    v52 = v43;
    v51 = v42;
    v50 = v41;
    v49 = v40;
    v48 = v39;
    v38 = v45;
    v37[5] = v44;
    v37[4] = v43;
    v37[3] = v42;
    v37[2] = v41;
    v37[1] = v40;
    v37[0] = v39;
    uu_dd::parseargs::Parser::new(v60);
    v110 = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v64, v37, aOperands, 8LL, &off_1409E8);
    core::option::Option<T>::unwrap_or_default(v63, v64);
    core::iter::traits::iterator::Iterator::map(v62, v63);
    core::iter::traits::iterator::Iterator::collect(v61, v62);
    v4 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v61, &off_140A00);
    v110 = 0;
    uu_dd::parseargs::Parser::parse(v59, v60, v4, v5);
    v110 = 0;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v59);
    if ( src[0] == 3LL )
    {
      v65[1] = *(_OWORD *)&src[3];
      v65[0] = *(_OWORD *)&src[1];
      v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v65,
              &off_140AC0);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v61);
LABEL_46:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
      return v36;
    }
    memcpy(dest, src, sizeof(dest));
    memcpy(v55, dest, 168LL);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v61);
    if ( v56[0] == 0x8000000000000000LL )
    {
      uu_dd::Input::new_stdin(v80, v55);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v78, v80);
      if ( !v78 )
      {
        v81 = v79;
        v109 = 1;
        v67 = v79;
        goto LABEL_13;
      }
      v7 = DWORD2(v79);
      v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             v79,
             *((_QWORD *)&v79 + 1),
             &off_140A18);
      v36 = v9;
LABEL_15:
      v109 = 0;
      core::ptr::drop_in_place<uu_dd::Settings>((int)v55, v7, v8, v9, v10, v11, v28, v30);
      goto LABEL_46;
    }
    v68 = v56;
    v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v56);
    is_fifo = uu_dd::is_fifo(v6, v12);
    if ( (is_fifo & 1) != 0 )
    {
      v14 = std::path::Path::new(&v68);
      uu_dd::Input::new_fifo(v71, v14, v16, v55);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v69, v71);
      if ( v69 )
      {
        v7 = DWORD2(v70);
        v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v70,
               *((_QWORD *)&v70 + 1),
               &off_140AA8);
        v36 = v9;
        goto LABEL_15;
      }
      v72 = v70;
      v109 = 1;
      v67 = v70;
    }
    else
    {
      v73 = v56;
      v13 = std::path::Path::new(&v73);
      uu_dd::Input::new_file(v76, v13, v15, v55);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v74, v76);
      if ( v74 )
      {
        v7 = DWORD2(v75);
        v9 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v75,
               *((_QWORD *)&v75 + 1),
               &off_140A30);
        v36 = v9;
        goto LABEL_15;
      }
      v77 = v75;
      v109 = 1;
      v67 = v75;
    }
LABEL_13:
    if ( v57[0] != 0x8000000000000000LL )
    {
      v84 = v57;
      v17 = <alloc::string::String as core::ops::deref::Deref>::deref(v57);
      v33 = uu_dd::is_fifo(v17, v18);
      if ( (v33 & 1) != 0 )
      {
        v20 = std::path::Path::new(&v84);
        uu_dd::Output::new_fifo(v87, v20, v22, v55);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v85, v87);
        if ( (_BYTE)v85 != 4 )
        {
          v88 = v85;
          v89 = v86;
          v82 = v85;
          v83 = v86;
          goto LABEL_31;
        }
        v7 = v86;
        v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *((_QWORD *)&v85 + 1),
                v86,
                &off_140A90);
      }
      else
      {
        v90 = v57;
        v19 = std::path::Path::new(&v90);
        uu_dd::Output::new_file(v93, v19, v21, v55);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v91, v93);
        if ( (_BYTE)v91 != 4 )
        {
          v94 = v91;
          v95 = v92;
          v82 = v91;
          v83 = v92;
          goto LABEL_31;
        }
        v7 = v92;
        v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                *((_QWORD *)&v91 + 1),
                v92,
                &off_140A78);
      }
      goto LABEL_32;
    }
    if ( (uu_dd::is_stdout_redirected_to_seekable_file() & 1) != 0 )
    {
      uu_dd::Output::new_file_from_stdout(v98, v55);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v96, v98);
      if ( (_BYTE)v96 != 4 )
      {
        v99 = v96;
        v100 = v97;
        v82 = v96;
        v83 = v97;
        goto LABEL_31;
      }
      v7 = v97;
      v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v96 + 1),
              v97,
              &off_140A60);
    }
    else
    {
      uu_dd::Output::new_stdout(v103, v55);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v103);
      if ( (_BYTE)v101 != 4 )
      {
        v104 = v101;
        v105 = v102;
        v82 = v101;
        v83 = v102;
LABEL_31:
        v109 = 0;
        v106 = v67;
        v108 = v83;
        v107 = v82;
        v34 = uu_dd::dd_copy(&v106, &v107);
        v36 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v34);
        v109 = 0;
        core::ptr::drop_in_place<uu_dd::Settings>((int)v55, (int)&v107, v23, v36, v24, v25, v28, v23);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v37);
        return v36;
      }
      v7 = v102;
      v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v101 + 1),
              v102,
              &off_140A48);
    }
LABEL_32:
    core::ptr::drop_in_place<uu_dd::Input>(&v67);
    goto LABEL_15;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v39 + 1),
           &off_140AD8);
}
