__int64 __fastcall uu_cut::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-B68h]
  int v14; // [rsp+8h] [rbp-B60h]
  struct _Unwind_Exception *v15; // [rsp+10h] [rbp-B58h]
  char v16; // [rsp+14h] [rbp-B54h]
  char v17; // [rsp+15h] [rbp-B53h]
  char v18; // [rsp+16h] [rbp-B52h]
  __int64 v19; // [rsp+17h] [rbp-B51h]
  int v20; // [rsp+18h] [rbp-B50h]
  __int64 v21; // [rsp+50h] [rbp-B18h]
  __int64 v22; // [rsp+58h] [rbp-B10h]
  __int64 one; // [rsp+60h] [rbp-B08h]
  __int64 v24; // [rsp+68h] [rbp-B00h]
  __int128 v25; // [rsp+88h] [rbp-AE0h]
  char v26; // [rsp+9Eh] [rbp-ACAh]
  char flag; // [rsp+B6h] [rbp-AB2h]
  char v28; // [rsp+B7h] [rbp-AB1h]
  __int64 v29; // [rsp+B8h] [rbp-AB0h]
  __int64 v30; // [rsp+C0h] [rbp-AA8h]
  __int64 v31; // [rsp+E0h] [rbp-A88h]
  __int128 v32; // [rsp+F0h] [rbp-A78h] BYREF
  __int64 v33; // [rsp+100h] [rbp-A68h]
  _BYTE v34[24]; // [rsp+108h] [rbp-A60h] BYREF
  _OWORD v35[6]; // [rsp+120h] [rbp-A48h] BYREF
  __int64 v36; // [rsp+180h] [rbp-9E8h]
  __int128 v37; // [rsp+188h] [rbp-9E0h] BYREF
  __int128 v38; // [rsp+198h] [rbp-9D0h]
  __int128 v39; // [rsp+1A8h] [rbp-9C0h]
  __int128 v40; // [rsp+1B8h] [rbp-9B0h]
  __int128 v41; // [rsp+1C8h] [rbp-9A0h]
  __int128 v42; // [rsp+1D8h] [rbp-990h]
  __int64 v43; // [rsp+1E8h] [rbp-980h]
  int v44[26]; // [rsp+1F0h] [rbp-978h] BYREF
  int v45[178]; // [rsp+258h] [rbp-910h] BYREF
  int v46[4]; // [rsp+520h] [rbp-648h] BYREF
  __int64 v47; // [rsp+530h] [rbp-638h]
  __int128 v48; // [rsp+540h] [rbp-628h]
  __int128 v49; // [rsp+550h] [rbp-618h]
  __int128 v50; // [rsp+560h] [rbp-608h]
  __int128 v51; // [rsp+570h] [rbp-5F8h]
  __int128 v52; // [rsp+580h] [rbp-5E8h]
  __int128 v53; // [rsp+590h] [rbp-5D8h]
  __int64 v54; // [rsp+5A0h] [rbp-5C8h]
  char v55; // [rsp+5AFh] [rbp-5B9h] BYREF
  __int128 v56; // [rsp+5B0h] [rbp-5B8h] BYREF
  __int64 v57; // [rsp+5C0h] [rbp-5A8h] BYREF
  __int128 v58; // [rsp+5C8h] [rbp-5A0h]
  __int128 v59; // [rsp+5D8h] [rbp-590h]
  _BYTE v60[40]; // [rsp+5E8h] [rbp-580h] BYREF
  __int128 v61; // [rsp+610h] [rbp-558h]
  __int128 v62; // [rsp+620h] [rbp-548h]
  char v63; // [rsp+63Fh] [rbp-529h] BYREF
  _BYTE v64[88]; // [rsp+640h] [rbp-528h] BYREF
  _BYTE v65[88]; // [rsp+698h] [rbp-4D0h] BYREF
  __int128 v66; // [rsp+6F0h] [rbp-478h] BYREF
  __int64 v67; // [rsp+700h] [rbp-468h]
  __int128 v68; // [rsp+708h] [rbp-460h]
  __int64 v69; // [rsp+718h] [rbp-450h]
  __int128 v70; // [rsp+720h] [rbp-448h]
  __int64 v71; // [rsp+730h] [rbp-438h]
  __int128 v72; // [rsp+740h] [rbp-428h] BYREF
  __int64 v73; // [rsp+750h] [rbp-418h]
  __int128 v74; // [rsp+758h] [rbp-410h] BYREF
  __int64 v75; // [rsp+768h] [rbp-400h]
  __int128 v76; // [rsp+770h] [rbp-3F8h] BYREF
  __int64 v77; // [rsp+780h] [rbp-3E8h]
  __int128 src; // [rsp+788h] [rbp-3E0h] BYREF
  __int128 v79; // [rsp+798h] [rbp-3D0h]
  __int128 v80; // [rsp+7A8h] [rbp-3C0h]
  __int128 v81; // [rsp+7B8h] [rbp-3B0h]
  __int128 v82; // [rsp+7C8h] [rbp-3A0h]
  unsigned __int64 v83; // [rsp+7D8h] [rbp-390h]
  __int64 v84; // [rsp+7E0h] [rbp-388h]
  __int64 v85; // [rsp+7E8h] [rbp-380h]
  __int64 v86; // [rsp+7F0h] [rbp-378h]
  _BYTE v87[32]; // [rsp+7F8h] [rbp-370h] BYREF
  _BYTE v88[32]; // [rsp+818h] [rbp-350h] BYREF
  _BYTE v89[32]; // [rsp+838h] [rbp-330h] BYREF
  _QWORD v90[3]; // [rsp+858h] [rbp-310h] BYREF
  __int128 v91; // [rsp+870h] [rbp-2F8h]
  __int64 v92; // [rsp+880h] [rbp-2E8h] BYREF
  __int128 v93; // [rsp+888h] [rbp-2E0h]
  __int64 v94; // [rsp+898h] [rbp-2D0h] BYREF
  __int128 v95; // [rsp+8A0h] [rbp-2C8h]
  __m256i dest; // [rsp+8B0h] [rbp-2B8h] BYREF
  __int128 v97; // [rsp+8D0h] [rbp-298h]
  __int128 v98; // [rsp+8E0h] [rbp-288h]
  __int128 v99; // [rsp+8F0h] [rbp-278h]
  _OWORD v100[5]; // [rsp+900h] [rbp-268h] BYREF
  __int64 v101; // [rsp+950h] [rbp-218h] BYREF
  __int128 v102; // [rsp+958h] [rbp-210h]
  __int64 v103; // [rsp+968h] [rbp-200h] BYREF
  __int128 v104; // [rsp+970h] [rbp-1F8h]
  __int64 v105; // [rsp+980h] [rbp-1E8h] BYREF
  __int128 v106; // [rsp+988h] [rbp-1E0h]
  _BYTE v107[80]; // [rsp+998h] [rbp-1D0h] BYREF
  __int128 v108; // [rsp+9E8h] [rbp-180h] BYREF
  __int64 v109; // [rsp+9F8h] [rbp-170h]
  _BYTE v110[64]; // [rsp+A00h] [rbp-168h] BYREF
  _BYTE v111[64]; // [rsp+A40h] [rbp-128h] BYREF
  _BYTE v112[64]; // [rsp+A80h] [rbp-E8h] BYREF
  __m256i v113; // [rsp+AC0h] [rbp-A8h] BYREF
  __int128 v114; // [rsp+AE0h] [rbp-88h]
  __int128 v115; // [rsp+AF0h] [rbp-78h]
  __int128 v116; // [rsp+B00h] [rbp-68h]
  __int128 v117; // [rsp+B10h] [rbp-58h] BYREF
  __int64 v118; // [rsp+B20h] [rbp-48h]
  __int128 v119; // [rsp+B30h] [rbp-38h] BYREF
  __int64 v120; // [rsp+B40h] [rbp-28h]
  char v121; // [rsp+B52h] [rbp-16h]
  char v122; // [rsp+B53h] [rbp-15h]
  char v123; // [rsp+B54h] [rbp-14h]
  char v124; // [rsp+B55h] [rbp-13h]
  char v125; // [rsp+B56h] [rbp-12h]
  char v126; // [rsp+B57h] [rbp-11h]

  v126 = 0;
  v123 = 0;
  v121 = 0;
  v122 = 0;
  v125 = 0;
  v124 = 0;
  core::iter::traits::iterator::Iterator::collect(&v32, a1, a2);
  v126 = 1;
  v29 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v32);
  v30 = v2;
  <std::ffi::os_str::OsString as core::convert::From<&T>>::from(v34, aD, 3LL);
  v28 = core::slice::<impl [T]>::contains(v29, v30, v34);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v34);
  uu_cut::uu_app(v45);
  v126 = 0;
  v47 = v33;
  *(_OWORD *)v46 = v32;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v44,
    (int)v45,
    (int)v46,
    v3,
    v4,
    v5,
    v13,
    v14,
    v15,
    v20);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v37, v44);
  if ( (_QWORD)v37 == 0x8000000000000000LL )
  {
    v31 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v37 + 1),
            &off_118418);
