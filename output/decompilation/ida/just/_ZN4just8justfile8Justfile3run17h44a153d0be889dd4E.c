__int64 __fastcall just::justfile::Justfile::run(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BOOL8 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rcx
  char v17; // al
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  double v22; // rax
  __m128 v23; // xmm0
  double v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int64 v30; // r15
  char v31; // al
  __int64 v32; // r15
  __int64 v33; // rbp
  char v34; // al
  unsigned __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r12
  __int128 v38; // rax
  int v39; // r15d
  char v40; // al
  int v41; // ebp
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int64 v47; // r13
  __int64 v48; // rbp
  __int64 v49; // r15
  char v50; // al
  unsigned __int64 v51; // r14
  double v52; // rax
  __m128 v53; // xmm0
  __int64 v54; // rcx
  __int128 v55; // xmm1
  __int64 v56; // rdx
  __int64 v57; // r13
  __int64 v58; // rdx
  __int128 v59; // xmm0
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // [rsp+0h] [rbp-418h]
  __int64 v66; // [rsp+0h] [rbp-418h]
  __int64 v67; // [rsp+8h] [rbp-410h]
  __int64 v68; // [rsp+8h] [rbp-410h]
  __int64 v70; // [rsp+18h] [rbp-400h] BYREF
  __int64 v71; // [rsp+20h] [rbp-3F8h]
  __int64 v72; // [rsp+28h] [rbp-3F0h]
  _OWORD src[14]; // [rsp+30h] [rbp-3E8h] BYREF
  void *v74; // [rsp+110h] [rbp-308h] BYREF
  __int64 v75; // [rsp+118h] [rbp-300h]
  __int128 *v76; // [rsp+120h] [rbp-2F8h]
  __int64 v77; // [rsp+128h] [rbp-2F0h]
  void *v78; // [rsp+130h] [rbp-2E8h]
  __int64 v79; // [rsp+138h] [rbp-2E0h]
  __int128 v80; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v81; // [rsp+150h] [rbp-2C8h]
  __int128 v82; // [rsp+160h] [rbp-2B8h] BYREF
  __int128 v83; // [rsp+170h] [rbp-2A8h]
  __int128 v84; // [rsp+180h] [rbp-298h]
  __int128 v85; // [rsp+190h] [rbp-288h]
  __int128 v86; // [rsp+1A0h] [rbp-278h]
  __int128 v87; // [rsp+1B0h] [rbp-268h]
  _QWORD v88[3]; // [rsp+1C8h] [rbp-250h] BYREF
  _QWORD v89[2]; // [rsp+1E0h] [rbp-238h] BYREF
  unsigned __int64 v90; // [rsp+1F0h] [rbp-228h]
  __int128 v91; // [rsp+1F8h] [rbp-220h] BYREF
  __int64 v92; // [rsp+208h] [rbp-210h]
  __int128 v93; // [rsp+210h] [rbp-208h] BYREF
  __int64 v94; // [rsp+220h] [rbp-1F8h]
  __int64 v95; // [rsp+228h] [rbp-1F0h] BYREF
  __int64 v96; // [rsp+230h] [rbp-1E8h]
  __int64 v97; // [rsp+238h] [rbp-1E0h]
  _OWORD dest[14]; // [rsp+240h] [rbp-1D8h] BYREF
  _BYTE v99[32]; // [rsp+328h] [rbp-F0h] BYREF
  _QWORD v100[3]; // [rsp+348h] [rbp-D0h] BYREF
  double v101[4]; // [rsp+360h] [rbp-B8h] BYREF
  __m128 v102; // [rsp+380h] [rbp-98h]
  _OWORD v103[2]; // [rsp+390h] [rbp-88h] BYREF
  _BYTE v104[104]; // [rsp+3B0h] [rbp-68h] BYREF

  v11 = *a5;
  v12 = a5[1];
  v13 = *a5;
  v14 = *a5 != 0;
  if ( *a5 )
    v13 = a5[2];
  src[0] = *a5 != 0;
  *(_QWORD *)&src[1] = v11;
  *((_QWORD *)&src[1] + 1) = v12;
  src[2] = (unsigned __int64)v14;
  *(_QWORD *)&src[3] = v11;
  *((_QWORD *)&src[3] + 1) = v12;
  *(_QWORD *)&src[4] = v13;
  *((_QWORD *)&src[4] + 1) = a2;
  core::iter::traits::iterator::Iterator::collect(&v91, src);
  if ( v92 )
  {
    *(_QWORD *)((char *)&src[1] + 7) = v92;
    *(_OWORD *)((char *)src + 7) = v91;
    *(_BYTE *)a1 = 51;
    result = *(_QWORD *)((char *)src + 15);
    v16 = *(_QWORD *)((char *)&src[1] + 7);
    *(_OWORD *)(a1 + 1) = src[0];
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v16;
    return result;
  }
  if ( *(_BYTE *)(a3 + 413) )
  {
    just::load_dotenv::load_dotenv(src, a3, a2 + 21, *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40));
    v17 = src[0];
    if ( LOBYTE(src[0]) != 56 )
    {
      v28 = src[2];
      v29 = src[3];
      *(_OWORD *)((char *)dest + 15) = src[1];
      dest[0] = *(_OWORD *)((char *)src + 1);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&src[6];
      *(_OWORD *)(a1 + 80) = src[5];
      *(_OWORD *)(a1 + 64) = src[4];
      *(_OWORD *)(a1 + 48) = v29;
      *(_OWORD *)(a1 + 32) = v28;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)dest + 15);
      *(_OWORD *)(a1 + 1) = dest[0];
      *(_BYTE *)a1 = v17;
      return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v91);
    }
    v80 = *(_OWORD *)((char *)src + 8);
    v81 = *((_QWORD *)&src[1] + 1);
  }
  else
  {
    *(_QWORD *)&v80 = 0LL;
    v81 = 0LL;
  }
  just::scope::Scope::root(v99);
  typed_arena::Arena<T>::new(v104);
  v88[0] = 0LL;
  v88[2] = 0LL;
  just::justfile::Justfile::evaluate_scopes(
    (__int64)src,
    a2,
    (__int64)v104,
    a3,
    (__int64)&v80,
    a5,
    (__int64)v99,
    (__int64)v88,
    a4);
  v18 = src[0];
  if ( LOBYTE(src[0]) != 56 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&src[6];
    *(_OWORD *)(a1 + 81) = *(_OWORD *)((char *)&src[5] + 1);
    *(_OWORD *)(a1 + 65) = *(_OWORD *)((char *)&src[4] + 1);
    v25 = *(_OWORD *)((char *)src + 1);
    v26 = *(_OWORD *)((char *)&src[1] + 1);
    v27 = *(_OWORD *)((char *)&src[2] + 1);
    *(_OWORD *)(a1 + 49) = *(_OWORD *)((char *)&src[3] + 1);
    *(_OWORD *)(a1 + 33) = v27;
    *(_OWORD *)(a1 + 17) = v26;
    *(_OWORD *)(a1 + 1) = v25;
    *(_BYTE *)a1 = v18;
    goto LABEL_64;
  }
  v19 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v88[0], v88[1], a2[7], a2[8]);
  if ( !v19 )
    core::option::unwrap_failed(&off_430190);
  v20 = *(_QWORD *)(v19 + 8);
  v21 = 2LL;
  if ( (*(_QWORD *)(a3 + 312) ^ 0x8000000000000000LL) < 0x11 )
    v21 = *(_QWORD *)(a3 + 312) ^ 0x8000000000000000LL;
  if ( v21 == 2 )
  {
    if ( *(_BYTE *)(a3 + 417) )
    {
      just::settings::Settings::shell_command(src);
      std::process::Command::arg(src, a3 + 336);
      memcpy(dest, src, sizeof(dest));
    }
    else
    {
      std::process::Command::new(dest, a3 + 336);
    }
    v68 = *(_QWORD *)(a3 + 320);
    v66 = *(_QWORD *)(a3 + 328);
    std::process::Command::args(dest);
    std::process::Command::current_dir(dest, a4 + 24);
    v74 = 0LL;
    v76 = 0LL;
    v77 = v20;
    <std::process::Command as just::command_ext::CommandExt>::export(dest, a2 + 21, &v80, &v74, a2 + 71);
    memcpy(src, dest, sizeof(src));
    <std::process::Command as just::command_ext::CommandExt>::status_guard(&v82, src);
    v39 = v83;
    if ( (v82 & 1) != 0 )
    {
      just::justfile::Justfile::run::{{closure}}(
        src,
        *(_QWORD *)(a3 + 344),
        *(_QWORD *)(a3 + 352),
        v68,
        v66,
        *((_QWORD *)&v82 + 1));
      v40 = src[0];
      LOWORD(v70) = *(_WORD *)((char *)src + 1);
      BYTE2(v70) = BYTE3(src[0]);
      v41 = DWORD1(src[0]);
      v82 = *(_OWORD *)((char *)src + 8);
      v83 = *(_OWORD *)((char *)&src[1] + 8);
      v84 = *(_OWORD *)((char *)&src[2] + 8);
      v85 = *(_OWORD *)((char *)&src[3] + 8);
      v86 = *(_OWORD *)((char *)&src[4] + 8);
      v87 = *(_OWORD *)((char *)&src[5] + 8);
      if ( LOBYTE(src[0]) != 56 )
      {
        *(_BYTE *)(a1 + 3) = BYTE2(v70);
        *(_WORD *)(a1 + 1) = v70;
        v42 = v83;
        v43 = v84;
        v44 = v85;
        *(_OWORD *)(a1 + 8) = v82;
        *(_OWORD *)(a1 + 24) = v42;
        *(_OWORD *)(a1 + 40) = v43;
        *(_OWORD *)(a1 + 56) = v44;
        *(_OWORD *)(a1 + 72) = v86;
        *(_OWORD *)(a1 + 88) = v87;
        *(_BYTE *)a1 = v40;
        *(_DWORD *)(a1 + 4) = v41;
LABEL_60:
        core::ptr::drop_in_place<just::scope::Scope>(&v74);
        goto LABEL_64;
      }
    }
    else
    {
      v41 = DWORD1(v82);
    }
    if ( v41 )
    {
      <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(
        src,
        *(_QWORD *)(a3 + 344),
        *(_QWORD *)(a3 + 352));
      *(_QWORD *)&v83 = *(_QWORD *)&src[1];
      v82 = src[0];
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, v68, v66);
      *(_QWORD *)(a1 + 24) = v83;
      *(_OWORD *)(a1 + 8) = v82;
      *(_OWORD *)(a1 + 32) = src[0];
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&src[1];
      *(_BYTE *)a1 = 11;
      *(_DWORD *)(a1 + 4) = v41;
    }
    else if ( v39 )
    {
      *(_BYTE *)a1 = 30;
      *(_DWORD *)(a1 + 4) = v39;
    }
    else
    {
      *(_BYTE *)a1 = 56;
    }
    goto LABEL_60;
  }
  if ( v21 == 6 )
  {
    if ( *(_QWORD *)(a3 + 320) == 0x8000000000000000LL )
    {
      v22 = *(double *)v20;
      if ( *(_QWORD *)v20 )
      {
        v23 = *(__m128 *)(v20 + 8);
        *(_QWORD *)&v24 = 1LL;
      }
      else
      {
        v23 = 0LL;
        v24 = 0.0;
      }
      *(double *)v100 = v24;
      v100[1] = 0LL;
      *(double *)&v100[2] = v22;
      _mm_storel_ps(v101, v23);
      v101[1] = v24;
      v101[2] = 0.0;
      v101[3] = v22;
      v102 = v23;
      v51 = core::iter::traits::iterator::Iterator::fold(v100);
      v52 = *(double *)v20;
      if ( *(_QWORD *)v20 )
      {
        v53 = *(__m128 *)(v20 + 8);
        v54 = 1LL;
      }
      else
      {
        v53 = 0LL;
        v54 = 0LL;
      }
      src[0] = (unsigned __int64)v54;
      *(double *)&src[1] = v52;
      _mm_storel_ps((double *)&src[1] + 1, v53);
      src[2] = (unsigned __int64)v54;
      *(double *)&src[3] = v52;
      *(__m128 *)((char *)&src[3] + 8) = v53;
      if ( v51 > 0xFFFF )
      {
        while ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(src) && v63 )
        {
          if ( !*(_BYTE *)(v63 + 102) )
          {
            v70 = just::token::Token::lexeme(v63 + 24);
            v71 = v64;
            *(_QWORD *)&dest[0] = &off_42CE08;
            *((_QWORD *)&dest[0] + 1) = 1LL;
            dest[1] = 8uLL;
            core::panicking::panic_fmt(dest, &off_4301D8);
          }
        }
      }
      else
      {
        while ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(src) )
        {
          v57 = v56;
          if ( !v56 )
            break;
          if ( !*(_BYTE *)(v56 + 102) )
          {
            v70 = just::token::Token::lexeme(v56 + 24);
            v71 = v58;
            *(_QWORD *)&v82 = &v70;
            *((_QWORD *)&v82 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v83 = v57;
            *((_QWORD *)&v83 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v84 = 0LL;
            WORD4(v84) = v51;
            v74 = &unk_4301A8;
            v75 = 3LL;
            v78 = &unk_71130;
            v79 = 2LL;
            v76 = &v82;
            v77 = 3LL;
            std::io::stdio::_print(&v74);
          }
        }
      }
    }
    else
    {
      v36 = *(_QWORD *)(a3 + 328);
      v37 = *(_QWORD *)(a3 + 336);
      *(_QWORD *)&v38 = just::scope::Scope::value(v20, v36, v37);
      if ( !(_QWORD)v38 )
      {
        just::justfile::Justfile::suggest_variable((__int64)dest, a2, v36, v37);
        <alloc::string::String as core::clone::Clone>::clone(&v82, a3 + 320);
        *(_QWORD *)(a1 + 56) = v83;
        *(_OWORD *)(a1 + 40) = v82;
        *(_OWORD *)((char *)src + 7) = dest[0];
        *(_OWORD *)((char *)&src[1] + 7) = dest[1];
        *(_BYTE *)a1 = 21;
        v55 = src[1];
        *(_OWORD *)(a1 + 1) = src[0];
        *(_OWORD *)(a1 + 17) = v55;
        *(_QWORD *)(a1 + 32) = *(_QWORD *)((char *)&src[1] + 15);
        goto LABEL_64;
      }
      v82 = v38;
      *(_QWORD *)&dest[0] = &v82;
      *((_QWORD *)&dest[0] + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = asc_65DB0;
      *((_QWORD *)&src[0] + 1) = 1LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = dest;
      *((_QWORD *)&src[1] + 1) = 1LL;
      std::io::stdio::_print(src);
    }
    *(_BYTE *)a1 = 56;
LABEL_64:
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,(&just::justfile::Justfile,&just::scope::Scope)>>(v88);
    core::ptr::drop_in_place<typed_arena::Arena<just::scope::Scope>>(v104);
    core::ptr::drop_in_place<just::scope::Scope>(v99);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v80);
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v91);
  }
  core::iter::traits::iterator::Iterator::collect(&v95, a6, a6 + 24 * a7);
  v30 = v96;
  just::argument_parser::ArgumentParser::parse_arguments((__int64)src, (__int64)a2, v96, v97);
  v31 = src[0];
  if ( LOBYTE(src[0]) != 56 )
  {
    v45 = src[2];
    v46 = src[3];
    *(_OWORD *)((char *)dest + 15) = src[1];
    dest[0] = *(_OWORD *)((char *)src + 1);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&src[6];
    *(_OWORD *)(a1 + 80) = src[5];
    *(_OWORD *)(a1 + 64) = src[4];
    *(_OWORD *)(a1 + 48) = v46;
    *(_OWORD *)(a1 + 32) = v45;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)dest + 15);
    *(_OWORD *)(a1 + 1) = dest[0];
    *(_BYTE *)a1 = v31;
