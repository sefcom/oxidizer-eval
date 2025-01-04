        unsigned __int8 a8)
{
  unsigned __int64 v9; // rcx
  int v10; // r12d
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  _BYTE *v17; // rdx
  int v18; // r13d
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int128 v27; // [rsp+0h] [rbp-228h] BYREF
  unsigned __int64 v28; // [rsp+10h] [rbp-218h]
  __int128 v29; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-1F8h]
  _BYTE v31[24]; // [rsp+40h] [rbp-1E8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-1D0h]
  unsigned __int64 v33; // [rsp+68h] [rbp-1C0h]
  __int128 v34; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-1A8h]
  __int128 v36; // [rsp+90h] [rbp-198h] BYREF
  unsigned __int64 v37; // [rsp+A0h] [rbp-188h]
  __int128 v38; // [rsp+A8h] [rbp-180h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-170h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-168h]
  __int128 *v41; // [rsp+C8h] [rbp-160h] BYREF
  __int16 v42; // [rsp+D0h] [rbp-158h]
  char v43; // [rsp+D2h] [rbp-156h]
  unsigned __int64 v44; // [rsp+D8h] [rbp-150h] BYREF
  _QWORD v45[3]; // [rsp+E0h] [rbp-148h] BYREF
  _QWORD v46[7]; // [rsp+F8h] [rbp-130h] BYREF
  _QWORD v47[7]; // [rsp+130h] [rbp-F8h] BYREF
  _QWORD v48[6]; // [rsp+168h] [rbp-C0h] BYREF
  _QWORD v49[6]; // [rsp+198h] [rbp-90h] BYREF
  _QWORD v50[12]; // [rsp+1C8h] [rbp-60h] BYREF

  uu_tr::operation::Sequence::from_str(v31);
  v27 = *(_OWORD *)&v31[8];
  v28 = v32;
  if ( !*(_QWORD *)v31 )
  {
    v35 = v28;
    v34 = v27;
    if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
           *((_QWORD *)&v27 + 1),
           *((_QWORD *)&v27 + 1) + 16 * v28) )
    {
      a1[1] = 0x8000000000000003LL;
      *a1 = 0x8000000000000000LL;
LABEL_35:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v34);
      return a1;
    }
    uu_tr::operation::Sequence::from_str(v31);
    v27 = *(_OWORD *)&v31[8];
    v28 = v32;
    if ( *(_QWORD *)v31 )
    {
      a1[3] = v28;
      *(_OWORD *)(a1 + 1) = v27;
      *a1 = 0x8000000000000000LL;
      goto LABEL_35;
    }
    v30 = v28;
    v29 = v27;
    if ( (unsigned __int64)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                             *((_QWORD *)&v27 + 1),
                             *((_QWORD *)&v27 + 1) + 16 * v28) > 1 )
    {
      v9 = 0x8000000000000002LL;
LABEL_9:
      a1[1] = v9;
      *a1 = 0x8000000000000000LL;
LABEL_34:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v29);
      goto LABEL_35;
    }
    v10 = a8;
    if ( a8 )
    {
      *(_QWORD *)v31 = *((_QWORD *)&v27 + 1);
      *(_QWORD *)&v31[8] = *((_QWORD *)&v27 + 1) + 16 * v28;
      if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v31) )
      {
        v9 = 0x8000000000000006LL;
        goto LABEL_9;
      }
    }
    v48[0] = *((_QWORD *)&v34 + 1);
    v48[1] = *((_QWORD *)&v34 + 1) + 16 * v35;
    v48[2] = 0LL;
    v48[4] = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v36, v48);
    if ( a6 )
    {
      v42 = 0;
      v43 = -1;
      v41 = &v36;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v31, &v41);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
      v37 = *(_QWORD *)&v31[16];
      v36 = *(_OWORD *)v31;
    }
    v11 = v37;
    v50[0] = *((_QWORD *)&v29 + 1);
    v50[1] = *((_QWORD *)&v29 + 1) + 16 * v30;
    v50[2] = 0LL;
    v50[4] = 0LL;
    v12 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v50);
    v13 = 0LL;
    if ( v11 >= v12 )
      v13 = v11 - v12;
    v44 = v13;
    v45[0] = *((_QWORD *)&v29 + 1);
    v45[1] = *((_QWORD *)&v29 + 1) + 16 * v30;
    v45[2] = &v44;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v31, v45);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v29);
    v14 = *(_QWORD *)&v31[16];
    v30 = *(_QWORD *)&v31[16];
    v29 = *(_OWORD *)v31;
    v15 = *(_QWORD *)&v31[8];
    *(_QWORD *)&v27 = *(_QWORD *)&v31[8];
    *((_QWORD *)&v27 + 1) = *(_QWORD *)&v31[8] + 16LL * *(_QWORD *)&v31[16];
    v28 = 0LL;
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
    if ( v17 )
    {
      v40 = v11;
      while ( *v17 != 4 )
      {
LABEL_20:
        v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
        if ( !v17 )
        {
          v15 = *((_QWORD *)&v29 + 1);
          v14 = v30;
          goto LABEL_38;
        }
      }
      v18 = v10;
      if ( v16 )
      {
        v46[4] = *((_QWORD *)&v29 + 1);
        v46[5] = *((_QWORD *)&v29 + 1) + 16 * v30;
        v46[6] = v16;
        v46[0] = 0LL;
        v46[2] = 0LL;
        v19 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v46);
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)v31 = *((_QWORD *)&v34 + 1);
      *(_QWORD *)&v31[8] = *((_QWORD *)&v34 + 1) + 16 * v35;
      *(_QWORD *)&v31[16] = 0LL;
      while ( 1 )
      {
        v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v31);
        if ( !v22 )
          break;
        if ( *v22 == 4 )
        {
          if ( v21 )
          {
            v47[4] = *((_QWORD *)&v34 + 1);
            v47[5] = *((_QWORD *)&v34 + 1) + 16 * v35;
            v47[6] = v21;
            v47[0] = 0LL;
            v47[2] = 0LL;
            v20 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v47);
          }
          else
          {
            v20 = 0LL;
          }
          if ( v20 == v19 )
          {
            v10 = v18;
            v11 = v40;
            goto LABEL_20;
          }
        }
      }
      a1[1] = 0x8000000000000007LL;
      *a1 = 0x8000000000000000LL;
      goto LABEL_33;
    }
