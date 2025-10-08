__int64 __fastcall alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::grow_columns(
        __int64 a1,
        int a2,
        unsigned __int64 a3)
{
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r14
  _BYTE *v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  _BYTE *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // r12d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  char v29; // al
  __int64 v30; // rax
  _BYTE *v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  bool v37; // cf
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 i; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rbx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  unsigned int v48; // [rsp+0h] [rbp-1B8h]
  char v49; // [rsp+7h] [rbp-1B1h] BYREF
  unsigned __int64 v50; // [rsp+8h] [rbp-1B0h]
  __m256i v51; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-184h]
  __int64 v53; // [rsp+38h] [rbp-180h] BYREF
  __int64 v54; // [rsp+40h] [rbp-178h]
  unsigned __int64 v55; // [rsp+48h] [rbp-170h]
  __int128 v56; // [rsp+50h] [rbp-168h] BYREF
  __int128 v57; // [rsp+60h] [rbp-158h]
  unsigned __int64 v58; // [rsp+78h] [rbp-140h] BYREF
  __int64 v59; // [rsp+80h] [rbp-138h]
  unsigned __int64 v60; // [rsp+88h] [rbp-130h]
  __int128 v61; // [rsp+90h] [rbp-128h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-118h]
  _QWORD *v63; // [rsp+B0h] [rbp-108h]
  __int64 v64; // [rsp+B8h] [rbp-100h]
  __int128 v65; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-E8h]
  __int64 v67; // [rsp+E8h] [rbp-D0h]
  __int128 v68; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+100h] [rbp-B8h]
  __int128 v70; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+120h] [rbp-98h]
  _QWORD v72[3]; // [rsp+128h] [rbp-90h] BYREF
  _BYTE v73[40]; // [rsp+140h] [rbp-78h] BYREF
  __int128 v74; // [rsp+170h] [rbp-48h] BYREF
  __int64 v75; // [rsp+180h] [rbp-38h]

  v3 = (_QWORD *)a1;
  v49 = a2;
  v58 = a3;
  *(_QWORD *)(a1 + 144) = a3;
  v53 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a1 + 40), 8LL, 32LL, &off_877458);
  v54 = v4;
  v55 = 0LL;
  if ( a2 && *(_BYTE *)(a1 + 92) )
  {
    *(_BYTE *)(a1 + 92) = 0;
    ++*(_QWORD *)(a1 + 48);
  }
  alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
  *(_QWORD *)&v65 = 0LL;
  *((_QWORD *)&v65 + 1) = 8LL;
  v66 = 0LL;
  core::intrinsics::typed_swap_nonoverlapping(&v65, a1);
  *(_QWORD *)(a1 + 40) = 0LL;
  v75 = v66;
  v74 = v65;
  alloc::vec::Vec<T,A>::drain(&v65, &v74);
  v67 = 0LL;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 160);
  v7 = 0LL;
  v59 = *(_QWORD *)(a1 + 48);
  v52 = v5;
  v48 = v5;
  v63 = (_QWORD *)a1;
  while ( 1 )
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
      v73,
      &v65);
    v8 = v7;
    if ( *(_QWORD *)&v73[8] == 0x8000000000000000LL )
      break;
    v50 = v6;
    v60 = *(_QWORD *)v73;
    v56 = *(_OWORD *)&v73[8];
    v57 = *(_OWORD *)&v73[24];
    v9 = v54 + 32 * v55;
    if ( v55 == 0
      || v9 == 32
      || (v10 = *(_QWORD *)(v9 - 24),
          v11 = *(_QWORD *)(v9 - 16),
          !(unsigned __int8)alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::grow_columns::{{closure}}(
                              &v49,
                              &v58,
                              v10,
                              v11)) )
    {
      alloc::vec::Vec<T,A>::push(&v53, &v73[8], &off_877530);
      v7 = v8;
      v6 = v50;
    }
    else
    {
      *(_QWORD *)(v9 - 8) = v11;
      v64 = v9 - 32;
      if ( v11
        && (v10 + 24 * v11 == 24
         || (v12 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(v10 + 24 * v11 - 24),
             *v12 &= ~0x10u,
             (v11 = *(_QWORD *)(v9 - 16)) != 0)) )
      {
        if ( (*(_BYTE *)(<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(*(_QWORD *)(v9 - 24) + 24 * (v11 - 1))
                       + 1) & 4) != 0 )
        {
          alacritty_terminal::grid::row::Row<T>::shrink(&v51, v64, v11 - 1);
          core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>>(&v51);
          --v11;
        }
      }
      else
      {
        v11 = 0LL;
      }
      v13 = v58 - v11;
      v14 = v57;
      v15 = core::cmp::Ord::min(v57, v58 - v11);
      v16 = v15 - 1;
      if ( v15 - 1 >= v14 )
        core::panicking::panic_bounds_check(v15 - 1, v14, &off_8774D0);
      v17 = v15;
      v18 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags(*((_QWORD *)&v56 + 1) + 24 * v16);
      v3 = v63;
      if ( (*v18 & 0x20) != 0 )
      {
        v20 = 0LL;
        if ( *((_QWORD *)&v57 + 1) >= v16 )
          v20 = *((_QWORD *)&v57 + 1) - v16;
        *((_QWORD *)&v57 + 1) = v20;
        alloc::vec::Vec<T,A>::split_off(&v51, &v56, v16, &off_8774E8);
        v7 = v8;
        core::intrinsics::typed_swap_nonoverlapping(&v51, &v56);
        v71 = v51.m256i_i64[2];
        v70 = *(_OWORD *)v51.m256i_i8;
        <alacritty_terminal::term::cell::Cell as core::default::Default>::default(&v68);
        v21 = <alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(&v68);
        *(_BYTE *)(v21 + 1) |= 4u;
        v51.m256i_i64[2] = v69;
        *(_OWORD *)v51.m256i_i8 = v68;
        alloc::vec::Vec<T,A>::push(&v70, &v51);
        --v13;
        v61 = v70;
        v62 = v71;
      }
      else
      {
        v19 = 0LL;
        if ( *((_QWORD *)&v57 + 1) >= v17 )
          v19 = *((_QWORD *)&v57 + 1) - v17;
        *((_QWORD *)&v57 + 1) = v19;
        alloc::vec::Vec<T,A>::split_off(&v51, &v56, v17, &off_8774E8);
        v7 = v8;
        core::intrinsics::typed_swap_nonoverlapping(&v51, &v56);
        v62 = v51.m256i_i64[2];
        v61 = *(_OWORD *)v51.m256i_i8;
      }
      v22 = v62;
      *(_QWORD *)(v9 - 8) += v62;
      alloc::vec::Vec<T,A>::append_elements(v64, *((_QWORD *)&v61 + 1), v22);
      v62 = 0LL;
      v23 = v3[19] + (int)~v48;
      if ( v60 == v23 && v49 == 1 )
      {
        v24 = alacritty_terminal::index::Point::sub(v59, v48, v3, v13);
        v6 = v50;
        v26 = v25;
        if ( !v24 )
        {
          v51.m256i_i64[0] = *((_QWORD *)&v56 + 1);
          v51.m256i_i64[1] = *((_QWORD *)&v56 + 1) + 24 * v57;
          if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v51) )
          {
            *((_BYTE *)v3 + 92) = 1;
            v24 = alacritty_terminal::index::Point::sub(0LL, v26, v3, 1LL);
            v26 = v27;
          }
          else
          {
            v24 = 0LL;
          }
        }
        v59 = v24;
        v3[6] = v24;
        v28 = v48;
        if ( v48 != v26 )
        {
          v51.m256i_i64[0] = *((_QWORD *)&v56 + 1);
          v51.m256i_i64[1] = *((_QWORD *)&v56 + 1) + 24 * v57;
          v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v51);
          v28 = v26;
          if ( v29 )
            goto LABEL_37;
        }
        v7 += (int)(v48 - v28);
        v30 = *(_QWORD *)(v9 - 16);
        *(_QWORD *)(v9 - 8) = v30;
        if ( v30 )
          goto LABEL_41;
