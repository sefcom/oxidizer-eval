__int64 __fastcall alacritty_terminal::tty::terminfo_exists()
{
  __int128 **p_dest; // rbp
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  bool v4; // zf
  int v5; // edx
  void *v6; // rax
  __int64 v7; // rcx
  __int128 **v8; // r15
  __int128 **v9; // r15
  __int64 v10; // r14
  __int64 (__fastcall *v11)(); // r13
  int v12; // r12d
  __int128 *v13; // r13
  __int64 v14; // r14
  __int128 **v15; // rbx
  int v16; // r12d
  __int64 v17; // rbx
  __int128 **v18; // r14
  __int64 (__fastcall *v19)(); // r13
  int v20; // r12d
  __int128 **v21; // r14
  __int64 (__fastcall *v22)(); // rbx
  __int128 **v23; // r13
  int v24; // r12d
  __int128 **v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int128 **v28; // rbx
  __int128 **v29; // r14
  int v30; // r13d
  __int128 *v31; // r13
  __int64 v32; // rbx
  __int128 **v33; // r14
  __int128 **v34; // r15
  int v35; // r12d
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int128 *v38; // r15
  __int64 v39; // r14
  __int128 **v40; // rbx
  __int64 (__fastcall *v41)(); // r12
  int v42; // r13d
  __int128 *v43; // r15
  __int64 v44; // r14
  __int128 **v45; // rbx
  __int64 (__fastcall *v46)(); // r12
  int v47; // r13d
  __int128 *v48; // r15
  __int64 v49; // r14
  __int128 **v50; // rbx
  __int64 (__fastcall *v51)(); // r12
  int v52; // r13d
  __int128 *v53; // r15
  __int64 v54; // r14
  __int128 **v55; // rbx
  __int64 (__fastcall *v56)(); // r12
  int v57; // r13d
  __int128 *v58; // r15
  __int64 v59; // r14
  __int128 **v60; // rbx
  __int64 (__fastcall *v61)(); // r12
  int v62; // r13d
  __int128 *v63; // r15
  __int64 v64; // r14
  __int128 **v65; // rbx
  __int64 (__fastcall *v66)(); // r12
  int v67; // r13d
  __int128 *v68; // r15
  __int64 v69; // r14
  __int128 **v70; // rbx
  __int64 (__fastcall *v71)(); // r12
  int v72; // r13d
  __int128 *v73; // r15
  __int64 v74; // r14
  __int128 **v75; // rbx
  __int64 (__fastcall *v76)(); // r12
  int v77; // r13d
  __int64 v78; // r13
  __int64 (__fastcall *v79)(); // r14
  __int128 **v80; // rbx
  int v81; // r12d
  __int64 (__fastcall *v82)(); // r14
  __int128 **v83; // rbx
  int v84; // r12d
  __int64 (__fastcall *v85)(); // r14
  __int128 **v86; // rbx
  int v87; // r12d
  __int64 (__fastcall *v88)(); // r14
  __int128 **v89; // rbx
  int v90; // r12d
  __int64 (__fastcall *v91)(); // r14
  __int128 **v92; // rbx
  int v93; // r12d
  __int64 (__fastcall *v94)(); // r14
  __int128 **v95; // rbx
  __int128 **v96; // r13
  int v97; // r12d
  __int64 v99; // [rsp+0h] [rbp-1C8h]
  __int64 *v100; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v101)(); // [rsp+10h] [rbp-1B8h]
  __int64 v102; // [rsp+18h] [rbp-1B0h]
  __int128 **v103; // [rsp+20h] [rbp-1A8h]
  __int64 v104; // [rsp+28h] [rbp-1A0h]
  __int64 v105; // [rsp+30h] [rbp-198h] BYREF
  __int128 **v106; // [rsp+38h] [rbp-190h]
  __int64 v107; // [rsp+40h] [rbp-188h]
  __int64 v108; // [rsp+48h] [rbp-180h] BYREF
  __int128 **v109; // [rsp+50h] [rbp-178h]
  __int64 v110; // [rsp+58h] [rbp-170h]
  __int64 v111; // [rsp+60h] [rbp-168h]
  __int128 *v112; // [rsp+68h] [rbp-160h]
  __int64 v113; // [rsp+70h] [rbp-158h] BYREF
  __int128 **v114; // [rsp+78h] [rbp-150h]
  __int64 v115; // [rsp+80h] [rbp-148h] BYREF
  __int64 v116; // [rsp+88h] [rbp-140h]
  __int16 v117; // [rsp+B0h] [rbp-118h]
  __int128 *dest; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-108h]
  __int64 **v120; // [rsp+C8h] [rbp-100h]
  __int64 v121; // [rsp+D0h] [rbp-F8h]
  __int64 v122; // [rsp+D8h] [rbp-F0h]
  _QWORD v123[3]; // [rsp+168h] [rbp-60h] BYREF
  __int64 (__fastcall *v124)(); // [rsp+180h] [rbp-48h]
  __int64 v125; // [rsp+188h] [rbp-40h]
  __int64 *v126; // [rsp+190h] [rbp-38h]

  v1 = 1LL;
  v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
         1LL,
         aAlacritty_3,
         9LL);
  if ( v2 )
    v1 = v2;
  else
    v3 = 0LL;
  v111 = v3;
  v99 = v1;
  v113 = v1;
  v114 = (__int128 **)(v1 + v3);
  v4 = (core::str::validations::next_code_point(&v113) & 1) == 0;
  v6 = &unk_110000;
  if ( !v4 )
    LODWORD(v6) = v5;
  v7 = 0LL;
  if ( (_DWORD)v6 != (_DWORD)&unk_110000 )
    v7 = (unsigned int)v6;
  v105 = v7;
  v100 = &v105;
  v101 = core::fmt::num::<impl core::fmt::LowerHex for usize>::fmt;
  dest = &xmmword_E8B60;
  v119 = 1LL;
  v122 = 0LL;
  v120 = &v100;
  v121 = 1LL;
  core::option::Option<T>::map_or_else(v123, &dest);
  std::env::var_os(&v105);
  v8 = v106;
  if ( __OFSUB__(-v105, 1LL) )
  {
    core::ptr::drop_in_place<std::env::VarError>(0x8000000000000000LL, v106);
    home::home_dir(&v108);
    v9 = v109;
    if ( v108 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(0x8000000000000000LL, v109);
    }
    else
    {
      v104 = v108;
      v17 = v110;
      std::path::Path::join(&v113, v109, v110, aTerminfo_0, 9LL);
      v18 = v114;
      std::path::Path::join(&v100, v114, v115, v99, v111);
      v19 = v101;
      std::path::Path::join(&v105, v101, v102, aAlacritty_3, 9LL);
      p_dest = v106;
      std::fs::metadata(&dest);
      v20 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
      core::ptr::drop_in_place<std::path::PathBuf>(v105, p_dest);
      core::ptr::drop_in_place<std::path::PathBuf>(v100, v19);
      core::ptr::drop_in_place<std::path::PathBuf>(v113, v18);
      if ( v20 != 2 )
        goto LABEL_25;
      std::path::Path::join(&v113, v9, v17, aTerminfo_0, 9LL);
      v21 = v114;
      std::path::Path::join(&v100, v114, v115, v123);
      v22 = v101;
      std::path::Path::join(&v105, v101, v102, aAlacritty_3, 9LL);
      v23 = v106;
      std::fs::metadata(&dest);
      v24 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
      core::ptr::drop_in_place<std::path::PathBuf>(v105, v23);
      core::ptr::drop_in_place<std::path::PathBuf>(v100, v22);
      core::ptr::drop_in_place<std::path::PathBuf>(v113, v21);
      if ( v24 != 2 )
      {
LABEL_25:
        v36 = v104;
        v37 = (__int64)v9;
LABEL_45:
        core::ptr::drop_in_place<std::path::PathBuf>(v36, v37);
        goto LABEL_46;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(v104, v9);
    }
  }
  else
  {
    v104 = v105;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v106);
    v112 = dest;
    v10 = v119;
    std::path::Path::join(&v113, v119, v120, v1, v111);
    p_dest = v114;
    std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
    v11 = v101;
    std::fs::metadata(&dest);
    v12 = (int)dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
    core::ptr::drop_in_place<std::path::PathBuf>(v100, v11);
    core::ptr::drop_in_place<std::path::PathBuf>(v113, p_dest);
    core::ptr::drop_in_place<std::path::PathBuf>(v112, v10);
    if ( v12 != 2 )
      goto LABEL_14;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v8);
    v13 = dest;
    v14 = v119;
    std::path::Path::join(&v113, v119, v120, v123);
    v15 = v114;
    std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
    p_dest = (__int128 **)v101;
    std::fs::metadata(&dest);
    v16 = (int)dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
    core::ptr::drop_in_place<std::path::PathBuf>(v100, p_dest);
    core::ptr::drop_in_place<std::path::PathBuf>(v113, v15);
    core::ptr::drop_in_place<std::path::PathBuf>(v13, v14);
    if ( v16 != 2 )
    {
LABEL_14:
      core::ptr::drop_in_place<regex_syntax::ast::Error>(v104, v8);
LABEL_46:
      LOBYTE(p_dest) = 1;
      goto LABEL_47;
    }
    core::ptr::drop_in_place<regex_syntax::ast::Error>(v104, v8);
  }
  std::env::var(&v100, aTerminfoDirs, 13LL);
  if ( v100 == (__int64 *)((char *)&dword_0 + 1) )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v100);
  }
  else
  {
    v126 = v100;
    v124 = v101;
    v25 = v103;
    v125 = v102;
    <char as core::str::pattern::Pattern>::into_searcher(&v115, 58LL, v102, v103);
    v113 = 0LL;
    v114 = v25;
    v117 = 1;
    p_dest = &dest;
    while ( 1 )
    {
      v26 = core::str::iter::SplitInternal<P>::next(&v113);
      v27 = v26;
      if ( !v26 )
        break;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(p_dest, v26);
      v112 = dest;
      v104 = v119;
      std::path::Path::join(&v105, v119, v120, v99, v111);
      v28 = p_dest;
      v29 = v106;
      std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
      p_dest = v109;
      std::fs::metadata(v28);
      v30 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
      core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
      core::ptr::drop_in_place<std::path::PathBuf>(v105, v29);
      core::ptr::drop_in_place<std::path::PathBuf>(v112, v104);
      if ( v30 == 2 )
      {
        p_dest = v28;
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v28, v27);
        v31 = dest;
        v32 = v119;
        std::path::Path::join(&v105, v119, v120, v123);
        v33 = v106;
        std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
        v34 = v109;
        std::fs::metadata(p_dest);
        v35 = (int)dest;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
        core::ptr::drop_in_place<std::path::PathBuf>(v108, v34);
        core::ptr::drop_in_place<std::path::PathBuf>(v105, v33);
        core::ptr::drop_in_place<std::path::PathBuf>(v31, v32);
        if ( v35 == 2 )
          continue;
      }
      core::ptr::drop_in_place<alloc::string::String>(v124, v125);
      goto LABEL_46;
    }
    core::ptr::drop_in_place<alloc::string::String>(v124, v125);
  }
  std::env::var(&v113, aPrefix_0, 6LL);
  if ( v113 != 1 )
  {
    v112 = (__int128 *)v114;
    v78 = v116;
    v104 = v115;
    std::path::Path::join(&v100, v115, v116, aEtcTerminfo_0, 12LL);
    v79 = v101;
    std::path::Path::join(&v105, v101, v102, v99, v111);
    v80 = v106;
    std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
    p_dest = v109;
    std::fs::metadata(&dest);
    v81 = (int)dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
    core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
    core::ptr::drop_in_place<std::path::PathBuf>(v105, v80);
    core::ptr::drop_in_place<std::path::PathBuf>(v100, v79);
    if ( v81 == 2 )
    {
      std::path::Path::join(&v100, v104, v78, aEtcTerminfo_0, 12LL);
      v82 = v101;
      std::path::Path::join(&v105, v101, v102, v123);
      v83 = v106;
      std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
      p_dest = v109;
      std::fs::metadata(&dest);
      v84 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
      core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
      core::ptr::drop_in_place<std::path::PathBuf>(v105, v83);
      core::ptr::drop_in_place<std::path::PathBuf>(v100, v82);
      if ( v84 == 2 )
      {
        std::path::Path::join(&v100, v104, v78, aLibTerminfo_0, 12LL);
        v85 = v101;
        std::path::Path::join(&v105, v101, v102, v99, v111);
        v86 = v106;
        std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
        p_dest = v109;
        std::fs::metadata(&dest);
        v87 = (int)dest;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
        core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
        core::ptr::drop_in_place<std::path::PathBuf>(v105, v86);
        core::ptr::drop_in_place<std::path::PathBuf>(v100, v85);
        if ( v87 == 2 )
        {
          std::path::Path::join(&v100, v104, v78, aLibTerminfo_0, 12LL);
          v88 = v101;
          std::path::Path::join(&v105, v101, v102, v123);
          v89 = v106;
          std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
          p_dest = v109;
          std::fs::metadata(&dest);
          v90 = (int)dest;
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
          core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
          core::ptr::drop_in_place<std::path::PathBuf>(v105, v89);
          core::ptr::drop_in_place<std::path::PathBuf>(v100, v88);
          if ( v90 == 2 )
          {
            std::path::Path::join(&v100, v104, v78, aShareTerminfo, 14LL);
            v91 = v101;
            std::path::Path::join(&v105, v101, v102, v99, v111);
            v92 = v106;
            std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
            p_dest = v109;
            std::fs::metadata(&dest);
            v93 = (int)dest;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
            core::ptr::drop_in_place<std::path::PathBuf>(v108, p_dest);
            core::ptr::drop_in_place<std::path::PathBuf>(v105, v92);
            core::ptr::drop_in_place<std::path::PathBuf>(v100, v91);
            if ( v93 == 2 )
            {
              std::path::Path::join(&v100, v104, v78, aShareTerminfo, 14LL);
              v94 = v101;
              std::path::Path::join(&v105, v101, v102, v123);
              v95 = v106;
              std::path::Path::join(&v108, v106, v107, aAlacritty_3, 9LL);
              v96 = v109;
              std::fs::metadata(&dest);
              v97 = (int)dest;
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
              core::ptr::drop_in_place<std::path::PathBuf>(v108, v96);
              core::ptr::drop_in_place<std::path::PathBuf>(v105, v95);
              core::ptr::drop_in_place<std::path::PathBuf>(v100, v94);
              if ( v97 == 2 )
              {
                core::ptr::drop_in_place<std::path::PathBuf>(v112, v104);
                goto LABEL_29;
              }
            }
          }
        }
      }
    }
    v36 = (__int64)v112;
    v37 = v104;
    goto LABEL_45;
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v113);
LABEL_29:
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aEtcTerminfo);
  v38 = dest;
  v39 = v119;
  std::path::Path::join(&v113, v119, v120, v99, v111);
  v40 = v114;
  std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
  v41 = v101;
  std::fs::metadata(&dest);
  v42 = (int)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
  core::ptr::drop_in_place<std::path::PathBuf>(v100, v41);
  core::ptr::drop_in_place<std::path::PathBuf>(v113, v40);
  core::ptr::drop_in_place<std::path::PathBuf>(v38, v39);
  LOBYTE(p_dest) = 1;
  if ( v42 == 2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aEtcTerminfo);
    v43 = dest;
    v44 = v119;
    std::path::Path::join(&v113, v119, v120, v123);
    v45 = v114;
    std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
    v46 = v101;
    std::fs::metadata(&dest);
    v47 = (int)dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
    core::ptr::drop_in_place<std::path::PathBuf>(v100, v46);
    core::ptr::drop_in_place<std::path::PathBuf>(v113, v45);
    core::ptr::drop_in_place<std::path::PathBuf>(v43, v44);
    if ( v47 == 2 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aLibTerminfo);
      v48 = dest;
      v49 = v119;
      std::path::Path::join(&v113, v119, v120, v99, v111);
      v50 = v114;
      std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
      v51 = v101;
      std::fs::metadata(&dest);
      v52 = (int)dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
      core::ptr::drop_in_place<std::path::PathBuf>(v100, v51);
      core::ptr::drop_in_place<std::path::PathBuf>(v113, v50);
      core::ptr::drop_in_place<std::path::PathBuf>(v48, v49);
      if ( v52 == 2 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aLibTerminfo);
        v53 = dest;
        v54 = v119;
        std::path::Path::join(&v113, v119, v120, v123);
        v55 = v114;
        std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
        v56 = v101;
        std::fs::metadata(&dest);
        v57 = (int)dest;
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
        core::ptr::drop_in_place<std::path::PathBuf>(v100, v56);
        core::ptr::drop_in_place<std::path::PathBuf>(v113, v55);
        core::ptr::drop_in_place<std::path::PathBuf>(v53, v54);
        if ( v57 == 2 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aUsrShareTermin);
          v58 = dest;
          v59 = v119;
          std::path::Path::join(&v113, v119, v120, v99, v111);
          v60 = v114;
          std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
          v61 = v101;
          std::fs::metadata(&dest);
          v62 = (int)dest;
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
          core::ptr::drop_in_place<std::path::PathBuf>(v100, v61);
          core::ptr::drop_in_place<std::path::PathBuf>(v113, v60);
          core::ptr::drop_in_place<std::path::PathBuf>(v58, v59);
          if ( v62 == 2 )
          {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aUsrShareTermin);
            v63 = dest;
            v64 = v119;
            std::path::Path::join(&v113, v119, v120, v123);
            v65 = v114;
            std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
            v66 = v101;
            std::fs::metadata(&dest);
            v67 = (int)dest;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
            core::ptr::drop_in_place<std::path::PathBuf>(v100, v66);
            core::ptr::drop_in_place<std::path::PathBuf>(v113, v65);
            core::ptr::drop_in_place<std::path::PathBuf>(v63, v64);
            if ( v67 == 2 )
            {
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aBootSystemData);
              v68 = dest;
              v69 = v119;
              std::path::Path::join(&v113, v119, v120, v99, v111);
              v70 = v114;
              std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
              v71 = v101;
              std::fs::metadata(&dest);
              v72 = (int)dest;
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
              core::ptr::drop_in_place<std::path::PathBuf>(v100, v71);
              core::ptr::drop_in_place<std::path::PathBuf>(v113, v70);
              core::ptr::drop_in_place<std::path::PathBuf>(v68, v69);
              if ( v72 == 2 )
              {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aBootSystemData);
                v73 = dest;
                v74 = v119;
                std::path::Path::join(&v113, v119, v120, v123);
                v75 = v114;
                std::path::Path::join(&v100, v114, v115, aAlacritty_3, 9LL);
                v76 = v101;
                std::fs::metadata(&dest);
                v77 = (int)dest;
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v119);
                LOBYTE(p_dest) = v77 != 2;
                core::ptr::drop_in_place<std::path::PathBuf>(v100, v76);
                core::ptr::drop_in_place<std::path::PathBuf>(v113, v75);
                core::ptr::drop_in_place<std::path::PathBuf>(v73, v74);
              }
            }
          }
        }
      }
    }
  }
LABEL_47:
  core::ptr::drop_in_place<alloc::string::String>(v123[0], v123[1]);
  return (unsigned int)p_dest;
}