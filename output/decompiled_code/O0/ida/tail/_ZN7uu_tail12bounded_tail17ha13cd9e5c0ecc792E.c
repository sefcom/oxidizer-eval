__int64 __fastcall uu_tail::bounded_tail(_QWORD *a1, __int128 *a2)
{
  __int64 v2; // r12
  _QWORD *v3; // r15
  __int64 result; // rax
  unsigned __int8 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int128 *v9; // r14
  _QWORD *v10; // r15
  _BYTE *v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // rsi
  bool v15; // zf
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  bool v24; // cf
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // [rsp+0h] [rbp-118h]
  __int64 v37; // [rsp+8h] [rbp-110h] BYREF
  __int128 v38; // [rsp+10h] [rbp-108h] BYREF
  __int128 v39; // [rsp+20h] [rbp-F8h]
  __int128 v40; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v41; // [rsp+40h] [rbp-D8h]
  __int64 v42; // [rsp+50h] [rbp-C8h]
  _QWORD *v43; // [rsp+58h] [rbp-C0h]
  char **v44; // [rsp+68h] [rbp-B0h]
  __int64 v45; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+80h] [rbp-98h] BYREF
  __int64 v48; // [rsp+88h] [rbp-90h] BYREF
  __int64 v49; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-80h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-78h] BYREF
  __int128 *v52; // [rsp+A8h] [rbp-70h]
  _BYTE *v53; // [rsp+B0h] [rbp-68h]
  __int64 v54; // [rsp+B8h] [rbp-60h]
  _QWORD v55[3]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+D8h] [rbp-40h]
  __int64 v57[7]; // [rsp+E0h] [rbp-38h] BYREF

  if ( (*((_BYTE *)a2 + 75) & 1) != 0 )
    core::panicking::panic(aAssertionFaile_4, 46LL, &off_18AC88);
  v3 = a1;
  result = *(_QWORD *)a2;
  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v56 = *((_QWORD *)a2 + 1);
      v5 = *((_BYTE *)a2 + 16);
      v36 = a1;
      uu_tail::chunks::ReverseChunks::new(&v38, (__int64)a1);
      v41 = v39;
      v40 = v38;
      v42 = 0LL;
      v6 = 0LL;
      v44 = &off_18AB98;
LABEL_4:
      a1 = v55;
      a2 = &v40;
      <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(v55, &v40);
      v7 = 8LL;
      v8 = 0x8000000000000000LL;
      if ( v55[0] != 0x8000000000000000LL )
      {
        v2 = v42;
        if ( v42 == -1 )
          core::panicking::panic_const::panic_const_add_overflow(&anon_ab742581333cf5e7f01380032d71b570_4_llvm_1562610066123874583);
        v8 = v55[2];
        ++v42;
        v51 = v2;
        v52 = (__int128 *)v55[0];
        v53 = (_BYTE *)v55[1];
        v7 = 24LL;
      }
      *(__int64 *)((char *)&v51 + v7) = v8;
      v9 = v52;
      if ( v52 == (__int128 *)0x8000000000000000LL )
        goto LABEL_48;
      v10 = v53;
      if ( !v53 || v54 < 0 )
        core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
      v11 = &v53[v54];
      if ( !v2 && v54 && v53[v54 - 1] == v5 )
        --v11;
      do
      {
        v12 = v11 - v53;
        v13 = v11 - 1;
        do
        {
          if ( v13 + 1 == v53 )
          {
            if ( v52 )
              _rust_dealloc(v53, v52, 1LL);
            goto LABEL_4;
          }
          if ( v13 < v53 )
            core::panicking::panic_nounwind(anon_b4db73deccd4c3fb4917fbadd2f6109b_1_llvm_12929045902270977932, 71LL);
          --v12;
          v14 = v13 - 1;
          v15 = *v13-- == v5;
        }
        while ( !v15 );
        if ( !++v6 )
          goto LABEL_75;
        v11 = v14 + 1;
      }
      while ( v6 < v56 );
      v25 = v12 + 1;
      if ( !v25 )
      {
        v44 = &off_18ABB0;
LABEL_75:
        core::panicking::panic_const::panic_const_add_overflow(v44);
      }
      a2 = (_OWORD *)(&dword_0 + 2);
      a1 = v36;
      if ( <std::fs::File as std::io::Seek>::seek(v36, 2LL, v25) )
      {
        v55[0] = v26;
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, v55, &off_18A778, &off_18ABC8);
      }
      if ( v9 )
      {
        a1 = v10;
        a2 = v9;
        _rust_dealloc(v10, v9, 1LL);
      }
