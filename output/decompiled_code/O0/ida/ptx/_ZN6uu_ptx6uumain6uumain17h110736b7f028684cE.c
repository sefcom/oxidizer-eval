__int64 __fastcall uu_ptx::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+0h] [rbp-AE8h]
  struct _Unwind_Exception *v19; // [rsp+0h] [rbp-AE8h]
  int v20; // [rsp+8h] [rbp-AE0h]
  int v21; // [rsp+8h] [rbp-AE0h]
  struct _Unwind_Exception *v22; // [rsp+10h] [rbp-AD8h]
  int v23; // [rsp+18h] [rbp-AD0h]
  _OWORD *v24; // [rsp+70h] [rbp-A78h]
  __int64 v25; // [rsp+A0h] [rbp-A48h]
  int v26; // [rsp+A8h] [rbp-A40h]
  _OWORD v27[6]; // [rsp+B0h] [rbp-A38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-9D8h]
  __int128 v29; // [rsp+118h] [rbp-9D0h] BYREF
  __int128 v30; // [rsp+128h] [rbp-9C0h]
  __int128 v31; // [rsp+138h] [rbp-9B0h]
  __int128 v32; // [rsp+148h] [rbp-9A0h]
  __int128 v33; // [rsp+158h] [rbp-990h]
  __int128 v34; // [rsp+168h] [rbp-980h]
  __int64 v35; // [rsp+178h] [rbp-970h]
  int v36[26]; // [rsp+180h] [rbp-968h] BYREF
  int dest[178]; // [rsp+1E8h] [rbp-900h] BYREF
  __int128 v38; // [rsp+4B0h] [rbp-638h]
  __int128 v39; // [rsp+4C0h] [rbp-628h]
  __int128 v40; // [rsp+4D0h] [rbp-618h]
  __int128 v41; // [rsp+4E0h] [rbp-608h]
  __int128 v42; // [rsp+4F0h] [rbp-5F8h]
  __int128 v43; // [rsp+500h] [rbp-5E8h]
  __int64 v44; // [rsp+510h] [rbp-5D8h]
  _BYTE v45[24]; // [rsp+518h] [rbp-5D0h] BYREF
  int v46[2]; // [rsp+530h] [rbp-5B8h] BYREF
  _BYTE v47[64]; // [rsp+570h] [rbp-578h] BYREF
  int v48[16]; // [rsp+5B0h] [rbp-538h] BYREF
  __int64 v49; // [rsp+5F0h] [rbp-4F8h]
  __int128 v50; // [rsp+5F8h] [rbp-4F0h] BYREF
  __int64 v51; // [rsp+608h] [rbp-4E0h]
  _OWORD v52[5]; // [rsp+610h] [rbp-4D8h] BYREF
  __int128 v53; // [rsp+660h] [rbp-488h]
  __int128 v54; // [rsp+670h] [rbp-478h] BYREF
  __int128 v55; // [rsp+680h] [rbp-468h]
  __int128 v56; // [rsp+690h] [rbp-458h]
  __int128 v57; // [rsp+6A0h] [rbp-448h]
  __int128 v58; // [rsp+6B0h] [rbp-438h]
  __int128 v59; // [rsp+6C0h] [rbp-428h]
  _BYTE v60[96]; // [rsp+6D0h] [rbp-418h] BYREF
  __int128 v61; // [rsp+730h] [rbp-3B8h]
  __int128 v62; // [rsp+740h] [rbp-3A8h]
  __int128 v63; // [rsp+750h] [rbp-398h]
  __int128 v64; // [rsp+760h] [rbp-388h]
  __int128 v65; // [rsp+770h] [rbp-378h]
  __int128 v66; // [rsp+780h] [rbp-368h]
  int v67[4]; // [rsp+790h] [rbp-358h] BYREF
  __int128 v68; // [rsp+7A0h] [rbp-348h]
  __int128 v69; // [rsp+7B0h] [rbp-338h]
  __int128 v70; // [rsp+7C0h] [rbp-328h]
  __int128 v71; // [rsp+7D0h] [rbp-318h]
  __int128 v72; // [rsp+7E0h] [rbp-308h]
  __int128 v73; // [rsp+7F0h] [rbp-2F8h]
  __int128 v74; // [rsp+800h] [rbp-2E8h]
  __int128 v75; // [rsp+810h] [rbp-2D8h] BYREF
  __int128 v76; // [rsp+820h] [rbp-2C8h]
  __int128 v77; // [rsp+830h] [rbp-2B8h]
  __int128 v78; // [rsp+840h] [rbp-2A8h]
  __int128 v79; // [rsp+850h] [rbp-298h]
  __int128 v80; // [rsp+860h] [rbp-288h]
  __int128 v81; // [rsp+870h] [rbp-278h]
  __int128 v82; // [rsp+880h] [rbp-268h]
  _BYTE v83[128]; // [rsp+890h] [rbp-258h] BYREF
  __int128 v84; // [rsp+910h] [rbp-1D8h]
  __int128 v85; // [rsp+920h] [rbp-1C8h]
  __int128 v86; // [rsp+930h] [rbp-1B8h]
  __int128 v87; // [rsp+940h] [rbp-1A8h]
  __int128 v88; // [rsp+950h] [rbp-198h]
  __int128 v89; // [rsp+960h] [rbp-188h]
  __int128 v90; // [rsp+970h] [rbp-178h]
  __int128 v91; // [rsp+980h] [rbp-168h]
  _OWORD v92[3]; // [rsp+990h] [rbp-158h] BYREF
  __int128 v93; // [rsp+9C0h] [rbp-128h] BYREF
  __int128 v94; // [rsp+9D0h] [rbp-118h]
  __int128 v95; // [rsp+9E0h] [rbp-108h]
  _BYTE v96[48]; // [rsp+9F0h] [rbp-F8h] BYREF
  _BYTE v97[48]; // [rsp+A20h] [rbp-C8h] BYREF
  __int128 v98; // [rsp+A50h] [rbp-98h]
  __int128 v99; // [rsp+A60h] [rbp-88h]
  __int128 v100; // [rsp+A70h] [rbp-78h]
  _BYTE v101[24]; // [rsp+A88h] [rbp-60h] BYREF
  _QWORD v102[3]; // [rsp+AA0h] [rbp-48h] BYREF
  _QWORD v103[3]; // [rsp+AB8h] [rbp-30h] BYREF
  char v104; // [rsp+AD7h] [rbp-11h]

  v104 = 1;
  uu_ptx::uu_app(dest);
  v104 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v36, (int)dest, a1, a2, v2, v3, v18, v20, v22, v23);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v29, v36);
  if ( (_QWORD)v29 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v29 + 1),
             &off_2A7EF0);
  v44 = v35;
  v43 = v34;
  v42 = v33;
  v41 = v32;
  v40 = v31;
  v39 = v30;
  v38 = v29;
  v28 = v35;
  v27[5] = v34;
  v27[4] = v33;
  v27[3] = v32;
  v27[2] = v31;
  v27[1] = v30;
  v27[0] = v29;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v46,
    v27,
    anon_8ffa798e1188aa055e40a44719e13e52_31_llvm_11133899800467015185,
    *(&uu_ptx::options::FILE + 1),
    &off_2A7E60);
  if ( *(_QWORD *)v46 )
  {
    <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::clone::Clone>::clone((int)v48, (int)v46);
    core::iter::traits::iterator::Iterator::cloned(v47, v48);
    core::iter::traits::iterator::Iterator::collect(v45, v47);
  }
  else
  {
    v49 = alloc::alloc::exchange_malloc(24LL, 8LL);
    <str as alloc::string::ToString>::to_string(&v50, asc_53058, 1LL);
    v24 = (_OWORD *)v49;
    if ( (v49 & 7) != 0 )
      core::panicking::panic_misaligned_pointer_dereference(8LL, v49, &off_2A7E78);
    *(_QWORD *)(v49 + 16) = v51;
    *v24 = v50;
    alloc::slice::<impl [T]>::into_vec(v45, v49, 1LL);
  }
  uu_ptx::get_config(v60, v27);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v54, v60);
  if ( (_QWORD)v54 == 0x8000000000000000LL )
  {
    v25 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v54 + 1),
            v55,
            &off_2A7ED8);
