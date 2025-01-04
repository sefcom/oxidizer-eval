__int64 __fastcall uu_pr::write_columns(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 i; // r13
  __int64 v16; // r14
  __int64 v17; // rbp
  int v18; // eax
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rbp
  int v23; // eax
  __int64 *v24; // rdx
  __int64 v25; // rdx
  char v26; // [rsp+Fh] [rbp-1E9h]
  unsigned __int64 v27; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v29; // [rsp+20h] [rbp-1D8h]
  unsigned __int64 v30; // [rsp+20h] [rbp-1D8h]
  char v31; // [rsp+20h] [rbp-1D8h]
  __int64 v34; // [rsp+38h] [rbp-1C0h]
  __int64 v35; // [rsp+40h] [rbp-1B8h]
  char v37[8]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-1A0h]
  int v39; // [rsp+6Ch] [rbp-18Ch]
  __int128 v40; // [rsp+70h] [rbp-188h] BYREF
  __int64 v41; // [rsp+80h] [rbp-178h]
  __int128 v42; // [rsp+88h] [rbp-170h] BYREF
  __int64 v43; // [rsp+98h] [rbp-160h]
  __int64 v44; // [rsp+A0h] [rbp-158h]
  __int64 v45; // [rsp+A8h] [rbp-150h]
  __int64 v46; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-140h]
  __int64 v48; // [rsp+C0h] [rbp-138h]
  __int64 v49; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-128h]
  __int64 v51; // [rsp+D8h] [rbp-120h]
  __int64 v52; // [rsp+E0h] [rbp-118h]
  __int64 v53; // [rsp+E8h] [rbp-110h]
  __int64 v54; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-100h]
  __int64 v56; // [rsp+100h] [rbp-F8h]
  __int128 v57; // [rsp+108h] [rbp-F0h]
  __int128 v58; // [rsp+118h] [rbp-E0h]
  __int64 v59; // [rsp+128h] [rbp-D0h]
  _BYTE v60[32]; // [rsp+130h] [rbp-C8h] BYREF
  _QWORD v61[8]; // [rsp+150h] [rbp-A8h] BYREF
  char v62; // [rsp+190h] [rbp-68h]
  __int64 v63; // [rsp+198h] [rbp-60h]
  unsigned __int64 v64; // [rsp+1A0h] [rbp-58h]
  _BYTE v65[72]; // [rsp+1B0h] [rbp-48h] BYREF

  v4 = 0x8000000000000000LL;
  v5 = *(_QWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a3 + 312) >> *(_BYTE *)(a3 + 320);
  if ( v5 )
  {
    v27 = *(_QWORD *)(a3 + 24);
    v7 = *(_QWORD *)(a3 + 256);
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 256);
    v27 = 1LL;
    if ( v7 != 0x8000000000000000LL )
      v27 = *(_QWORD *)(a3 + 288);
  }
  v8 = 0;
  if ( v7 != 0x8000000000000000LL )
    v8 = *(_DWORD *)(a3 + 296);
  v39 = v8;
  v45 = *(_QWORD *)(a3 + 104);
  v44 = *(_QWORD *)(a3 + 112);
  v35 = *(_QWORD *)(a3 + 32);
  v34 = *(_QWORD *)(a3 + 40);
  v26 = *(_BYTE *)(a3 + 322);
  v46 = 0LL;
  v47 = 8LL;
  v48 = 0LL;
  v52 = v5;
  if ( v5 && v27 )
  {
    v53 = a1 + (a2 << 6);
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      v11 = <usize as core::iter::range::Step>::forward_unchecked(v10, v4);
      if ( v9 > a2 )
        core::slice::index::slice_start_index_len_fail(v9, a2, &off_309548);
      v12 = v11;
      v29 = v9;
      v54 = a1 + (v9 << 6);
      v55 = v53;
      v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v54);
      for ( i = 0LL; v13; v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v54) )
      {
        if ( *(_QWORD *)(v13 + 24) != v10 )
          break;
        v4 = v13;
        alloc::vec::Vec<T,A>::push(&v46, v13);
        ++i;
      }
      v30 = i + v29;
      while ( i < v6 )
      {
        i = <usize as core::iter::range::Step>::forward_unchecked(i, v4);
        v4 = 0LL;
        alloc::vec::Vec<T,A>::push(&v46, 0LL);
      }
      v10 = v12;
      v9 = v30;
    }
    while ( v12 < v27 );
  }
  v61[2] = v48;
  v61[0] = v46;
  v61[1] = v47;
  v63 = 0LL;
  v64 = v6;
  v61[3] = a1;
  v61[4] = a2;
  v61[5] = a3;
  v61[6] = v27;
  v61[7] = v6;
  v62 = v39;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v65, v61);
  v54 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v55 = 1LL;
  v56 = 0LL;
  v59 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v60, v65);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v42, v60);
  if ( (_QWORD)v42 == 0x8000000000000000LL )
  {
LABEL_19:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v60);
    core::ptr::drop_in_place<uu_pr::FileLine>(&v54);
    return 0LL;
  }
  if ( !v52 )
  {
    v21 = 0LL;
    v31 = 0;
    do
    {
      v40 = v42;
      v22 = v43;
      v41 = v43;
      v49 = *((_QWORD *)&v42 + 1);
      v50 = *((_QWORD *)&v42 + 1) + 8 * v43;
      v51 = 0LL;
      while ( 1 )
      {
        v23 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v49);
        if ( !v24 )
          break;
        v25 = *v24;
        if ( !v25 )
        {
          v31 = 1;
          if ( !v26 )
            goto LABEL_42;
LABEL_47:
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v40);
          goto LABEL_19;
        }
        uu_pr::get_line_for_printing((unsigned int)v37, a3, v25, v27, v23, v35, v34, v22);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v38) )
        {
LABEL_45:
          core::ptr::drop_in_place<alloc::string::String>(v37);
          goto LABEL_46;
        }
        core::ptr::drop_in_place<alloc::string::String>(v37);
        ++v21;
      }
      if ( v26 && (v31 & 1) != 0 )
        goto LABEL_47;
LABEL_42:
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v45) )
        goto LABEL_46;
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v40);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v42, v60);
    }
    while ( (_QWORD)v42 != 0x8000000000000000LL );
    goto LABEL_19;
  }
  v16 = 0LL;
  while ( 1 )
  {
    v40 = v42;
    v17 = v43;
    v41 = v43;
    v49 = *((_QWORD *)&v42 + 1);
    v50 = *((_QWORD *)&v42 + 1) + 8 * v43;
    v51 = 0LL;
    while ( 1 )
    {
      v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v49);
      if ( !v19 )
        break;
      v20 = *v19;
      if ( v20 )
      {
        uu_pr::get_line_for_printing((unsigned int)v37, a3, v20, v27, v18, v35, v34, v17);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v38) )
          goto LABEL_45;
        core::ptr::drop_in_place<alloc::string::String>(v37);
        ++v16;
      }
      else
      {
        uu_pr::get_line_for_printing((unsigned int)v37, a3, (unsigned int)&v54, v27, v18, v35, v34, v17);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v38) )
          goto LABEL_45;
        core::ptr::drop_in_place<alloc::string::String>(v37);
      }
    }
    if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v45) )
      break;
    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v40);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v42, v60);
    if ( (_QWORD)v42 == 0x8000000000000000LL )
      goto LABEL_19;
  }
LABEL_46:
  core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v40);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v60);
  core::ptr::drop_in_place<uu_pr::FileLine>(&v54);
  return 1LL;
}
