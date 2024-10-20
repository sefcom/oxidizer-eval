        unsigned __int64 a5)
{
  __int64 input_size; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  _OWORD *v9; // rax
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rbp
  __int64 v16; // rbx
  _BOOL8 v17; // r12
  bool v18; // cf
  unsigned __int64 v19; // r12
  char v20; // al
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r13
  _BYTE *v23; // r15
  size_t v24; // r14
  __int64 v25; // rax
  int v26; // eax
  _BOOL8 v27; // rcx
  unsigned __int64 v28; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rdi
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdi
  char **v41; // rdi
  char v42; // [rsp+Fh] [rbp-159h]
  __int64 v43; // [rsp+18h] [rbp-150h] BYREF
  size_t v44; // [rsp+20h] [rbp-148h]
  unsigned __int64 v45; // [rsp+28h] [rbp-140h]
  __int64 v46; // [rsp+30h] [rbp-138h]
  __int64 v47; // [rsp+38h] [rbp-130h] BYREF
  _BYTE *v48; // [rsp+40h] [rbp-128h]
  size_t v49; // [rsp+48h] [rbp-120h]
  __int64 v50; // [rsp+50h] [rbp-118h] BYREF
  __int64 v51; // [rsp+58h] [rbp-110h]
  size_t v52; // [rsp+60h] [rbp-108h]
  unsigned __int64 v53; // [rsp+68h] [rbp-100h]
  unsigned __int64 v54; // [rsp+70h] [rbp-F8h]
  __int128 v55; // [rsp+78h] [rbp-F0h]
  __int128 v56; // [rsp+88h] [rbp-E0h]
  __int64 v57; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-C8h]
  __int64 v59; // [rsp+A8h] [rbp-C0h]
  char **v60; // [rsp+B0h] [rbp-B8h]
  __int64 v61; // [rsp+B8h] [rbp-B0h] BYREF
  _QWORD v62[2]; // [rsp+C0h] [rbp-A8h] BYREF
  char v63[8]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-90h]
  _QWORD v65[3]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-70h] BYREF
  _BYTE *v67; // [rsp+100h] [rbp-68h]
  size_t v68; // [rsp+108h] [rbp-60h]
  _QWORD v69[3]; // [rsp+110h] [rbp-58h] BYREF
  char v70; // [rsp+128h] [rbp-40h]
  char v71; // [rsp+130h] [rbp-38h]

  v54 = a5;
  v46 = a4;
  v57 = 0LL;
  v58 = 1LL;
  v59 = 0LL;
  input_size = uu_split::get_input_size(a1 + 112, a2, (__int64)&v57, (_QWORD *)a1);
  v8 = v7;
  if ( input_size )
  {
    *(_QWORD *)&v55 = 0x8000000000000000LL;
    *((_QWORD *)&v56 + 1) = v7;
    v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v10 = (__int64)v9;
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v11 = v55;
    v9[1] = v56;
    *v9 = v11;
    goto LABEL_4;
  }
  v13 = v58;
  if ( !v58 || (v14 = v59, v59 < 0) )
    core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
  if ( !v7 && (v46 == 1 || (*(_BYTE *)(a1 + 161) & 1) != 0) )
  {
    v10 = 0LL;
    goto LABEL_4;
  }
  v61 = std::io::stdio::stdout();
  v43 = std::io::stdio::Stdout::lock(&v61);
  v50 = 0LL;
  v51 = 8LL;
  v52 = 0LL;
  if ( !a3 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1359C0);
  if ( (a3 | v8) >> 32 )
  {
    v53 = v8 % a3;
    v15 = v8 / a3;
    if ( v46 == 1 )
      goto LABEL_21;
LABEL_18:
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(v65, a3, a1, *(_BYTE *)(a1 + 161) & 1);
    v16 = v65[0];
    v45 = v65[1];
    v44 = v65[2];
    if ( v65[0] == 0x8000000000000000LL )
    {
      v10 = v45;
      goto LABEL_69;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v50);
    v50 = v16;
    v51 = v45;
    v52 = v44;
    goto LABEL_21;
  }
  v53 = (unsigned int)v8 % (unsigned int)a3;
  v15 = (unsigned int)v8 / (unsigned int)a3;
  if ( v46 != 1 )
    goto LABEL_18;
