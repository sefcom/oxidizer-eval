__int64 __fastcall uu_pr::write_columns(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  int v7; // ecx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 i; // r12
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbp
  int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rdx
  char v24; // [rsp+7h] [rbp-1F1h]
  unsigned __int64 v25; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v27; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v28; // [rsp+18h] [rbp-1E0h]
  char v29; // [rsp+18h] [rbp-1E0h]
  __int64 v30; // [rsp+20h] [rbp-1D8h]
  __int64 v31; // [rsp+28h] [rbp-1D0h]
  char v32[8]; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-1B0h]
  int v34; // [rsp+5Ch] [rbp-19Ch]
  __int128 v35; // [rsp+60h] [rbp-198h] BYREF
  __int64 v36; // [rsp+70h] [rbp-188h]
  __int64 v37; // [rsp+80h] [rbp-178h] BYREF
  __int64 v38; // [rsp+88h] [rbp-170h]
  __int64 v39; // [rsp+90h] [rbp-168h]
  __int128 v40; // [rsp+98h] [rbp-160h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-150h]
  __int64 v42; // [rsp+B0h] [rbp-148h]
  __int64 v43; // [rsp+B8h] [rbp-140h]
  __int64 v44; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-130h]
  __int64 v46; // [rsp+D0h] [rbp-128h]
  __int64 v47; // [rsp+D8h] [rbp-120h]
  __int64 v48; // [rsp+E0h] [rbp-118h]
  __int64 v49; // [rsp+E8h] [rbp-110h]
  __int64 v50; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-100h]
  __int64 v52; // [rsp+100h] [rbp-F8h]
  __int128 v53; // [rsp+108h] [rbp-F0h]
  __int128 v54; // [rsp+118h] [rbp-E0h]
  __int64 v55; // [rsp+128h] [rbp-D0h]
  _BYTE v56[32]; // [rsp+130h] [rbp-C8h] BYREF
  _QWORD v57[8]; // [rsp+150h] [rbp-A8h] BYREF
  char v58; // [rsp+190h] [rbp-68h]
  __int64 v59; // [rsp+198h] [rbp-60h]
  unsigned __int64 v60; // [rsp+1A0h] [rbp-58h]
  _BYTE v61[72]; // [rsp+1B0h] [rbp-48h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a3 + 16);
  v43 = *(_QWORD *)(a3 + 104);
  v42 = *(_QWORD *)(a3 + 112);
  v6 = *(_QWORD *)(a3 + 312) >> *(_BYTE *)(a3 + 320);
  if ( v5 )
  {
    v25 = *(_QWORD *)(a3 + 24);
    v7 = 0;
    if ( *(_QWORD *)(a3 + 256) != 0x8000000000000000LL )
      v7 = *(_DWORD *)(a3 + 296);
    v31 = *(_QWORD *)(a3 + 32);
    v30 = *(_QWORD *)(a3 + 40);
    v24 = *(_BYTE *)(a3 + 322);
    v37 = 0LL;
    v38 = 8LL;
    v39 = 0LL;
    if ( v25 )
    {
      v34 = v7;
      v47 = v5;
      v48 = a3;
      v49 = a1 + (a2 << 6);
      v8 = 0LL;
      v9 = 0LL;
      do
      {
        v10 = <usize as core::iter::range::Step>::forward_unchecked(v9);
        if ( v8 > a2 )
          core::slice::index::slice_start_index_len_fail(v8, a2, &off_308B88);
        v11 = v10;
        v27 = v8;
        v50 = a1 + (v8 << 6);
        v51 = v49;
        v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v50);
        for ( i = 0LL; v12; v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v50) )
        {
          if ( *(_QWORD *)(v12 + 24) != v9 )
            break;
          alloc::vec::Vec<T,A>::push(&v37, v12);
          ++i;
        }
        v28 = i + v27;
        while ( i < v6 )
        {
          i = <usize as core::iter::range::Step>::forward_unchecked(i);
          alloc::vec::Vec<T,A>::push(&v37, 0LL);
        }
        v9 = v11;
        v8 = v28;
      }
      while ( v11 < v25 );
      v4 = v48;
      v5 = v47;
      LOBYTE(v7) = v34;
    }
    else
    {
      v25 = 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a3 + 256) == 0x8000000000000000LL )
    {
      LOBYTE(v7) = 0;
      v25 = 1LL;
    }
    else
    {
      v25 = *(_QWORD *)(a3 + 288);
      v7 = *(_DWORD *)(a3 + 296);
    }
    v31 = *(_QWORD *)(a3 + 32);
    v30 = *(_QWORD *)(a3 + 40);
    v24 = *(_BYTE *)(a3 + 322);
    v37 = 0LL;
    v38 = 8LL;
    v39 = 0LL;
  }
  v57[2] = v39;
  v57[0] = v37;
  v57[1] = v38;
  v59 = 0LL;
  v60 = v6;
  v57[3] = a1;
  v57[4] = a2;
  v57[5] = v4;
  v57[6] = v25;
  v57[7] = v6;
  v58 = v7;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v61, v57);
  v50 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v51 = 1LL;
  v52 = 0LL;
  v55 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v56, v61);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v56);
  if ( (_QWORD)v40 == 0x8000000000000000LL )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v56);
    core::ptr::drop_in_place<uu_pr::FileLine>(&v50);
    return 0LL;
  }
  v15 = 0LL;
  if ( !v5 )
  {
    v29 = 0;
    do
    {
      v35 = v40;
      v20 = v41;
      v36 = v41;
      v44 = *((_QWORD *)&v40 + 1);
      v45 = *((_QWORD *)&v40 + 1) + 8 * v41;
      v46 = 0LL;
      while ( 1 )
      {
        v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v44);
        if ( !v22 )
          break;
        v23 = *v22;
        if ( !v23 )
        {
          v29 = 1;
          if ( !v24 )
            goto LABEL_43;
LABEL_48:
          core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v35);
          goto LABEL_21;
        }
        uu_pr::get_line_for_printing((unsigned int)v32, v4, v23, v25, v21, v31, v30, v20);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v33) )
        {
LABEL_46:
          core::ptr::drop_in_place<alloc::string::String>(v32);
          goto LABEL_47;
        }
        core::ptr::drop_in_place<alloc::string::String>(v32);
        ++v15;
      }
      if ( v24 && (v29 & 1) != 0 )
        goto LABEL_48;
