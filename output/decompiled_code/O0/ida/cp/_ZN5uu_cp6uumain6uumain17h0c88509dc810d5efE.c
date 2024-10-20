__int64 __fastcall uu_cp::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v26; // [rsp+0h] [rbp-CC8h]
  struct _Unwind_Exception *v27; // [rsp+0h] [rbp-CC8h]
  int v28; // [rsp+8h] [rbp-CC0h]
  int v29; // [rsp+8h] [rbp-CC0h]
  struct _Unwind_Exception *v30; // [rsp+10h] [rbp-CB8h]
  int v31; // [rsp+10h] [rbp-CB8h]
  __int64 v32; // [rsp+10h] [rbp-CB8h]
  int v33; // [rsp+18h] [rbp-CB0h]
  int v34; // [rsp+18h] [rbp-CB0h]
  __int64 v35; // [rsp+18h] [rbp-CB0h]
  int v36; // [rsp+20h] [rbp-CA8h]
  int v37; // [rsp+28h] [rbp-CA0h]
  int v38; // [rsp+30h] [rbp-C98h]
  int v39; // [rsp+38h] [rbp-C90h]
  struct _Unwind_Exception *v40; // [rsp+40h] [rbp-C88h]
  int v41; // [rsp+48h] [rbp-C80h]
  char v42; // [rsp+7Fh] [rbp-C49h]
  __int64 v43; // [rsp+80h] [rbp-C48h]
  __int64 v44; // [rsp+98h] [rbp-C30h]
  __int64 v45; // [rsp+A0h] [rbp-C28h]
  char v46; // [rsp+CFh] [rbp-BF9h]
  __int64 v47; // [rsp+E0h] [rbp-BE8h]
  int v48[4]; // [rsp+F0h] [rbp-BD8h] BYREF
  __int128 v49; // [rsp+100h] [rbp-BC8h]
  __int128 v50; // [rsp+110h] [rbp-BB8h]
  __int128 v51; // [rsp+120h] [rbp-BA8h]
  __int128 v52; // [rsp+130h] [rbp-B98h]
  __int128 v53; // [rsp+140h] [rbp-B88h]
  __int64 v54; // [rsp+150h] [rbp-B78h]
  int v55[178]; // [rsp+158h] [rbp-B70h] BYREF
  __int64 v56; // [rsp+420h] [rbp-8A8h] BYREF
  _BYTE v57[720]; // [rsp+428h] [rbp-8A0h] BYREF
  __int64 v58; // [rsp+6F8h] [rbp-5D0h]
  _BYTE v59[48]; // [rsp+700h] [rbp-5C8h] BYREF
  __int128 v60; // [rsp+730h] [rbp-598h] BYREF
  __int128 v61; // [rsp+748h] [rbp-580h]
  _BYTE v62[24]; // [rsp+758h] [rbp-570h] BYREF
  _OWORD v63[6]; // [rsp+770h] [rbp-558h] BYREF
  __int64 v64; // [rsp+7D0h] [rbp-4F8h]
  int v65[4]; // [rsp+7E0h] [rbp-4E8h] BYREF
  __int128 v66; // [rsp+7F0h] [rbp-4D8h]
  __int128 v67; // [rsp+800h] [rbp-4C8h]
  __int128 v68; // [rsp+810h] [rbp-4B8h] BYREF
  __int128 v69; // [rsp+820h] [rbp-4A8h] BYREF
  _BYTE v70[80]; // [rsp+830h] [rbp-498h] BYREF
  _BYTE v71[80]; // [rsp+880h] [rbp-448h] BYREF
  _OWORD v72[9]; // [rsp+8D0h] [rbp-3F8h] BYREF
  _BYTE v73[24]; // [rsp+960h] [rbp-368h] BYREF
  _BYTE v74[24]; // [rsp+978h] [rbp-350h] BYREF
  _BYTE v75[112]; // [rsp+990h] [rbp-338h] BYREF
  __int128 v76; // [rsp+A00h] [rbp-2C8h] BYREF
  __int64 v77; // [rsp+A10h] [rbp-2B8h]
  __int128 v78; // [rsp+A20h] [rbp-2A8h] BYREF
  __int64 v79; // [rsp+A30h] [rbp-298h]
  _BYTE v80[64]; // [rsp+A40h] [rbp-288h] BYREF
  _BYTE v81[64]; // [rsp+A80h] [rbp-248h] BYREF
  _OWORD v82[5]; // [rsp+AC0h] [rbp-208h] BYREF
  __m256i v83; // [rsp+B10h] [rbp-1B8h]
  _QWORD src[8]; // [rsp+B30h] [rbp-198h] BYREF
  _QWORD dest[8]; // [rsp+B70h] [rbp-158h] BYREF
  _BYTE v86[48]; // [rsp+BB0h] [rbp-118h] BYREF
  __int128 v87; // [rsp+BE0h] [rbp-E8h] BYREF
  __int128 v88; // [rsp+BF0h] [rbp-D8h]
  _QWORD v89[2]; // [rsp+C00h] [rbp-C8h] BYREF
  _BYTE v90[48]; // [rsp+C10h] [rbp-B8h] BYREF
  __int128 v91; // [rsp+C40h] [rbp-88h] BYREF
  __int128 v92; // [rsp+C50h] [rbp-78h]
  char v93; // [rsp+C63h] [rbp-65h]
  char v94; // [rsp+C64h] [rbp-64h]
  char v95; // [rsp+C65h] [rbp-63h]
  char v96; // [rsp+C66h] [rbp-62h]
  char v97; // [rsp+C67h] [rbp-61h]
  _QWORD *v98; // [rsp+C78h] [rbp-50h]
  __int64 (__fastcall *v99)(); // [rsp+C80h] [rbp-48h]
  _QWORD *v100; // [rsp+C88h] [rbp-40h]
  __int64 (__fastcall *v101)(); // [rsp+C90h] [rbp-38h]
  _BYTE *v102; // [rsp+C98h] [rbp-30h]
  __int64 (__fastcall *v103)(); // [rsp+CA0h] [rbp-28h]
  __int64 v104; // [rsp+CA8h] [rbp-20h]
  int v105; // [rsp+CB0h] [rbp-18h]

  v96 = 0;
  v95 = 0;
  v94 = 0;
  v93 = 0;
  v97 = 1;
  uu_cp::uu_app(v55);
  v97 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v48, (int)v55, a1, a2, v2, v3, v26, v28, v30, v33);
  v94 = 1;
  v95 = 1;
  if ( *(_QWORD *)v48 == 0x8000000000000000LL )
  {
    v95 = 0;
    v96 = 1;
    v56 = *(_QWORD *)&v48[2];
    uu_cp::uu_app(v57);
    v46 = clap_builder::error::Error<F>::kind(&v56);
    v57[719] = v46;
    if ( v46 == 12LL )
    {
      v45 = clap_builder::builder::command::Command::print_help(v57);
      v44 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v45);
      v58 = v44;
      if ( v44 )
      {
        v47 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v58,
                &off_17EA78);
LABEL_13:
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(v57);
        if ( (v96 & 1) != 0 )
          core::ptr::drop_in_place<clap_builder::error::Error>(&v56);
        v96 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v46 != 14LL )
      {
        v96 = 0;
        v104 = <clap_builder::error::Error as uucore::mods::error::UClapError<uucore::mods::error::ClapErrorWrapper>>::with_exit_code(
                 v56,
                 1LL);
        v105 = v4;
        v43 = alloc::alloc::exchange_malloc(16LL, 8LL);
        v5 = v105;
        *(_QWORD *)v43 = v104;
        *(_DWORD *)(v43 + 8) = v5;
        v47 = v43;
        goto LABEL_13;
      }
      clap_builder::builder::command::Command::render_version(v62, v57);
      v102 = v62;
      v103 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v61 = v62;
      *((_QWORD *)&v61 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v60 = v61;
      core::fmt::Arguments::new_v1(v59, anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168, &v60);
      std::io::stdio::_print(v59);
      core::ptr::drop_in_place<alloc::string::String>(v62);
    }
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v57);
    core::ptr::drop_in_place<clap_builder::error::Error>(&v56);
    v96 = 0;
  }
  else if ( *(_QWORD *)v48 != 0x8000000000000000LL )
  {
    v94 = 0;
    v64 = v54;
    v63[5] = v53;
    v63[4] = v52;
    v63[3] = v51;
    v63[2] = v50;
    v63[1] = v49;
    v63[0] = *(_OWORD *)v48;
    uu_cp::Options::from_matches(v71, v63);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v70, v71);
    if ( *(_QWORD *)v70 == 0x8000000000000000LL )
    {
      v72[3] = *(_OWORD *)&v70[56];
      v72[2] = *(_OWORD *)&v70[40];
      v72[1] = *(_OWORD *)&v70[24];
      v72[0] = *(_OWORD *)&v70[8];
      v47 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              v72,
              &off_17EB68);
    }
    else
    {
      v72[8] = *(_OWORD *)&v70[64];
      v72[7] = *(_OWORD *)&v70[48];
      v72[6] = *(_OWORD *)&v70[32];
      v72[5] = *(_OWORD *)&v70[16];
      v72[4] = *(_OWORD *)v70;
      v69 = *(_OWORD *)&v70[64];
      v68 = *(_OWORD *)&v70[48];
      v67 = *(_OWORD *)&v70[32];
      v66 = *(_OWORD *)&v70[16];
      *(_OWORD *)v65 = *(_OWORD *)v70;
      v42 = <uu_cp::OverwriteMode as core::cmp::PartialEq>::eq((char *)&v68 + 12, &unk_20F8B);
      if ( (v42 & 1) != 0 && (core::cmp::PartialEq::ne((char *)&v69 + 12, &unk_20F8D) & 1) != 0 )
      {
        v9 = (char **)aOptionsBackupA;
        v22 = uucore::mods::error::UUsageError::new(
                uu_cp::EXIT_ERR,
                (int)aOptionsBackupA,
                56,
                v6,
                v7,
                v8,
                (int)v27,
                v29,
                v31,
                v34,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
        v47 = v22;
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::remove_many(v75, v63, aPaths, 5LL, &off_17EB38);
        core::option::Option<T>::map(v74, v75);
        core::option::Option<T>::unwrap_or_default(v73, v74);
        uu_cp::parse_path_args(v81, v73, v65);
        <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v80, v81);
        if ( *(_QWORD *)v80 == 13LL )
        {
          v83 = *(__m256i *)&v80[24];
          v82[4] = *(_OWORD *)&v80[8];
          v77 = *(_QWORD *)&v80[24];
          v76 = *(_OWORD *)&v80[8];
          v79 = *(_QWORD *)&v80[48];
          v78 = *(_OWORD *)&v80[32];
          v32 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v76);
          v35 = v10;
          v11 = <std::path::PathBuf as core::ops::deref::Deref>::deref(&v78);
          LODWORD(v12) = v32;
          uu_cp::copy(src, v32, v35, v11, v13, v65);
          v93 = 1;
          if ( src[0] != 13LL )
          {
            v93 = 0;
            v12 = src;
            memcpy(dest, src, sizeof(dest));
            v14 = 4LL;
            if ( (unsigned __int64)(dest[0] - 2LL) <= 0xA )
              v14 = dest[0] - 2LL;
            if ( v14 != 3 )
            {
              v15 = uucore::util_name();
              v27 = v16;
              v29 = v15;
              v89[0] = v15;
              v89[1] = v16;
              v100 = v89;
              v101 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v88 = v89;
              *((_QWORD *)&v88 + 1) = <&T as core::fmt::Display>::fmt;
              v87 = v88;
              core::fmt::Arguments::new_v1(v86, &unk_17EA18, &v87);
              std::io::stdio::_eprint(v86);
              v98 = dest;
              v99 = <uu_cp::Error as core::fmt::Display>::fmt;
              *(_QWORD *)&v92 = dest;
              *((_QWORD *)&v92 + 1) = <uu_cp::Error as core::fmt::Display>::fmt;
              v91 = v92;
              v12 = &unk_17EA38;
              core::fmt::Arguments::new_v1(v90, &unk_17EA38, &v91);
              std::io::stdio::_eprint(v90);
            }
            uucore::mods::error::set_exit_code(uu_cp::EXIT_ERR);
            core::ptr::drop_in_place<uu_cp::Error>(dest);
          }
          core::ptr::drop_in_place<std::path::PathBuf>(&v78);
          core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v76);
          core::ptr::drop_in_place<uu_cp::Options>((int)v65, (int)v12, v17, v18, v19, v20, v27, v29);
          if ( src[0] != 13LL && (v93 & 1) != 0 )
            core::ptr::drop_in_place<uu_cp::Error>(src);
          v93 = 0;
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v63);
          goto LABEL_14;
        }
        v82[3] = *(_OWORD *)&v80[48];
        v82[2] = *(_OWORD *)&v80[32];
        v82[1] = *(_OWORD *)&v80[16];
        v82[0] = *(_OWORD *)v80;
        v9 = &off_17EB50;
        v22 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                v82,
                &off_17EB50);
        v47 = v22;
      }
      core::ptr::drop_in_place<uu_cp::Options>((int)v65, (int)v9, v21, v22, v23, v24, v27, v29);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v63);
LABEL_19:
    v94 = 0;
    v95 = 0;
    return v47;
  }
LABEL_14:
  v47 = 0LL;
  if ( *(_QWORD *)v48 == 0x8000000000000000LL )
  {
    if ( (v95 & 1) != 0 )
      core::ptr::drop_in_place<clap_builder::error::Error>(&v48[2]);
  }
  else if ( (v94 & 1) != 0 )
  {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v48);
  }
  v94 = 0;
  v95 = 0;
  return v47;
}
