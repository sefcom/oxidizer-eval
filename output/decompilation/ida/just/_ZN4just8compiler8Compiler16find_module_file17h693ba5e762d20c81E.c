__int64 __fastcall just::compiler::Compiler::find_module_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  char v28; // bp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r13
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int128 v46; // xmm0
  __int64 v47; // rdx
  char **v48; // rdi
  __int64 v49; // r14
  __int128 v50; // xmm1
  __int128 v51; // xmm2
  __int128 v52; // xmm3
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  _BYTE *v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  _BYTE v60[71]; // [rsp+0h] [rbp-288h] BYREF
  __int64 v61; // [rsp+47h] [rbp-241h]
  __int64 v62; // [rsp+58h] [rbp-230h]
  _BYTE v63[48]; // [rsp+60h] [rbp-228h] BYREF
  __int128 v64; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-1E8h]
  __int64 v66; // [rsp+B0h] [rbp-1D8h]
  _BYTE v67[24]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-1B0h]
  __int64 v69; // [rsp+E0h] [rbp-1A8h]
  __int64 v70; // [rsp+E8h] [rbp-1A0h]
  __int64 v71; // [rsp+F0h] [rbp-198h]
  _QWORD v72[3]; // [rsp+F8h] [rbp-190h] BYREF
  __int128 v73; // [rsp+110h] [rbp-178h] BYREF
  __int128 *v74; // [rsp+120h] [rbp-168h]
  __int128 v75; // [rsp+128h] [rbp-160h] BYREF
  __int64 v76; // [rsp+138h] [rbp-150h]
  __int128 v77; // [rsp+140h] [rbp-148h] BYREF
  __int128 *v78; // [rsp+150h] [rbp-138h]
  __int64 v79; // [rsp+158h] [rbp-130h] BYREF
  __int64 v80; // [rsp+160h] [rbp-128h]
  unsigned __int64 v81; // [rsp+168h] [rbp-120h]
  __int64 v82; // [rsp+170h] [rbp-118h] BYREF
  char v83; // [rsp+178h] [rbp-110h]
  __int64 v84; // [rsp+180h] [rbp-108h]
  __int64 v85; // [rsp+188h] [rbp-100h]
  __int128 v86; // [rsp+190h] [rbp-F8h]
  __int64 v87; // [rsp+1A0h] [rbp-E8h]
  _BYTE v88[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  __int64 v89; // [rsp+1B8h] [rbp-D0h]
  __int64 v90; // [rsp+1C0h] [rbp-C8h]
  _QWORD v91[3]; // [rsp+1D0h] [rbp-B8h] BYREF
  _QWORD v92[2]; // [rsp+1E8h] [rbp-A0h] BYREF
  __int128 v93; // [rsp+1F8h] [rbp-90h] BYREF
  __int64 v94; // [rsp+208h] [rbp-80h]
  __int128 v95; // [rsp+210h] [rbp-78h] BYREF
  __int64 v96; // [rsp+220h] [rbp-68h]
  __int128 v97; // [rsp+228h] [rbp-60h] BYREF
  __int64 v98; // [rsp+238h] [rbp-50h]
  __int128 v99; // [rsp+240h] [rbp-48h]
  __int64 v100; // [rsp+250h] [rbp-38h]

  v62 = a1;
  v92[0] = a2;
  v92[1] = a3;
  v72[0] = 0LL;
  v72[1] = 8LL;
  v72[2] = 0LL;
  v69 = a4;
  v71 = a3;
  v70 = a2;
  if ( a5 )
  {
    std::path::Path::join(&v64, a2, a3, a5, a6);
    if ( (unsigned __int8)std::path::Path::is_file(*((_QWORD *)&v64 + 1), v65) )
    {
      v8 = v62;
      *(_QWORD *)(v62 + 24) = v65;
      *(_OWORD *)(v8 + 8) = v64;
      *(_BYTE *)v8 = 56;
      return core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(v72);
    }
    std::path::Path::join(v63, a5, a6, aModJust, 8LL);
    *(_QWORD *)&v60[16] = *(_QWORD *)&v63[16];
    *(_OWORD *)v60 = *(_OWORD *)v63;
    v60[24] = 1;
    ((void (__fastcall *)(_QWORD *, _BYTE *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      v72,
      v60,
      &off_42E630,
      v18,
      v19,
      v20);
    *(_QWORD *)v60 = 0LL;
    *(_QWORD *)&v60[8] = 2LL;
    *(_OWORD *)&v60[16] = *(_OWORD *)&off_42E5B0;
    *(_OWORD *)&v60[32] = *(_OWORD *)&off_42E5C0;
    v21 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v60);
    if ( v21 )
    {
      v23 = v22;
      do
      {
        std::path::Path::join(&v73, a5, a6, v21, v23);
        *(_QWORD *)&v63[16] = v74;
        *(_OWORD *)v63 = v73;
        v63[24] = 0;
        alloc::vec::Vec<T,A>::push(
          v72,
          v63,
          &off_42E648,
          v24,
          v25,
          v26,
          *(_QWORD *)v60,
          *(_QWORD *)&v60[8],
          *(_QWORD *)&v60[16],
          *(_QWORD *)&v60[24]);
        v21 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v60);
        v23 = v27;
      }
      while ( v21 );
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v64);
  }
  else
  {
    *(_QWORD *)v63 = a4;
    *(_QWORD *)&v63[8] = <just::name::Name as core::fmt::Display>::fmt;
    *(_QWORD *)v60 = &unk_42E5D0;
    *(_QWORD *)&v60[8] = 2LL;
    *(_QWORD *)&v60[32] = 0LL;
    *(_QWORD *)&v60[16] = v63;
    *(_QWORD *)&v60[24] = 1LL;
    core::option::Option<T>::map_or_else(&v93, 0LL, a3, v60);
    *(_OWORD *)v60 = v93;
    *(_QWORD *)&v60[16] = v94;
    v60[24] = 1;
    ((void (__fastcall *)(_QWORD *, _BYTE *, char **))alloc::vec::Vec<T,A>::push)(v72, v60, &off_42E660);
    *(_QWORD *)v63 = v69;
    *(_QWORD *)&v63[8] = <just::name::Name as core::fmt::Display>::fmt;
    *(_QWORD *)v60 = &unk_42E5F0;
    *(_QWORD *)&v60[8] = 2LL;
    *(_QWORD *)&v60[32] = 0LL;
    *(_QWORD *)&v60[16] = v63;
    *(_QWORD *)&v60[24] = 1LL;
    core::option::Option<T>::map_or_else(&v95, 0LL, v10, v60);
    *(_OWORD *)v60 = v95;
    *(_QWORD *)&v60[16] = v96;
    v60[24] = 1;
    ((void (__fastcall *)(_QWORD *, _BYTE *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
      v72,
      v60,
      &off_42E678,
      v11,
      v12,
      v13);
    *(_QWORD *)v63 = 0LL;
    *(_QWORD *)&v63[8] = 2LL;
    *(_OWORD *)&v63[16] = *(_OWORD *)&off_42E5B0;
    *(_OWORD *)&v63[32] = *(_OWORD *)&off_42E5C0;
    for ( *(_QWORD *)&v14 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v63);
          (_QWORD)v14;
          *(_QWORD *)&v14 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v63) )
    {
      v64 = v14;
      *(_QWORD *)&v73 = v69;
      *((_QWORD *)&v73 + 1) = <just::name::Name as core::fmt::Display>::fmt;
      v74 = &v64;
      *(_QWORD *)&v75 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v60 = &unk_42E610;
      *(_QWORD *)&v60[8] = 2LL;
      *(_QWORD *)&v60[32] = 0LL;
      *(_QWORD *)&v60[16] = &v73;
      *(_QWORD *)&v60[24] = 2LL;
      core::option::Option<T>::map_or_else(&v97, 0LL, *((_QWORD *)&v14 + 1), v60);
      *(_OWORD *)v60 = v97;
      *(_QWORD *)&v60[16] = v98;
      v60[24] = 0;
      ((void (__fastcall *)(_QWORD *, _BYTE *, char **, __int64, __int64, __int64))alloc::vec::Vec<T,A>::push)(
        v72,
        v60,
        &off_42E720,
        v15,
        v16,
        v17);
    }
  }
  v91[0] = 0LL;
  v91[2] = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v73, v72);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v63, &v73);
  if ( !__OFSUB__(0LL, *(_QWORD *)v63) )
  {
    do
    {
      v28 = v63[24];
      std::path::Path::join(v60, v70, v71, v63);
      <&std::path::Path as lexiclean::Lexiclean>::lexiclean(v67, *(_QWORD *)&v60[8], *(_QWORD *)&v60[16]);
      core::ptr::drop_in_place<std::path::PathBuf>(v60);
      v29 = std::path::Path::parent(*(_QWORD *)&v67[8], *(_QWORD *)&v67[16]);
      if ( !v29 )
        core::option::unwrap_failed(&off_42E6F0);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v60, v29);
      *(_QWORD *)&v65 = *(_QWORD *)&v60[16];
      v64 = *(_OWORD *)v60;
      alloc::collections::btree::map::BTreeMap<K,V,A>::entry(v60, v91, &v64);
      v30 = alloc::collections::btree::map::entry::Entry<K,V,A>::or_default(v60);
      *(_QWORD *)&v60[16] = *(_QWORD *)&v67[16];
      *(_OWORD *)v60 = *(_OWORD *)v67;
      v60[24] = v28;
      ((void (__fastcall *)(__int64, _BYTE *, char **, _QWORD, __int64, __int64))alloc::vec::Vec<T,A>::push)(
        v30,
        v60,
        &off_42E708,
        *(_QWORD *)&v67[16],
        v31,
        v32);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v63, &v73);
    }
    while ( *(_QWORD *)v63 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(std::path::PathBuf,bool)>>(&v73);
  v79 = 0LL;
  v80 = 8LL;
  v81 = 0LL;
  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v60, v91);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v73, v60);
    if ( (_QWORD)v73 == 0x8000000000000000LL )
      break;
    v78 = v74;
    v77 = v73;
    v87 = v76;
    v86 = v75;
    std::fs::read_dir(&v64, &v77);
    if ( BYTE8(v64) == 2 )
    {
      v33 = v64;
      *(_QWORD *)v67 = v64;
      if ( !(unsigned __int8)std::io::error::Error::kind(v64) )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v67);
        goto LABEL_38;
      }
      *(_QWORD *)&v63[23] = v78;
      *(_OWORD *)&v63[7] = v77;
      v57 = v62;
      *(_BYTE *)v62 = 42;
      v58 = *(_QWORD *)&v63[15];
      v59 = *(_QWORD *)&v63[23];
      *(_OWORD *)(v57 + 1) = *(_OWORD *)v63;
      *(_QWORD *)(v57 + 16) = v58;
      *(_QWORD *)(v57 + 24) = v59;
      *(_QWORD *)(v57 + 32) = v33;
      core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v75);
      goto LABEL_40;
    }
    v82 = v64;
    v83 = BYTE8(v64);
    v34 = 32 * (unsigned int)(v87 != 0);
    v70 = *((_QWORD *)&v86 + 1);
    v84 = v34 + *((_QWORD *)&v86 + 1);
    v71 = v87;
    v85 = v34 - 32 * v87;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v63, &v82);
      if ( *(_DWORD *)v63 != 1 )
        break;
      if ( !*(_QWORD *)&v63[8] )
      {
        just::search::Search::find_global_justfile::{{closure}}(v67, *((_QWORD *)&v77 + 1), v78, *(_QWORD *)&v63[16]);
        v45 = *(_QWORD *)v67;
        v46 = *(_OWORD *)&v67[8];
        v99 = *(_OWORD *)&v67[8];
        v100 = v68;
        v47 = v62;
        *(_QWORD *)(v62 + 32) = v68;
        *(_OWORD *)(v47 + 16) = v46;
        *(_BYTE *)v47 = 42;
        *(_QWORD *)(v47 + 8) = v45;
        core::ptr::drop_in_place<std::fs::ReadDir>(&v82);
        core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v75);
        core::ptr::drop_in_place<std::path::PathBuf>(&v77);