LABEL_38:
    v49[0] = v15;
    v49[1] = v15 + 16 * v14;
    v49[2] = 0LL;
    v49[4] = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, v49);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v27, &v38);
    alloc::slice::stable_sort(*((_QWORD *)&v27 + 1), v28);
    alloc::vec::Vec<T,A>::dedup_by(&v27);
    *(_QWORD *)v31 = *((_QWORD *)&v34 + 1);
    *(_QWORD *)&v31[8] = *((_QWORD *)&v34 + 1) + 16 * v35;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v31)
      && (_BYTE)v10
      && a6 )
    {
      v25 = 0x8000000000000009LL;
      if ( v28 > 1 || (v26 = v39, v39 > v11) )
      {
LABEL_51:
        a1[1] = v25;
        *a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v27);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v38);
LABEL_33:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v36);
        goto LABEL_34;
      }
    }
    else
    {
      v26 = v39;
    }
    if ( v26 >= v37
      || a7
      || (v25 = v30) == 0
      || (v24 = *((_QWORD *)&v29 + 1), v25 = 16 * v30, *(_BYTE *)(16 * v30 + *((_QWORD *)&v29 + 1) - 16) != 4)
      || (v24 = *(unsigned __int8 *)(*((_QWORD *)&v29 + 1) + v25 - 16 + 1), v25 = 0x8000000000000008LL,
                                                                            (_DWORD)v24 != 10)
      && (_DWORD)v24 != 6 )
    {
      if ( a7 )
        alloc::vec::Vec<T,A>::truncate(&v36, v26, v24, v25);
      *(_QWORD *)&v31[16] = v37;
      *(_OWORD *)v31 = v36;
      v33 = v39;
      v32 = v38;
      *(_OWORD *)a1 = v36;
      a1[4] = *((_QWORD *)&v32 + 1);
      a1[5] = v33;
      a1[2] = *(_QWORD *)&v31[16];
      a1[3] = v32;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v27);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v29);
      goto LABEL_35;
    }
    goto LABEL_51;
  }
  a1[3] = v28;
  *(_OWORD *)(a1 + 1) = v27;
  *a1 = 0x8000000000000000LL;
  return a1;
}
