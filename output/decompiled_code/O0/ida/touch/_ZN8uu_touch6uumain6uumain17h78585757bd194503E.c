__int64 __fastcall uu_touch::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  char **v6; // rsi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-828h]
  struct _Unwind_Exception *v24; // [rsp+0h] [rbp-828h]
  struct _Unwind_Exception *v25; // [rsp+0h] [rbp-828h]
  int v26; // [rsp+8h] [rbp-820h]
  int v27; // [rsp+8h] [rbp-820h]
  int v28; // [rsp+8h] [rbp-820h]
  struct _Unwind_Exception *v29; // [rsp+10h] [rbp-818h]
  int v30; // [rsp+18h] [rbp-810h]
  char v31; // [rsp+2Eh] [rbp-7FAh]
  char v32; // [rsp+2Fh] [rbp-7F9h]
  __int64 v33; // [rsp+50h] [rbp-7D8h]
  char flag; // [rsp+6Fh] [rbp-7B9h]
  __int64 v35; // [rsp+A0h] [rbp-788h]
  _OWORD v36[6]; // [rsp+B0h] [rbp-778h] BYREF
  __int64 v37; // [rsp+110h] [rbp-718h]
  __int128 v38; // [rsp+118h] [rbp-710h] BYREF
  __int128 v39; // [rsp+128h] [rbp-700h]
  __int128 v40; // [rsp+138h] [rbp-6F0h]
  __int128 v41; // [rsp+148h] [rbp-6E0h]
  __int128 v42; // [rsp+158h] [rbp-6D0h]
  __int128 v43; // [rsp+168h] [rbp-6C0h]
  __int64 v44; // [rsp+178h] [rbp-6B0h]
  int v45[26]; // [rsp+180h] [rbp-6A8h] BYREF
  int dest[178]; // [rsp+1E8h] [rbp-640h] BYREF
  __int128 v47; // [rsp+4B0h] [rbp-378h]
  __int128 v48; // [rsp+4C0h] [rbp-368h]
  __int128 v49; // [rsp+4D0h] [rbp-358h]
  __int128 v50; // [rsp+4E0h] [rbp-348h]
  __int128 v51; // [rsp+4F0h] [rbp-338h]
  __int128 v52; // [rsp+500h] [rbp-328h]
  __int64 v53; // [rsp+510h] [rbp-318h]
  int v54[6]; // [rsp+518h] [rbp-310h] BYREF
  _BYTE v55[64]; // [rsp+530h] [rbp-2F8h] BYREF
  __int128 v56; // [rsp+570h] [rbp-2B8h] BYREF
  __int128 v57; // [rsp+580h] [rbp-2A8h]
  __int128 v58; // [rsp+590h] [rbp-298h]
  __int128 v59; // [rsp+5A0h] [rbp-288h]
  _BYTE v60[64]; // [rsp+5B0h] [rbp-278h] BYREF
  _BYTE v61[64]; // [rsp+5F0h] [rbp-238h] BYREF
  _OWORD v62[4]; // [rsp+630h] [rbp-1F8h] BYREF
  __int64 one; // [rsp+678h] [rbp-1B0h]
  __int64 v64; // [rsp+680h] [rbp-1A8h]
  __int128 v65; // [rsp+688h] [rbp-1A0h]
  __int64 v66; // [rsp+698h] [rbp-190h]
  __int128 v67; // [rsp+6A0h] [rbp-188h] BYREF
  __int64 v68; // [rsp+6B0h] [rbp-178h]
  __int64 v69; // [rsp+6B8h] [rbp-170h] BYREF
  __int64 v70; // [rsp+6C0h] [rbp-168h]
  __int64 v71; // [rsp+6C8h] [rbp-160h]
  _BYTE v72[24]; // [rsp+6D0h] [rbp-158h] BYREF
  __int128 v73; // [rsp+6E8h] [rbp-140h] BYREF
  __int64 v74; // [rsp+6F8h] [rbp-130h]
  int v75[4]; // [rsp+700h] [rbp-128h] BYREF
  __int64 v76; // [rsp+710h] [rbp-118h]
  __int128 v77; // [rsp+718h] [rbp-110h]
  __int64 v78; // [rsp+728h] [rbp-100h]
  char v79; // [rsp+730h] [rbp-F8h]
  char v80; // [rsp+731h] [rbp-F7h]
  char v81; // [rsp+732h] [rbp-F6h]
  char v82; // [rsp+733h] [rbp-F5h]
  __int128 v83; // [rsp+740h] [rbp-E8h]
  __int64 v84; // [rsp+750h] [rbp-D8h]
  __int128 v85; // [rsp+760h] [rbp-C8h]
  __int64 v86; // [rsp+770h] [rbp-B8h]
  _OWORD v87[3]; // [rsp+780h] [rbp-A8h] BYREF
  _BYTE v88[48]; // [rsp+7B0h] [rbp-78h] BYREF
  _OWORD v89[3]; // [rsp+7E0h] [rbp-48h] BYREF
  char v90; // [rsp+815h] [rbp-13h]
  char v91; // [rsp+816h] [rbp-12h]
  char v92; // [rsp+817h] [rbp-11h]

  v91 = 0;
  v90 = 0;
  v92 = 1;
  uu_touch::uu_app(dest);
  v92 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v45, (int)dest, a1, a2, v2, v3, v23, v26, v29, v30);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v38, v45);
  if ( (_QWORD)v38 != 0x8000000000000000LL )
  {
    v53 = v44;
    v52 = v43;
    v51 = v42;
    v50 = v41;
    v49 = v40;
    v48 = v39;
    v47 = v38;
    v37 = v44;
    v36[5] = v43;
    v36[4] = v42;
    v36[3] = v41;
    v36[2] = v40;
    v36[1] = v39;
    v36[0] = v38;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v61,
      v36,
      aFiles,
      *(&uu_touch::ARG_FILES + 1),
      &off_2C6F80);
    core::option::Option<T>::ok_or_else(v60, v61);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v56, v60);
    if ( !(_QWORD)v56 )
    {
      v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v56 + 1),
              v57,
              &off_2C7040);