LABEL_28:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v45);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
    return v25;
  }
  v66 = v59;
  v65 = v58;
  v64 = v57;
  v63 = v56;
  v62 = v55;
  v61 = v54;
  v53 = v59;
  v52[4] = v58;
  v52[3] = v57;
  v52[2] = v56;
  v52[1] = v55;
  v52[0] = v54;
  uu_ptx::WordFilter::new(v83, v27, v52);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v75, v83);
  if ( (_QWORD)v75 == 0x8000000000000000LL )
  {
    v25 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v75 + 1),
            v76,
            &off_2A7EC0);
LABEL_27:
    core::ptr::drop_in_place<uu_ptx::Config>(v52);
    goto LABEL_28;
  }
  v91 = v82;
  v90 = v81;
  v89 = v80;
  v88 = v79;
  v87 = v78;
  v86 = v77;
  v85 = v76;
  v84 = v75;
  v74 = v82;
  v73 = v81;
  v72 = v80;
  v71 = v79;
  v70 = v78;
  v69 = v77;
  v68 = v76;
  *(_OWORD *)v67 = v75;
  v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v45);
  uu_ptx::read_input(v97, v4, v5, v52);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    v96,
    v97);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v93, v96);
  if ( !(_QWORD)v93 )
  {
    v6 = v94;
    v25 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v93 + 1),
            v94,
            &off_2A7EA8);
    core::ptr::drop_in_place<uu_ptx::WordFilter>((int)v67, v6, v15, v25, v16, v17, v19, v21);
    goto LABEL_27;
  }
  v100 = v95;
  v99 = v94;
  v98 = v93;
  v92[2] = v95;
  v92[1] = v94;
  v92[0] = v93;
  uu_ptx::create_word_set(v101, v52, v67, v92);
  if ( (BYTE8(v53) & 1) != 0 || alloc::vec::Vec<T,A>::len(v45) != 2 )
  {
    <str as alloc::string::ToString>::to_string(v102, asc_53058, 1LL);
  }
  else
  {
    alloc::vec::Vec<T,A>::pop(v103, v45);
    if ( v103[0] == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_2A7E90);
    v102[0] = v103[0];
    v102[1] = v103[1];
    v102[2] = v103[2];
  }
  v7 = <alloc::string::String as core::ops::deref::Deref>::deref(v102);
  v25 = uu_ptx::write_traditional_output(v52, v92, v101, v7, v8);
  v26 = v9;
  core::ptr::drop_in_place<alloc::string::String>(v102);
  core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>(v101);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>(v92);
  core::ptr::drop_in_place<uu_ptx::WordFilter>((int)v67, (int)v92, v10, v11, v12, v13, v19, v26);
  core::ptr::drop_in_place<uu_ptx::Config>(v52);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v45);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
  return v25;
}