LABEL_63:
    core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
      v95,
      v30);
    goto LABEL_64;
  }
  v65 = v30;
  v93 = *(_OWORD *)((char *)src + 8);
  v94 = *((_QWORD *)&src[1] + 1);
  v89[0] = 0LL;
  v89[1] = 8LL;
  v90 = 0LL;
  if ( *((_QWORD *)&src[1] + 1) )
  {
    v32 = *((_QWORD *)&v93 + 1);
    v67 = 48LL * *((_QWORD *)&src[1] + 1);
    v33 = 0LL;
    while ( 1 )
    {
      just::justfile::Justfile::invocation(
        (unsigned int)src,
        (_DWORD)a2,
        *(_QWORD *)(v32 + v33 + 8),
        *(_QWORD *)(v32 + v33 + 16),
        *(_QWORD *)(v32 + v33 + 32),
        *(_QWORD *)(v32 + v33 + 40),
        0LL);
      v34 = src[0];
      if ( LOBYTE(src[0]) != 56 )
        break;
      *(_OWORD *)((char *)&dest[1] + 7) = *(_OWORD *)((char *)&src[1] + 8);
      *(_OWORD *)((char *)dest + 7) = *(_OWORD *)((char *)src + 8);
      v103[0] = *(_OWORD *)((char *)src + 8);
      v103[1] = *(_OWORD *)((char *)&src[1] + 8);
      alloc::vec::Vec<T,A>::push(v89, v103);
      v33 += 48LL;
      if ( v67 == v33 )
        goto LABEL_27;
    }
    *(_QWORD *)((char *)&dest[1] + 15) = *(_QWORD *)&src[2];
    dest[1] = *(_OWORD *)((char *)&src[1] + 1);
    dest[0] = *(_OWORD *)((char *)src + 1);
    *(_OWORD *)(a1 + 88) = *(_OWORD *)((char *)&src[5] + 8);
    *(_OWORD *)(a1 + 72) = *(_OWORD *)((char *)&src[4] + 8);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)((char *)&src[3] + 8);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)((char *)&src[2] + 8);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)((char *)&dest[1] + 15);
    v59 = dest[0];
    *(_OWORD *)(a1 + 17) = dest[1];
    *(_OWORD *)(a1 + 1) = v59;
    *(_BYTE *)a1 = v34;
    goto LABEL_58;
  }
