__int64 __fastcall uu_shred::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-8F8h]
  int v21; // [rsp+0h] [rbp-8F8h]
  int v22; // [rsp+8h] [rbp-8F0h]
  char v23; // [rsp+8h] [rbp-8F0h]
  struct _Unwind_Exception *v24; // [rsp+10h] [rbp-8E8h]
  int v25; // [rsp+10h] [rbp-8E8h]
  int v26; // [rsp+18h] [rbp-8E0h]
  int v27; // [rsp+18h] [rbp-8E0h]
  int v28; // [rsp+20h] [rbp-8D8h]
  int v29; // [rsp+28h] [rbp-8D0h]
  int v30; // [rsp+30h] [rbp-8C8h]
  int v31; // [rsp+38h] [rbp-8C0h]
  struct _Unwind_Exception *v32; // [rsp+40h] [rbp-8B8h]
  int v33; // [rsp+48h] [rbp-8B0h]
  unsigned int v34; // [rsp+4Ch] [rbp-8ACh]
  char v35; // [rsp+7Ch] [rbp-87Ch]
  char v36; // [rsp+7Dh] [rbp-87Bh]
  char v37; // [rsp+7Fh] [rbp-879h]
  __int64 v38; // [rsp+90h] [rbp-868h]
  char v39; // [rsp+9Dh] [rbp-85Bh]
  char v40; // [rsp+9Eh] [rbp-85Ah]
  char v41; // [rsp+9Fh] [rbp-859h]
  char v42; // [rsp+B7h] [rbp-841h]
  __int64 v43; // [rsp+B8h] [rbp-840h]
  char v44; // [rsp+C7h] [rbp-831h]
  __int64 v45; // [rsp+D8h] [rbp-820h]
  char flag; // [rsp+E7h] [rbp-811h]
  __int64 v47; // [rsp+E8h] [rbp-810h]
  __int64 one; // [rsp+100h] [rbp-7F8h]
  char v49; // [rsp+12Fh] [rbp-7C9h]
  __int64 v50; // [rsp+140h] [rbp-7B8h]
  _OWORD v51[6]; // [rsp+150h] [rbp-7A8h] BYREF
  __int64 v52; // [rsp+1B0h] [rbp-748h]
  __int128 v53; // [rsp+1B8h] [rbp-740h] BYREF
  __int128 v54; // [rsp+1C8h] [rbp-730h]
  __int128 v55; // [rsp+1D8h] [rbp-720h]
  __int128 v56; // [rsp+1E8h] [rbp-710h]
  __int128 v57; // [rsp+1F8h] [rbp-700h]
  __int128 v58; // [rsp+208h] [rbp-6F0h]
  __int64 v59; // [rsp+218h] [rbp-6E0h]
  int v60[26]; // [rsp+220h] [rbp-6D8h] BYREF
  int v61[178]; // [rsp+288h] [rbp-670h] BYREF
  __int128 v62; // [rsp+550h] [rbp-3A8h]
  __int128 v63; // [rsp+560h] [rbp-398h]
  __int128 v64; // [rsp+570h] [rbp-388h]
  __int128 v65; // [rsp+580h] [rbp-378h]
  __int128 v66; // [rsp+590h] [rbp-368h]
  __int128 v67; // [rsp+5A0h] [rbp-358h]
  __int64 v68; // [rsp+5B0h] [rbp-348h]
  __int64 v69; // [rsp+5B8h] [rbp-340h]
  char v70[8]; // [rsp+5C0h] [rbp-338h] BYREF
  __int64 v71; // [rsp+5C8h] [rbp-330h]
  _QWORD v72[3]; // [rsp+5D0h] [rbp-328h] BYREF
  _QWORD v73[3]; // [rsp+5E8h] [rbp-310h] BYREF
  _BYTE v74[48]; // [rsp+600h] [rbp-2F8h] BYREF
  __int128 v75; // [rsp+630h] [rbp-2C8h] BYREF
  __int128 v76; // [rsp+648h] [rbp-2B0h]
  _BYTE v77[39]; // [rsp+658h] [rbp-2A0h] BYREF
  unsigned __int8 v78; // [rsp+67Fh] [rbp-279h]
  __int64 v79; // [rsp+680h] [rbp-278h]
  __int64 v80; // [rsp+688h] [rbp-270h]
  _BYTE v81[48]; // [rsp+690h] [rbp-268h] BYREF
  char v82[8]; // [rsp+6C0h] [rbp-238h] BYREF
  _BYTE v83[24]; // [rsp+6C8h] [rbp-230h] BYREF
  __int64 size; // [rsp+6E0h] [rbp-218h] BYREF
  __int64 v85; // [rsp+6E8h] [rbp-210h]
  char v86; // [rsp+6F7h] [rbp-201h]
  _BYTE v87[64]; // [rsp+6F8h] [rbp-200h] BYREF
  _BYTE dest[64]; // [rsp+738h] [rbp-1C0h] BYREF
  _QWORD src[8]; // [rsp+778h] [rbp-180h] BYREF
  _BYTE v90[64]; // [rsp+7B8h] [rbp-140h] BYREF
  __int64 v91; // [rsp+7F8h] [rbp-100h]
  __int64 v92; // [rsp+800h] [rbp-F8h] BYREF
  __int64 v93; // [rsp+808h] [rbp-F0h]
  _QWORD v94[2]; // [rsp+810h] [rbp-E8h] BYREF
  _BYTE v95[48]; // [rsp+820h] [rbp-D8h] BYREF
  _OWORD v96[2]; // [rsp+850h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+870h] [rbp-88h]
  _QWORD v98[2]; // [rsp+880h] [rbp-78h] BYREF
  __int128 v99; // [rsp+890h] [rbp-68h]
  char v100; // [rsp+8A6h] [rbp-52h]
  char v101; // [rsp+8A7h] [rbp-51h]
  _QWORD *v102; // [rsp+8B8h] [rbp-40h]
  __int64 (__fastcall *v103)(); // [rsp+8C0h] [rbp-38h]
  _QWORD *v104; // [rsp+8C8h] [rbp-30h]
  __int64 (__fastcall *v105)(); // [rsp+8D0h] [rbp-28h]
  _BYTE *v106; // [rsp+8D8h] [rbp-20h]
  __int64 (__fastcall *v107)(); // [rsp+8E0h] [rbp-18h]

  v100 = 0;
  v101 = 1;
  uu_shred::uu_app(v61);
  v101 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v60, (int)v61, a1, a2, v2, v3, v20, v22, v24, v26);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v53, v60);
  if ( (_QWORD)v53 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v53 + 1),
             &off_116B68);
  v68 = v59;
  v67 = v58;
  v66 = v57;
  v65 = v56;
  v64 = v55;
  v63 = v54;
  v62 = v53;
  v52 = v59;
  v51[5] = v58;
  v51[4] = v57;
  v51[3] = v56;
  v51[2] = v55;
  v51[1] = v54;
  v51[0] = v53;
  v49 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v51, aFile, 4LL);
  if ( (v49 & 1) == 0 )
  {
    v50 = uucore::mods::error::UUsageError::new(
            1,
            (int)aMissingFileOpe,
            20,
            v4,
            v5,
            v6,
            v21,
            v23,
            v25,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
LABEL_7:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
    return v50;
  }
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v51, aIterations, 10LL, &off_1169F8);
  v69 = one;
  if ( !one )
    core::panicking::panic(aInternalErrorE, 40LL, &off_116A10);
  v47 = v69;
  v7 = ((__int64 (*)(void))<alloc::string::String as core::ops::deref::Deref>::deref)();
  core::str::<impl str>::parse(v70, v7, v8);
  if ( (v70[0] & 1) != 0 )
  {
    v9 = <alloc::string::String as core::ops::deref::Deref>::deref(v47);
    <str as os_display::native::Quotable>::quote(v77, v9, v19);
    v106 = v77;
    v107 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v76 = v77;
    *((_QWORD *)&v76 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v75 = v76;
    core::fmt::Arguments::new_v1(v74, &off_116B58, &v75);
    alloc::fmt::format(v73, v74);
    v72[0] = v73[0];
    v72[1] = v73[1];
    v72[2] = v73[2];
    v50 = uucore::mods::error::USimpleError::new(1LL, v72);
    goto LABEL_7;
  }
  v45 = v71;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aU, 1LL, &off_116A28);
  if ( (flag & 1) != 0 )
  {
    v78 = 3;
    goto LABEL_19;
  }
  v44 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v51, aRemove, 6LL);
  if ( (v44 & 1) == 0 )
  {
    v78 = 0;
    goto LABEL_19;
  }
  v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v51, aRemove, 6LL, &off_116A40);
  v10 = core::option::Option<T>::map(v43);
  v79 = v10;
  v80 = v11;
  if ( v10 == 0 )
    goto LABEL_22;
  v41 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v79, v80, aUnlink_0, 6LL);
  if ( (v41 & 1) != 0 )
  {
    v78 = 1;
    goto LABEL_19;
  }
  v40 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v79, v80, aWipe, 4LL);
  if ( (v40 & 1) != 0 )
  {
    v78 = 2;
    goto LABEL_19;
  }
  v39 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v79, v80, aWipesync, 8LL);
  if ( (v39 & 1) == 0 )
  {
LABEL_22:
    core::fmt::Arguments::new_v1(v81, &off_116A58, v82);
    core::panicking::panic_fmt(v81, &off_116A68);
  }
  v78 = 3;
