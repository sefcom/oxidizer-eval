        __int64 a5)
{
  __int64 v8; // r12
  __int64 v9; // r14
  _OWORD *v10; // r13
  __int64 v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rdx
  const void *v15; // rbx
  size_t v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rdi
  __int64 v30; // [rsp+0h] [rbp-108h] BYREF
  __int64 v31; // [rsp+8h] [rbp-100h] BYREF
  __int64 v32; // [rsp+10h] [rbp-F8h]
  __int64 v33; // [rsp+18h] [rbp-F0h]
  __int64 v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-E0h]
  size_t v36; // [rsp+30h] [rbp-D8h]
  unsigned int v37; // [rsp+3Ch] [rbp-CCh]
  __int128 v38; // [rsp+40h] [rbp-C8h]
  __int128 v39; // [rsp+50h] [rbp-B8h]
  char **v40; // [rsp+60h] [rbp-A8h]
  char **v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h]
  __int64 v45; // [rsp+88h] [rbp-80h]
  __int64 v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v48[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-60h]
  _QWORD v50[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v51[9]; // [rsp+C0h] [rbp-48h] BYREF

  v46 = a2;
  v8 = a1;
  v47 = std::io::stdio::stdout();
  v30 = std::io::stdio::Stdout::lock(&v47);
  v31 = 0LL;
  v32 = 8LL;
  v33 = 0LL;
  v45 = a4;
  v42 = a1;
  if ( a4 == 1 )
    goto LABEL_4;
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(v51, a3, a1, *(_BYTE *)(a1 + 161) & 1);
  v9 = v51[0];
  v10 = (_OWORD *)v51[1];
  v11 = v51[2];
  if ( v51[0] != 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v31);
    v31 = v9;
    v32 = (__int64)v10;
    v33 = v11;
    v8 = v42;
LABEL_4:
    v44 = a5;
    v43 = a5 - 1;
    v12 = 0LL;
    v37 = *(unsigned __int8 *)(v8 + 162);
    v41 = &off_135AE0;
    v40 = &off_135AF8;
    v13 = 0LL;
    while ( 1 )
    {
      v34 = 0LL;
      v35 = 1LL;
      v36 = 0LL;
      if ( std::io::read_until(v46, v37, &v34) )
      {
        *(_QWORD *)&v38 = 0x8000000000000000LL;
        *((_QWORD *)&v39 + 1) = v14;
        v10 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v10 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_39;
      }
      if ( !v14 )
        goto LABEL_28;
      v15 = (const void *)v35;
      v16 = v36;
      core::slice::raw::from_raw_parts::precondition_check(v35, 1LL, 1LL, v36);
      if ( v45 )
      {
        if ( !a3 )
          goto LABEL_52;
        if ( !v44 )
          core::panicking::panic_const::panic_const_sub_overflow(&off_135B10);
        if ( (a3 | v12) >> 32 )
        {
          if ( v12 % a3 != v43 )
            goto LABEL_24;
        }
        else if ( (unsigned int)v12 % (unsigned int)a3 != v43 )
        {
          goto LABEL_24;
        }
        v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v30);
        if ( v18 )
        {
          *(_QWORD *)&v38 = 0x8000000000000000LL;
          *((_QWORD *)&v39 + 1) = v18;
          v23 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          v10 = (_OWORD *)v23;
          if ( !v23 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_39:
          v24 = v38;
          v10[1] = v39;
          *v10 = v24;
LABEL_40:
          if ( v34 )
            _rust_dealloc(v35);
          break;
        }
      }
      else
      {
        if ( !a3 )
        {
          v40 = &off_135AC8;
LABEL_52:
          core::panicking::panic_const::panic_const_rem_by_zero(v40);
        }
        if ( (a3 | v12) >> 32 )
          v17 = v12 % a3;
        else
          v17 = (unsigned int)v12 % (unsigned int)a3;
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v50, &v31, v17, v8);
        if ( v50[0] )
        {
          v10 = (_OWORD *)v50[0];
          goto LABEL_40;
        }
        v8 = v42;
        uu_split::custom_write_all((__int64)v48, v15, v16, (_QWORD *)v50[1], v42);
        if ( (v48[0] & 1) != 0 )
        {
          *(_QWORD *)&v38 = 0x8000000000000000LL;
          *((_QWORD *)&v39 + 1) = v49;
          v10 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v10 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          goto LABEL_39;
        }
        if ( (v48[1] & 1) == 0 && !++v13 )
          goto LABEL_49;
      }
LABEL_24:
      if ( !++v12 )
      {
        v41 = &off_135B28;
LABEL_49:
        core::panicking::panic_const::panic_const_add_overflow(v41);
      }
      if ( v13 == a3 )
      {
LABEL_28:
        if ( v34 )
          _rust_dealloc(v35);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v31);
        v19 = v30;
        v10 = 0LL;
        v20 = (*(_DWORD *)(v30 + 12))-- == 1;
        if ( v20 )
        {
          v21 = core::option::Option<T>::map_or(0LL, 0LL);
          core::sync::atomic::atomic_store(v19, v21, 0LL);
          v22 = v30;
          if ( _InterlockedExchange((volatile __int32 *)(v30 + 8), 0) == 2 )
          {
            v29 = v22 + 8;
            goto LABEL_47;
          }
        }
        return v10;
      }
      if ( v34 )
        _rust_dealloc(v35);
    }
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v31);
  v25 = v30;
  v20 = (*(_DWORD *)(v30 + 12))-- == 1;
  if ( v20 )
  {
    v26 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v25, v26, 0LL);
    v27 = v30;
    if ( _InterlockedExchange((volatile __int32 *)(v30 + 8), 0) == 2 )
    {
      v29 = v27 + 8;
LABEL_47:
      std::sys::sync::mutex::futex::Mutex::wake(v29);
    }
  }
  return v10;
}
