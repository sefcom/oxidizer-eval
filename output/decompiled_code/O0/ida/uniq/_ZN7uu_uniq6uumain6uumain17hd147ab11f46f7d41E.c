__int64 __fastcall uu_uniq::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-8E8h]
  int v9; // [rsp+8h] [rbp-8E0h]
  struct _Unwind_Exception *v10; // [rsp+10h] [rbp-8D8h]
  int v11; // [rsp+18h] [rbp-8D0h]
  char v12; // [rsp+47h] [rbp-8A1h]
  int v13[2]; // [rsp+58h] [rbp-890h]
  int v14[2]; // [rsp+60h] [rbp-888h]
  char v15; // [rsp+6Fh] [rbp-879h]
  int v16[2]; // [rsp+70h] [rbp-878h]
  int v17[2]; // [rsp+78h] [rbp-870h]
  int v18[2]; // [rsp+80h] [rbp-868h]
  int v19[2]; // [rsp+88h] [rbp-860h]
  char v20; // [rsp+B2h] [rbp-836h]
  char delimiter; // [rsp+B3h] [rbp-835h]
  char v22; // [rsp+B6h] [rbp-832h]
  int v23[2]; // [rsp+C8h] [rbp-820h]
  int v24[2]; // [rsp+D0h] [rbp-818h]
  char flag; // [rsp+DFh] [rbp-809h]
  int v26[2]; // [rsp+F0h] [rbp-7F8h]
  int v27[2]; // [rsp+F8h] [rbp-7F0h]
  int v28[2]; // [rsp+100h] [rbp-7E8h]
  int v29[2]; // [rsp+108h] [rbp-7E0h]
  int v30[2]; // [rsp+110h] [rbp-7D8h]
  int v31[2]; // [rsp+118h] [rbp-7D0h]
  int v32[2]; // [rsp+130h] [rbp-7B8h]
  int v33[2]; // [rsp+138h] [rbp-7B0h]
  int v34[2]; // [rsp+140h] [rbp-7A8h]
  int v35[2]; // [rsp+148h] [rbp-7A0h]
  __int64 v36; // [rsp+150h] [rbp-798h]
  int v37[4]; // [rsp+160h] [rbp-788h]
  char v38[8]; // [rsp+170h] [rbp-778h]
  int v39[2]; // [rsp+178h] [rbp-770h] BYREF
  int v40[2]; // [rsp+180h] [rbp-768h]
  int v41[4]; // [rsp+188h] [rbp-760h]
  char v42[8]; // [rsp+198h] [rbp-750h]
  int v43[2]; // [rsp+1A0h] [rbp-748h]
  int v44[2]; // [rsp+1A8h] [rbp-740h]
  char v45[16]; // [rsp+1B0h] [rbp-738h] BYREF
  int v46[4]; // [rsp+1C0h] [rbp-728h]
  __int64 v47[2]; // [rsp+1D0h] [rbp-718h]
  int v48[4]; // [rsp+1E0h] [rbp-708h]
  int v49[4]; // [rsp+1F0h] [rbp-6F8h]
  int v50[4]; // [rsp+200h] [rbp-6E8h]
  int v51[2]; // [rsp+210h] [rbp-6D8h]
  __int128 v52; // [rsp+220h] [rbp-6C8h] BYREF
  __int128 v53; // [rsp+230h] [rbp-6B8h]
  __int128 v54; // [rsp+240h] [rbp-6A8h]
  __int128 v55; // [rsp+250h] [rbp-698h]
  __int128 v56; // [rsp+260h] [rbp-688h]
  __int128 v57; // [rsp+270h] [rbp-678h]
  __int64 v58; // [rsp+280h] [rbp-668h]
  _BYTE v59[104]; // [rsp+288h] [rbp-660h] BYREF
  int v60[26]; // [rsp+2F0h] [rbp-5F8h] BYREF
  int v61[178]; // [rsp+358h] [rbp-590h] BYREF
  int v62[4]; // [rsp+620h] [rbp-2C8h] BYREF
  __int64 v63; // [rsp+630h] [rbp-2B8h]
  char v64[16]; // [rsp+640h] [rbp-2A8h]
  int v65[4]; // [rsp+650h] [rbp-298h]
  __int64 v66[2]; // [rsp+660h] [rbp-288h]
  int v67[4]; // [rsp+670h] [rbp-278h]
  int v68[4]; // [rsp+680h] [rbp-268h]
  int v69[4]; // [rsp+690h] [rbp-258h]
  int v70[2]; // [rsp+6A0h] [rbp-248h]
  _BYTE v71[64]; // [rsp+6B0h] [rbp-238h] BYREF
  int v72[2]; // [rsp+6F0h] [rbp-1F8h] BYREF
  int v73[2]; // [rsp+6F8h] [rbp-1F0h]
  int v74[2]; // [rsp+700h] [rbp-1E8h]
  int v75[2]; // [rsp+708h] [rbp-1E0h]
  int v76[10]; // [rsp+710h] [rbp-1D8h] BYREF
  _BYTE v77[64]; // [rsp+738h] [rbp-1B0h] BYREF
  __int64 v78; // [rsp+778h] [rbp-170h] BYREF
  int v79[2]; // [rsp+780h] [rbp-168h]
  int v80[2]; // [rsp+788h] [rbp-160h]
  _BYTE v81[24]; // [rsp+790h] [rbp-158h] BYREF
  __int64 v82; // [rsp+7A8h] [rbp-140h] BYREF
  int v83[2]; // [rsp+7B0h] [rbp-138h]
  int v84[2]; // [rsp+7B8h] [rbp-130h]
  _BYTE v85[24]; // [rsp+7C0h] [rbp-128h] BYREF
  int v86[2]; // [rsp+7D8h] [rbp-110h] BYREF
  __int64 v87; // [rsp+7E0h] [rbp-108h]
  __int64 v88; // [rsp+7E8h] [rbp-100h]
  __int64 v89; // [rsp+7F0h] [rbp-F8h]
  __int64 v90; // [rsp+7F8h] [rbp-F0h]
  __int64 v91; // [rsp+800h] [rbp-E8h]
  char v92; // [rsp+808h] [rbp-E0h]
  char v93; // [rsp+809h] [rbp-DFh]
  char v94; // [rsp+80Ah] [rbp-DEh]
  char v95; // [rsp+80Bh] [rbp-DDh]
  char v96; // [rsp+80Ch] [rbp-DCh]
  char v97; // [rsp+80Dh] [rbp-DBh]
  char v98; // [rsp+80Eh] [rbp-DAh]
  char v99; // [rsp+816h] [rbp-D2h]
  char v100; // [rsp+817h] [rbp-D1h]
  __int64 v101; // [rsp+818h] [rbp-D0h] BYREF
  int v102[2]; // [rsp+820h] [rbp-C8h]
  int v103[2]; // [rsp+828h] [rbp-C0h]
  _BYTE v104[24]; // [rsp+830h] [rbp-B8h] BYREF
  int v105[2]; // [rsp+848h] [rbp-A0h] BYREF
  int v106[2]; // [rsp+850h] [rbp-98h]
  __int64 v107; // [rsp+858h] [rbp-90h] BYREF
  __int64 v108; // [rsp+860h] [rbp-88h]
  __int64 v109; // [rsp+868h] [rbp-80h]
  _BYTE v110[24]; // [rsp+870h] [rbp-78h] BYREF
  __int64 v111; // [rsp+888h] [rbp-60h] BYREF
  int v112[2]; // [rsp+890h] [rbp-58h]
  int v113[2]; // [rsp+898h] [rbp-50h]
  _BYTE v114[30]; // [rsp+8A0h] [rbp-48h] BYREF
  char v115; // [rsp+8BEh] [rbp-2Ah]
  char v116; // [rsp+8BFh] [rbp-29h]

  v116 = 0;
  v115 = 0;
  uu_uniq::handle_obsolete((__int64 *)v39, a1, a2);
  v116 = 1;
  *(_QWORD *)v38 = *(_QWORD *)v42;
  *(_OWORD *)v37 = *(_OWORD *)v41;
  *(_QWORD *)v32 = *(_QWORD *)v39;
  *(_QWORD *)v33 = *(_QWORD *)v40;
  *(_QWORD *)v34 = *(_QWORD *)v43;
  *(_QWORD *)v35 = *(_QWORD *)v44;
  uu_uniq::uu_app(v61);
  v116 = 0;
  v63 = *(_QWORD *)v38;
  *(_OWORD *)v62 = *(_OWORD *)v37;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v60,
    (int)v61,
    (int)v62,
    v2,
    v3,
    v4,
    v8,
    v9,
    v10,
    v11);
  core::result::Result<T,E>::map_err(v59, v60);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v52, v59);
  if ( (_QWORD)v52 == 0x8000000000000000LL )
  {
    v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v52 + 1),
            v53,
            &off_11A230);