LABEL_40:
        core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<std::path::PathBuf,alloc::vec::Vec<(std::path::PathBuf,bool)>>>(v60);
        return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v79);
      }
      v66 = *(_QWORD *)&v63[40];
      v65 = *(_OWORD *)&v63[24];
      v64 = *(_OWORD *)&v63[8];
      std::fs::DirEntry::file_name(v88, &v64);
      core::str::converts::from_utf8(v67, v89, v90);
      if ( v67[0] )
      {
        v35 = 0LL;
        if ( (v71 == 0) | v67[0] & 1 )
          goto LABEL_26;
LABEL_27:
        v36 = *(_QWORD *)&v67[16];
        v37 = v85;
        v38 = v84;
        v39 = v70;
        while ( 2 )
        {
          v40 = v39;
          v39 = v38;
          v41 = std::path::Path::file_name(*(_QWORD *)(v40 + 8), *(_QWORD *)(v40 + 16));
          if ( !v41 )
          {
            v48 = &off_42E690;
            goto LABEL_46;
          }
          core::str::converts::from_utf8(v67, v41, v42);
          if ( (v67[0] & 1) != 0 )
          {
            v48 = &off_42E6A8;
            goto LABEL_46;
          }
          if ( *(_BYTE *)(v40 + 24) )
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v35,
                                    v36,
                                    *(_QWORD *)&v67[8],
                                    *(_QWORD *)&v67[16]) )
            {
LABEL_35:
              v43 = std::path::Path::parent(*(_QWORD *)(v40 + 8), *(_QWORD *)(v40 + 16));
              if ( !v43 )
              {
                v48 = &off_42E6C0;
LABEL_46:
                core::option::unwrap_failed(v48);
              }
              std::path::Path::join(v67, v43, v44, v35, v36);
              alloc::vec::Vec<T,A>::push(&v79, v67, &off_42E6D8);
            }
          }
          else if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(
                                       v35,
                                       v36,
                                       *(_QWORD *)&v67[8],
                                       *(_QWORD *)&v67[16]) )
          {
            goto LABEL_35;
          }
          v38 = v39 + 32;
          v37 += 32LL;
          if ( v37 == 32 )
            goto LABEL_26;
          continue;
        }
      }
      v35 = *(_QWORD *)&v67[8];
      if ( v71 )
        goto LABEL_27;