LABEL_43:
        alloc::vec::Vec<T,A>::push(&v53, &v56, &off_877518);
        core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>(&v61);
        v59 = v3[6];
        v48 = v52;
      }
      else
      {
        v51.m256i_i64[0] = *((_QWORD *)&v56 + 1);
        v51.m256i_i64[1] = *((_QWORD *)&v56 + 1) + 24 * v57;
        if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v51) )
        {
          v6 = v50;
          v30 = *(_QWORD *)(v9 - 16);
          *(_QWORD *)(v9 - 8) = v30;
          if ( !v30 )
            goto LABEL_43;
LABEL_41:
          if ( *(_QWORD *)(v9 - 24) + 24 * v30 != 24 )
          {
            v31 = (_BYTE *)<alacritty_terminal::term::cell::Cell as alacritty_terminal::grid::GridCell>::flags_mut(*(_QWORD *)(v9 - 24) + 24 * v30 - 24);
            *v31 |= 0x10u;
          }
          goto LABEL_43;
        }
        if ( v60 < v50 )
          v3[20] = --v50;
        if ( v60 < v23 )
        {
          *((_DWORD *)v3 + 14) = ++v48;
          v52 = v48;
        }
        v6 = v50;
LABEL_37:
        core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::term::cell::Cell>>(&v61);
        core::ptr::drop_in_place<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>(&v56);
      }
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::rev::Rev<core::iter::adapters::enumerate::Enumerate<alloc::vec::drain::Drain<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>>>(&v65);
  v32 = v55;
  v33 = v3[19];
  if ( v55 < v33 )
  {
    v48 = core::cmp::Ord::max((_DWORD)v55 - (_DWORD)v33 + v48, 0LL);
    *((_DWORD *)v3 + 14) = v48;
    alloc::vec::Vec<T,A>::resize_with(&v53, v33, &v58);
    v32 = v55;
  }
  if ( v8 )
  {
    v34 = core::cmp::Ord::min(v33 + (int)~v48, v32 - v33);
    v35 = 0LL;
    v36 = v32 - v8;
    v37 = v8 < v34;
    v38 = v8 - v34;
    if ( !v37 )
      v35 = v38;
    v39 = v35 + v36;
    if ( v32 >= v39 )
    {
      v55 = v39;
      core::ptr::drop_in_place<[alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>]>(
        v54 + 32 * v39,
        v32 - v39);
      v32 = v55;
    }
    *((_DWORD *)v3 + 14) = core::cmp::Ord::max(v48 - (unsigned int)v35, 0LL);
  }
  v72[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v32, 8LL, 32LL, &off_877488);
  v72[1] = v40;
  v72[2] = 0LL;
  alloc::vec::Vec<T,A>::drain(&v65, &v53);
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v65);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v65) )
  {
    v42 = *(_QWORD *)i;
    v69 = *(_QWORD *)(i + 24);
    v68 = *(_OWORD *)(i + 8);
    if ( v42 == 0x8000000000000000LL )
      break;
    v51.m256i_i64[0] = v42;
    v51.m256i_i64[3] = v69;
    *(_OWORD *)&v51.m256i_u64[1] = v68;
    if ( *((_QWORD *)&v68 + 1) < v58 )
      alloc::vec::Vec<T,A>::resize_with(&v51, v58, &off_8774A0);
    *(__m256i *)v73 = v51;
    alloc::vec::Vec<T,A>::push(v72, v73, &off_8774B8);
  }
  core::ptr::drop_in_place<core::iter::adapters::rev::Rev<alloc::vec::drain::Drain<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>>(&v65);
  v43 = v63;
  alacritty_terminal::grid::storage::Storage<T>::replace_inner(v63, v72);
  v44 = v43[5];
  v45 = 0LL;
  v37 = v44 < v43[19];
  v46 = v44 - v43[19];
  if ( !v37 )
    v45 = v46;
  v43[20] = core::cmp::Ord::min(v43[20], v45);
  core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>(&v74);
  return core::ptr::drop_in_place<alloc::vec::Vec<alacritty_terminal::grid::row::Row<alacritty_terminal::term::cell::Cell>>>(&v53);
}