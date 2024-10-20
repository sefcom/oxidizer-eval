__int64 __fastcall uu_mv::mv(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int64 v11; // rbx
  __int128 v12; // xmm0
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  int v19; // eax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  char is_dir; // bp
  char v26; // al
  int v27; // ecx
  char v28; // al
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // r15
  __m256i *v36; // rdi
  char v37; // al
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v41; // rax
  __int128 v42; // rax
  __m256i v43; // [rsp+0h] [rbp-298h] BYREF
  __int128 v44; // [rsp+20h] [rbp-278h]
  __int64 v45; // [rsp+30h] [rbp-268h]
  __int128 v46; // [rsp+40h] [rbp-258h] BYREF
  __int64 v47; // [rsp+50h] [rbp-248h]
  __int128 v48; // [rsp+58h] [rbp-240h]
  __m256i dest; // [rsp+70h] [rbp-228h] BYREF
  __int128 v50; // [rsp+90h] [rbp-208h]
  __int64 v51; // [rsp+A0h] [rbp-1F8h]
  char v52; // [rsp+A8h] [rbp-1F0h]
  __int128 v53; // [rsp+120h] [rbp-178h] BYREF
  __m256i *v54; // [rsp+130h] [rbp-168h]
  __int64 (__fastcall *v55)(); // [rsp+138h] [rbp-160h]
  __int64 v56; // [rsp+140h] [rbp-158h]
  __int128 v57; // [rsp+150h] [rbp-148h] BYREF
  _QWORD *v58; // [rsp+160h] [rbp-138h]
  char v59; // [rsp+168h] [rbp-130h]
  _QWORD v60[3]; // [rsp+178h] [rbp-120h] BYREF
  char v61; // [rsp+190h] [rbp-108h]
  __int64 v62; // [rsp+198h] [rbp-100h] BYREF
  _BYTE v63[8]; // [rsp+1A0h] [rbp-F8h] BYREF
  _QWORD *v64; // [rsp+1A8h] [rbp-F0h]
  unsigned __int64 v65; // [rsp+1B0h] [rbp-E8h]
  __int128 v66; // [rsp+1B8h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+1C8h] [rbp-D0h]
  __int128 v68; // [rsp+1D0h] [rbp-C8h] BYREF
  _QWORD *v69; // [rsp+1E0h] [rbp-B8h]
  __int64 v70; // [rsp+1E8h] [rbp-B0h]
  __int64 v71; // [rsp+1F0h] [rbp-A8h]
  void *v72; // [rsp+200h] [rbp-98h] BYREF
  __int128 v73; // [rsp+208h] [rbp-90h] BYREF
  __int64 v74; // [rsp+218h] [rbp-80h]
  __int128 v75; // [rsp+220h] [rbp-78h] BYREF
  __int64 v76; // [rsp+230h] [rbp-68h]
  _QWORD v77[2]; // [rsp+238h] [rbp-60h] BYREF
  _QWORD v78[2]; // [rsp+248h] [rbp-50h] BYREF
  _QWORD v79[8]; // [rsp+258h] [rbp-40h] BYREF

  v4 = a1 + 24 * a2;
  if ( (*(_BYTE *)(a3 + 50) & 1) != 0 )
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v63, a1, v4);
  else
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v63, a1, v4);
  if ( *(_QWORD *)(a3 + 24) != 0x8000000000000000LL )
  {
    v13 = v64;
    if ( v64 )
    {
      if ( ((unsigned __int8)v64 & 7) == 0 )
      {
        v14 = v65;
        if ( v65 <= 0x555555555555555LL )
        {
          if ( *(_QWORD *)(a3 + 32) )
          {
            if ( *(__int64 *)(a3 + 40) >= 0 )
            {
              std::sys::os_str::bytes::Slice::to_owned(&dest);
              v76 = dest.m256i_i64[2];
              v75 = *(_OWORD *)dest.m256i_i8;
              if ( dest.m256i_i64[1] )
              {
                if ( dest.m256i_i64[2] >= 0 )
                {
                  v11 = uu_mv::move_files_into_dir(v13, v14, dest.m256i_i64[1], dest.m256i_i64[2], a3);
                  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v75);
                  goto LABEL_119;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_122;
  }
  if ( v65 == 2 )
  {
    if ( v64 != 0LL && ((unsigned __int8)v64 & 7) == 0 )
    {
      v5 = v64[1];
      if ( v5 )
      {
        v6 = v64[2];
        if ( v6 >= 0 )
        {
          v7 = v64[4];
          if ( v7 )
          {
            v8 = v64[5];
            if ( v8 >= 0 )
            {
              if ( *(_BYTE *)(a3 + 54) != 1 )
                goto LABEL_32;
              if ( *(_QWORD *)(a3 + 8) && *(__int64 *)(a3 + 16) >= 0 )
              {
                if ( (unsigned __int8)uucore::features::backup_control::source_is_target_backup(v64[1], v6, v7, v8) )
                {
                  *(_QWORD *)&v46 = 1LL;
                  *((_QWORD *)&v46 + 1) = v7;
                  v47 = v8;
                  LOBYTE(v48) = 1;
                  v43.m256i_i64[0] = 1LL;
                  v43.m256i_i64[1] = v5;
                  v43.m256i_i64[2] = v6;
                  v43.m256i_i8[24] = 1;
                  *(_QWORD *)&v53 = &v46;
                  *((_QWORD *)&v53 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
                  v54 = &v43;
                  v55 = <os_display::Quoted as core::fmt::Display>::fmt;
                  dest.m256i_i64[0] = (__int64)&off_15B520;
                  dest.m256i_i64[1] = 3LL;
                  dest.m256i_i64[2] = (__int64)&v53;
                  dest.m256i_i64[3] = 2LL;
                  *(_QWORD *)&v50 = 0LL;
                  alloc::fmt::format::format_inner(&v68, &dest);
                  v57 = v68;
                  v58 = v69;
                  v9 = std::io::error::Error::new(0LL, &v57);
                  dest.m256i_i64[0] = 0x8000000000000000LL;
                  dest.m256i_i64[3] = v9;
                  v10 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                  v11 = (__int64)v10;
                  if ( !v10 )
                    alloc::alloc::handle_alloc_error(8LL, 32LL);
                  v12 = *(_OWORD *)dest.m256i_i8;
                  v10[1] = *(_OWORD *)&dest.m256i_u64[2];
                  *v10 = v12;
                  goto LABEL_119;
                }
LABEL_32:
                std::sys::pal::unix::fs::lstat(&dest);
                if ( dest.m256i_i64[0] == 2 )
                {
                  std::io::error::repr_bitpacked::decode_repr(&dest, dest.m256i_i64[1]);
                  if ( dest.m256i_i8[0] >= 3u )
                    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
                  if ( v6 && ((v19 = *(unsigned __int8 *)(v6 + v5 - 1), v19 == 47) || v19 == 92) )
                  {
                    *(_QWORD *)&v46 = 0LL;
                    *((_QWORD *)&v46 + 1) = 1LL;
                    v47 = 0LL;
                    v51 = 32LL;
                    v52 = 3;
                    dest.m256i_i64[0] = 0LL;
                    dest.m256i_i64[2] = 0LL;
                    *(_QWORD *)&v50 = &v46;
                    *((_QWORD *)&v50 + 1) = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                    std::sys::os_str::bytes::Slice::to_str(&v43, v5, v6);
                    if ( v43.m256i_i64[0] || !v43.m256i_i64[1] )
                      v20 = os_display::unix::write_escaped(&dest, v5, v6);
                    else
                      v20 = os_display::unix::write(&dest, v43.m256i_i64[1], v43.m256i_i64[2], 1LL);
                    if ( v20 )
                      core::result::unwrap_failed(
                        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                        55LL,
                        v60,
                        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                    *(_OWORD *)&v43.m256i_u64[1] = v46;
                    v43.m256i_i64[3] = v47;
                    v43.m256i_i64[0] = 1LL;
                    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                    if ( !v11 )
                      alloc::alloc::handle_alloc_error(8LL, 56LL);
                  }
                  else
                  {
                    *(_QWORD *)&v46 = 0LL;
                    *((_QWORD *)&v46 + 1) = 1LL;
                    v47 = 0LL;
                    v51 = 32LL;
                    v52 = 3;
                    dest.m256i_i64[0] = 0LL;
                    dest.m256i_i64[2] = 0LL;
                    *(_QWORD *)&v50 = &v46;
                    *((_QWORD *)&v50 + 1) = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                    std::sys::os_str::bytes::Slice::to_str(&v43, v5, v6);
                    if ( v43.m256i_i64[0] || !v43.m256i_i64[1] )
                      v28 = os_display::unix::write_escaped(&dest, v5, v6);
                    else
                      v28 = os_display::unix::write(&dest, v43.m256i_i64[1], v43.m256i_i64[2], 1LL);
                    if ( v28 )
                      core::result::unwrap_failed(
                        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                        55LL,
                        v60,
                        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                    *(_OWORD *)&v43.m256i_u64[1] = v46;
                    v43.m256i_i64[3] = v47;
                    v43.m256i_i64[0] = 0LL;
                    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                    if ( !v11 )
                      alloc::alloc::handle_alloc_error(8LL, 56LL);
                  }
                  goto LABEL_118;
                }
                std::path::Path::components(&v43, v5, v6);
                std::path::Path::components(&dest, v7, v8);
                if ( ((unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v43, &dest)
                   || (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(v5, v6, v7, v8)
                   || (unsigned __int8)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(
                                         v5,
                                         v6,
                                         v7,
                                         v8))
                  && !*(_BYTE *)(a3 + 54) )
                {
                  std::path::Path::components(&v43, v5, v6);
                  std::path::Path::components(&dest, asc_28EF5, 1LL);
                  if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v43, &dest)
                    || (unsigned __int8)std::path::Path::_ends_with(v5, v6, asc_28EF6, 2LL)
                    || (unsigned __int8)std::path::Path::is_file(v5, v6) )
                  {
                    *(_QWORD *)&v46 = 0LL;
                    *((_QWORD *)&v46 + 1) = 1LL;
                    v47 = 0LL;
                    v51 = 32LL;
                    v52 = 3;
                    dest.m256i_i64[0] = 0LL;
                    dest.m256i_i64[2] = 0LL;
                    *(_QWORD *)&v50 = &v46;
                    *((_QWORD *)&v50 + 1) = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                    std::sys::os_str::bytes::Slice::to_str(&v43, v5, v6);
                    if ( v43.m256i_i64[0] || !v43.m256i_i64[1] )
                      v29 = os_display::unix::write_escaped(&dest, v5, v6);
                    else
                      v29 = os_display::unix::write(&dest, v43.m256i_i64[1], v43.m256i_i64[2], 1LL);
                    if ( v29 )
                      core::result::unwrap_failed(
                        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                        55LL,
                        v60,
                        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                    v53 = v46;
                    v54 = (__m256i *)v47;
                    *(_QWORD *)&v46 = 0LL;
                    *((_QWORD *)&v46 + 1) = 1LL;
                    v47 = 0LL;
                    v51 = 32LL;
                    v52 = 3;
                    dest.m256i_i64[0] = 0LL;
                    dest.m256i_i64[2] = 0LL;
                    *(_QWORD *)&v50 = &v46;
                    *((_QWORD *)&v50 + 1) = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                    std::sys::os_str::bytes::Slice::to_str(&v43, v7, v8);
                    if ( v43.m256i_i64[0] || !v43.m256i_i64[1] )
                      v34 = os_display::unix::write_escaped(&dest, v7, v8);
                    else
                      v34 = os_display::unix::write(&dest, v43.m256i_i64[1], v43.m256i_i64[2], 1LL);
                    if ( v34 )
                      core::result::unwrap_failed(
                        anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                        55LL,
                        v60,
                        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                        &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                    v44 = v46;
                    v45 = v47;
                    *(_OWORD *)&v43.m256i_u64[1] = v53;
                    v43.m256i_i64[3] = (__int64)v54;
                    v43.m256i_i64[0] = 2LL;
                    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                    if ( !v11 )
                      alloc::alloc::handle_alloc_error(8LL, 56LL);
                  }
                  else
                  {
                    *(_QWORD *)&v53 = v5;
                    *((_QWORD *)&v53 + 1) = v6;
                    *(_QWORD *)&v46 = 0LL;
                    *((_QWORD *)&v46 + 1) = 1LL;
                    v47 = 0LL;
                    v51 = 32LL;
                    v52 = 3;
                    dest.m256i_i64[0] = 0LL;
                    dest.m256i_i64[2] = 0LL;
                    *(_QWORD *)&v50 = &v46;
                    *((_QWORD *)&v50 + 1) = &anon_447769264800e1b36145520fff97c7f2_4_llvm_3413629854620190702;
                    if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v53, &dest) )
                      core::result::unwrap_failed(
                        anon_447769264800e1b36145520fff97c7f2_5_llvm_3413629854620190702,
                        55LL,
                        v60,
                        &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
                        &anon_447769264800e1b36145520fff97c7f2_7_llvm_3413629854620190702);
                    *(_OWORD *)&v43.m256i_u64[1] = v46;
                    v43.m256i_i64[3] = v47;
                    v43.m256i_i64[0] = 3LL;
                    v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                    if ( !v11 )
                      alloc::alloc::handle_alloc_error(8LL, 56LL);
                  }
                  goto LABEL_118;
                }
                is_dir = std::path::Path::is_dir(v7, v8);
                v26 = std::path::Path::is_dir(v5, v6);
                if ( v8 && ((v27 = *(unsigned __int8 *)(v8 + v7 - 1), v27 == 47) || v27 == 92) )
                {
                  if ( !is_dir )
                  {
                    if ( !v26 && (*(_BYTE *)(a3 + 48) & 1) == 0 && *(_BYTE *)(a3 + 55) != 2 )
                    {
                      v43.m256i_i64[0] = 1LL;
                      v43.m256i_i64[1] = v7;
                      v43.m256i_i64[2] = v8;
                      v43.m256i_i8[24] = 1;
                      <T as alloc::string::ToString>::to_string(&v46, &v43);
                      dest.m256i_i64[3] = v47;
                      *(_OWORD *)&dest.m256i_u64[1] = v46;
                      dest.m256i_i64[0] = 9LL;
                      v18 = (_OWORD *)<T as core::convert::Into<U>>::into(&dest, &off_15B468);
                      goto LABEL_31;
                    }
LABEL_74:
                    std::sys::pal::unix::fs::stat(&dest);
                    if ( dest.m256i_i64[0] == 2 )
                    {
                      std::io::error::repr_bitpacked::decode_repr(&dest, dest.m256i_i64[1]);
                      if ( dest.m256i_i8[0] >= 3u )
                        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&dest.m256i_u64[1]);
                    }
                    else if ( (unsigned __int8)std::path::Path::is_dir(v5, v6) )
                    {
                      if ( *(_BYTE *)(a3 + 53) )
                      {
                        if ( *(_BYTE *)(a3 + 53) != 1 )
                          goto LABEL_93;
                        v78[0] = uucore::util_name();
                        v78[1] = v31;
                        v77[0] = v78;
                        v77[1] = <&T as core::fmt::Display>::fmt;
                        *(_QWORD *)&v68 = &unk_15B480;
                        *((_QWORD *)&v68 + 1) = 2LL;
                        v71 = 0LL;
                        v69 = v77;
                        v70 = 1LL;
                        std::io::stdio::_eprint(&v68);
                        v60[0] = 1LL;
                        v60[1] = v7;
                        v60[2] = v8;
                        v61 = 1;
                        v79[0] = v60;
                        v79[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                        *(_QWORD *)&v53 = &off_15B4A0;
                        *((_QWORD *)&v53 + 1) = 2LL;
                        v56 = 0LL;
                        v54 = (__m256i *)v79;
                        v55 = (__int64 (__fastcall *)())(&dword_0 + 1);
                        std::io::stdio::_eprint(&v53);
                        *(_QWORD *)&v46 = &off_15B4C0;
                        *((_QWORD *)&v46 + 1) = 1LL;
                        v47 = 8LL;
                        v48 = 0LL;
                        std::io::stdio::_eprint(&v46);
                        v72 = &std::io::stdio::stderr::INSTANCE;
                        v32 = <std::io::stdio::Stderr as std::io::Write>::flush(&v72);
                        if ( v32 )
                        {
                          v62 = v32;
                          *(_QWORD *)&v42 = uucore::util_name();
                          v73 = v42;
                          *(_QWORD *)&v66 = &v73;
                          *((_QWORD *)&v66 + 1) = <&T as core::fmt::Display>::fmt;
                          v43.m256i_i64[0] = (__int64)&unk_15B480;
                          v43.m256i_i64[1] = 2LL;
                          *(_QWORD *)&v44 = 0LL;
                          v43.m256i_i64[2] = (__int64)&v66;
                          v43.m256i_i64[3] = 1LL;
                          std::io::stdio::_eprint(&v43);
                          *(_QWORD *)&v57 = &v62;
                          *((_QWORD *)&v57 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
                          dest.m256i_i64[0] = (__int64)&anon_80a71568819187eb068e7dc772b8a818_49_llvm_5221707602514596811;
                          dest.m256i_i64[1] = 2LL;
                          *(_QWORD *)&v50 = 0LL;
                          dest.m256i_i64[2] = (__int64)&v57;
                          dest.m256i_i64[3] = 1LL;
                          std::io::stdio::_eprint(&dest);
                          std::process::exit(1);
                        }
                        if ( !(unsigned __int8)uucore::read_yes() )
                        {
                          v41 = std::io::error::Error::new(39LL, 1LL, 0LL);
                          v18 = (_OWORD *)<T as core::convert::Into<U>>::into(v41, &off_15B4D0);
                        }
                        else
                        {
LABEL_93:
                          *(_QWORD *)&v57 = 1LL;
                          *((_QWORD *)&v57 + 1) = v5;
                          v58 = (_QWORD *)v6;
                          v59 = 1;
                          <T as alloc::string::ToString>::to_string(&v66, &v57);
                          v43.m256i_i64[0] = 1LL;
                          v43.m256i_i64[1] = v7;
                          v43.m256i_i64[2] = v8;
                          v43.m256i_i8[24] = 1;
                          <T as alloc::string::ToString>::to_string(&v73, &v43);
                          dest.m256i_i64[3] = v67;
                          *(_OWORD *)&dest.m256i_u64[1] = v66;
                          v50 = v73;
                          v51 = v74;
                          dest.m256i_i64[0] = 6LL;
                          v18 = (_OWORD *)<T as core::convert::Into<U>>::into(&dest, &off_15B508);
                        }
                        goto LABEL_31;
                      }
                      goto LABEL_105;
                    }
                    v33 = uu_mv::rename(v5, v6, v7, v8, a3, 0LL);
                    if ( v33 )
                    {
                      v18 = uu_mv::handle_two_paths::{{closure}}(v33);
                      goto LABEL_31;
                    }
LABEL_105:
                    v11 = 0LL;
                    goto LABEL_119;
                  }
                }
                else if ( !is_dir )
                {
                  goto LABEL_74;
                }
                if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
                {
                  if ( (unsigned __int8)std::path::Path::is_dir(v5, v6) )
                  {
                    v30 = uu_mv::rename(v5, v6, v7, v8, a3, 0LL);
                    if ( v30 )
                    {
                      dest.m256i_i64[0] = v5;
                      dest.m256i_i64[1] = v6;
                      dest.m256i_i64[2] = v7;
                      dest.m256i_i64[3] = v8;
                      v11 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                              v30,
                              &dest);
                    }
                    else
                    {
                      v11 = 0LL;
                    }
                    goto LABEL_119;
                  }
                  *(_QWORD *)&v46 = 0LL;
                  *((_QWORD *)&v46 + 1) = 1LL;
                  v47 = 0LL;
                  v51 = 32LL;
                  v52 = 3;
                  dest.m256i_i64[0] = 0LL;
                  dest.m256i_i64[2] = 0LL;
                  *(_QWORD *)&v50 = &v46;
                  *((_QWORD *)&v50 + 1) = &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_35_llvm_17209501424320820274;
                  std::sys::os_str::bytes::Slice::to_str(&v43, v7, v8);
                  if ( v43.m256i_i64[0] || !v43.m256i_i64[1] )
                    v37 = os_display::unix::write_escaped(&dest, v7, v8);
                  else
                    v37 = os_display::unix::write(&dest, v43.m256i_i64[1], v43.m256i_i64[2], 1LL);
                  if ( v37 )
                    core::result::unwrap_failed(
                      anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_36_llvm_17209501424320820274,
                      55LL,
                      v60,
                      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
                      &anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_38_llvm_17209501424320820274);
                  *(_OWORD *)&v43.m256i_u64[1] = v46;
                  v43.m256i_i64[3] = v47;
                  v43.m256i_i64[0] = 5LL;
                  v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                  if ( !v11 )
                    alloc::alloc::handle_alloc_error(8LL, 56LL);
                }
                else
                {
                  if ( !(unsigned __int8)std::path::Path::_starts_with(v7, v8, v5, v6) )
                  {
                    std::path::Path::to_path_buf(&dest, v5, v6);
                    v43.m256i_i64[2] = dest.m256i_i64[2];
                    *(_OWORD *)v43.m256i_i8 = *(_OWORD *)dest.m256i_i8;
                    v11 = uu_mv::move_files_into_dir(&v43, 1LL, v7, v8, a3);
                    v35 = 2LL;
                    v36 = &v43;
                    while ( v35 != 1 )
                    {
                      --v35;
                      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v36);
                      v36 = (__m256i *)((char *)v36 + 24);
                    }
                    goto LABEL_119;
                  }
                  *(_QWORD *)&v57 = v5;
                  *((_QWORD *)&v57 + 1) = v6;
                  v43.m256i_i64[0] = 0LL;
                  *(_OWORD *)&v43.m256i_u64[1] = 1uLL;
                  v51 = 32LL;
                  v52 = 3;
                  dest.m256i_i64[0] = 0LL;
                  dest.m256i_i64[2] = 0LL;
                  *(_QWORD *)&v50 = &v43;
                  *((_QWORD *)&v50 + 1) = &anon_447769264800e1b36145520fff97c7f2_4_llvm_3413629854620190702;
                  if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v57, &dest) )
                    core::result::unwrap_failed(
                      anon_447769264800e1b36145520fff97c7f2_5_llvm_3413629854620190702,
                      55LL,
                      v60,
                      &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
                      &anon_447769264800e1b36145520fff97c7f2_7_llvm_3413629854620190702);
                  v53 = *(_OWORD *)v43.m256i_i8;
                  v54 = (__m256i *)v43.m256i_i64[2];
                  *(_QWORD *)&v68 = v7;
                  *((_QWORD *)&v68 + 1) = v8;
                  *(_QWORD *)&v46 = 0LL;
                  *((_QWORD *)&v46 + 1) = 1LL;
                  v47 = 0LL;
                  v51 = 32LL;
                  v52 = 3;
                  dest.m256i_i64[0] = 0LL;
                  dest.m256i_i64[2] = 0LL;
                  *(_QWORD *)&v50 = &v46;
                  *((_QWORD *)&v50 + 1) = &anon_447769264800e1b36145520fff97c7f2_4_llvm_3413629854620190702;
                  if ( (unsigned __int8)<std::path::Display as core::fmt::Display>::fmt(&v68, &dest) )
                    core::result::unwrap_failed(
                      anon_447769264800e1b36145520fff97c7f2_5_llvm_3413629854620190702,
                      55LL,
                      v60,
                      &anon_30ecf5788dc16ea493c1f299142c4ef1_19_llvm_10347183305587337279,
                      &anon_447769264800e1b36145520fff97c7f2_7_llvm_3413629854620190702);
                  v44 = v46;
                  v45 = v47;
                  *(_OWORD *)&v43.m256i_u64[1] = v53;
                  v43.m256i_i64[3] = (__int64)v54;
                  v43.m256i_i64[0] = 4LL;
                  v11 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 56LL, 0LL);
                  if ( !v11 )
                    alloc::alloc::handle_alloc_error(8LL, 56LL);
                }
LABEL_118:
                *(_QWORD *)(v11 + 48) = v45;
                v38 = *(_OWORD *)v43.m256i_i8;
                v39 = *(_OWORD *)&v43.m256i_u64[2];
                *(_OWORD *)(v11 + 32) = v44;
                *(_OWORD *)(v11 + 16) = v39;
                *(_OWORD *)v11 = v38;
                goto LABEL_119;
              }
            }
          }
        }
      }
    }
LABEL_122:
    core::panicking::panic_nounwind(anon_e274cffadf33dbf508504243ff687348_19_llvm_17332325210196355997, 162LL);
  }
  if ( v64 == 0LL || ((unsigned __int8)v64 & 7) != 0 || v65 > 0x555555555555555LL )
    goto LABEL_122;
  if ( (*(_BYTE *)(a3 + 48) & 1) == 0 )
  {
    v15 = v65 - 1;
    if ( !v65 )
      core::option::unwrap_failed(&off_15B570, v15);
    v16 = v64[3 * v15 + 1];
    if ( v16 )
    {
      v17 = v64[3 * v15 + 2];
      if ( v17 >= 0 )
      {
        v18 = (_OWORD *)uu_mv::move_files_into_dir(v64, v15, v16, v17, a3);
LABEL_31:
        v11 = (__int64)v18;
        goto LABEL_119;
      }
    }
    goto LABEL_122;
  }
  if ( v65 <= 2 )
    core::panicking::panic_bounds_check(2LL, v65, &off_15B598);
  v21 = v64[7];
  if ( !v21 )
    goto LABEL_122;
  v22 = v64[8];
  if ( v22 < 0 )
    goto LABEL_122;
  v43.m256i_i64[0] = 1LL;
  v43.m256i_i64[1] = v21;
  v43.m256i_i64[2] = v22;
  v43.m256i_i8[24] = 1;
  *(_QWORD *)&v53 = &v43;
  *((_QWORD *)&v53 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  dest.m256i_i64[0] = (__int64)&off_15B588;
  dest.m256i_i64[1] = 1LL;
  dest.m256i_i64[2] = (__int64)&v53;
  dest.m256i_i64[3] = 1LL;
  *(_QWORD *)&v50 = 0LL;
  alloc::fmt::format::format_inner(&v46, &dest);
  dest.m256i_i64[2] = v47;
  *(_OWORD *)dest.m256i_i8 = v46;
  dest.m256i_i32[6] = 1;
  v23 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v11 = (__int64)v23;
  if ( !v23 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v24 = *(_OWORD *)dest.m256i_i8;
  v23[1] = *(_OWORD *)&dest.m256i_u64[2];
  *v23 = v24;
LABEL_119:
  core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v63);
  return v11;
}
