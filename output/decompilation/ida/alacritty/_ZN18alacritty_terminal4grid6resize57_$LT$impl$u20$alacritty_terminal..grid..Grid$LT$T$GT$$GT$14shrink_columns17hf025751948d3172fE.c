__int64 __fastcall alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::shrink_columns(
        __int64 a1,
        int a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  int v7; // r14d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  _BYTE *v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  bool v23; // zf
  __int64 v24; // r12
  unsigned __int64 v25; // rbx
  _WORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  _BYTE *v29; // rax
  _BYTE *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  bool v35; // cf
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38; // ebp
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // r14
  int v42; // edx
  int v44; // [rsp+Ch] [rbp-1DCh]
  char v46; // [rsp+1Ch] [rbp-1CCh]
  __int128 v47; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v49; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v50; // [rsp+48h] [rbp-1A0h]
  __int128 v51; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-188h]
  unsigned __int64 v53; // [rsp+68h] [rbp-180h]
  __int128 v54; // [rsp+70h] [rbp-178h] BYREF
  __int128 v55; // [rsp+80h] [rbp-168h]
  __int64 v56; // [rsp+98h] [rbp-150h]
  __int128 v57; // [rsp+A0h] [rbp-148h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-138h]
  __int64 v59; // [rsp+B8h] [rbp-130h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-128h]
  __int64 v61; // [rsp+C8h] [rbp-120h]
  char **v62; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-110h]
  unsigned __int64 v64; // [rsp+E0h] [rbp-108h]
  __int128 v65; // [rsp+E8h] [rbp-100h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-F0h]
  __int64 v67; // [rsp+110h] [rbp-D8h]
  char v68[8]; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+120h] [rbp-C8h]
  unsigned __int64 v70; // [rsp+128h] [rbp-C0h]
  __int128 v71; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+140h] [rbp-A8h]
  __int128 v73; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int64 v74; // [rsp+160h] [rbp-88h]
  __int128 v75; // [rsp+170h] [rbp-78h] BYREF
  __int64 v76; // [rsp+180h] [rbp-68h]
  __int64 v77; // [rsp+190h] [rbp-58h] BYREF
  __int128 v78; // [rsp+198h] [rbp-50h]
  __int128 v79; // [rsp+1A8h] [rbp-40h]

  v3 = a3;
  v4 = a1;
  *(_QWORD *)(a1 + 144) = a3;
  v46 = a2;
  if ( a2 && *(_BYTE *)(a1 + 92) )
  {
    *(_BYTE *)(a1 + 92) = 0;
    ++*(_QWORD *)(a1 + 48);
  }
  v59 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a1 + 40), 8LL, 32LL, &off_877548);
  v60 = v5;
  v61 = 0LL;
  *(_QWORD *)&v57 = 0x8000000000000000LL;
  alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
  *(_QWORD *)&v65 = 0LL;
  *((_QWORD *)&v65 + 1) = 8LL;
  v66 = 0LL;
  core::intrinsics::typed_swap_nonoverlapping(&v65, a1);
  *(_QWORD *)(a1 + 40) = 0LL;
  v72 = v66;
  v71 = v65;
  alloc::vec::Vec<T,A>::drain(&v65, &v71);
  v67 = 0LL;
  v50 = *(_QWORD *)(a1 + 48);
  v49 = v3 - 1;
  v44 = *(_DWORD *)(a1 + 56);
  v63 = *(_QWORD *)(a1 + 160);
  v56 = *(_QWORD *)(a1 + 152);
  v62 = &off_8775A8;
  v53 = v3;