LABEL_27:
  if ( *(_BYTE *)(a3 + 416) )
  {
    v35 = v90;
    if ( v90 >= 2 )
    {
      *(_BYTE *)a1 = 22;
      *(_QWORD *)(a1 + 8) = v35;
LABEL_58:
      core::ptr::drop_in_place<alloc::vec::Vec<just::justfile::Invocation>>(v89);
      v30 = v65;
LABEL_62:
      core::ptr::drop_in_place<alloc::vec::Vec<just::argument_parser::ArgumentGroup>>(&v93);
      goto LABEL_63;
    }
  }
  LODWORD(v74) = 0;
  BYTE4(v74) = 0;
  v75 = 0LL;
  v77 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v82, v89);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(dest, &v82);
  v47 = *(_QWORD *)&dest[0];
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
  {
    while ( 1 )
    {
      v48 = *((_QWORD *)&dest[0] + 1);
      v49 = *((_QWORD *)&dest[1] + 1);
      core::iter::traits::iterator::Iterator::collect(
        &v70,
        *((_QWORD *)&dest[0] + 1),
        *((_QWORD *)&dest[0] + 1) + 16LL * *(_QWORD *)&dest[1]);
      just::justfile::Justfile::run_recipe(
        (unsigned int)src,
        v71,
        v72,
        a3,
        (unsigned int)&v80,
        0,
        (__int64)&v74,
        v49,
        (__int64)v88,
        a4);
      v50 = src[0];
      if ( LOBYTE(src[0]) != 56 )
        break;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v70);
      core::ptr::drop_in_place<just::justfile::Invocation>(v47, v48);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(dest, &v82);
      v47 = *(_QWORD *)&dest[0];
      if ( *(_QWORD *)&dest[0] == 0x8000000000000000LL )
        goto LABEL_46;
    }
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&src[6];
    *(_OWORD *)(a1 + 81) = *(_OWORD *)((char *)&src[5] + 1);
    *(_OWORD *)(a1 + 65) = *(_OWORD *)((char *)&src[4] + 1);
    v60 = *(_OWORD *)((char *)src + 1);
    v61 = *(_OWORD *)((char *)&src[1] + 1);
    v62 = *(_OWORD *)((char *)&src[2] + 1);
    *(_OWORD *)(a1 + 49) = *(_OWORD *)((char *)&src[3] + 1);
    *(_OWORD *)(a1 + 33) = v62;
    *(_OWORD *)(a1 + 17) = v61;
    *(_OWORD *)(a1 + 1) = v60;
    *(_BYTE *)a1 = v50;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v70);
    core::ptr::drop_in_place<just::justfile::Invocation>(v47, v48);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::justfile::Invocation>>(&v82);
    v30 = v65;
    core::ptr::drop_in_place<just::ran::Ran>(&v74);
    goto LABEL_62;
  }
LABEL_46:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<just::justfile::Invocation>>(&v82);
  *(_BYTE *)a1 = 56;
  core::ptr::drop_in_place<just::ran::Ran>(&v74);
  core::ptr::drop_in_place<alloc::vec::Vec<just::argument_parser::ArgumentGroup>>(&v93);
  core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
    v95,
    v65);
  core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,(&just::justfile::Justfile,&just::scope::Scope)>>(v88);
  core::ptr::drop_in_place<typed_arena::Arena<just::scope::Scope>>(v104);
  core::ptr::drop_in_place<just::scope::Scope>(v99);
  core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v80);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v91);
}