LABEL_19:
  v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aForce, 5LL, &off_116A80);
  v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v51, aSize, 4LL, &off_116A98);
  core::option::Option<T>::map(v83, v38);
  size = uu_shred::get_size(v83);
  v85 = v12;
  v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aExact, 5LL, &off_116AB0);
  if ( (v37 & 1) != 0 )
    v86 = 1;
  else
    v86 = core::option::Option<T>::is_some(&size) & 1;
  v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aZero_0, 4LL, &off_116AC8);
  v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v51, aVerbose, 7LL, &off_116AE0);
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(src, v51, aFile, 4LL, &off_116AF8);
  if ( !src[0] )
    core::option::unwrap_failed(&off_116B10);
  memcpy(dest, src, sizeof(dest));
  <I as core::iter::traits::collect::IntoIterator>::into_iter(v87, dest);
  memcpy(v90, v87, sizeof(v90));
  while ( 1 )
  {
    v91 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v90);
    if ( !v91 )
      break;
    v13 = <alloc::string::String as core::ops::deref::Deref>::deref(v91);
    v16 = uu_shred::wipe_file(v13, v15, v45, v78, size, v85, v86 & 1, v36 & 1, v35 & 1, v42 & 1);
    v92 = v16;
    v93 = v17;
    v100 = 1;
    if ( v16 != 0 )
    {
      v100 = 0;
      v94[0] = v92;
      v94[1] = v93;
      v34 = (*(__int64 (__fastcall **)(__int64))(v93 + 96))(v92);
      uucore::mods::error::set_exit_code(v34);
      v98[0] = uucore::util_name();
      v98[1] = v18;
      v104 = v98;
      v105 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v97 = v98;
      *((_QWORD *)&v97 + 1) = <&T as core::fmt::Display>::fmt;
      v102 = v94;
      v103 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v99 = v94;
      *((_QWORD *)&v99 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v96[0] = v97;
      v96[1] = v99;
      core::fmt::Arguments::new_v1(v95, &unk_116B28, v96);
      std::io::stdio::_eprint(v95);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v94);
    }
    if ( v92 != 0 && (v100 & 1) != 0 )
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(&v92);
    v100 = 0;
  }
  v50 = 0LL;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v51);
  return v50;
}