LABEL_48:
      v3 = v36;
      goto LABEL_59;
    case 1LL:
      v18 = *((_QWORD *)a2 + 1);
      if ( v18 < 2 )
        goto LABEL_59;
      v19 = *((_BYTE *)a2 + 16);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v51, 0x2000LL, 0LL);
      if ( v51 )
        alloc::raw_vec::handle_error(v52, v53);
      if ( !v53 )
        core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
      *(_QWORD *)&v40 = v53;
      *((_QWORD *)&v40 + 1) = 0x2000LL;
      v41 = 0LL;
      v42 = 0LL;
      v43 = a1;
      *(_QWORD *)&v38 = 0LL;
      *((_QWORD *)&v38 + 1) = 1LL;
      *(_QWORD *)&v39 = 0LL;
      v20 = v18 - 1;
      v21 = 0LL;
      break;
    case 2LL:
      goto LABEL_59;
    case 3LL:
      return result;
    case 4LL:
      result = *((_QWORD *)a2 + 1);
      switch ( result )
      {
        case 0LL:
          if ( <std::fs::File as std::io::Seek>::seek(a1, 1LL, 0LL) )
          {
            v50 = v16;
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v50, &off_18A778, &off_18ABE0);
          }
          if ( *((_QWORD *)a2 + 2) < v16 )
            v16 = *((_QWORD *)a2 + 2);
          if ( v16 == 0x8000000000000000LL )
            core::panicking::panic_const::panic_const_neg_overflow(&off_18ABF8);
          a2 = (_OWORD *)(&dword_0 + 1);
          if ( <std::fs::File as std::io::Seek>::seek(a1, 1LL, -(__int64)v16) )
          {
            v49 = v17;
            core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v49, &off_18A778, &off_18AC10);
          }
          goto LABEL_59;
        case 1LL:
          v27 = *((_QWORD *)a2 + 2);
          if ( v27 > 1 )
          {
            a2 = 0LL;
            if ( <std::fs::File as std::io::Seek>::seek(a1, 0LL, v27 - 1) )
            {
              v48 = v28;
              core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v48, &off_18A778, &off_18AC28);
            }
          }
          goto LABEL_59;
        case 2LL:
          goto LABEL_59;
        case 3LL:
          return result;
      }
      return result;
  }
  while ( 1 )
  {
    v22 = std::io::read_until(&v40, v19, &v38);
    if ( v22 )
      break;
    if ( !v23 )
      goto LABEL_53;
    v24 = __CFADD__(v23, v21);
    v21 += v23;
    if ( v24 )
      core::panicking::panic_const::panic_const_add_overflow(&off_18AB80);
    if ( !*((_QWORD *)&v38 + 1) || (__int64)v39 < 0 )
      core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
    *(_QWORD *)&v39 = 0LL;
    if ( !--v20 )
    {
      if ( (_QWORD)v38 )
        _rust_dealloc(*((_QWORD *)&v38 + 1), v38, 1LL);
      v3 = a1;
      if ( *((_QWORD *)&v40 + 1) )
        _rust_dealloc(v40, *((_QWORD *)&v40 + 1), 1LL);
      goto LABEL_58;
    }
  }
  v21 = v23;
LABEL_53:
  v3 = a1;
  if ( (_QWORD)v38 )
  {
    v29 = v22;
    _rust_dealloc(*((_QWORD *)&v38 + 1), v38, 1LL);
    v22 = v29;
  }
  if ( *((_QWORD *)&v40 + 1) )
  {
    v30 = v22;
    _rust_dealloc(v40, *((_QWORD *)&v40 + 1), 1LL);
    v22 = v30;
  }
  if ( v22 )
  {
    v45 = v21;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v45, &off_18A778, &off_18AC40);
  }
LABEL_58:
  a1 = v3;
  a2 = 0LL;
  if ( <std::fs::File as std::io::Seek>::seek(v3, 0LL, v21) )
  {
    v47 = v31;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v47, &off_18A778, &off_18AC58);
  }
LABEL_59:
  v57[0] = std::io::stdio::stdout(a1, a2);
  v37 = std::io::stdio::Stdout::lock(v57);
  result = <std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(v3, &v37);
  if ( result )
  {
    v46 = v32;
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, &v46, &off_18A778, &off_18AC70);
  }
  v33 = v37;
  v15 = (*(_DWORD *)(v37 + 12))-- == 1;
  if ( v15 )
  {
    v34 = core::option::Option<T>::map_or(0LL, 0LL);
    result = core::sync::atomic::atomic_store(v33, v34, 0LL);
    v35 = v37;
    if ( _InterlockedExchange((volatile __int32 *)(v37 + 8), 0) == 2 )
      return std::sys::sync::mutex::futex::Mutex::wake(v35 + 8);
  }
  return result;
}