LABEL_43:
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v43) )
        goto LABEL_47;
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v35);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v56);
    }
    while ( (_QWORD)v40 != 0x8000000000000000LL );
    goto LABEL_21;
  }
  while ( 1 )
  {
    v35 = v40;
    v16 = v41;
    v36 = v41;
    v44 = *((_QWORD *)&v40 + 1);
    v45 = *((_QWORD *)&v40 + 1) + 8 * v41;
    v46 = 0LL;
    while ( 1 )
    {
      v17 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v44);
      if ( !v18 )
        break;
      v19 = *v18;
      if ( v19 )
      {
        uu_pr::get_line_for_printing((unsigned int)v32, v4, v19, v25, v17, v31, v30, v16);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v33) )
          goto LABEL_46;
        core::ptr::drop_in_place<alloc::string::String>(v32);
        ++v15;
      }
      else
      {
        uu_pr::get_line_for_printing((unsigned int)v32, v4, (unsigned int)&v50, v25, v17, v31, v30, v16);
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v33) )
          goto LABEL_46;
        core::ptr::drop_in_place<alloc::string::String>(v32);
      }
    }
    if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v43) )
      break;
    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v35);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v56);
    if ( (_QWORD)v40 == 0x8000000000000000LL )
      goto LABEL_21;
  }
LABEL_47:
  core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>(&v35);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v56);
  core::ptr::drop_in_place<uu_pr::FileLine>(&v50);
  return 1LL;
}