LABEL_26:
      core::ptr::drop_in_place<std::fs::DirEntry>(&v64);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v88);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v82);
LABEL_38:
    core::ptr::drop_in_place<alloc::vec::Vec<(std::path::PathBuf,bool)>>(&v75);
    core::ptr::drop_in_place<std::path::PathBuf>(&v77);
  }
  core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<std::path::PathBuf,alloc::vec::Vec<(std::path::PathBuf,bool)>>>(v60);
  if ( v81 <= 1 )
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v60, &v79);
    v56 = (_BYTE *)v62;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v62 + 8, v60);
    *v56 = 56;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(v60);
  }
  else
  {
    alloc::slice::stable_sort(v80);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v60, &v79);
    *(_QWORD *)&v60[32] = v92;
    v49 = v62;
    core::iter::traits::iterator::Iterator::collect(v62 + 80, v60);
    v50 = *(_OWORD *)(v69 + 16);
    v51 = *(_OWORD *)(v69 + 32);
    v52 = *(_OWORD *)(v69 + 48);
    *(_OWORD *)&v60[7] = *(_OWORD *)v69;
    *(_OWORD *)&v60[23] = v50;
    *(_OWORD *)&v60[39] = v51;
    *(_OWORD *)&v60[55] = v52;
    v61 = *(_QWORD *)(v69 + 64);
    *(_BYTE *)v49 = 0;
    v53 = *(_OWORD *)&v60[16];
    v54 = *(_OWORD *)&v60[32];
    v55 = *(_OWORD *)&v60[48];
    *(_OWORD *)(v49 + 1) = *(_OWORD *)v60;
    *(_OWORD *)(v49 + 17) = v53;
    *(_OWORD *)(v49 + 33) = v54;
    *(_OWORD *)(v49 + 49) = v55;
    *(_QWORD *)(v49 + 64) = *(_QWORD *)&v60[63];
    result = v61;
    *(_QWORD *)(v49 + 72) = v61;
  }
  return result;
}