LABEL_5:
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
      &v77,
      &v65);
    if ( (_QWORD)v78 == 0x8000000000000000LL )
      break;
    v6 = v77;
    v54 = v78;
    v55 = v79;
    v47 = v57;
    v48 = v58;
    *(_QWORD *)&v57 = 0x8000000000000000LL;
    if ( (_QWORD)v47 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>>(&v47);
    }
    else
    {
      v74 = v48;
      v73 = v47;
      if ( v77 == v56 + ~v44 )
      {
        v50 += v74;
        *(_QWORD *)(v4 + 48) = v50;
      }
      alacritty_terminal::grid::row::Row<T>::append_front((__int64)&v54, (__int64)&v73);
    }
    v64 = v6;
    while ( 1 )
    {
      alacritty_terminal::grid::row::Row<T>::shrink(&v47, (__int64)&v54, v3);
      v7 = ~v44;
      if ( (_QWORD)v47 != 0x8000000000000000LL )
      {
        if ( !v46 )
          goto LABEL_49;
        v52 = v48;
        v51 = v47;
        v8 = v55;
        if ( (unsigned __int64)v55 < v3 )
          goto LABEL_25;
LABEL_22:
        v9 = v49;
        if ( v49 >= v8 )
          goto LABEL_66;
        v10 = *((_QWORD *)&v54 + 1) + 24 * v49;
        if ( (*(_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(v10) & 0x20) != 0 )
        {
          <alacritty_terminal::term::cell::Cell as core::default::Default>::default(&v47);
          v11 = <alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(&v47);
          *(_BYTE *)(v11 + 1) |= 4u;
          *((_QWORD *)&v55 + 1) = core::cmp::Ord::max(*((_QWORD *)&v55 + 1), v3);
          v76 = *(_QWORD *)(v10 + 16);
          v75 = *(_OWORD *)v10;
          v12 = v48;
          *(_OWORD *)v10 = v47;
          *(_QWORD *)(v10 + 16) = v12;
          alloc::vec::Vec<T,A>::insert(&v51, &v75);
        }
        goto LABEL_25;
      }
      if ( !v46 || v6 != v56 + v7 || v50 <= v3 )
      {
LABEL_49:
        alloc::vec::Vec<T,A>::push(&v59, &v54, &off_877590);
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>>(&v47);
        goto LABEL_5;
      }
      *(_QWORD *)&v51 = 0LL;
      *((_QWORD *)&v51 + 1) = 8LL;
      v52 = 0LL;
      v8 = v55;
      if ( (unsigned __int64)v55 >= v3 )
        goto LABEL_22;
LABEL_25:
      v13 = v52;
      if ( !v52 )
        goto LABEL_30;
      v14 = v52 - 1;
      v15 = *((_QWORD *)&v51 + 1);
      if ( (*(_BYTE *)(<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(*((_QWORD *)&v51 + 1) + 24 * (v52 - 1))
                     + 1) & 4) == 0 )
        goto LABEL_30;
      if ( v13 == 1 )
        break;
      v16 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(v15 + 24 * v13 - 48);
      *v16 |= 0x10u;
      v17 = v52 - v14;
      if ( v52 >= v14 )
      {
        v52 = v13 - 1;
        core::ptr::drop_in_place<[alacritty_terminal::term::cell::Cell]>(*((_QWORD *)&v51 + 1) + 24 * (v13 - 1), v17);
      }
LABEL_30:
      alloc::vec::Vec<T,A>::push(&v59, &v54, &off_877608);
      v18 = v60 + 32 * v61;
      if ( v61 != 0 && v18 != 32 )
      {
        v19 = *(_QWORD *)(v18 - 16);
        *(_QWORD *)(v18 - 8) = v19;
        if ( v19 )
        {
          if ( *(_QWORD *)(v18 - 24) + 24 * v19 != 24 )
          {
            v20 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(*(_QWORD *)(v18 - 24) + 24 * v19 - 24);
            *v20 |= 0x10u;
          }
        }
      }
      v21 = v52;
      v22 = *((_QWORD *)&v51 + 1) + 24 * v52;
      v23 = v22 == 24;
      v24 = v22 - 24;
      v3 = v53;
      v25 = v64;
      if ( v52 != 0 && !v23 )
      {
        v26 = (_WORD *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(v24);
        if ( v25 )
        {
          if ( (*v26 & 0x10) != 0 && v21 < v3 )
          {
            v30 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(v24);
            *v30 &= ~0x10u;
            v48 = v52;
            v47 = v51;
            core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>>(&v57);
            v58 = v48;
            v57 = v47;
            v4 = a1;
            goto LABEL_5;
          }
        }
      }
      v27 = v56 + v7;
      if ( v25 == v27 )
      {
        if ( v50 < v3 )
        {
          v44 = core::cmp::Ord::max((unsigned int)(v44 - 1), 0LL);
          *(_DWORD *)(a1 + 56) = v44;
        }
        v28 = v50 - v3;
        if ( v50 >= v3 )
        {
          *(_QWORD *)(a1 + 48) = v28;
          v50 = v28;
        }
      }
      else if ( v25 < v27 )
      {
        v44 = core::cmp::Ord::max((unsigned int)(v44 - 1), 0LL);
        *(_DWORD *)(a1 + 56) = v44;
      }
      if ( v21 < v3 )
        alloc::vec::Vec<T,A>::resize_with(&v51, v53, &off_877620);
      *(_QWORD *)&v55 = v52;
      v54 = v51;
      *((_QWORD *)&v55 + 1) = v21;
      v6 = v64;
      v4 = a1;
      if ( v64 < v63 )
        *(_QWORD *)(a1 + 160) = ++v63;
      v3 = v53;
    }
    v3 = v53;
    *((_QWORD *)&v55 + 1) = core::cmp::Ord::max(*((_QWORD *)&v55 + 1), v53);
    v9 = v49;
    if ( v49 >= v8 )
    {
      v62 = &off_8775D8;
LABEL_66:
      core::panicking::panic_bounds_check(v9, v8, v62);
    }
    v29 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(*((_QWORD *)&v54 + 1) + 24 * v49);
    *v29 |= 0x10u;
    alloc::vec::Vec<T,A>::push(&v59, &v54, &off_8775F0);
    v4 = a1;
    core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>(&v51);
  }
  core::ptr::drop_in_place<core::iter::adapters::rev::Rev<core::iter::adapters::enumerate::Enumerate<alloc::vec::drain::Drain<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>>>(&v65);
  alloc::vec::Vec<T,A>::drain(&v65, &v59);
  core::iter::traits::iterator::Iterator::collect(v68, &v65);
  v31 = *(_QWORD *)(v4 + 168) + *(_QWORD *)(v4 + 152);
  v32 = v70 - v31;
  if ( v70 >= v31 )
  {
    v70 = *(_QWORD *)(v4 + 168) + *(_QWORD *)(v4 + 152);
    core::ptr::drop_in_place<[alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>]>(
      v69 + 32 * v31,
      v32);
  }
  alacritty_terminal::grid::storage::Storage<T>::replace_inner(v4, v68);
  v33 = *(_QWORD *)(v4 + 40);
  v34 = 0LL;
  v35 = v33 < *(_QWORD *)(v4 + 152);
  v36 = v33 - *(_QWORD *)(v4 + 152);
  if ( !v35 )
    v34 = v36;
  *(_QWORD *)(v4 + 160) = core::cmp::Ord::min(*(_QWORD *)(v4 + 160), v34);
  v37 = *(_QWORD *)(v4 + 48);
  if ( v46 )
  {
    v38 = *(_DWORD *)(v4 + 56);
    if ( v37 != v3 )
      goto LABEL_63;
    v39 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            v4,
            v38,
            &off_877560);
    v40 = *(_QWORD *)(v39 + 16);
    if ( v49 >= v40 )
      core::panicking::panic_bounds_check(v49, v40, &off_877578);
    v4 = a1;
    if ( (*(_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(*(_QWORD *)(v39 + 8) + 24 * v49) & 0x10) != 0 )
    {
LABEL_63:
      *(_QWORD *)(v4 + 48) = alacritty_terminal::index::Point::grid_clamp(v37, v38, v4);
      *(_DWORD *)(v4 + 56) = v42;
      v41 = v49;
    }
    else
    {
      *(_BYTE *)(a1 + 92) = 1;
      v41 = v49;
      *(_QWORD *)(a1 + 48) = v49;
    }
  }
  else
  {
    v41 = v49;
    *(_QWORD *)(v4 + 48) = core::cmp::Ord::min(*(_QWORD *)(v4 + 48), v49);
  }
  *(_QWORD *)(v4 + 96) = core::cmp::Ord::min(*(_QWORD *)(v4 + 96), v41);
  core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>(&v71);
  core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>>(&v57);
  return core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>(&v59);
}