LABEL_32:
    v116 = 0;
    return v36;
  }
  *(_QWORD *)v70 = v58;
  *(_OWORD *)v69 = v57;
  *(_OWORD *)v68 = v56;
  *(_OWORD *)v67 = v55;
  *(_OWORD *)v66 = v54;
  *(_OWORD *)v65 = v53;
  *(_OWORD *)v64 = v52;
  *(_QWORD *)v51 = v58;
  *(_OWORD *)v50 = v57;
  *(_OWORD *)v49 = v56;
  *(_OWORD *)v48 = v55;
  *(_OWORD *)v47 = v54;
  *(_OWORD *)v46 = v53;
  *(_OWORD *)v45 = v52;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
    v71,
    v45,
    aFiles,
    *(&uu_uniq::ARG_FILES + 1),
    &off_11A128);
  core::option::Option<T>::map(v77, v71);
  core::option::Option<T>::map(v76, v77);
  core::option::Option<T>::unwrap_or_default((int)v72, (int)v76);
  *(_QWORD *)v28 = *(_QWORD *)v72;
  *(_QWORD *)v29 = *(_QWORD *)v73;
  *(_QWORD *)v30 = *(_QWORD *)v74;
  *(_QWORD *)v31 = *(_QWORD *)v75;
  uu_uniq::opt_parsed(
    v81,
    anon_260c126feb8ab3c2b694f5739f14195b_27_llvm_4342503802335753491,
    *(&uu_uniq::options::SKIP_FIELDS + 1),
    v45);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v78, v81);
  if ( v78 )
  {
    v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v79,
            *(_QWORD *)v80,
            &off_11A218);
