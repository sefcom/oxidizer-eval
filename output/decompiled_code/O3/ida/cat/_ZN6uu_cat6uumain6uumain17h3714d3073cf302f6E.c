__int64 __fastcall uu_cat::uumain::uumain(__int64 a1, __int64 a2)
{
  char flag; // al
  char v4; // cl
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  char v8; // r13
  char v9; // bp
  char v10; // bl
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int16 v16; // [rsp+Eh] [rbp-42Ah]
  __int128 v17; // [rsp+10h] [rbp-428h]
  __int128 v18; // [rsp+10h] [rbp-428h]
  __int128 v19; // [rsp+10h] [rbp-428h]
  __int64 v20; // [rsp+20h] [rbp-418h]
  __int64 v21; // [rsp+20h] [rbp-418h]
  __int64 v22; // [rsp+20h] [rbp-418h]
  __int128 v23; // [rsp+30h] [rbp-408h]
  __int128 v24; // [rsp+30h] [rbp-408h]
  __int128 v25; // [rsp+30h] [rbp-408h]
  __int64 v26; // [rsp+40h] [rbp-3F8h]
  __int64 v27; // [rsp+40h] [rbp-3F8h]
  __int64 v28; // [rsp+40h] [rbp-3F8h]
  __int128 v29; // [rsp+50h] [rbp-3E8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-3D8h]
  __int128 v31; // [rsp+70h] [rbp-3C8h]
  __int128 v32; // [rsp+80h] [rbp-3B8h]
  const char *v33; // [rsp+90h] [rbp-3A8h]
  _OWORD v34[3]; // [rsp+98h] [rbp-3A0h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-370h]
  __int128 v36; // [rsp+D0h] [rbp-368h]
  __int64 v37; // [rsp+E0h] [rbp-358h]
  __int128 v38; // [rsp+F0h] [rbp-348h] BYREF
  __int64 v39; // [rsp+100h] [rbp-338h]
  __int128 v40; // [rsp+108h] [rbp-330h]
  __int64 v41; // [rsp+118h] [rbp-320h]
  __int128 v42; // [rsp+120h] [rbp-318h]
  __int64 v43; // [rsp+130h] [rbp-308h]
  __int128 v44; // [rsp+138h] [rbp-300h] BYREF
  __int64 v45; // [rsp+148h] [rbp-2F0h]
  char v46; // [rsp+150h] [rbp-2E8h] BYREF
  _OWORD v47[7]; // [rsp+3C0h] [rbp-78h] BYREF

  uu_cat::uu_app(&v38);
  clap_builder::builder::command::Command::try_get_matches_from(&v29, &v38, a1, a2);
  if ( (_QWORD)v29 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v29 + 1));
  v35 = v32;
  v34[2] = v31;
  v34[1] = v30;
  v34[0] = v29;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v34,
           anon_1ec98090b1de29d3df94daf5d400a23b_20_llvm_15213056334004324336,
           *(&uu_cat::options::NUMBER_NONBLANK + 1));
  v4 = 1;
  if ( !flag )
    v4 = 2
       * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v34,
           anon_1ec98090b1de29d3df94daf5d400a23b_23_llvm_15213056334004324336,
           *(&uu_cat::options::NUMBER + 1));
  HIBYTE(v16) = v4;
  v5 = (__int64)*(&uu_cat::options::SHOW_ALL + 1);
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336,
    v5);
  v37 = v39;
  v36 = v38;
  v6 = uu_cat::options::SHOW_NONPRINTING_ENDS[1];
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_21_llvm_15213056334004324336,
    v6);
  v26 = v39;
  v23 = v38;
  v7 = uu_cat::options::SHOW_NONPRINTING_TABS[1];
  v33 = anon_1ec98090b1de29d3df94daf5d400a23b_25_llvm_15213056334004324336;
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_25_llvm_15213056334004324336,
    v7);
  v20 = v39;
  v17 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v29,
    anon_1ec98090b1de29d3df94daf5d400a23b_27_llvm_15213056334004324336,
    *(&uu_cat::options::SHOW_NONPRINTING + 1));
  v45 = v30;
  v44 = v29;
  v38 = v36;
  v39 = v37;
  v40 = v23;
  v41 = v26;
  v42 = v17;
  v43 = v20;
  *(_QWORD *)&v29 = &v38;
  *((_QWORD *)&v29 + 1) = &v46;
  LOBYTE(v16) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v34);
  core::ptr::drop_in_place<[alloc::string::String; 4]>(&v38);
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_22_llvm_15213056334004324336,
    *(&uu_cat::options::SHOW_ENDS + 1));
  v27 = v39;
  v24 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336,
    v5);
  v21 = v39;
  v18 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v29,
    anon_1ec98090b1de29d3df94daf5d400a23b_21_llvm_15213056334004324336,
    v6);
  v43 = v30;
  v42 = v29;
  v38 = v24;
  v39 = v27;
  v40 = v18;
  v41 = v21;
  *(_QWORD *)&v29 = &v38;
  *((_QWORD *)&v29 + 1) = &v44;
  v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v34);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&v38);
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_19_llvm_15213056334004324336,
    v5);
  v28 = v39;
  v25 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(
    &v38,
    anon_1ec98090b1de29d3df94daf5d400a23b_26_llvm_15213056334004324336,
    *(&uu_cat::options::SHOW_TABS + 1));
  v22 = v39;
  v19 = v38;
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v29, v33, v7);
  v43 = v30;
  v42 = v29;
  v38 = v25;
  v39 = v28;
  v40 = v19;
  v41 = v22;
  *(_QWORD *)&v29 = &v38;
  *((_QWORD *)&v29 + 1) = &v44;
  v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v34);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&v38);
  v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v34,
          anon_1ec98090b1de29d3df94daf5d400a23b_24_llvm_15213056334004324336,
          *(&uu_cat::options::SQUEEZE_BLANK + 1));
  v11 = (__int64)*(&uu_cat::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v38,
    v34,
    anon_1ec98090b1de29d3df94daf5d400a23b_18_llvm_15213056334004324336,
    v11);
  clap_builder::parser::error::MatchesError::unwrap(
    &v29,
    anon_1ec98090b1de29d3df94daf5d400a23b_18_llvm_15213056334004324336,
    v11,
    &v38);
  if ( (_QWORD)v29 )
  {
    v47[3] = v32;
    v47[2] = v31;
    v47[1] = v30;
    v47[0] = v29;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, v47);
  }
  else
  {
    v12 = alloc::alloc::Global::alloc_impl();
    if ( !v12 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v13 = v12;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v38, asc_14811, 1LL);
    v14 = v38;
    *(_QWORD *)(v13 + 16) = v39;
    *(_OWORD *)v13 = v14;
    alloc::slice::hack::into_vec(&v38, v13, 1LL);
  }
  LOBYTE(v29) = v10;
  BYTE1(v29) = v9;
  BYTE2(v29) = v8;
  *(_WORD *)((char *)&v29 + 3) = v16;
  v15 = uu_cat::cat_files(*((_QWORD *)&v38 + 1), v39, &v29);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  return v15;
}