LABEL_20:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
      return v35;
    }
    v62[3] = v59;
    v62[2] = v58;
    v62[1] = v57;
    v62[0] = v56;
    core::iter::traits::iterator::Iterator::map(v55, v62);
    core::iter::traits::iterator::Iterator::collect(v54, v55);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v36,
             anon_3c49abdde3b3fdf25b1dcaa21df94cd5_104_llvm_2806096261713610274,
             *(&uu_touch::options::NO_DEREF + 1),
             &off_2C6F98);
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v36,
            anon_3c49abdde3b3fdf25b1dcaa21df94cd5_98_llvm_2806096261713610274,
            *(&uu_touch::options::sources::REFERENCE + 1),
            &off_2C6FB0);
    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v36,
            anon_3c49abdde3b3fdf25b1dcaa21df94cd5_99_llvm_2806096261713610274,
            *(&uu_touch::options::sources::TIMESTAMP + 1),
            &off_2C6FC8);
    if ( one != 0 )
    {
      <std::path::PathBuf as core::convert::From<&T>>::from(&v67, one);
      v91 = 1;
      v65 = v67;
      v66 = v68;
    }
    else if ( v64 != 0 )
    {
      v4 = <alloc::string::String as core::ops::deref::Deref>::deref(v64);
      uu_touch::parse_timestamp(v72, v4, v5);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v69, v72);
      if ( v69 )
      {
        LODWORD(v6) = v71;
        v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v70,
               v71,
               &off_2C6FE0);
        v35 = v8;
LABEL_15:
        v91 = 0;
        core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>((int)v54, (int)v6, v7, v8, v9, v10, v24, v27);
        goto LABEL_20;
      }
      v91 = 1;
      *((_QWORD *)&v65 + 1) = v70;
      LODWORD(v66) = v71;
      *(_QWORD *)&v65 = 0x8000000000000000LL;
    }
    else
    {
      v91 = 1;
      *(_QWORD *)&v65 = 0x8000000000000001LL;
    }
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
            v36,
            "datethur]",
            *(&uu_touch::options::sources::DATE + 1),
            &off_2C6FF8);
    core::option::Option<T>::map(&v73, v33);
    v90 = 1;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v36,
            anon_3c49abdde3b3fdf25b1dcaa21df94cd5_103_llvm_2806096261713610274,
            *(&uu_touch::options::NO_CREATE + 1),
            &off_2C7010);
    v91 = 0;
    v84 = v66;
    v83 = v65;
    v90 = 0;
    v86 = v74;
    v85 = v73;
    v31 = uu_touch::determine_atime_mtime_change(v36);
    v79 = v32 & 1;
    v80 = flag & 1;
    v78 = v84;
    v77 = v83;
    v76 = v86;
    *(_OWORD *)v75 = v85;
    v82 = v31;
    v81 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v54);
    uu_touch::touch(v88, v11, v12, v75);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v87, v88);
    if ( *(_QWORD *)&v87[0] == 0x8000000000000004LL )
    {
      v35 = 0LL;
      core::ptr::drop_in_place<uu_touch::Options>((int)v75, (int)v88, 4, 0, v13, v14, v24, v27);
      v90 = 0;
      v91 = 0;
      core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>((int)v54, (int)v88, v15, v16, v17, v18, v25, v28);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v36);
      return v35;
    }
    v89[2] = v87[2];
    v89[1] = v87[1];
    v89[0] = v87[0];
    v6 = &off_2C7028;
    v35 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v89,
            &off_2C7028);
    core::ptr::drop_in_place<uu_touch::Options>((int)v75, (int)&off_2C7028, v20, v35, v21, v22, v24, v20);
    v90 = 0;
    goto LABEL_15;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v38 + 1),
           &off_2C7058);
}
