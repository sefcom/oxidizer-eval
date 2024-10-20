char __fastcall uu_rm::remove_file(void *src, size_t n, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  char yes; // bp
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  char result; // al
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // r13
  char **v43; // rax
  __int64 v44; // rcx
  char ***v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  int fd; // [rsp+4h] [rbp-C94h] BYREF
  __int64 v54; // [rsp+8h] [rbp-C90h]
  __int64 v55; // [rsp+10h] [rbp-C88h] BYREF
  __int64 v56; // [rsp+18h] [rbp-C80h] BYREF
  __int64 v57; // [rsp+20h] [rbp-C78h] BYREF
  __int64 v58; // [rsp+28h] [rbp-C70h] BYREF
  __int64 v59; // [rsp+30h] [rbp-C68h] BYREF
  __int64 v60; // [rsp+38h] [rbp-C60h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C58h] BYREF
  int v62; // [rsp+48h] [rbp-C50h]
  __int16 v63; // [rsp+4Ch] [rbp-C4Ch]
  void *v64; // [rsp+50h] [rbp-C48h] BYREF
  _DWORD v65[2]; // [rsp+58h] [rbp-C40h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-C38h]
  void *v67; // [rsp+68h] [rbp-C30h] BYREF
  _QWORD v68[2]; // [rsp+70h] [rbp-C28h] BYREF
  void *v69; // [rsp+80h] [rbp-C18h] BYREF
  void *v70; // [rsp+88h] [rbp-C10h] BYREF
  _BYTE v71[8]; // [rsp+90h] [rbp-C08h] BYREF
  __int64 v72; // [rsp+98h] [rbp-C00h]
  __int64 v73; // [rsp+A0h] [rbp-BF8h]
  _QWORD v74[2]; // [rsp+A8h] [rbp-BF0h] BYREF
  _QWORD v75[2]; // [rsp+B8h] [rbp-BE0h] BYREF
  _QWORD v76[2]; // [rsp+C8h] [rbp-BD0h] BYREF
  _QWORD v77[2]; // [rsp+D8h] [rbp-BC0h] BYREF
  _QWORD v78[2]; // [rsp+E8h] [rbp-BB0h] BYREF
  _QWORD v79[2]; // [rsp+F8h] [rbp-BA0h] BYREF
  _QWORD v80[2]; // [rsp+108h] [rbp-B90h] BYREF
  _QWORD v81[2]; // [rsp+118h] [rbp-B80h] BYREF
  _QWORD v82[2]; // [rsp+128h] [rbp-B70h] BYREF
  _QWORD v83[2]; // [rsp+138h] [rbp-B60h] BYREF
  _QWORD v84[2]; // [rsp+148h] [rbp-B50h] BYREF
  _QWORD v85[2]; // [rsp+158h] [rbp-B40h] BYREF
  _QWORD v86[2]; // [rsp+168h] [rbp-B30h] BYREF
  _QWORD v87[2]; // [rsp+178h] [rbp-B20h] BYREF
  _QWORD v88[2]; // [rsp+188h] [rbp-B10h] BYREF
  _QWORD v89[2]; // [rsp+198h] [rbp-B00h] BYREF
  _QWORD v90[2]; // [rsp+1A8h] [rbp-AF0h] BYREF
  _QWORD v91[2]; // [rsp+1B8h] [rbp-AE0h] BYREF
  _QWORD v92[2]; // [rsp+1C8h] [rbp-AD0h] BYREF
  _QWORD v93[2]; // [rsp+1D8h] [rbp-AC0h] BYREF
  _QWORD v94[2]; // [rsp+1E8h] [rbp-AB0h] BYREF
  _QWORD v95[2]; // [rsp+1F8h] [rbp-AA0h] BYREF
  _QWORD v96[2]; // [rsp+208h] [rbp-A90h] BYREF
  _QWORD v97[2]; // [rsp+218h] [rbp-A80h] BYREF
  _QWORD v98[2]; // [rsp+228h] [rbp-A70h] BYREF
  _QWORD v99[2]; // [rsp+238h] [rbp-A60h] BYREF
  _QWORD v100[2]; // [rsp+248h] [rbp-A50h] BYREF
  _QWORD v101[2]; // [rsp+258h] [rbp-A40h] BYREF
  _QWORD v102[2]; // [rsp+268h] [rbp-A30h] BYREF
  _QWORD v103[2]; // [rsp+278h] [rbp-A20h] BYREF
  _QWORD v104[2]; // [rsp+288h] [rbp-A10h] BYREF
  _QWORD v105[2]; // [rsp+298h] [rbp-A00h] BYREF
  _QWORD v106[2]; // [rsp+2A8h] [rbp-9F0h] BYREF
  _QWORD v107[2]; // [rsp+2B8h] [rbp-9E0h] BYREF
  _QWORD v108[2]; // [rsp+2C8h] [rbp-9D0h] BYREF
  _QWORD v109[2]; // [rsp+2D8h] [rbp-9C0h] BYREF
  _QWORD v110[3]; // [rsp+2E8h] [rbp-9B0h] BYREF
  char v111; // [rsp+300h] [rbp-998h]
  _QWORD v112[3]; // [rsp+308h] [rbp-990h] BYREF
  char v113; // [rsp+320h] [rbp-978h]
  _QWORD v114[4]; // [rsp+328h] [rbp-970h] BYREF
  _QWORD v115[3]; // [rsp+348h] [rbp-950h] BYREF
  char v116; // [rsp+360h] [rbp-938h]
  _QWORD v117[3]; // [rsp+368h] [rbp-930h] BYREF
  char v118; // [rsp+380h] [rbp-918h]
  _QWORD v119[3]; // [rsp+388h] [rbp-910h] BYREF
  char v120; // [rsp+3A0h] [rbp-8F8h]
  _QWORD v121[3]; // [rsp+3A8h] [rbp-8F0h] BYREF
  char v122; // [rsp+3C0h] [rbp-8D8h]
  _QWORD v123[3]; // [rsp+3C8h] [rbp-8D0h] BYREF
  char v124; // [rsp+3E0h] [rbp-8B8h]
  _QWORD v125[3]; // [rsp+3E8h] [rbp-8B0h] BYREF
  char v126; // [rsp+400h] [rbp-898h]
  _QWORD srca[22]; // [rsp+408h] [rbp-890h] BYREF
  _QWORD v128[6]; // [rsp+4B8h] [rbp-7E0h] BYREF
  _QWORD v129[6]; // [rsp+4E8h] [rbp-7B0h] BYREF
  _QWORD v130[6]; // [rsp+518h] [rbp-780h] BYREF
  _QWORD v131[6]; // [rsp+548h] [rbp-750h] BYREF
  _QWORD v132[6]; // [rsp+578h] [rbp-720h] BYREF
  _QWORD v133[6]; // [rsp+5A8h] [rbp-6F0h] BYREF
  _QWORD v134[6]; // [rsp+5D8h] [rbp-6C0h] BYREF
  _QWORD v135[6]; // [rsp+608h] [rbp-690h] BYREF
  _QWORD v136[6]; // [rsp+638h] [rbp-660h] BYREF
  _QWORD v137[6]; // [rsp+668h] [rbp-630h] BYREF
  _QWORD v138[6]; // [rsp+698h] [rbp-600h] BYREF
  _QWORD v139[6]; // [rsp+6C8h] [rbp-5D0h] BYREF
  _QWORD v140[6]; // [rsp+6F8h] [rbp-5A0h] BYREF
  _QWORD v141[6]; // [rsp+728h] [rbp-570h] BYREF
  _QWORD v142[6]; // [rsp+758h] [rbp-540h] BYREF
  _QWORD v143[6]; // [rsp+788h] [rbp-510h] BYREF
  _QWORD v144[6]; // [rsp+7B8h] [rbp-4E0h] BYREF
  _QWORD v145[6]; // [rsp+7E8h] [rbp-4B0h] BYREF
  _QWORD v146[6]; // [rsp+818h] [rbp-480h] BYREF
  _QWORD v147[6]; // [rsp+848h] [rbp-450h] BYREF
  _QWORD v148[6]; // [rsp+878h] [rbp-420h] BYREF
  _QWORD v149[6]; // [rsp+8A8h] [rbp-3F0h] BYREF
  _QWORD v150[6]; // [rsp+8D8h] [rbp-3C0h] BYREF
  _QWORD v151[3]; // [rsp+908h] [rbp-390h] BYREF
  __int128 v152; // [rsp+920h] [rbp-378h]
  _QWORD v153[3]; // [rsp+938h] [rbp-360h] BYREF
  __int128 v154; // [rsp+950h] [rbp-348h]
  _QWORD v155[3]; // [rsp+968h] [rbp-330h] BYREF
  __int128 v156; // [rsp+980h] [rbp-318h]
  _QWORD v157[3]; // [rsp+998h] [rbp-300h] BYREF
  __int128 v158; // [rsp+9B0h] [rbp-2E8h]
  _QWORD v159[3]; // [rsp+9C8h] [rbp-2D0h] BYREF
  __int128 v160; // [rsp+9E0h] [rbp-2B8h]
  _QWORD v161[22]; // [rsp+9F8h] [rbp-2A0h] BYREF
  char **v162; // [rsp+AA8h] [rbp-1F0h] BYREF
  char **v163; // [rsp+AD8h] [rbp-1C0h] BYREF
  _QWORD dest[22]; // [rsp+B08h] [rbp-190h] BYREF
  _QWORD v165[7]; // [rsp+BB8h] [rbp-E0h] BYREF
  int v166; // [rsp+BF0h] [rbp-A8h]
  __int64 v167; // [rsp+C08h] [rbp-90h]

  v3 = a3;
  if ( !*(_BYTE *)(a3 + 6) )
    goto LABEL_53;
  if ( *(_BYTE *)(a3 + 6) != 2 )
    goto LABEL_13;
  std::sys::pal::unix::fs::lstat(srca);
  if ( srca[0] == 2LL )
  {
    v5 = srca[1];
    dest[1] = srca[1];
    dest[0] = 2LL;
    goto LABEL_7;
  }
  memcpy(dest, srca, sizeof(dest));
  if ( dest[0] == 2LL )
  {
    v5 = dest[1];
LABEL_7:
    std::io::error::repr_bitpacked::decode_repr(srca, v5);
    if ( LOBYTE(srca[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
    goto LABEL_13;
  }
  if ( (dest[7] & 0xF000) == 0xA000 )
  {
    v6 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = v3;
    v9 = *(_QWORD *)(v6 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v9);
    v81[0] = v7;
    v81[1] = v9;
    v3 = v8;
    v80[0] = v81;
    v80[1] = <&T as core::fmt::Display>::fmt;
    v131[0] = &unk_116AA0;
    v131[1] = 2LL;
    v131[4] = 0LL;
    v131[2] = v80;
    v131[3] = 1LL;
    std::io::stdio::_eprint(v131);
    v117[0] = 1LL;
    v117[1] = src;
    v117[2] = n;
    v118 = 1;
    v82[0] = v117;
    v82[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v132[0] = &off_116C18;
    v132[1] = 2LL;
    v132[4] = 0LL;
    v132[2] = v82;
    v132[3] = 1LL;
    std::io::stdio::_eprint(v132);
    v151[0] = &off_116C38;
    v151[1] = 1LL;
    v151[2] = 8LL;
    v152 = 0LL;
    std::io::stdio::_eprint(v151);
    v64 = &std::io::stdio::stderr::INSTANCE;
    v10 = <std::io::stdio::Stderr as std::io::Write>::flush(&v64);
    if ( v10 )
    {
      v56 = v10;
      v84[0] = uucore::util_name();
      v84[1] = v50;
      v83[0] = v84;
      v83[1] = <&T as core::fmt::Display>::fmt;
      v133[0] = &unk_116AA0;
      v133[1] = 2LL;
      v133[4] = 0LL;
      v133[2] = v83;
      v133[3] = 1LL;
      std::io::stdio::_eprint(v133);
      v85[0] = &v56;
      v85[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v134[0] = &unk_116C48;
      v134[1] = 2LL;
      v134[4] = 0LL;
      v134[2] = v85;
      v134[3] = 1LL;
      std::io::stdio::_eprint(v134);
      std::process::exit(1);
    }
    if ( !(unsigned __int8)uucore::read_yes() )
      return 0;
    goto LABEL_53;
  }
LABEL_13:
  v61 = 0x1B600000000LL;
  v62 = 257;
  v63 = 0;
  std::fs::OpenOptions::_open(v65, &v61, src, n);
  if ( !v65[0] )
  {
    fd = v65[1];
    std::fs::File::metadata(v165, &fd);
    if ( v165[0] == 2LL )
    {
      std::io::error::repr_bitpacked::decode_repr(srca, v165[1]);
      if ( LOBYTE(srca[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
      yes = 1;
    }
    else
    {
      if ( *(_BYTE *)(v3 + 6) != 2 || (v166 & 0x92) == 0 )
      {
        std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
        close(fd);
        goto LABEL_36;
      }
      if ( v167 )
      {
        v14 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v15 = *(_QWORD *)(v14 + 8);
        v16 = v3;
        v17 = *(_QWORD *)(v14 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v15, 1LL, 1LL, v17);
        v93[0] = v15;
        v93[1] = v17;
        v3 = v16;
        v92[0] = v93;
        v92[1] = <&T as core::fmt::Display>::fmt;
        v139[0] = &unk_116AA0;
        v139[1] = 2LL;
        v139[4] = 0LL;
        v139[2] = v92;
        v139[3] = 1LL;
        std::io::stdio::_eprint(v139);
        v121[0] = 1LL;
        v121[1] = src;
        v121[2] = n;
        v122 = 1;
        v94[0] = v121;
        v94[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v140[0] = &off_116C88;
        v140[1] = 2LL;
        v140[4] = 0LL;
        v140[2] = v94;
        v140[3] = 1LL;
        std::io::stdio::_eprint(v140);
        v155[0] = &off_116C38;
        v155[1] = 1LL;
        v155[2] = 8LL;
        v156 = 0LL;
        std::io::stdio::_eprint(v155);
        v68[0] = &std::io::stdio::stderr::INSTANCE;
        v18 = <std::io::stdio::Stderr as std::io::Write>::flush(v68);
        if ( v18 )
        {
          v58 = v18;
          v96[0] = uucore::util_name();
          v96[1] = v19;
          v95[0] = v96;
          v95[1] = <&T as core::fmt::Display>::fmt;
          v141[0] = &unk_116AA0;
          v141[1] = 2LL;
          v141[4] = 0LL;
          v141[2] = v95;
          v141[3] = 1LL;
          std::io::stdio::_eprint(v141);
          v97[0] = &v58;
          v97[1] = <std::io::error::Error as core::fmt::Display>::fmt;
          v142[0] = &unk_116C48;
          v142[1] = 2LL;
          v142[4] = 0LL;
          v142[2] = v97;
          v142[3] = 1LL;
          std::io::stdio::_eprint(v142);
          std::process::exit(1);
        }
      }
      else
      {
        v30 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v31 = *(_QWORD *)(v30 + 8);
        v32 = v3;
        v33 = *(_QWORD *)(v30 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v31, 1LL, 1LL, v33);
        v87[0] = v31;
        v87[1] = v33;
        v3 = v32;
        v86[0] = v87;
        v86[1] = <&T as core::fmt::Display>::fmt;
        v135[0] = &unk_116AA0;
        v135[1] = 2LL;
        v135[4] = 0LL;
        v135[2] = v86;
        v135[3] = 1LL;
        std::io::stdio::_eprint(v135);
        v119[0] = 1LL;
        v119[1] = src;
        v119[2] = n;
        v120 = 1;
        v88[0] = v119;
        v88[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v136[0] = &off_116C68;
        v136[1] = 2LL;
        v136[4] = 0LL;
        v136[2] = v88;
        v136[3] = 1LL;
        std::io::stdio::_eprint(v136);
        v153[0] = &off_116C38;
        v153[1] = 1LL;
        v153[2] = 8LL;
        v154 = 0LL;
        std::io::stdio::_eprint(v153);
        v67 = &std::io::stdio::stderr::INSTANCE;
        v34 = <std::io::stdio::Stderr as std::io::Write>::flush(&v67);
        if ( v34 )
        {
          v57 = v34;
          v90[0] = uucore::util_name();
          v90[1] = v51;
          v89[0] = v90;
          v89[1] = <&T as core::fmt::Display>::fmt;
          v137[0] = &unk_116AA0;
          v137[1] = 2LL;
          v137[4] = 0LL;
          v137[2] = v89;
          v137[3] = 1LL;
          std::io::stdio::_eprint(v137);
          v91[0] = &v57;
          v91[1] = <std::io::error::Error as core::fmt::Display>::fmt;
          v138[0] = &unk_116C48;
          v138[1] = 2LL;
          v138[4] = 0LL;
          v138[2] = v91;
          v138[3] = 1LL;
          std::io::stdio::_eprint(v138);
          std::process::exit(1);
        }
      }
      yes = uucore::read_yes();
    }
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
    goto LABEL_52;
  }
  v11 = v66;
  v68[1] = v66;
  switch ( v66 & 3 )
  {
    case 0uLL:
      v12 = 16LL;
      goto LABEL_29;
    case 1uLL:
      v12 = 15LL;
LABEL_29:
      v20 = *(_BYTE *)(v66 + v12);
      break;
    case 2uLL:
      v20 = std::sys::pal::unix::decode_error_kind(HIDWORD(v66));
      break;
    case 3uLL:
      v20 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v66));
      if ( v20 == 41 )
LABEL_76:
        core::hint::unreachable_unchecked::precondition_check();
      return result;
  }
  if ( v20 == 1 )
  {
    std::io::error::repr_bitpacked::decode_repr(srca, v11);
    if ( LOBYTE(srca[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
LABEL_36:
    std::sys::pal::unix::fs::stat(srca);
    if ( srca[0] == 2LL )
    {
      v161[1] = srca[1];
      v161[0] = 2LL;
      v21 = 2LL;
    }
    else
    {
      memcpy(v161, srca, sizeof(v161));
      v21 = 2LL;
      if ( v161[0] != 2LL )
      {
        if ( (v161[7] & 0x92) != 0 )
          goto LABEL_53;
        v21 = v161[0];
        if ( !v161[10] )
        {
          v54 = v3;
          v26 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v27 = *(_QWORD *)(v26 + 8);
          v28 = *(_QWORD *)(v26 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v28);
          v99[0] = v27;
          v99[1] = v28;
          v98[0] = v99;
          v98[1] = <&T as core::fmt::Display>::fmt;
          v143[0] = &unk_116AA0;
          v143[1] = 2LL;
          v143[4] = 0LL;
          v143[2] = v98;
          v143[3] = 1LL;
          std::io::stdio::_eprint(v143);
          v123[0] = 1LL;
          v123[1] = src;
          v123[2] = n;
          v124 = 1;
          v100[0] = v123;
          v100[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v144[0] = &off_116CA8;
          v144[1] = 2LL;
          v144[4] = 0LL;
          v144[2] = v100;
          v144[3] = 1LL;
          std::io::stdio::_eprint(v144);
          v157[0] = &off_116C38;
          v157[1] = 1LL;
          v157[2] = 8LL;
          v158 = 0LL;
          std::io::stdio::_eprint(v157);
          v69 = &std::io::stdio::stderr::INSTANCE;
          v29 = <std::io::stdio::Stderr as std::io::Write>::flush(&v69);
          if ( v29 )
          {
            v59 = v29;
            v102[0] = uucore::util_name();
            v102[1] = v52;
            v101[0] = v102;
            v101[1] = <&T as core::fmt::Display>::fmt;
            v145[0] = &unk_116AA0;
            v145[1] = 2LL;
            v145[4] = 0LL;
            v145[2] = v101;
            v145[3] = 1LL;
            std::io::stdio::_eprint(v145);
            v103[0] = &v59;
            v103[1] = <std::io::error::Error as core::fmt::Display>::fmt;
            v146[0] = &unk_116C48;
            v146[1] = 2LL;
            v146[4] = 0LL;
            v146[2] = v103;
            v146[3] = 1LL;
            std::io::stdio::_eprint(v146);
            std::process::exit(1);
          }
          yes = uucore::read_yes();
          goto LABEL_47;
        }
      }
    }
    v54 = v3;
    v22 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v23 = *(_QWORD *)(v22 + 8);
    v24 = *(_QWORD *)(v22 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v23, 1LL, 1LL, v24);
    v105[0] = v23;
    v105[1] = v24;
    v104[0] = v105;
    v104[1] = <&T as core::fmt::Display>::fmt;
    v147[0] = &unk_116AA0;
    v147[1] = 2LL;
    v147[4] = 0LL;
    v147[2] = v104;
    v147[3] = 1LL;
    std::io::stdio::_eprint(v147);
    v125[0] = 1LL;
    v125[1] = src;
    v125[2] = n;
    v126 = 1;
    v106[0] = v125;
    v106[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v148[0] = &off_116CC8;
    v148[1] = 2LL;
    v148[4] = 0LL;
    v148[2] = v106;
    v148[3] = 1LL;
    std::io::stdio::_eprint(v148);
    v159[0] = &off_116C38;
    v159[1] = 1LL;
    v159[2] = 8LL;
    v160 = 0LL;
    std::io::stdio::_eprint(v159);
    v70 = &std::io::stdio::stderr::INSTANCE;
    v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&v70);
    if ( v25 )
    {
      v60 = v25;
      v108[0] = uucore::util_name();
      v108[1] = v49;
      v107[0] = v108;
      v107[1] = <&T as core::fmt::Display>::fmt;
      v149[0] = &unk_116AA0;
      v149[1] = 2LL;
      v149[4] = 0LL;
      v149[2] = v107;
      v149[3] = 1LL;
      std::io::stdio::_eprint(v149);
      v109[0] = &v60;
      v109[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v150[0] = &unk_116C48;
      v150[1] = 2LL;
      v150[4] = 0LL;
      v150[2] = v109;
      v150[3] = 1LL;
      std::io::stdio::_eprint(v150);
      std::process::exit(1);
    }
    yes = uucore::read_yes();
    if ( v21 == 2 )
    {
      std::io::error::repr_bitpacked::decode_repr(srca, v161[1]);
      v3 = v54;
      if ( LOBYTE(srca[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
LABEL_52:
      if ( yes )
        goto LABEL_53;
      return 0;
    }
LABEL_47:
    v3 = v54;
    if ( yes )
      goto LABEL_53;
    return 0;
  }
  std::io::error::repr_bitpacked::decode_repr(srca, v11);
  if ( LOBYTE(srca[0]) >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
LABEL_53:
  v35 = std::sys::pal::unix::fs::unlink(src, n);
  if ( !v35 )
  {
    if ( (*(_BYTE *)(v3 + 5) & 1) != 0 )
    {
      uucore::features::fs::normalize_path(v71, src, n);
      if ( !v72 || v73 < 0 )
        core::panicking::panic_nounwind(anon_6843ccf2b4d4fbe6ebad01316345d198_26_llvm_5368656008581774328, 162LL);
      v110[0] = 1LL;
      v110[1] = v72;
      v110[2] = v73;
      v111 = 1;
      v74[0] = v110;
      v74[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v128[0] = &off_116BF8;
      v128[1] = 2LL;
      v128[4] = 0LL;
      v128[2] = v74;
      v128[3] = 1LL;
      std::io::stdio::_print(v128);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v71);
    }
    return 0;
  }
  v55 = v35;
  switch ( v35 & 3 )
  {
    case 0LL:
      v36 = 16LL;
      goto LABEL_66;
    case 1LL:
      v36 = 15LL;
LABEL_66:
      if ( *(_BYTE *)(v35 + v36) != 1 )
        goto LABEL_67;
      goto LABEL_64;
    case 2LL:
      v38 = std::sys::pal::unix::decode_error_kind(HIDWORD(v35));
      goto LABEL_63;
    case 3LL:
      v38 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v35));
      if ( v38 == 41 )
        goto LABEL_76;
LABEL_63:
      if ( v38 == 1 )
      {
LABEL_64:
        v39 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v40 = *(_QWORD *)(v39 + 8);
        v41 = *(_QWORD *)(v39 + 16);
        v42 = 1LL;
        core::slice::raw::from_raw_parts::precondition_check(v40, 1LL, 1LL, v41);
        v76[0] = v40;
        v76[1] = v41;
        v75[0] = v76;
        v75[1] = <&T as core::fmt::Display>::fmt;
        v129[0] = &unk_116AA0;
        v129[1] = 2LL;
        v129[4] = 0LL;
        v129[2] = v75;
        v129[3] = 1LL;
        std::io::stdio::_eprint(v129);
        v112[0] = 1LL;
        v112[1] = src;
        v112[2] = n;
        v113 = 1;
        v77[0] = v112;
        v77[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v162 = &off_116B10;
        v43 = (char **)v77;
        v44 = 2LL;
        v45 = &v162;
      }
      else
      {
LABEL_67:
        v46 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v47 = *(_QWORD *)(v46 + 8);
        v48 = *(_QWORD *)(v46 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v47, 1LL, 1LL, v48);
        v79[0] = v47;
        v79[1] = v48;
        v78[0] = v79;
        v78[1] = <&T as core::fmt::Display>::fmt;
        v130[0] = &unk_116AA0;
        v130[1] = 2LL;
        v130[4] = 0LL;
        v130[2] = v78;
        v130[3] = 1LL;
        std::io::stdio::_eprint(v130);
        v115[0] = 1LL;
        v115[1] = src;
        v115[2] = n;
        v116 = 1;
        v114[0] = v115;
        v114[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v114[2] = &v55;
        v114[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        v163 = &off_116AE0;
        v42 = 2LL;
        v43 = (char **)v114;
        v44 = 3LL;
        v45 = &v163;
      }
      v45[1] = (char **)v44;
      v45[4] = 0LL;
      v45[2] = v43;
      v45[3] = (char **)v42;
      std::io::stdio::_eprint(v45);
      std::io::error::repr_bitpacked::decode_repr(srca, v55);
      if ( LOBYTE(srca[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
      result = 1;
      break;
  }
  return result;
}
