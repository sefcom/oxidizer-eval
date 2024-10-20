_OWORD *__fastcall uu_ls::display_grid(__int128 *a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r13
  unsigned __int16 v6; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // r14
  const void *v17; // rax
  size_t v18; // rdx
  unsigned __int64 v19; // r12
  _BYTE *v20; // rbx
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rbx
  __int128 v24; // xmm0
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _OWORD *v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // [rsp+0h] [rbp-258h] BYREF
  __int128 v34; // [rsp+10h] [rbp-248h]
  int v35; // [rsp+28h] [rbp-230h]
  int v36; // [rsp+2Ch] [rbp-22Ch]
  __int128 v37; // [rsp+30h] [rbp-228h] BYREF
  __int128 v38; // [rsp+40h] [rbp-218h]
  __int64 v39; // [rsp+50h] [rbp-208h] BYREF
  __int128 v40; // [rsp+58h] [rbp-200h] BYREF
  __int64 v41; // [rsp+68h] [rbp-1F0h]
  __int64 *v42; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+78h] [rbp-1E0h]
  __int128 v44; // [rsp+80h] [rbp-1D8h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-1C8h]
  void *v46; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-1B8h]
  __int64 **v48; // [rsp+A8h] [rbp-1B0h]
  __int64 v49; // [rsp+B0h] [rbp-1A8h]
  __int64 v50; // [rsp+B8h] [rbp-1A0h]
  _QWORD v51[2]; // [rsp+C8h] [rbp-190h] BYREF
  _QWORD v52[4]; // [rsp+D8h] [rbp-180h] BYREF
  char v53; // [rsp+F8h] [rbp-160h]
  __int128 v54; // [rsp+100h] [rbp-158h] BYREF
  unsigned __int64 v55; // [rsp+110h] [rbp-148h]
  _QWORD v56[6]; // [rsp+118h] [rbp-140h] BYREF
  _QWORD v57[3]; // [rsp+148h] [rbp-110h] BYREF
  __int128 v58; // [rsp+160h] [rbp-F8h]
  _QWORD v59[3]; // [rsp+178h] [rbp-E0h] BYREF
  __int128 v60; // [rsp+190h] [rbp-C8h]
  _BYTE v61[176]; // [rsp+1A8h] [rbp-B0h] BYREF

  v5 = a4;
  v6 = a2;
  if ( (_WORD)a2 )
  {
    v8 = *a1;
    v34 = a1[1];
    v33 = v8;
    if ( a5 )
      alloc::vec::in_place_collect::from_iter_in_place(&v44, &v33);
    else
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,alloc::vec::into_iter::IntoIter<T>>>::from_iter(
        &v44,
        &v33);
    v12 = *((_QWORD *)&v44 + 1);
    if ( !*((_QWORD *)&v44 + 1) || (BYTE8(v44) & 7) != 0 || v45 >= 0x555555555555556LL )
      core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
    if ( v45 )
    {
      v35 = a2;
      v36 = a3;
      v41 = v5;
      v13 = 24 * v45;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v12 + v14 + 8);
        if ( !v15 || (v16 = *(_QWORD *)(v12 + v14 + 16), v16 < 0) )
          core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
        LODWORD(v33) = 0;
        v17 = (const void *)core::char::methods::encode_utf8_raw(47LL, &v33, 4LL);
        if ( v16 >= v18 && !bcmp(v17, (const void *)(v16 - v18 + v15), v18) )
          break;
        v14 += 24LL;
        if ( v13 == v14 )
        {
          v19 = 0x8000000000000000LL;
          v5 = v41;
          LOBYTE(a3) = v36;
          v6 = v35;
          goto LABEL_22;
        }
      }
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v33, 1LL, 0LL);
      v19 = *((_QWORD *)&v33 + 1);
      v5 = v41;
      LOBYTE(a3) = v36;
      v6 = v35;
      if ( (_QWORD)v33 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v33 + 1), v34);
      v20 = (_BYTE *)v34;
      core::intrinsics::copy_nonoverlapping::precondition_check(&unk_3ABC8, v34, 1LL, 1LL, 1LL);
      *v20 = 9;
    }
    else
    {
      v19 = 0x8000000000000000LL;
LABEL_22:
      v20 = (_BYTE *)(&dword_0 + 2);
    }
    v55 = v45;
    v54 = v44;
    v53 = a3;
    v52[0] = v19;
    v52[1] = v20;
    v52[2] = 1LL;
    v52[3] = v6;
    term_grid::Grid<T>::new(v61, &v54, v52);
    v51[0] = v61;
    v51[1] = <term_grid::Grid<T> as core::fmt::Display>::fmt;
    v56[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
    v56[1] = 1LL;
    v56[4] = 0LL;
    v56[2] = v51;
    v56[3] = 1LL;
    v21 = std::io::Write::write_fmt(v5, v56);
    if ( v21 )
    {
      *(_QWORD *)&v33 = 0x8000000000000000LL;
      *((_QWORD *)&v34 + 1) = v21;
      v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v23 = v22;
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v24 = v33;
      v22[1] = v34;
      *v22 = v24;
      core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(v61);
      return v23;
    }
    core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(v61);
    return 0LL;
  }
  v9 = a1[1];
  v37 = *a1;
  v38 = v9;
  v10 = (__int64 *)*((_QWORD *)&v37 + 1);
  if ( *((_QWORD *)&v37 + 1) == *((_QWORD *)&v9 + 1)
    || (*((_QWORD *)&v37 + 1) += 24LL, v11 = *v10, *v10 == 0x8000000000000000LL) )
  {
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v37);
    return 0LL;
  }
  v39 = *v10;
  v40 = *(_OWORD *)(v10 + 1);
  v42 = &v39;
  v43 = <alloc::string::String as core::fmt::Display>::fmt;
  v46 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
  v47 = 1LL;
  v50 = 0LL;
  v48 = &v42;
  v49 = 1LL;
  v26 = std::io::Write::write_fmt(a4, &v46);
  if ( v26 )
  {
LABEL_30:
    *(_QWORD *)&v33 = 0x8000000000000000LL;
    *((_QWORD *)&v34 + 1) = v26;
    v23 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v23 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_31:
    v27 = v33;
    v23[1] = v34;
    *v23 = v27;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v33, &v39);
    if ( *((_QWORD *)&v33 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate((char *)&v40 + 8, v33, *((_QWORD *)&v33 + 1), v34);
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v37);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v33, &v39);
    if ( *((_QWORD *)&v33 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate((char *)&v40 + 8, v33, *((_QWORD *)&v33 + 1), v34);
    v28 = (__int64 *)*((_QWORD *)&v37 + 1);
    if ( *((_QWORD *)&v37 + 1) == *((_QWORD *)&v38 + 1) )
    {
LABEL_44:
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v37);
    }
    else
    {
      while ( 1 )
      {
        *((_QWORD *)&v37 + 1) = v28 + 3;
        if ( *v28 == 0x8000000000000000LL )
          break;
        v39 = *v28;
        v40 = *(_OWORD *)(v28 + 1);
        v57[0] = &off_1FF508;
        v57[1] = 1LL;
        v57[2] = 8LL;
        v58 = 0LL;
        v29 = std::io::Write::write_fmt(v5, v57);
        if ( v29 )
        {
          *(_QWORD *)&v33 = 0x8000000000000000LL;
          *((_QWORD *)&v34 + 1) = v29;
          v23 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v23 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          goto LABEL_31;
        }
        v42 = &v39;
        v43 = <alloc::string::String as core::fmt::Display>::fmt;
        v46 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
        v47 = 1LL;
        v50 = 0LL;
        v48 = &v42;
        v49 = 1LL;
        v26 = std::io::Write::write_fmt(v5, &v46);
        if ( v26 )
          goto LABEL_30;
        alloc::raw_vec::RawVec<T,A>::current_memory(&v33, &v39);
        if ( *((_QWORD *)&v33 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(
            (char *)&v40 + 8,
            v33,
            *((_QWORD *)&v33 + 1),
            v34);
        v28 = (__int64 *)*((_QWORD *)&v37 + 1);
        if ( *((_QWORD *)&v37 + 1) == *((_QWORD *)&v38 + 1) )
          goto LABEL_44;
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v37);
      if ( v11 == 0x8000000000000000LL )
        return 0LL;
    }
    v59[0] = &off_1FF240;
    v59[1] = 1LL;
    v59[2] = 8LL;
    v60 = 0LL;
    v30 = std::io::Write::write_fmt(v5, v59);
    if ( !v30 )
      return 0LL;
    *(_QWORD *)&v33 = 0x8000000000000000LL;
    *((_QWORD *)&v34 + 1) = v30;
    v31 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v23 = v31;
    if ( !v31 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v32 = v33;
    v31[1] = v34;
    *v31 = v32;
  }
  return v23;
}
