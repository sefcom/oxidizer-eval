__int64 __fastcall uu_rm::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+0h] [rbp-D38h]
  __int64 v24; // [rsp+0h] [rbp-D38h]
  int v25; // [rsp+0h] [rbp-D38h]
  __int64 v26; // [rsp+8h] [rbp-D30h]
  int v27; // [rsp+8h] [rbp-D30h]
  int v28; // [rsp+8h] [rbp-D30h]
  int v29; // [rsp+10h] [rbp-D28h]
  struct _Unwind_Exception *v30; // [rsp+10h] [rbp-D28h]
  int v31; // [rsp+10h] [rbp-D28h]
  char v32; // [rsp+17h] [rbp-D21h]
  int v33; // [rsp+18h] [rbp-D20h]
  int v34; // [rsp+18h] [rbp-D20h]
  int v35; // [rsp+18h] [rbp-D20h]
  __int64 v36; // [rsp+20h] [rbp-D18h]
  int v37; // [rsp+20h] [rbp-D18h]
  __int64 v38; // [rsp+28h] [rbp-D10h]
  int v39; // [rsp+28h] [rbp-D10h]
  char yes; // [rsp+2Fh] [rbp-D09h]
  __int64 v41; // [rsp+30h] [rbp-D08h]
  struct _Unwind_Exception *v42; // [rsp+30h] [rbp-D08h]
  int v43; // [rsp+38h] [rbp-D00h]
  int v44; // [rsp+38h] [rbp-D00h]
  int v45; // [rsp+40h] [rbp-CF8h]
  struct _Unwind_Exception *v46; // [rsp+40h] [rbp-CF8h]
  int v47; // [rsp+48h] [rbp-CF0h]
  int v48; // [rsp+48h] [rbp-CF0h]
  struct _Unwind_Exception *v49; // [rsp+50h] [rbp-CE8h]
  int v50; // [rsp+58h] [rbp-CE0h]
  char v51; // [rsp+7Ah] [rbp-CBEh]
  char v52; // [rsp+7Bh] [rbp-CBDh]
  char v53; // [rsp+7Ch] [rbp-CBCh]
  char v54; // [rsp+7Dh] [rbp-CBBh]
  char v55; // [rsp+7Eh] [rbp-CBAh]
  char v56; // [rsp+96h] [rbp-CA2h]
  char v57; // [rsp+97h] [rbp-CA1h]
  __int64 v58; // [rsp+98h] [rbp-CA0h]
  __int64 v59; // [rsp+A0h] [rbp-C98h]
  char v60; // [rsp+CFh] [rbp-C69h]
  __int64 one; // [rsp+D0h] [rbp-C68h]
  char v62; // [rsp+DDh] [rbp-C5Bh]
  char v63; // [rsp+DEh] [rbp-C5Ah]
  char v64; // [rsp+DFh] [rbp-C59h]
  char flag; // [rsp+12Fh] [rbp-C09h]
  __int64 v66; // [rsp+150h] [rbp-BE8h]
  int v67[4]; // [rsp+160h] [rbp-BD8h] BYREF
  __int128 v68; // [rsp+170h] [rbp-BC8h]
  __int128 v69; // [rsp+180h] [rbp-BB8h]
  __int128 v70; // [rsp+190h] [rbp-BA8h]
  __int128 v71; // [rsp+1A0h] [rbp-B98h]
  __int128 v72; // [rsp+1B0h] [rbp-B88h]
  __int64 v73; // [rsp+1C0h] [rbp-B78h]
  __int128 v74; // [rsp+1D0h] [rbp-B68h] BYREF
  __int128 v75; // [rsp+1E0h] [rbp-B58h]
  __int128 v76; // [rsp+1F0h] [rbp-B48h]
  __int128 v77; // [rsp+200h] [rbp-B38h]
  __int128 v78; // [rsp+210h] [rbp-B28h]
  __int128 v79; // [rsp+220h] [rbp-B18h]
  __int64 v80; // [rsp+230h] [rbp-B08h]
  int v81[26]; // [rsp+238h] [rbp-B00h] BYREF
  int v82[178]; // [rsp+2A0h] [rbp-A98h] BYREF
  int v83[178]; // [rsp+568h] [rbp-7D0h] BYREF
  __int128 v84; // [rsp+830h] [rbp-508h]
  __int128 v85; // [rsp+840h] [rbp-4F8h]
  __int128 v86; // [rsp+850h] [rbp-4E8h]
  __int128 v87; // [rsp+860h] [rbp-4D8h]
  __int128 v88; // [rsp+870h] [rbp-4C8h]
  __int128 v89; // [rsp+880h] [rbp-4B8h]
  __int64 v90; // [rsp+890h] [rbp-4A8h]
  _BYTE v91[24]; // [rsp+898h] [rbp-4A0h] BYREF
  _BYTE v92[24]; // [rsp+8B0h] [rbp-488h] BYREF
  _BYTE v93[71]; // [rsp+8C8h] [rbp-470h] BYREF
  bool v94; // [rsp+90Fh] [rbp-429h]
  int v95[2]; // [rsp+910h] [rbp-428h] BYREF
  int v96[2]; // [rsp+918h] [rbp-420h] BYREF
  __int64 v97; // [rsp+920h] [rbp-418h]
  _QWORD v98[6]; // [rsp+928h] [rbp-410h] BYREF
  _BYTE v99[3]; // [rsp+958h] [rbp-3E0h] BYREF
  char v100; // [rsp+95Bh] [rbp-3DDh]
  char v101; // [rsp+95Ch] [rbp-3DCh]
  char v102; // [rsp+95Dh] [rbp-3DBh]
  char v103; // [rsp+95Eh] [rbp-3DAh] BYREF
  char v104; // [rsp+95Fh] [rbp-3D9h]
  _QWORD v105[2]; // [rsp+960h] [rbp-3D8h] BYREF
  _QWORD v106[3]; // [rsp+970h] [rbp-3C8h] BYREF
  _QWORD v107[3]; // [rsp+988h] [rbp-3B0h] BYREF
  _BYTE v108[48]; // [rsp+9A0h] [rbp-398h] BYREF
  __int128 v109; // [rsp+9D0h] [rbp-368h] BYREF
  __int128 v110; // [rsp+9E0h] [rbp-358h]
  _QWORD v111[3]; // [rsp+9F0h] [rbp-348h] BYREF
  _QWORD v112[3]; // [rsp+A08h] [rbp-330h] BYREF
  _BYTE v113[48]; // [rsp+A20h] [rbp-318h] BYREF
  _OWORD v114[3]; // [rsp+A50h] [rbp-2E8h] BYREF
  __int128 v115; // [rsp+A88h] [rbp-2B0h]
  __int64 v116; // [rsp+A98h] [rbp-2A0h] BYREF
  __int128 v117; // [rsp+AA0h] [rbp-298h]
  const char *v118; // [rsp+AB0h] [rbp-288h] BYREF
  __int64 v119; // [rsp+AB8h] [rbp-280h]
  __int128 v120; // [rsp+AC0h] [rbp-278h]
  const char *v121; // [rsp+AD0h] [rbp-268h] BYREF
  __int64 v122; // [rsp+AD8h] [rbp-260h]
  _BYTE v123[48]; // [rsp+AE0h] [rbp-258h] BYREF
  __int128 v124; // [rsp+B10h] [rbp-228h] BYREF
  __int128 v125; // [rsp+B20h] [rbp-218h]
  _QWORD v126[2]; // [rsp+B30h] [rbp-208h] BYREF
  _BYTE v127[48]; // [rsp+B40h] [rbp-1F8h] BYREF
  __int128 v128; // [rsp+B70h] [rbp-1C8h] BYREF
  __int128 v129; // [rsp+B88h] [rbp-1B0h]
  _BYTE v130[48]; // [rsp+B98h] [rbp-1A0h] BYREF
  __int64 v131; // [rsp+BC8h] [rbp-170h]
  __int64 v132; // [rsp+BD0h] [rbp-168h] BYREF
  __int64 v133; // [rsp+BD8h] [rbp-160h] BYREF
  _BYTE v134[48]; // [rsp+BE0h] [rbp-158h] BYREF
  __int128 v135; // [rsp+C10h] [rbp-128h] BYREF
  __int128 v136; // [rsp+C20h] [rbp-118h]
  _QWORD v137[2]; // [rsp+C30h] [rbp-108h] BYREF
  _BYTE v138[48]; // [rsp+C40h] [rbp-F8h] BYREF
  __int128 v139; // [rsp+C70h] [rbp-C8h] BYREF
  __int128 v140; // [rsp+C88h] [rbp-B0h]
  char v141; // [rsp+C9Fh] [rbp-99h]
  __int64 *v142; // [rsp+CB0h] [rbp-88h]
  __int64 (__fastcall *v143)(); // [rsp+CB8h] [rbp-80h]
  __int64 *v144; // [rsp+CC0h] [rbp-78h]
  __int64 (__fastcall *v145)(); // [rsp+CC8h] [rbp-70h]
  _QWORD *v146; // [rsp+CD0h] [rbp-68h]
  __int64 (__fastcall *v147)(); // [rsp+CD8h] [rbp-60h]
  _QWORD *v148; // [rsp+CE0h] [rbp-58h]
  __int64 (__fastcall *v149)(); // [rsp+CE8h] [rbp-50h]
  const char **v150; // [rsp+CF0h] [rbp-48h]
  __int64 (__fastcall *v151)(); // [rsp+CF8h] [rbp-40h]
  const char **v152; // [rsp+D00h] [rbp-38h]
  __int64 (__fastcall *v153)(); // [rsp+D08h] [rbp-30h]
  _QWORD *v154; // [rsp+D10h] [rbp-28h]
  __int64 (__fastcall *v155)(); // [rsp+D18h] [rbp-20h]
  _QWORD *v156; // [rsp+D20h] [rbp-18h]
  __int64 (__fastcall *v157)(); // [rsp+D28h] [rbp-10h]
  __int64 v158; // [rsp+D30h] [rbp-8h]

  v141 = 1;
  uu_rm::uu_app(v83);
  clap_builder::builder::command::Command::after_help(
    (int)v82,
    (int)v83,
    (int)aByDefaultRmDoe,
    493,
    v2,
    v3,
    v23,
    v26,
    v29,
    v33,
    v36,
    v38,
    v41,
    v43,
    v45,
    v47,
    v49,
    v50);
  v141 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v81, (int)v82, a1, a2, v4, v5, v24, v27, v30, v34);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v74, v81);
  if ( (_QWORD)v74 != 0x8000000000000000LL )
  {
    v90 = v80;
    v89 = v79;
    v88 = v78;
    v87 = v77;
    v86 = v76;
    v85 = v75;
    v84 = v74;
    v73 = v80;
    v72 = v79;
    v71 = v78;
    v70 = v77;
    v69 = v76;
    v68 = v75;
    *(_OWORD *)v67 = v74;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v93,
      v67,
      aFiles,
      *(&uu_rm::ARG_FILES + 1),
      &off_113FB8);
    core::option::Option<T>::map(v92, v93);
    core::option::Option<T>::unwrap_or_default(v91, v92);
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v67,
             aForce,
             *(&uu_rm::OPT_FORCE + 1),
             &off_113FD0);
    if ( (flag & 1) != 0 )
    {
      v6 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of(
             v67,
             aForce,
             *(&uu_rm::OPT_FORCE + 1),
             &off_113FE8);
      *(_QWORD *)v95 = core::option::Option<T>::unwrap_or(v6, v10, 0LL);
      v11 = (__int64)*(&uu_rm::OPT_PROMPT + 1);
      v12 = (__int64)*(&uu_rm::OPT_PROMPT_MORE + 1);
      v13 = (__int64)*(&uu_rm::OPT_INTERACTIVE + 1);
      v98[0] = aPrompt;
      v98[1] = v11;
      v98[2] = aPromptMore;
      v98[3] = v12;
      v98[4] = aInteractive;
      v98[5] = v13;
      *(_QWORD *)v96 = core::slice::<impl [T]>::iter(v98, 3LL);
      v97 = v14;
      v94 = (<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
               (int)v96,
               (int)v67,
               (int)v95,
               v96[0],
               v15,
               v16,
               v25,
               v28,
               v31,
               v35,
               v37,
               v39,
               v42,
               v44) & 1) == 0;
    }
    else
    {
      v94 = 0;
    }
    if ( (alloc::vec::Vec<T,A>::is_empty(v91) & 1) != 0 && (flag & 1) == 0 )
    {
      v66 = uucore::mods::error::UUsageError::new(
              1,
              (int)aMissingOperand,
              15,
              v7,
              v8,
              v9,
              v25,
              v28,
              v31,
              v35,
              v37,
              v39,
              (int)v42,
              v44,
              v46,
              v48);
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(v91);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v67);
      return v66;
    }
    if ( v94 )
    {
      v104 = 0;
    }
    else
    {
      v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
              v67,
              aPrompt,
              *(&uu_rm::OPT_PROMPT + 1),
              &off_114000);
      if ( (v64 & 1) != 0 )
      {
        v104 = 2;
      }
      else
      {
        v63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                v67,
                aPromptMore,
                *(&uu_rm::OPT_PROMPT_MORE + 1),
                &off_114018);
        if ( (v63 & 1) != 0 )
        {
          v104 = 1;
        }
        else
        {
          v62 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                  v67,
                  aInteractive,
                  *(&uu_rm::OPT_INTERACTIVE + 1));
          if ( (v62 & 1) != 0 )
          {
            one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
                    v67,
                    aInteractive,
                    *(&uu_rm::OPT_INTERACTIVE + 1),
                    &off_114030);
            v158 = one;
            if ( !one )
              core::option::unwrap_failed(&off_114048);
            v58 = alloc::string::String::as_str(v158);
            v59 = v17;
            if ( (core::str::traits::<impl core::cmp::PartialEq for str>::eq(v58, v17, aNever, 5LL) & 1) != 0 )
            {
              v104 = 0;
            }
            else
            {
              v57 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v58, v59, aOnce, 4LL);
              if ( (v57 & 1) != 0 )
              {
                v104 = 1;
              }
              else
              {
                v56 = core::str::traits::<impl core::cmp::PartialEq for str>::eq(v58, v59, aAlways, 6LL);
                if ( (v56 & 1) == 0 )
                {
                  v105[0] = v58;
                  v105[1] = v59;
                  v154 = v105;
                  v155 = <&T as core::fmt::Display>::fmt;
                  *(_QWORD *)&v110 = v105;
                  *((_QWORD *)&v110 + 1) = <&T as core::fmt::Display>::fmt;
                  v109 = v110;
                  core::fmt::Arguments::new_v1(v108, &off_114060, &v109);
                  alloc::fmt::format(v107, v108);
                  v106[0] = v107[0];
                  v106[1] = v107[1];
                  v106[2] = v107[2];
                  v66 = uucore::mods::error::USimpleError::new(1LL, v106);
                  goto LABEL_12;
                }
                v104 = 2;
              }
            }
          }
          else
          {
            v104 = 3;
          }
        }
      }
    }
    v60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v67,
            aOneFileSystem,
            *(&uu_rm::OPT_ONE_FILE_SYSTEM + 1),
            &off_114080);
    v54 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v67,
            aNoPreserveRoot,
            *(&uu_rm::OPT_NO_PRESERVE_ROOT + 1),
            &off_114098) ^ 1;
    v55 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v67,
            aRecursive,
            *(&uu_rm::OPT_RECURSIVE + 1),
            &off_1140B0);
    v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v67,
            aDir,
            *(&uu_rm::OPT_DIR + 1),
            &off_1140C8);
    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v67,
            aVerbose,
            *(&uu_rm::OPT_VERBOSE + 1),
            &off_1140E0);
    v99[0] = flag & 1;
    v103 = v104;
    v99[1] = v60 & 1;
    v99[2] = v54 & 1;
    v100 = v55 & 1;
    v101 = v53 & 1;
    v102 = v52 & 1;
    v51 = <uu_rm::InteractiveMode as core::cmp::PartialEq>::eq(&v103, &unk_17810);
    if ( (v51 & 1) != 0 && ((v100 & 1) != 0 || (unsigned __int64)alloc::vec::Vec<T,A>::len(v91) > 3) )
    {
      v116 = alloc::vec::Vec<T,A>::len(v91);
      v144 = &v116;
      v145 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v115 = &v116;
      *((_QWORD *)&v115 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v91) > 1 )
      {
        v118 = aArguments;
        v119 = 9LL;
      }
      else
      {
        v118 = aArgument;
        v119 = 8LL;
      }
      v152 = &v118;
      v153 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v117 = &v118;
      *((_QWORD *)&v117 + 1) = <&T as core::fmt::Display>::fmt;
      if ( (v100 & 1) != 0 )
      {
        v121 = aRecursively;
        v122 = 13LL;
      }
      else
      {
        v121 = asc_17951;
        v122 = 1LL;
      }
      v150 = &v121;
      v151 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v120 = &v121;
      *((_QWORD *)&v120 + 1) = <&T as core::fmt::Display>::fmt;
      v114[0] = v115;
      v114[1] = v117;
      v114[2] = v120;
      core::fmt::Arguments::new_v1(v113, &off_1140F8, v114);
      alloc::fmt::format(v112, v113);
      v111[0] = v112[0];
      v111[1] = v112[1];
      v111[2] = v112[2];
      v126[0] = uucore::util_name();
      v126[1] = v19;
      v148 = v126;
      v149 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v125 = v126;
      *((_QWORD *)&v125 + 1) = <&T as core::fmt::Display>::fmt;
      v124 = v125;
      core::fmt::Arguments::new_v1(v123, &unk_113F58, &v124);
      std::io::stdio::_eprint(v123);
      v156 = v111;
      v157 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v129 = v111;
      *((_QWORD *)&v129 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v128 = v129;
      core::fmt::Arguments::new_v1(v127, &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v128);
      std::io::stdio::_eprint(v127);
      core::fmt::Arguments::new_const(v130, &off_114128);
      std::io::stdio::_eprint(v130);
      v132 = std::io::stdio::stderr();
      v131 = <std::io::stdio::Stderr as std::io::Write>::flush(&v132);
      if ( v131 )
      {
        v133 = v131;
        v137[0] = uucore::util_name();
        v137[1] = v22;
        v146 = v137;
        v147 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v136 = v137;
        *((_QWORD *)&v136 + 1) = <&T as core::fmt::Display>::fmt;
        v135 = v136;
        core::fmt::Arguments::new_v1(v134, &unk_113F58, &v135);
        std::io::stdio::_eprint(v134);
        v142 = &v133;
        v143 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v140 = &v133;
        *((_QWORD *)&v140 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        v139 = v140;
        core::fmt::Arguments::new_v1(v138, &unk_113F78, &v139);
        std::io::stdio::_eprint(v138);
        std::process::exit(1);
      }
      yes = uucore::read_yes();
      if ( (yes & 1) == 0 )
      {
        v66 = 0LL;
        core::ptr::drop_in_place<alloc::string::String>(v111);
        goto LABEL_12;
      }
      core::ptr::drop_in_place<alloc::string::String>(v111);
    }
    v18 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v91);
    v32 = uu_rm::remove(v18, v20, v99);
    if ( (v32 & 1) == 0 )
    {
      v66 = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(v91);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v67);
      return v66;
    }
    v66 = <T as core::convert::Into<U>>::into(1LL, &off_114138);
    goto LABEL_12;
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v74 + 1),
           &off_114150);
}