LABEL_59:
    v126 = 0;
    return v31;
  }
  v54 = v43;
  v53 = v42;
  v52 = v41;
  v51 = v40;
  v50 = v39;
  v49 = v38;
  v48 = v37;
  v36 = v43;
  v35[5] = v42;
  v35[4] = v41;
  v35[3] = v40;
  v35[2] = v39;
  v35[1] = v38;
  v35[0] = v37;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aComplement, 10LL, &off_118268);
  v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aOnlyDelimited, 14LL, &off_118280) & 1;
  uu_cut::get_delimiters(v60, v35, v28 & 1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v57, v60);
  if ( v57 )
  {
    v31 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v58,
            *((_QWORD *)&v58 + 1),
            &off_118400);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
    goto LABEL_59;
  }
  v62 = v59;
  v61 = v58;
  v25 = v58;
  v56 = v59;
  v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aZeroTerminated, 15LL, &off_118298);
  v63 = uucore::mods::line_ending::LineEnding::from_zero_flag(v26 & 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v72, v35, aBytes_0, 5LL, &off_1182B0);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v74, v35, aCharacters, 10LL, &off_1182C8);
  clap_builder::parser::matches::arg_matches::ArgMatches::indices_of(&v76, v35, aFields, 6LL, &off_1182E0);
  v67 = v73;
  v66 = v72;
  v69 = v75;
  v68 = v74;
  v71 = v77;
  v70 = v76;
  core::array::iter::<impl core::iter::traits::collect::IntoIterator for [T; N]>::into_iter(v65, &v66);
  core::iter::traits::iterator::Iterator::map(v64, v65);
  v24 = core::iter::traits::iterator::Iterator::sum(v64);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v35, aBytes_0, 5LL, &off_1182F8);
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v35, aCharacters, 10LL, &off_118310);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v35, aFields, 6LL, &off_118328);
  v83 = v24;
  v84 = one;
  v85 = v22;
  v86 = v21;
  if ( v24 == 1 )
  {
    if ( v84 )
    {
      if ( !v85 && !v86 )
      {
        v10 = <alloc::string::String as core::ops::deref::Deref>::deref(v84);
        uu_cut::list_to_ranges(v87, v10, v11, flag & 1);
        core::result::Result<T,E>::map(&src, v87, &v56, &v63);
        v123 = 1;
        goto LABEL_22;
      }
    }
    else if ( v85 )
    {
      if ( !v86 )
      {
        v8 = <alloc::string::String as core::ops::deref::Deref>::deref(v85);
        uu_cut::list_to_ranges(v88, v8, v9, flag & 1);
        core::result::Result<T,E>::map(&src, v88, &v56, &v63);
        v123 = 1;
        goto LABEL_22;
      }
    }
    else if ( v86 != 0 )
    {
      v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v86);
      uu_cut::list_to_ranges(v89, v6, v7, flag & 1);
      v90[0] = &v56;
      v90[1] = &v63;
      v91 = v25;
      v90[2] = &v55;
      core::result::Result<T,E>::map(&src, v89, v90);
      v123 = 1;
      goto LABEL_22;
    }
