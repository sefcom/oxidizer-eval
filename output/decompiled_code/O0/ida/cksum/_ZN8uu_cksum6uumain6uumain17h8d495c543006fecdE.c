__int64 __fastcall uu_cksum::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int128 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-A38h]
  int v28; // [rsp+0h] [rbp-A38h]
  int v29; // [rsp+8h] [rbp-A30h]
  int v30; // [rsp+8h] [rbp-A30h]
  struct _Unwind_Exception *v31; // [rsp+10h] [rbp-A28h]
  int v32; // [rsp+10h] [rbp-A28h]
  int v33; // [rsp+18h] [rbp-A20h]
  int v34; // [rsp+18h] [rbp-A20h]
  int v35; // [rsp+20h] [rbp-A18h]
  int v36; // [rsp+28h] [rbp-A10h]
  int v37; // [rsp+30h] [rbp-A08h]
  int v38; // [rsp+38h] [rbp-A00h]
  int v39; // [rsp+40h] [rbp-9F8h]
  int v40; // [rsp+48h] [rbp-9F0h]
  int v41; // [rsp+50h] [rbp-9E8h]
  int v42; // [rsp+58h] [rbp-9E0h]
  int v43; // [rsp+60h] [rbp-9D8h]
  int v44; // [rsp+68h] [rbp-9D0h]
  int v45; // [rsp+70h] [rbp-9C8h]
  int v46; // [rsp+78h] [rbp-9C0h]
  int v47; // [rsp+80h] [rbp-9B8h]
  int v48; // [rsp+88h] [rbp-9B0h]
  int v49; // [rsp+90h] [rbp-9A8h]
  char v50; // [rsp+92h] [rbp-9A6h]
  char v51; // [rsp+93h] [rbp-9A5h]
  char v52; // [rsp+94h] [rbp-9A4h]
  char v53; // [rsp+95h] [rbp-9A3h]
  char v54; // [rsp+96h] [rbp-9A2h]
  char v55; // [rsp+97h] [rbp-9A1h]
  char v56; // [rsp+97h] [rbp-9A1h]
  int v57; // [rsp+98h] [rbp-9A0h]
  struct _Unwind_Exception *v58; // [rsp+A0h] [rbp-998h]
  int v59; // [rsp+A8h] [rbp-990h]
  __int128 v60; // [rsp+118h] [rbp-920h]
  char v61; // [rsp+13Fh] [rbp-8F9h]
  char v62; // [rsp+157h] [rbp-8E1h]
  __int16 v63; // [rsp+16Dh] [rbp-8CBh]
  char v64; // [rsp+16Fh] [rbp-8C9h]
  _QWORD *v65; // [rsp+190h] [rbp-8A8h]
  char v66; // [rsp+19Fh] [rbp-899h]
  __int64 v67; // [rsp+1B0h] [rbp-888h]
  __int64 one; // [rsp+1D0h] [rbp-868h]
  char flag; // [rsp+1EFh] [rbp-849h]
  __int64 v70; // [rsp+200h] [rbp-838h]
  _OWORD v71[6]; // [rsp+210h] [rbp-828h] BYREF
  __int64 v72; // [rsp+270h] [rbp-7C8h]
  __int128 v73; // [rsp+278h] [rbp-7C0h] BYREF
  __int128 v74; // [rsp+288h] [rbp-7B0h]
  __int128 v75; // [rsp+298h] [rbp-7A0h]
  __int128 v76; // [rsp+2A8h] [rbp-790h]
  __int128 v77; // [rsp+2B8h] [rbp-780h]
  __int128 v78; // [rsp+2C8h] [rbp-770h]
  __int64 v79; // [rsp+2D8h] [rbp-760h]
  int v80[26]; // [rsp+2E0h] [rbp-758h] BYREF
  int dest[178]; // [rsp+348h] [rbp-6F0h] BYREF
  __int128 v82; // [rsp+610h] [rbp-428h]
  __int128 v83; // [rsp+620h] [rbp-418h]
  __int128 v84; // [rsp+630h] [rbp-408h]
  __int128 v85; // [rsp+640h] [rbp-3F8h]
  __int128 v86; // [rsp+650h] [rbp-3E8h]
  __int128 v87; // [rsp+660h] [rbp-3D8h]
  __int64 v88; // [rsp+670h] [rbp-3C8h]
  const char *v89; // [rsp+680h] [rbp-3B8h] BYREF
  __int64 v90; // [rsp+688h] [rbp-3B0h]
  __int64 v91; // [rsp+690h] [rbp-3A8h]
  unsigned __int64 v92[3]; // [rsp+698h] [rbp-3A0h] BYREF
  _QWORD *v93; // [rsp+6B0h] [rbp-388h]
  __int128 v94; // [rsp+6B8h] [rbp-380h]
  __int64 v95; // [rsp+6C8h] [rbp-370h] BYREF
  __int128 v96; // [rsp+6D0h] [rbp-368h]
  _BYTE v97[24]; // [rsp+6E0h] [rbp-358h] BYREF
  unsigned __int64 v98[3]; // [rsp+6F8h] [rbp-340h] BYREF
  unsigned __int64 v99[3]; // [rsp+710h] [rbp-328h] BYREF
  const char *v100; // [rsp+728h] [rbp-310h]
  __int64 v101; // [rsp+730h] [rbp-308h]
  int v102[6]; // [rsp+738h] [rbp-300h] BYREF
  int v103[16]; // [rsp+750h] [rbp-2E8h] BYREF
  __int64 v104; // [rsp+790h] [rbp-2A8h] BYREF
  __int64 v105; // [rsp+798h] [rbp-2A0h]
  _BYTE v106[16]; // [rsp+7A0h] [rbp-298h] BYREF
  __int128 v107; // [rsp+7B0h] [rbp-288h] BYREF
  __int128 v108; // [rsp+7C0h] [rbp-278h] BYREF
  __int64 v109; // [rsp+7D0h] [rbp-268h]
  __int128 v110; // [rsp+7E0h] [rbp-258h] BYREF
  __int128 v111; // [rsp+7F0h] [rbp-248h]
  __int64 v112; // [rsp+800h] [rbp-238h]
  _BYTE v113[40]; // [rsp+808h] [rbp-230h] BYREF
  __int128 v114; // [rsp+830h] [rbp-208h]
  __int128 v115; // [rsp+840h] [rbp-1F8h]
  __int64 v116; // [rsp+850h] [rbp-1E8h]
  char v117; // [rsp+85Fh] [rbp-1D9h]
  __int128 v118; // [rsp+860h] [rbp-1D8h]
  __int128 v119; // [rsp+870h] [rbp-1C8h]
  __int128 v120; // [rsp+880h] [rbp-1B8h]
  __int128 v121; // [rsp+890h] [rbp-1A8h]
  _OWORD v122[4]; // [rsp+8A0h] [rbp-198h] BYREF
  _OWORD v123[4]; // [rsp+8E0h] [rbp-158h] BYREF
  __int64 v124; // [rsp+920h] [rbp-118h]
  __int64 v125; // [rsp+928h] [rbp-110h]
  _OWORD v126[4]; // [rsp+930h] [rbp-108h] BYREF
  _BYTE v127[64]; // [rsp+970h] [rbp-C8h] BYREF
  __int64 v128; // [rsp+9B0h] [rbp-88h]
  __int64 v129; // [rsp+9B8h] [rbp-80h]
  _OWORD v130[4]; // [rsp+9C0h] [rbp-78h] BYREF
  char v131; // [rsp+A04h] [rbp-34h]
  char v132; // [rsp+A05h] [rbp-33h]
  char v133; // [rsp+A06h] [rbp-32h]
  char v134; // [rsp+A07h] [rbp-31h]

  v133 = 0;
  v132 = 0;
  v131 = 0;
  v134 = 1;
  uu_cksum::uu_app(dest);
  v134 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v80, (int)dest, a1, a2, v2, v3, v27, v29, v31, v33);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v73, v80);
  if ( (_QWORD)v73 != 0x8000000000000000LL )
  {
    v88 = v79;
    v87 = v78;
    v86 = v77;
    v85 = v76;
    v84 = v75;
    v83 = v74;
    v82 = v73;
    v72 = v79;
    v71[5] = v78;
    v71[4] = v77;
    v71[3] = v76;
    v71[2] = v75;
    v71[1] = v74;
    v71[0] = v73;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aCheck, 5LL, &off_30D510);
    one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v71, aAlgorithm, 9LL, &off_30D528);
    v91 = one;
    if ( one )
    {
      v89 = (const char *)<alloc::string::String as core::ops::deref::Deref>::deref(v91);
      v90 = v4;
    }
    else if ( (flag & 1) != 0 )
    {
      v89 = (_BYTE *)(&dword_0 + 1);
      v90 = 0LL;
    }
    else
    {
      v89 = aCrc;
      v90 = 3LL;
    }
    if ( (core::slice::<impl [T]>::contains(&off_30D540, 3LL, &v89) & 1) != 0 && (flag & 1) != 0 )
    {
      v92[0] = 0x800000000000000CLL;
      v70 = <T as core::convert::Into<U>>::into(v92, &off_30D738);
LABEL_21:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v71);
      return v70;
    }
    v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(v71, aLength, 6LL, &off_30D570);
    v93 = (_QWORD *)v67;
    if ( v67 )
    {
      v65 = v93;
      v66 = core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(&v89, &off_30D000);
      if ( (v66 & 1) == 0 )
      {
        v98[0] = 0x800000000000000ALL;
        v70 = <T as core::convert::Into<U>>::into(v98, &off_30D588);
        goto LABEL_21;
      }
      uucore::features::checksum::calculate_blake2b_length(v97, *v65);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v95, v97);
      if ( v95 )
      {
        v70 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v96,
                *((_QWORD *)&v96 + 1),
                &off_30D720);
        goto LABEL_21;
      }
      v94 = v96;
    }
    else
    {
      *(_QWORD *)&v94 = 0LL;
    }
    if ( (flag & 1) != 0 )
    {
      v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aText, 4LL, &off_30D648);
      v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aBinary, 6LL, &off_30D660);
      clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aStrict, 6LL, &off_30D678);
      clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aStatus, 6LL, &off_30D690);
      clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aWarn, 4LL, &off_30D6A8);
      HIBYTE(v49) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                      v71,
                      aIgnoreMissing,
                      14LL,
                      &off_30D6C0);
      BYTE2(v49) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aQuiet, 5LL, &off_30D6D8);
      if ( (v55 & 1) != 0 || (v64 & 1) != 0 )
      {
        v99[0] = 0x800000000000000BLL;
        v70 = <T as core::convert::Into<U>>::into(v99, &off_30D708);
      }
      else
      {
        if ( (core::str::<impl str>::is_empty(v89, v90) & 1) != 0 )
        {
          v100 = 0LL;
        }
        else
        {
          v100 = v89;
          v101 = v90;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v103, v71, aFile, 4LL, &off_30D6F0);
        core::option::Option<T>::map_or_else(
          (int)v102,
          (int)v103,
          v17,
          v18,
          v19,
          v20,
          v28,
          v30,
          v32,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v57,
          v58,
          v59);
        v21 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v102);
        v23 = core::slice::<impl [T]>::iter(v21, v22);
        v25 = core::iter::traits::iterator::Iterator::copied(v23, v24);
        v70 = uucore::features::checksum::perform_checksum_validation(
                v25,
                v26,
                v54 & 1,
                v53 & 1,
                v52 & 1,
                v56 & 1,
                v51 & 1,
                v50 & 1,
                v100,
                v101,
                v94,
                *((_QWORD *)&v94 + 1));
        core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(v102);
      }
      goto LABEL_21;
    }
    uu_cksum::handle_tag_text_binary_flags(v106, v71);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v104, v106);
    if ( v104 )
    {
      v70 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v104,
              v105,
              &off_30D630);
      goto LABEL_21;
    }
    v63 = v105;
    uucore::features::checksum::detect_algo(v113, v89, v90, v94, *((_QWORD *)&v94 + 1));
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v110, v113);
    if ( !(_QWORD)v110 )
    {
      v70 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              *((_QWORD *)&v110 + 1),
              v111,
              &off_30D618);
      goto LABEL_21;
    }
    v116 = v112;
    v115 = v111;
    v114 = v110;
    v109 = v112;
    v108 = v111;
    v107 = v110;
    v62 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aRaw, 3LL, &off_30D5A0);
    if ( (v62 & 1) != 0 )
    {
      v117 = 1;
    }
    else
    {
      v61 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v71, aBase64, 6LL, &off_30D5B8);
      if ( (v61 & 1) != 0 )
        v117 = 2;
      else
        v117 = 0;
    }
    v60 = v107;
    *(_QWORD *)&v5 = <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v108);
    v133 = 1;
    v119 = v60;
    v120 = v5;
    *(_QWORD *)&v121 = v109;
    WORD4(v121) = v63 & 0x101;
    v118 = v94;
    BYTE10(v121) = v117;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v122, v71, aFile, 4LL, &off_30D5D0);
    if ( *(_QWORD *)&v122[0] )
    {
      v123[3] = v122[3];
      v123[2] = v122[2];
      v123[1] = v122[1];
      v123[0] = v122[0];
      v133 = 0;
      v132 = 1;
      v126[3] = v121;
      v126[2] = v120;
      v126[1] = v119;
      v126[0] = v118;
      core::iter::traits::iterator::Iterator::map(v127, v123);
      v132 = 0;
      v12 = uu_cksum::cksum((__int64)v126);
      v132 = 0;
      v14 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12, v13);
      v124 = v14;
      v125 = v15;
      if ( !v14 )
        goto LABEL_42;
      v70 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v124,
              v125,
              &off_30D600);
    }
    else
    {
      v133 = 0;
      v131 = 1;
      v130[3] = v121;
      v130[2] = v120;
      v130[1] = v119;
      v130[0] = v118;
      v6 = std::ffi::os_str::OsStr::new(asc_44294, 1LL);
      core::iter::sources::once::once(v6, v7);
      v131 = 0;
      v8 = uu_cksum::cksum((__int64)v130);
      v131 = 0;
      v10 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8, v9);
      v128 = v10;
      v129 = v11;
      if ( !v10 )
      {
LABEL_42:
        v70 = 0LL;
        v133 = 0;
        core::ptr::drop_in_place<uucore::features::checksum::HashAlgorithm>(&v107);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v71);
        return v70;
      }
      v70 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v128,
              v129,
              &off_30D5E8);
    }
    v133 = 0;
    core::ptr::drop_in_place<uucore::features::checksum::HashAlgorithm>(&v107);
    goto LABEL_21;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v73 + 1),
           &off_30D750);
}
