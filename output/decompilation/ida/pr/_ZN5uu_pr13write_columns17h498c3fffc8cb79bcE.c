__int64 __fastcall uu_pr::write_columns(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v17; // rbx
  __int64 v18; // r15
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rbx
  char v24; // r15
  __int64 v25; // rbp
  int v26; // eax
  __int64 *v27; // rdx
  __int64 v28; // rdx
  unsigned __int8 v29; // [rsp+Fh] [rbp-199h]
  unsigned __int64 v30; // [rsp+10h] [rbp-198h]
  __int64 v31; // [rsp+10h] [rbp-198h]
  unsigned __int64 v32; // [rsp+18h] [rbp-190h]
  __int64 v33; // [rsp+18h] [rbp-190h]
  unsigned __int64 v34; // [rsp+20h] [rbp-188h]
  __int64 v37; // [rsp+40h] [rbp-168h]
  __int64 v38; // [rsp+48h] [rbp-160h]
  char v39; // [rsp+54h] [rbp-154h]
  char v40[8]; // [rsp+58h] [rbp-150h] BYREF
  __int64 v41; // [rsp+60h] [rbp-148h]
  __int64 v42; // [rsp+68h] [rbp-140h]
  __int64 v43; // [rsp+70h] [rbp-138h] BYREF
  __int64 v44; // [rsp+78h] [rbp-130h]
  __int64 v45; // [rsp+80h] [rbp-128h]
  __int64 v46; // [rsp+88h] [rbp-120h]
  __int64 v47; // [rsp+90h] [rbp-118h]
  __int64 v48; // [rsp+98h] [rbp-110h]
  __int64 v49; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-100h]
  __int64 v51; // [rsp+B0h] [rbp-F8h]
  __int64 v52; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-E8h]
  __int64 v54; // [rsp+C8h] [rbp-E0h]
  __int64 v55; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-D0h]
  __int64 v57; // [rsp+E0h] [rbp-C8h]
  __int128 v58; // [rsp+E8h] [rbp-C0h]
  __int128 v59; // [rsp+F8h] [rbp-B0h]
  unsigned __int64 v60; // [rsp+108h] [rbp-A0h]
  char v61; // [rsp+110h] [rbp-98h]
  __int64 v62; // [rsp+118h] [rbp-90h]
  unsigned __int64 v63; // [rsp+120h] [rbp-88h]
  __int64 v64; // [rsp+130h] [rbp-78h]
  __int64 v65; // [rsp+138h] [rbp-70h]
  _BYTE v66[32]; // [rsp+140h] [rbp-68h] BYREF
  _BYTE v67[72]; // [rsp+160h] [rbp-48h] BYREF

  v48 = a1;
  v4 = *(_QWORD *)(a3 + 16);
  v5 = *(_QWORD *)(a3 + 312) >> *(_BYTE *)(a3 + 320);
  if ( v4 == 1 )
  {
    v34 = *(_QWORD *)(a3 + 24);
    v6 = *(_QWORD *)(a3 + 256);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 256);
    v34 = 1LL;
    if ( v6 != 0x8000000000000000LL )
      v34 = *(_QWORD *)(a3 + 288);
  }
  LOBYTE(v7) = 0;
  if ( v6 != 0x8000000000000000LL )
    v7 = *(_DWORD *)(a3 + 296);
  v39 = v7;
  v47 = *(_QWORD *)(a3 + 104);
  v46 = *(_QWORD *)(a3 + 112);
  v38 = *(_QWORD *)(a3 + 32);
  v37 = *(_QWORD *)(a3 + 40);
  v29 = *(_BYTE *)(a3 + 322);
  v49 = 0LL;
  v50 = 8LL;
  v51 = 0LL;
  v64 = v4;
  if ( v4 && v34 )
  {
    v65 = a2 << 6;
    v8 = 1LL;
    v9 = 0LL;
    v10 = 0LL;
    do
    {
      if ( v9 > a2 )
        core::slice::index::slice_start_index_len_fail(v9, a2, &off_2695D8);
      v30 = v9;
      v32 = v8;
      if ( v9 == a2 )
      {
        v11 = 0LL;
      }
      else
      {
        v12 = v9 << 6;
        v13 = v48 + (v9 << 6);
        v14 = v65 - v12;
        v11 = 0LL;
        do
        {
          if ( *(_QWORD *)(v13 + 24) != v10 )
            break;
          alloc::vec::Vec<T,A>::push(&v49, v13, &off_2695A8);
          ++v11;
          v13 += 64LL;
          v14 -= 64LL;
        }
        while ( v14 );
      }
      v9 = v11 + v30;
      v15 = v11 - 1;
      while ( ++v15 < v5 )
        alloc::vec::Vec<T,A>::push(&v49, 0LL, &off_2695C0);
      v8 = (v32 < v34) + v32;
      v10 = v32;
    }
    while ( v32 < v34 );
  }
  v57 = v51;
  v55 = v49;
  v56 = v50;
  v62 = 0LL;
  v63 = v5;
  *(_QWORD *)&v58 = v48;
  *((_QWORD *)&v58 + 1) = a2;
  *(_QWORD *)&v59 = a3;
  *((_QWORD *)&v59 + 1) = v34;
  v60 = v5;
  v61 = v39;
  core::iter::traits::iterator::Iterator::collect(v67, &v55);
  v55 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v56 = 1LL;
  v57 = 0LL;
  v60 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v66, v67);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v43, v66);
  if ( v43 == 0x8000000000000000LL )
  {
LABEL_21:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v66);
    core::ptr::drop_in_place<uu_pr::FileLine>(&v55);
    return 0LL;
  }
  else
  {
    v31 = v43;
    if ( !v64 )
    {
      v23 = 0LL;
      v24 = 0;
      while ( 1 )
      {
        v25 = v45;
        v33 = v44;
        v52 = v44;
        v53 = v44 + 8 * v45;
        v54 = 0LL;
        v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v52);
        if ( v27 )
        {
          while ( 1 )
          {
            v28 = *v27;
            if ( !v28 )
              break;
            uu_pr::get_line_for_printing((unsigned int)v40, a3, v28, v34, v26, v38, v37, v25);
            if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v41, v42) )
            {
LABEL_46:
              core::ptr::drop_in_place<alloc::string::String>(v40);
              goto LABEL_47;
            }
            core::ptr::drop_in_place<alloc::string::String>(v40);
            ++v23;
            v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v52);
            if ( !v27 )
              goto LABEL_40;
          }
          v24 = 1;
          if ( v29 )
            goto LABEL_48;
        }
        else
        {
LABEL_40:
          if ( (v29 & (unsigned __int8)v24 & 1) != 0 )
          {
LABEL_48:
            core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
              v31,
              v33);
            goto LABEL_21;
          }
        }
        if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v47, v46) )
          goto LABEL_47;
        core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
          v31,
          v33);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v43, v66);
        v31 = v43;
        if ( v43 == 0x8000000000000000LL )
          goto LABEL_21;
      }
    }
    v17 = 0LL;
    while ( 1 )
    {
      v18 = v45;
      v33 = v44;
      v52 = v44;
      v53 = v44 + 8 * v45;
      v54 = 0LL;
      while ( 1 )
      {
        v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v52);
        if ( !v20 )
          break;
        v21 = *v20;
        if ( v21 )
        {
          uu_pr::get_line_for_printing((unsigned int)v40, a3, v21, v34, v19, v38, v37, v18);
          if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v41, v42) )
            goto LABEL_46;
          core::ptr::drop_in_place<alloc::string::String>(v40);
          ++v17;
        }
        else
        {
          uu_pr::get_line_for_printing((unsigned int)v40, a3, (unsigned int)&v55, v34, v19, v38, v37, v18);
          v22 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v41, v42);
          core::ptr::drop_in_place<alloc::string::String>(v40);
          if ( v22 )
            goto LABEL_47;
        }
      }
      if ( <std::io::stdio::StdoutLock as std::io::Write>::write_all(a4, v47, v46) )
        break;
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
        v31,
        v33);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v43, v66);
      v31 = v43;
      if ( v43 == 0x8000000000000000LL )
        goto LABEL_21;
    }
LABEL_47:
    core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(
      v31,
      v33);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<core::option::Option<&uu_pr::FileLine>>>>(v66);
    core::ptr::drop_in_place<uu_pr::FileLine>(&v55);
    return 1LL;
  }
}