// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_cat::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 v4; // kr00_16
  __int64 v5; // r15
  __int128 v6; // kr10_16
  __int64 v7; // r12
  __int128 v8; // kr20_16
  __int64 v9; // rbp
  __int128 v10; // kr30_16
  __int64 v11; // rbp
  __int128 v12; // kr40_16
  __int64 v13; // r14
  __int128 v14; // kr50_16
  __int64 v15; // r14
  __int128 v16; // kr60_16
  __int64 v17; // r15
  char v18; // r15
  char flag; // r12
  __int64 v20; // r13
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rbx
  char v26; // [rsp+0h] [rbp-3C8h]
  char v27; // [rsp+10h] [rbp-3B8h]
  char v28; // [rsp+18h] [rbp-3B0h]
  __int128 v29; // [rsp+20h] [rbp-3A8h] BYREF
  __int128 v30; // [rsp+30h] [rbp-398h]
  __int128 v31; // [rsp+40h] [rbp-388h]
  __int64 v32; // [rsp+50h] [rbp-378h]
  _OWORD v33[3]; // [rsp+58h] [rbp-370h] BYREF
  __int64 v34; // [rsp+88h] [rbp-340h]
  __int128 dest; // [rsp+90h] [rbp-338h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-328h]
  __int128 v37; // [rsp+A8h] [rbp-320h]
  __int64 v38; // [rsp+B8h] [rbp-310h]
  __int128 v39; // [rsp+C0h] [rbp-308h]
  __int64 v40; // [rsp+D0h] [rbp-2F8h]
  __int128 v41; // [rsp+D8h] [rbp-2F0h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-2E0h]
  char v43; // [rsp+F0h] [rbp-2D8h] BYREF
  _QWORD v44[14]; // [rsp+358h] [rbp-70h] BYREF

  uu_cat::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v29, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v29, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v29 + 1),
             &dest,
             v2,
             -(__int64)v29);
  v34 = v32;
  v33[2] = v31;
  v33[1] = v30;
  v33[0] = v29;
  v26 = 1;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           v33,
                           aNumberNonblank,
                           *(&uu_cat::options::NUMBER_NONBLANK + 1)) )
    v26 = 2
        * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v33,
            aNumber,
            *(&uu_cat::options::NUMBER + 1));
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  v4 = dest;
  v5 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aE, uu_cat::options::SHOW_NONPRINTING_ENDS[1]);
  v6 = dest;
  v7 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aT, uu_cat::options::SHOW_NONPRINTING_TABS[1]);
  v8 = dest;
  v9 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
    &v29,
    aShowNonprintin,
    *(&uu_cat::options::SHOW_NONPRINTING + 1));
  v42 = v30;
  v41 = v29;
  dest = v4;
  v36 = v5;
  v37 = v6;
  v38 = v7;
  v39 = v8;
  v40 = v9;
  *(_QWORD *)&v29 = &dest;
  *((_QWORD *)&v29 + 1) = &v43;
  v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v33);
  core::ptr::drop_in_place<[alloc::string::String; 4]>(&dest);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aShowEnds, *(&uu_cat::options::SHOW_ENDS + 1));
  v10 = dest;
  v11 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  v12 = dest;
  v13 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, aE, uu_cat::options::SHOW_NONPRINTING_ENDS[1]);
  v40 = v30;
  v39 = v29;
  dest = v10;
  v36 = v11;
  v37 = v12;
  v38 = v13;
  *(_QWORD *)&v29 = &dest;
  *((_QWORD *)&v29 + 1) = &v41;
  v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v33);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&dest);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aShowAll, *(&uu_cat::options::SHOW_ALL + 1));
  v14 = dest;
  v15 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aShowTabs, *(&uu_cat::options::SHOW_TABS + 1));
  v16 = dest;
  v17 = v36;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, aT, uu_cat::options::SHOW_NONPRINTING_TABS[1]);
  v40 = v30;
  v39 = v29;
  dest = v14;
  v36 = v15;
  v37 = v16;
  v38 = v17;
  *(_QWORD *)&v29 = &dest;
  *((_QWORD *)&v29 + 1) = &v41;
  v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v29, v33);
  core::ptr::drop_in_place<[alloc::string::String; 3]>(&dest);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v33,
           aSqueezeBlank,
           *(&uu_cat::options::SQUEEZE_BLANK + 1));
  v20 = (__int64)*(&uu_cat::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v33, aFile, v20);
  clap_builder::parser::error::MatchesError::unwrap(v44, aFile, v20, &dest);
  if ( v44[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&dest, v44);
    v21 = *((_QWORD *)&dest + 1);
    v22 = v36;
  }
  else
  {
    v23 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v23 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v21 = v23;
    v22 = 1LL;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_19EB1, 1LL);
    *(_QWORD *)&v30 = v36;
    v24 = dest;
    v29 = dest;
    *(_QWORD *)(v21 + 16) = v36;
    *(_OWORD *)v21 = v24;
    *(_QWORD *)&dest = 1LL;
    *((_QWORD *)&dest + 1) = v21;
    v36 = 1LL;
  }
  BYTE4(v29) = v26;
  LOBYTE(v29) = flag;
  BYTE1(v29) = v18;
  BYTE2(v29) = v27;
  BYTE3(v29) = v28;
  v25 = uu_cat::cat_files(v21, v22, &v29);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&dest);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
  return v25;
}