LABEL_21:
  v44 = v8;
  v17 = v53 != 0;
  v18 = __CFADD__(v15, v17);
  v19 = v15 + v17;
  if ( v18 )
    core::panicking::panic_const::panic_const_add_overflow(&off_1359D8);
  v20 = *(_BYTE *)(a1 + 162);
  v69[0] = v13;
  v69[1] = v14;
  v69[2] = a2;
  v70 = 0;
  v42 = v20;
  v71 = v20;
  v21 = 1LL;
  v22 = 0LL;
  v45 = 0x8000000000000001LL;
  v60 = &off_135A08;
  while ( 1 )
  {
    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v66, v69);
    if ( v66 == v45 )
      goto LABEL_59;
    v23 = v67;
    if ( v66 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v55 = 0x8000000000000000LL;
      *((_QWORD *)&v56 + 1) = v67;
      v30 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v10 = (__int64)v30;
      if ( !v30 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v31 = v55;
      v30[1] = v56;
      *v30 = v31;
      goto LABEL_69;
    }
    v24 = v68;
    v47 = v66;
    v48 = v67;
    v49 = v68;
    if ( __CFADD__(v68, v22) )
    {
      v41 = &off_1359F0;
      goto LABEL_76;
    }
    if ( v68 + v22 < v44 )
    {
      if ( v68 == v66 )
      {
        alloc::raw_vec::RawVec<T,A>::grow_one(&v47);
        v23 = v48;
      }
      v23[v24++] = v42;
      v49 = v24;
      v23 = v48;
    }
    core::slice::raw::from_raw_parts::precondition_check(v23, 1LL, 1LL, v24);
    if ( v46 )
    {
      if ( v21 == v54 )
      {
        v25 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v43);
        if ( v25 )
        {
          v10 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v25,
                  &off_135AB0);
          goto LABEL_67;
        }
      }
    }
    else
    {
      if ( !v21 )
        goto LABEL_84;
      <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v62, &v50, v21 - 1, a1);
      if ( v62[0] )
      {
        v10 = v62[0];
        goto LABEL_67;
      }
      uu_split::custom_write_all((__int64)v63, v23, v24, (_QWORD *)v62[1], a1);
      if ( (v63[0] & 1) != 0 )
      {
        *(_QWORD *)&v55 = 0x8000000000000000LL;
        *((_QWORD *)&v56 + 1) = v64;
        v36 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        v10 = (__int64)v36;
        if ( !v36 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v37 = v55;
        v36[1] = v56;
        *v36 = v37;
LABEL_67:
        if ( v47 )
          _rust_dealloc(v48);
LABEL_69:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v50);
        v38 = v43;
        v33 = (*(_DWORD *)(v43 + 12))-- == 1;
        if ( v33 )
        {
          v39 = core::option::Option<T>::map_or(0LL, 0LL);
          core::sync::atomic::atomic_store(v38, v39, 0LL);
          v40 = v43;
          if ( _InterlockedExchange((volatile __int32 *)(v43 + 8), 0) == 2 )
            std::sys::sync::mutex::futex::Mutex::wake(v40 + 8);
        }
LABEL_4:
        if ( !v57 )
          return v10;
LABEL_5:
        _rust_dealloc(v58);
        return v10;
      }
    }
    v18 = __CFADD__(v24, v22);
    v22 += v24;
    if ( v18 )
    {
      v41 = &off_135A20;
LABEL_76:
      core::panicking::panic_const::panic_const_add_overflow(v41);
    }
    if ( v19 > v22 )
      goto LABEL_39;
    v26 = -1;
    do
    {
      v27 = v53 > v21;
      v18 = __CFADD__(v15, v27);
      v28 = v15 + v27;
      if ( v18 )
      {
        v41 = &off_135A50;
        goto LABEL_76;
      }
      v18 = __CFADD__(v28, v19);
      v19 += v28;
      if ( v18 )
      {
        v41 = &off_135A68;
        goto LABEL_76;
      }
      if ( !++v21 )
      {
        v41 = &off_135A80;
        goto LABEL_76;
      }
      if ( __OFADD__(1, v26++) )
      {
        v41 = &off_135A98;
        goto LABEL_76;
      }
    }
    while ( v19 <= v22 );
    if ( (*(_BYTE *)(a1 + 161) & 1) == 0 || v26 <= 0 )
    {
LABEL_39:
      if ( v46 == 1 )
        break;
      goto LABEL_53;
    }
    if ( v46 == 1 )
      break;
    v18 = v21 < (unsigned int)v26;
    v21 -= (unsigned int)v26;
    if ( v18 )
    {
      v60 = &off_135A38;
LABEL_84:
      core::panicking::panic_const::panic_const_sub_overflow(v60);
    }
LABEL_53:
    if ( v47 )
      _rust_dealloc(v48);
  }
  if ( v21 <= v54 )
    goto LABEL_53;
  if ( v47 )
    _rust_dealloc(v48);
LABEL_59:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v50);
  v32 = v43;
  v33 = (*(_DWORD *)(v43 + 12))-- == 1;
  if ( v33 )
  {
    v34 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v32, v34, 0LL);
    v35 = v43;
    if ( _InterlockedExchange((volatile __int32 *)(v43 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v35 + 8);
  }
  v10 = 0LL;
  if ( v57 )
    goto LABEL_5;
  return v10;
}