LABEL_21:
    <T as core::convert::Into<U>>::into(&v94, aInvalidUsageEx, 73LL, &off_118340);
    v123 = 1;
    *((_QWORD *)&src + 1) = v94;
    v79 = v95;
    *(_QWORD *)&src = 3LL;
    goto LABEL_22;
  }
  if ( v83 < 2 )
    goto LABEL_21;
  <T as core::convert::Into<U>>::into(&v92, aInvalidUsageEx_0, 86LL, &off_118358);
  v123 = 1;
  *((_QWORD *)&src + 1) = v92;
  v79 = v93;
  *(_QWORD *)&src = 3LL;
LABEL_22:
  if ( (_QWORD)src != 3LL )
  {
    v121 = 1;
    v100[4] = v82;
    v100[3] = v81;
    v100[2] = v80;
    v100[1] = v79;
    v100[0] = src;
    if ( (_QWORD)src )
    {
      if ( (_QWORD)src != 1LL )
      {
LABEL_33:
        v121 = 0;
        memcpy(v107, v100, sizeof(v107));
        v124 = 1;
        v125 = 1;
        memcpy(&dest, v107, 0x50uLL);
LABEL_46:
        if ( (v121 & 1) != 0 )
          core::ptr::drop_in_place<uu_cut::Mode>(v100);
        v121 = 0;
        goto LABEL_49;
      }
      v18 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v35, aDelimiter, 9LL);
      if ( (v18 & 1) == 0 )
      {
        if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aWhitespaceDeli, 20LL, &off_118370) & 1) == 0 )
        {
          if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aOnlyDelimited, 14LL, &off_118388) & 1) == 0 )
            goto LABEL_33;
