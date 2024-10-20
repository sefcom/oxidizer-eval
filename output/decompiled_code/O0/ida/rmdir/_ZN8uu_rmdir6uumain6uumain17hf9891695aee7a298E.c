__int64 __fastcall uu_rmdir::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-998h]
  int v16; // [rsp+8h] [rbp-990h]
  struct _Unwind_Exception *v17; // [rsp+10h] [rbp-988h]
  int v18; // [rsp+18h] [rbp-980h]
  __int64 v19; // [rsp+18h] [rbp-980h]
  __int64 v20; // [rsp+20h] [rbp-978h]
  char is_symlink; // [rsp+2Fh] [rbp-969h]
  unsigned __int64 v22; // [rsp+68h] [rbp-930h]
  char v23; // [rsp+8Fh] [rbp-909h]
  unsigned __int64 v24; // [rsp+98h] [rbp-900h]
  __int64 v25; // [rsp+B0h] [rbp-8E8h]
  __int64 v26; // [rsp+D0h] [rbp-8C8h]
  __int64 v27; // [rsp+D8h] [rbp-8C0h]
  char v28; // [rsp+F6h] [rbp-8A2h]
  char v29; // [rsp+F7h] [rbp-8A1h]
  char flag; // [rsp+10Fh] [rbp-889h]
  __int64 v31; // [rsp+120h] [rbp-878h]
  _OWORD v32[6]; // [rsp+130h] [rbp-868h] BYREF
  __int64 v33; // [rsp+190h] [rbp-808h]
  __int128 v34; // [rsp+198h] [rbp-800h] BYREF
  __int128 v35; // [rsp+1A8h] [rbp-7F0h]
  __int128 v36; // [rsp+1B8h] [rbp-7E0h]
  __int128 v37; // [rsp+1C8h] [rbp-7D0h]
  __int128 v38; // [rsp+1D8h] [rbp-7C0h]
  __int128 v39; // [rsp+1E8h] [rbp-7B0h]
  __int64 v40; // [rsp+1F8h] [rbp-7A0h]
  int v41[26]; // [rsp+200h] [rbp-798h] BYREF
  int v42[178]; // [rsp+268h] [rbp-730h] BYREF
  __int128 v43; // [rsp+530h] [rbp-468h]
  __int128 v44; // [rsp+540h] [rbp-458h]
  __int128 v45; // [rsp+550h] [rbp-448h]
  __int128 v46; // [rsp+560h] [rbp-438h]
  __int128 v47; // [rsp+570h] [rbp-428h]
  __int128 v48; // [rsp+580h] [rbp-418h]
  __int64 v49; // [rsp+590h] [rbp-408h]
  unsigned __int16 v50; // [rsp+59Dh] [rbp-3FBh]
  unsigned __int8 v51; // [rsp+59Fh] [rbp-3F9h]
  _BYTE src[64]; // [rsp+5A0h] [rbp-3F8h] BYREF
  _BYTE v53[64]; // [rsp+5E0h] [rbp-3B8h] BYREF
  _BYTE v54[64]; // [rsp+620h] [rbp-378h] BYREF
  _BYTE v55[64]; // [rsp+660h] [rbp-338h] BYREF
  _BYTE dest[64]; // [rsp+6A0h] [rbp-2F8h] BYREF
  __int64 v57; // [rsp+6E0h] [rbp-2B8h]
  __int64 v58; // [rsp+6E8h] [rbp-2B0h]
  __int64 v59; // [rsp+6F0h] [rbp-2A8h] BYREF
  __int64 v60; // [rsp+6F8h] [rbp-2A0h]
  __int64 v61; // [rsp+700h] [rbp-298h]
  __int64 v62; // [rsp+708h] [rbp-290h]
  __int64 v63; // [rsp+710h] [rbp-288h]
  __int64 v64; // [rsp+718h] [rbp-280h]
  __int64 v65; // [rsp+720h] [rbp-278h] BYREF
  _DWORD v66[2]; // [rsp+728h] [rbp-270h] BYREF
  _BYTE v67[16]; // [rsp+730h] [rbp-268h] BYREF
  _BYTE v68[48]; // [rsp+740h] [rbp-258h] BYREF
  __int128 v69; // [rsp+770h] [rbp-228h] BYREF
  __int128 v70; // [rsp+780h] [rbp-218h]
  _QWORD v71[2]; // [rsp+790h] [rbp-208h] BYREF
  _BYTE v72[48]; // [rsp+7A0h] [rbp-1F8h] BYREF
  __int128 v73; // [rsp+7D0h] [rbp-1C8h] BYREF
  __int128 v74; // [rsp+7E0h] [rbp-1B8h]
  _BYTE v75[32]; // [rsp+7F0h] [rbp-1A8h] BYREF
  _BYTE v76[48]; // [rsp+810h] [rbp-188h] BYREF
  __int128 v77; // [rsp+840h] [rbp-158h] BYREF
  __int128 v78; // [rsp+850h] [rbp-148h]
  _QWORD v79[2]; // [rsp+860h] [rbp-138h] BYREF
  _BYTE v80[48]; // [rsp+870h] [rbp-128h] BYREF
  _OWORD v81[2]; // [rsp+8A0h] [rbp-F8h] BYREF
  __int128 v82; // [rsp+8C0h] [rbp-D8h]
  _BYTE v83[32]; // [rsp+8D0h] [rbp-C8h] BYREF
  __int128 v84; // [rsp+8F0h] [rbp-A8h]
  _BYTE v85[30]; // [rsp+900h] [rbp-98h] BYREF
  char v86; // [rsp+91Eh] [rbp-7Ah]
  char v87; // [rsp+91Fh] [rbp-79h]
  unsigned __int16 v88; // [rsp+930h] [rbp-68h]
  unsigned __int8 v89; // [rsp+932h] [rbp-66h]
  unsigned __int16 v90; // [rsp+934h] [rbp-64h]
  unsigned __int8 v91; // [rsp+936h] [rbp-62h]
  _BYTE *v92; // [rsp+938h] [rbp-60h]
  __int64 (__fastcall *v93)(); // [rsp+940h] [rbp-58h]
  _BYTE *v94; // [rsp+948h] [rbp-50h]
  __int64 (__fastcall *v95)(); // [rsp+950h] [rbp-48h]
  _BYTE *v96; // [rsp+958h] [rbp-40h]
  __int64 (__fastcall *v97)(); // [rsp+960h] [rbp-38h]
  _QWORD *v98; // [rsp+968h] [rbp-30h]
  __int64 (__fastcall *v99)(); // [rsp+970h] [rbp-28h]
  _QWORD *v100; // [rsp+978h] [rbp-20h]
  __int64 (__fastcall *v101)(); // [rsp+980h] [rbp-18h]
  __int64 v102; // [rsp+988h] [rbp-10h]
  unsigned __int64 v103; // [rsp+990h] [rbp-8h]

  v86 = 0;
  v87 = 1;
  uu_rmdir::uu_app(v42);
  v87 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v41, (int)v42, a1, a2, v2, v3, v15, v16, v17, v18);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v34, v41);
  if ( (_QWORD)v34 != 0x8000000000000000LL )
  {
    v49 = v40;
    v48 = v39;
    v47 = v38;
    v46 = v37;
    v45 = v36;
    v44 = v35;
    v43 = v34;
    v33 = v40;
    v32[5] = v39;
    v32[4] = v38;
    v32[3] = v37;
    v32[2] = v36;
    v32[1] = v35;
    v32[0] = v34;
    flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
             v32,
             aIgnoreFailOnNo,
             *(&uu_rmdir::OPT_IGNORE_FAIL_NON_EMPTY + 1),
             &off_FEB68);
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v32,
            aParents,
            *(&uu_rmdir::OPT_PARENTS + 1),
            &off_FEB80);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
            v32,
            aVerbose,
            *(&uu_rmdir::OPT_VERBOSE + 1),
            &off_FEB98);
    LOBYTE(v50) = flag & 1;
    HIBYTE(v50) = v29 & 1;
    v51 = v28 & 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(
      v55,
      v32,
      aDirs,
      *(&uu_rmdir::ARG_DIRS + 1),
      &off_FEBB0);
    core::option::Option<T>::unwrap_or_default(v54, v55);
    core::iter::traits::iterator::Iterator::map(v53, v54);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v53);
    memcpy(dest, src, sizeof(dest));
    while ( 1 )
    {
      v57 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(dest);
      v58 = v4;
      if ( !v57 )
      {
        v31 = 0LL;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v32);
        return v31;
      }
      v89 = v51;
      v88 = v50;
      v91 = v51;
      v90 = v50;
      uu_rmdir::remove(&v59, v57, v58, (v51 << 16) | (unsigned int)v50);
      v86 = 1;
      if ( v59 == 0 )
        goto LABEL_11;
      v86 = 0;
      v62 = v59;
      v63 = v60;
      v64 = v61;
      v65 = v59;
      v26 = v60;
      v27 = v61;
      if ( (v50 & 1) != 0 && (uu_rmdir::dir_not_empty(&v65, v60, v61) & 1) != 0 )
      {
LABEL_15:
        core::ptr::drop_in_place<std::io::error::Error>(&v65);
        v86 = 0;
      }
      else
      {
        uucore::mods::error::set_exit_code(1LL);
        v6 = std::path::Path::as_os_str(v26, v27);
        v25 = <std::ffi::os_str::OsStr as std::os::unix::ffi::os_str::OsStrExt>::as_bytes(v6, v7);
        v24 = v8;
        v66[0] = std::io::error::Error::raw_os_error(&v65);
        v66[1] = v9;
        v23 = <core::option::Option<T> as core::cmp::PartialEq>::eq(v66, &unk_15210);
        if ( (v23 & 1) != 0 && (core::slice::<impl [T]>::ends_with(v25, v24, asc_15607, 1LL) & 1) != 0 )
        {
          v22 = v24 - 1;
          if ( !v24 )
            core::panicking::panic_const::panic_const_sub_overflow(&off_FEBC8);
          v103 = v24 - 1;
          v102 = 1LL;
          if ( v22 > v24 )
            core::slice::index::slice_end_index_len_fail(v22, v24, &off_FEBE0);
          v10 = <std::ffi::os_str::OsStr as std::os::unix::ffi::os_str::OsStrExt>::from_bytes(v25, v22);
          v19 = std::path::<impl core::convert::AsRef<std::path::Path> for std::ffi::os_str::OsStr>::as_ref(v10, v11);
          v20 = v12;
          is_symlink = std::path::Path::is_symlink();
          if ( (is_symlink & 1) != 0 )
          {
            uu_rmdir::uumain::uumain::points_to_directory(v67, v19, v20);
            if ( (core::result::Result<T,E>::unwrap_or(v67, 1LL) & 1) != 0 )
            {
              v71[0] = uucore::util_name();
              v71[1] = v14;
              v98 = v71;
              v99 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v70 = v71;
              *((_QWORD *)&v70 + 1) = <&T as core::fmt::Display>::fmt;
              v69 = v70;
              core::fmt::Arguments::new_v1(v68, &unk_FEB08, &v69);
              std::io::stdio::_eprint(v68);
              <std::path::Path as os_display::native::Quotable>::quote(v75, v26, v27);
              v92 = v75;
              v93 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v74 = v75;
              *((_QWORD *)&v74 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
              v73 = v74;
              core::fmt::Arguments::new_v1(v72, &off_FEC28, &v73);
              std::io::stdio::_eprint(v72);
              goto LABEL_15;
            }
          }
        }
        v79[0] = uucore::util_name();
        v79[1] = v13;
        v100 = v79;
        v101 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v78 = v79;
        *((_QWORD *)&v78 + 1) = <&T as core::fmt::Display>::fmt;
        v77 = v78;
        core::fmt::Arguments::new_v1(v76, &unk_FEB08, &v77);
        std::io::stdio::_eprint(v76);
        <std::path::Path as os_display::native::Quotable>::quote(v83, v26, v27);
        v94 = v83;
        v95 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v82 = v83;
        *((_QWORD *)&v82 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        uucore::mods::error::strip_errno(v85, &v65);
        v96 = v85;
        v97 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v84 = v85;
        *((_QWORD *)&v84 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v81[0] = v82;
        v81[1] = v84;
        core::fmt::Arguments::new_v1(v80, &off_FEBF8, v81);
        std::io::stdio::_eprint(v80);
        core::ptr::drop_in_place<alloc::string::String>(v85);
        core::ptr::drop_in_place<std::io::error::Error>(&v65);
LABEL_11:
        if ( v59 != 0 && (v86 & 1) != 0 )
          core::ptr::drop_in_place<uu_rmdir::Error>(&v59);
        v86 = 0;
      }
    }
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           *((_QWORD *)&v34 + 1),
           &off_FEC48);
}
