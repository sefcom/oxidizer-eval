__int64 __fastcall uu_rm::remove_dir(void *src, size_t n, _BYTE *a3)
{
  size_t v4; // rbx
  __int64 v5; // rsi
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  char **v14; // rax
  char ***v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r13
  char **v35; // rax
  __int64 v36; // rcx
  char ***v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // r12
  __int64 v42; // rdx
  volatile signed __int64 *v43; // [rsp+8h] [rbp-8B0h] BYREF
  char v44; // [rsp+10h] [rbp-8A8h]
  volatile signed __int64 *v45; // [rsp+18h] [rbp-8A0h] BYREF
  char v46; // [rsp+20h] [rbp-898h]
  __int64 v47; // [rsp+28h] [rbp-890h] BYREF
  __int64 v48; // [rsp+30h] [rbp-888h] BYREF
  __int64 v49; // [rsp+38h] [rbp-880h] BYREF
  void *v50; // [rsp+40h] [rbp-878h] BYREF
  void *v51; // [rsp+48h] [rbp-870h] BYREF
  _BYTE v52[8]; // [rsp+50h] [rbp-868h] BYREF
  __int64 v53; // [rsp+58h] [rbp-860h]
  __int64 v54; // [rsp+60h] [rbp-858h]
  _QWORD v55[2]; // [rsp+68h] [rbp-850h] BYREF
  _QWORD v56[2]; // [rsp+78h] [rbp-840h] BYREF
  _QWORD v57[2]; // [rsp+88h] [rbp-830h] BYREF
  _QWORD v58[2]; // [rsp+98h] [rbp-820h] BYREF
  _QWORD v59[2]; // [rsp+A8h] [rbp-810h] BYREF
  _QWORD v60[2]; // [rsp+B8h] [rbp-800h] BYREF
  _QWORD v61[2]; // [rsp+C8h] [rbp-7F0h] BYREF
  _QWORD v62[2]; // [rsp+D8h] [rbp-7E0h] BYREF
  _QWORD v63[2]; // [rsp+E8h] [rbp-7D0h] BYREF
  _QWORD v64[2]; // [rsp+F8h] [rbp-7C0h] BYREF
  _QWORD v65[2]; // [rsp+108h] [rbp-7B0h] BYREF
  _QWORD v66[2]; // [rsp+118h] [rbp-7A0h] BYREF
  _QWORD v67[2]; // [rsp+128h] [rbp-790h] BYREF
  _QWORD v68[2]; // [rsp+138h] [rbp-780h] BYREF
  _QWORD v69[2]; // [rsp+148h] [rbp-770h] BYREF
  _QWORD v70[2]; // [rsp+158h] [rbp-760h] BYREF
  _QWORD v71[2]; // [rsp+168h] [rbp-750h] BYREF
  _QWORD v72[2]; // [rsp+178h] [rbp-740h] BYREF
  _QWORD v73[2]; // [rsp+188h] [rbp-730h] BYREF
  _QWORD v74[2]; // [rsp+198h] [rbp-720h] BYREF
  _QWORD v75[2]; // [rsp+1A8h] [rbp-710h] BYREF
  _QWORD v76[2]; // [rsp+1B8h] [rbp-700h] BYREF
  _QWORD v77[2]; // [rsp+1C8h] [rbp-6F0h] BYREF
  _QWORD v78[2]; // [rsp+1D8h] [rbp-6E0h] BYREF
  _QWORD v79[2]; // [rsp+1E8h] [rbp-6D0h] BYREF
  _QWORD v80[2]; // [rsp+1F8h] [rbp-6C0h] BYREF
  _QWORD v81[2]; // [rsp+208h] [rbp-6B0h] BYREF
  _QWORD v82[3]; // [rsp+218h] [rbp-6A0h] BYREF
  char v83; // [rsp+230h] [rbp-688h]
  _QWORD v84[3]; // [rsp+238h] [rbp-680h] BYREF
  char v85; // [rsp+250h] [rbp-668h]
  _QWORD v86[4]; // [rsp+258h] [rbp-660h] BYREF
  _QWORD v87[3]; // [rsp+278h] [rbp-640h] BYREF
  char v88; // [rsp+290h] [rbp-628h]
  _QWORD v89[3]; // [rsp+298h] [rbp-620h] BYREF
  char v90; // [rsp+2B0h] [rbp-608h]
  _QWORD v91[3]; // [rsp+2B8h] [rbp-600h] BYREF
  char v92; // [rsp+2D0h] [rbp-5E8h]
  _QWORD v93[3]; // [rsp+2D8h] [rbp-5E0h] BYREF
  char v94; // [rsp+2F0h] [rbp-5C8h]
  _QWORD v95[3]; // [rsp+2F8h] [rbp-5C0h] BYREF
  char v96; // [rsp+310h] [rbp-5A8h]
  _QWORD v97[3]; // [rsp+318h] [rbp-5A0h] BYREF
  char v98; // [rsp+330h] [rbp-588h]
  _QWORD v99[6]; // [rsp+338h] [rbp-580h] BYREF
  _QWORD v100[6]; // [rsp+368h] [rbp-550h] BYREF
  _QWORD v101[6]; // [rsp+398h] [rbp-520h] BYREF
  _QWORD v102[6]; // [rsp+3C8h] [rbp-4F0h] BYREF
  _QWORD v103[6]; // [rsp+3F8h] [rbp-4C0h] BYREF
  _QWORD v104[6]; // [rsp+428h] [rbp-490h] BYREF
  _QWORD v105[6]; // [rsp+458h] [rbp-460h] BYREF
  _QWORD srca[22]; // [rsp+488h] [rbp-430h] BYREF
  _QWORD v107[6]; // [rsp+538h] [rbp-380h] BYREF
  _QWORD v108[6]; // [rsp+568h] [rbp-350h] BYREF
  _QWORD v109[6]; // [rsp+598h] [rbp-320h] BYREF
  _QWORD v110[6]; // [rsp+5C8h] [rbp-2F0h] BYREF
  _QWORD v111[6]; // [rsp+5F8h] [rbp-2C0h] BYREF
  _QWORD v112[6]; // [rsp+628h] [rbp-290h] BYREF
  _QWORD v113[6]; // [rsp+658h] [rbp-260h] BYREF
  _QWORD v114[3]; // [rsp+688h] [rbp-230h] BYREF
  __int128 v115; // [rsp+6A0h] [rbp-218h]
  _QWORD v116[3]; // [rsp+6B8h] [rbp-200h] BYREF
  __int128 v117; // [rsp+6D0h] [rbp-1E8h]
  __int64 v118; // [rsp+6E8h] [rbp-1D0h] BYREF
  _BYTE v119[40]; // [rsp+6F0h] [rbp-1C8h] BYREF
  char **v120; // [rsp+718h] [rbp-1A0h] BYREF
  char **v121; // [rsp+748h] [rbp-170h] BYREF
  char **v122; // [rsp+778h] [rbp-140h] BYREF
  char **v123; // [rsp+7A8h] [rbp-110h] BYREF
  _QWORD dest[22]; // [rsp+7D8h] [rbp-E0h] BYREF

  v4 = n;
  if ( !a3[6] )
    goto LABEL_8;
  std::sys::pal::unix::fs::stat(srca);
  if ( srca[0] == 2LL )
  {
    v5 = srca[1];
    goto LABEL_6;
  }
  memcpy(dest, srca, sizeof(dest));
  if ( dest[0] == 2LL )
  {
    v5 = dest[1];
LABEL_6:
    std::io::error::repr_bitpacked::decode_repr(srca, v5);
    if ( LOBYTE(srca[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
    goto LABEL_8;
  }
  if ( SLOBYTE(dest[7]) < 0 )
  {
    if ( a3[6] != 2 )
      goto LABEL_8;
    v26 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v27 = *(_QWORD *)(v26 + 8);
    v28 = *(_QWORD *)(v26 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v27, 1LL, 1LL, v28);
    v77[0] = v27;
    v77[1] = v28;
    v76[0] = v77;
    v76[1] = <&T as core::fmt::Display>::fmt;
    v111[0] = &unk_116AA0;
    v111[1] = 2LL;
    v111[4] = 0LL;
    v111[2] = v76;
    v111[3] = 1LL;
    std::io::stdio::_eprint(v111);
    v97[0] = 1LL;
    v97[1] = src;
    v97[2] = n;
    v98 = 1;
    v78[0] = v97;
    v78[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v112[0] = &off_116D08;
    v112[1] = 2LL;
    v112[4] = 0LL;
    v112[2] = v78;
    v112[3] = 1LL;
    std::io::stdio::_eprint(v112);
    v116[0] = &off_116C38;
    v116[1] = 1LL;
    v116[2] = 8LL;
    v117 = 0LL;
    std::io::stdio::_eprint(v116);
    v51 = &std::io::stdio::stderr::INSTANCE;
    v29 = <std::io::stdio::Stderr as std::io::Write>::flush(&v51);
    if ( v29 )
    {
      v49 = v29;
      v80[0] = uucore::util_name();
      v80[1] = v42;
      v79[0] = v80;
      v79[1] = <&T as core::fmt::Display>::fmt;
      v113[0] = &unk_116AA0;
      v113[1] = 2LL;
      v113[4] = 0LL;
      v113[2] = v79;
      v113[3] = 1LL;
      std::io::stdio::_eprint(v113);
      v81[0] = &v49;
      v81[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      srca[0] = &unk_116C48;
      srca[1] = 2LL;
      srca[4] = 0LL;
      srca[2] = v81;
      srca[3] = 1LL;
      std::io::stdio::_eprint(srca);
      std::process::exit(1);
    }
  }
  else
  {
    v19 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v20 = *(_QWORD *)(v19 + 8);
    v21 = *(_QWORD *)(v19 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v20, 1LL, 1LL, v21);
    v71[0] = v20;
    v71[1] = v21;
    v70[0] = v71;
    v70[1] = <&T as core::fmt::Display>::fmt;
    v107[0] = &unk_116AA0;
    v107[1] = 2LL;
    v107[4] = 0LL;
    v107[2] = v70;
    v107[3] = 1LL;
    std::io::stdio::_eprint(v107);
    v95[0] = 1LL;
    v95[1] = src;
    v95[2] = n;
    v96 = 1;
    v72[0] = v95;
    v72[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v108[0] = &off_116CE8;
    v108[1] = 2LL;
    v108[4] = 0LL;
    v108[2] = v72;
    v108[3] = 1LL;
    std::io::stdio::_eprint(v108);
    v114[0] = &off_116C38;
    v114[1] = 1LL;
    v114[2] = 8LL;
    v115 = 0LL;
    std::io::stdio::_eprint(v114);
    v50 = &std::io::stdio::stderr::INSTANCE;
    v22 = <std::io::stdio::Stderr as std::io::Write>::flush(&v50);
    if ( v22 )
    {
      v48 = v22;
      v74[0] = uucore::util_name();
      v74[1] = v23;
      v73[0] = v74;
      v73[1] = <&T as core::fmt::Display>::fmt;
      v109[0] = &unk_116AA0;
      v109[1] = 2LL;
      v109[4] = 0LL;
      v109[2] = v73;
      v109[3] = 1LL;
      std::io::stdio::_eprint(v109);
      v75[0] = &v48;
      v75[1] = <std::io::error::Error as core::fmt::Display>::fmt;
      v110[0] = &unk_116C48;
      v110[1] = 2LL;
      v110[4] = 0LL;
      v110[2] = v75;
      v110[3] = 1LL;
      std::io::stdio::_eprint(v110);
      std::process::exit(1);
    }
  }
  if ( !(unsigned __int8)uucore::read_yes() )
  {
LABEL_38:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
LABEL_8:
  std::sys::pal::unix::fs::readdir(srca, src, v4);
  v6 = srca[1];
  v7 = 2LL;
  if ( LOBYTE(srca[1]) != 2 )
    v7 = srca[1] & 1;
  v43 = (volatile signed __int64 *)srca[0];
  v44 = v7;
  if ( LOBYTE(srca[1]) == 2 )
  {
    v8 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)(v8 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
    v68[0] = v9;
    v68[1] = v10;
    v67[0] = v68;
    v67[1] = <&T as core::fmt::Display>::fmt;
    v104[0] = &unk_116AA0;
    v104[1] = 2LL;
    v104[4] = 0LL;
    v104[2] = v67;
    v104[3] = 1LL;
    std::io::stdio::_eprint(v104);
    v93[0] = 1LL;
    v93[1] = src;
    v93[2] = v4;
    v94 = 1;
    v69[0] = v93;
    v69[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v105[0] = &off_116BB8;
    v105[1] = 2LL;
    v105[4] = 0LL;
    v105[2] = v69;
    v105[3] = 1LL;
    std::io::stdio::_eprint(v105);
    if ( v44 != 2 )
    {
LABEL_55:
      LOBYTE(v4) = 1;
      if ( !_InterlockedDecrement64(v43) )
        alloc::sync::Arc<T,A>::drop_slow(&v43);
      return (unsigned int)v4;
    }
    goto LABEL_51;
  }
  v45 = (volatile signed __int64 *)srca[0];
  v46 = srca[1] & 1;
  if ( (a3[4] & 1) == 0 && (a3[3] & 1) == 0 )
  {
    v11 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, v13);
    v65[0] = v12;
    v65[1] = v13;
    v64[0] = v65;
    v64[1] = <&T as core::fmt::Display>::fmt;
    v103[0] = &unk_116AA0;
    v103[1] = 2LL;
    v103[4] = 0LL;
    v103[2] = v64;
    v103[3] = 1LL;
    std::io::stdio::_eprint(v103);
    v91[0] = 1LL;
    v91[1] = src;
    v91[2] = v4;
    v92 = 1;
    v66[0] = v91;
    v66[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v123 = &off_116B78;
    v14 = (char **)v66;
    v15 = &v123;
LABEL_19:
    v15[1] = (char **)(&dword_0 + 2);
    v15[4] = 0LL;
    v15[2] = v14;
    v15[3] = (char **)(&dword_0 + 1);
    std::io::stdio::_eprint(v15);
    goto LABEL_48;
  }
  <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v118, &v45, v7, srca[0]);
  if ( v118 )
  {
    if ( v118 == 1 )
    {
      core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(v119);
      v16 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v17 = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v17, 1LL, 1LL, v18);
      v62[0] = v17;
      v62[1] = v18;
      v61[0] = v62;
      v61[1] = <&T as core::fmt::Display>::fmt;
      v102[0] = &unk_116AA0;
      v102[1] = 2LL;
      v102[4] = 0LL;
      v102[2] = v61;
      v102[3] = 1LL;
      std::io::stdio::_eprint(v102);
      v89[0] = 1LL;
      v89[1] = src;
      v89[2] = v4;
      v90 = 1;
      v63[0] = v89;
      v63[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v122 = &off_116BB8;
      v14 = (char **)v63;
      v15 = &v122;
      goto LABEL_19;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(v119);
  }
  v24 = std::sys::pal::unix::fs::rmdir(src, v4);
  if ( !v24 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      uucore::features::fs::normalize_path(v52, src, v4);
      if ( !v53 || v54 < 0 )
        core::panicking::panic_nounwind(anon_6843ccf2b4d4fbe6ebad01316345d198_26_llvm_5368656008581774328, 162LL);
      v82[0] = 1LL;
      v82[1] = v53;
      v82[2] = v54;
      v83 = 1;
      v55[0] = v82;
      v55[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v99[0] = &off_116BD8;
      v99[1] = 2LL;
      v99[4] = 0LL;
      v99[2] = v55;
      v99[3] = 1LL;
      std::io::stdio::_print(v99);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v52);
    }
    if ( !_InterlockedDecrement64(v45) )
      alloc::sync::Arc<T,A>::drop_slow(&v45);
    if ( v44 == 2 )
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v43);
    goto LABEL_38;
  }
  v47 = v24;
  switch ( v24 & 3 )
  {
    case 0LL:
      v25 = 16LL;
      goto LABEL_44;
    case 1LL:
      v25 = 15LL;
LABEL_44:
      if ( *(_BYTE *)(v24 + v25) != 1 )
        goto LABEL_45;
      goto LABEL_42;
    case 2LL:
      v30 = std::sys::pal::unix::decode_error_kind(HIDWORD(v24));
      goto LABEL_41;
    case 3LL:
      v30 = std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v24));
      if ( v30 == 41 )
        core::hint::unreachable_unchecked::precondition_check();
LABEL_41:
      if ( v30 == 1 )
      {
LABEL_42:
        v31 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v32 = *(_QWORD *)(v31 + 8);
        v33 = *(_QWORD *)(v31 + 16);
        v34 = 1LL;
        core::slice::raw::from_raw_parts::precondition_check(v32, 1LL, 1LL, v33);
        v57[0] = v32;
        v57[1] = v33;
        v56[0] = v57;
        v56[1] = <&T as core::fmt::Display>::fmt;
        v100[0] = &unk_116AA0;
        v100[1] = 2LL;
        v100[4] = 0LL;
        v100[2] = v56;
        v100[3] = 1LL;
        std::io::stdio::_eprint(v100);
        v84[0] = 1LL;
        v84[1] = src;
        v84[2] = v4;
        v85 = 1;
        v58[0] = v84;
        v58[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v120 = &off_116B10;
        v35 = (char **)v58;
        v36 = 2LL;
        v37 = &v120;
      }
      else
      {
LABEL_45:
        v38 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v39 = *(_QWORD *)(v38 + 8);
        v40 = *(_QWORD *)(v38 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v39, 1LL, 1LL, v40);
        v60[0] = v39;
        v60[1] = v40;
        v59[0] = v60;
        v59[1] = <&T as core::fmt::Display>::fmt;
        v101[0] = &unk_116AA0;
        v101[1] = 2LL;
        v101[4] = 0LL;
        v101[2] = v59;
        v101[3] = 1LL;
        std::io::stdio::_eprint(v101);
        v87[0] = 1LL;
        v87[1] = src;
        v87[2] = v4;
        v88 = 1;
        v86[0] = v87;
        v86[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v86[2] = &v47;
        v86[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        v121 = &off_116AE0;
        v34 = 2LL;
        v35 = (char **)v86;
        v36 = 3LL;
        v37 = &v121;
      }
      v37[1] = (char **)v36;
      v37[4] = 0LL;
      v37[2] = v35;
      v37[3] = (char **)v34;
      std::io::stdio::_eprint(v37);
      std::io::error::repr_bitpacked::decode_repr(srca, v47);
      if ( LOBYTE(srca[0]) >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
      break;
  }
LABEL_48:
  if ( !_InterlockedDecrement64(v45) )
    alloc::sync::Arc<T,A>::drop_slow(&v45);
  if ( v44 != 2 )
  {
    LOBYTE(v4) = 1;
    if ( v6 != 2 )
      return (unsigned int)v4;
    goto LABEL_55;
  }
LABEL_51:
  std::io::error::repr_bitpacked::decode_repr(srca, v43);
  if ( LOBYTE(srca[0]) >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&srca[1]);
  LOBYTE(v4) = 1;
  return (unsigned int)v4;
}