LABEL_41:
          <T as core::convert::Into<U>>::into(&v105, aInvalidInputTh, 96LL, &off_1183A0);
          v124 = 1;
          v125 = 1;
          dest.m256i_i64[1] = v105;
          *(_OWORD *)&dest.m256i_u64[2] = v106;
          dest.m256i_i64[0] = 3LL;
          goto LABEL_46;
        }
        goto LABEL_39;
      }
    }
    else
    {
      v19 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(v35, aDelimiter, 9LL);
      if ( (v19 & 1) == 0 )
      {
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aWhitespaceDeli, 20LL, &off_118370);
        if ( (v17 & 1) == 0 )
        {
          v16 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aOnlyDelimited, 14LL, &off_118388);
          if ( (v16 & 1) == 0 )
            goto LABEL_33;
          goto LABEL_41;
        }
LABEL_39:
        <T as core::convert::Into<U>>::into(&v103, aInvalidInputTh_0, 75LL, &off_1183B8);
        v124 = 1;
        v125 = 1;
        dest.m256i_i64[1] = v103;
        *(_OWORD *)&dest.m256i_u64[2] = v104;
        dest.m256i_i64[0] = 3LL;
        goto LABEL_46;
      }
    }
    <T as core::convert::Into<U>>::into(&v101, aInvalidInputTh_1, 91LL, &off_1183D0);
    v124 = 1;
    v125 = 1;
    dest.m256i_i64[1] = v101;
    *(_OWORD *)&dest.m256i_u64[2] = v102;
    dest.m256i_i64[0] = 3LL;
    goto LABEL_46;
  }
  v123 = 0;
  v124 = 1;
  v125 = 1;
  memcpy(&dest, &src, 0x50uLL);
LABEL_49:
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v112, v35, aFile, 4LL, &off_1183E8);
  core::option::Option<T>::unwrap_or_default(v111, v112);
  core::iter::traits::iterator::Iterator::cloned(v110, v111);
  core::iter::traits::iterator::Iterator::collect(&v108, v110);
  v122 = 1;
  if ( dest.m256i_i64[0] == 3 )
  {
    v125 = 0;
    v120 = dest.m256i_i64[3];
    v119 = *(_OWORD *)&dest.m256i_u64[1];
    v31 = uucore::mods::error::USimpleError::new(1LL, &v119);
  }
  else
  {
    v124 = 0;
    v116 = v99;
    v115 = v98;
    v114 = v97;
    v113 = dest;
    v122 = 0;
    v118 = v109;
    v117 = v108;
    uu_cut::cut_files(&v117, &v113);
    v31 = 0LL;
    core::ptr::drop_in_place<uu_cut::Mode>(&v113);
  }
  if ( (v122 & 1) != 0 )
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v108);
  v122 = 0;
  v124 = 0;
  v125 = 0;
  if ( (v123 & 1) != 0 && (_QWORD)src == 3LL )
    core::ptr::drop_in_place<core::result::Result<uu_cut::Mode,alloc::string::String>>(&src);
  v123 = 0;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  v126 = 0;
  return v31;
}