LABEL_31:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
    goto LABEL_32;
  }
  *(_QWORD *)v26 = *(_QWORD *)v79;
  *(_QWORD *)v27 = *(_QWORD *)v80;
  uu_uniq::opt_parsed(
    v85,
    anon_260c126feb8ab3c2b694f5739f14195b_28_llvm_4342503802335753491,
    *(&uu_uniq::options::SKIP_CHARS + 1),
    v45);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v82, v85);
  if ( v82 )
  {
    v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v83,
            *(_QWORD *)v84,
            &off_11A200);
    goto LABEL_31;
  }
  *(_QWORD *)v23 = *(_QWORD *)v83;
  *(_QWORD *)v24 = *(_QWORD *)v84;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v45,
           &anon_260c126feb8ab3c2b694f5739f14195b_26_llvm_4342503802335753491,
           *(&uu_uniq::options::REPEATED + 1),
           &off_11A140);
  if ( (flag & 1) != 0 )
    v99 = 1;
  else
    v99 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
            v45,
            anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491,
            *(&uu_uniq::options::ALL_REPEATED + 1)) & 1;
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v45,
          anon_260c126feb8ab3c2b694f5739f14195b_29_llvm_4342503802335753491,
          *(&uu_uniq::options::UNIQUE + 1),
          &off_11A158);
  if ( (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
          v45,
          anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491,
          *(&uu_uniq::options::ALL_REPEATED + 1)) & 1) != 0 )
    v100 = 1;
  else
    v100 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
             v45,
             anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491,
             *(&uu_uniq::options::GROUP + 1)) & 1;
  delimiter = uu_uniq::get_delimiter(v45);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v45,
          anon_260c126feb8ab3c2b694f5739f14195b_24_llvm_4342503802335753491,
          *(&uu_uniq::options::COUNT + 1),
          &off_11A170);
  *(_QWORD *)v18 = core::option::Option<T>::or(*(_QWORD *)v26, *(_QWORD *)v27, *(_QWORD *)v32, *(_QWORD *)v33);
  *(_QWORD *)v19 = v5;
  *(_QWORD *)v16 = core::option::Option<T>::or(*(_QWORD *)v23, *(_QWORD *)v24, *(_QWORD *)v34, *(_QWORD *)v35);
  *(_QWORD *)v17 = v6;
  uu_uniq::opt_parsed(
    v104,
    anon_260c126feb8ab3c2b694f5739f14195b_23_llvm_4342503802335753491,
    *(&uu_uniq::options::CHECK_CHARS + 1),
    v45);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v101, v104);
  if ( v101 )
  {
    v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *(_QWORD *)v102,
            *(_QWORD *)v103,
            &off_11A1E8);
    goto LABEL_31;
  }
  *(_QWORD *)v13 = *(_QWORD *)v102;
  *(_QWORD *)v14 = *(_QWORD *)v103;
  v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v45,
          anon_260c126feb8ab3c2b694f5739f14195b_25_llvm_4342503802335753491,
          *(&uu_uniq::options::IGNORE_CASE + 1),
          &off_11A188);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v45,
          anon_260c126feb8ab3c2b694f5739f14195b_30_llvm_4342503802335753491,
          *(&uu_uniq::options::ZERO_TERMINATED + 1),
          &off_11A1A0);
  v92 = v99 & 1;
  v93 = v22 & 1;
  v94 = v100 & 1;
  v98 = delimiter;
  v95 = v20 & 1;
  *(_QWORD *)v86 = *(_QWORD *)v18;
  v87 = *(_QWORD *)v19;
  v88 = *(_QWORD *)v16;
  v89 = *(_QWORD *)v17;
  v90 = *(_QWORD *)v13;
  v91 = *(_QWORD *)v14;
  v96 = v15 & 1;
  v97 = v12 & 1;
  if ( (v20 & 1) != 0 && (v94 & 1) != 0 )
  {
    v36 = uucore::mods::error::USimpleError::new(1LL, aPrintingAllDup, 102LL);
    goto LABEL_31;
  }
  uu_uniq::open_input_file(v110, *(_QWORD *)v28, *(_QWORD *)v29);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v107, v110);
  if ( v107 )
  {
    v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v108,
            v109,
            &off_11A1D0);
    v115 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
    v116 = 0;
  }
  else
  {
    v115 = 1;
    *(_QWORD *)v105 = v108;
    *(_QWORD *)v106 = v109;
    uu_uniq::open_output_file(v114, *(_QWORD *)v30, *(_QWORD *)v31);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v111, v114);
    if ( v111 )
    {
      v36 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *(_QWORD *)v112,
              *(_QWORD *)v113,
              &off_11A1B8);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::BufRead>>(v105);
    }
    else
    {
      v115 = 0;
      v36 = uu_uniq::Uniq::print_uniq(v86, *(__int64 *)v105, *(__int64 *)v106, *(__int64 *)v112, *(__int64 *)v113);
    }
    v115 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v45);
    v116 = 0;
  }
  return v36;
}
