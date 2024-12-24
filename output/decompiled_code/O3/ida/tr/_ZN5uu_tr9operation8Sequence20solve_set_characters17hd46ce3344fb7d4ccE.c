        unsigned __int8 a8)
{
  unsigned __int64 v11; // rcx
  int v12; // r12d
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  _BYTE *v19; // rdx
  int v20; // r13d
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE *v24; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  __int128 v29; // [rsp+0h] [rbp-228h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-218h]
  __int128 v31; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-1F8h]
  _BYTE v33[24]; // [rsp+40h] [rbp-1E8h] BYREF
  __int128 v34; // [rsp+58h] [rbp-1D0h]
  unsigned __int64 v35; // [rsp+68h] [rbp-1C0h]
  __int128 v36; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned __int64 v37; // [rsp+80h] [rbp-1A8h]
  __int128 v38; // [rsp+90h] [rbp-198h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-188h]
  __int128 v40; // [rsp+A8h] [rbp-180h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-170h]
  unsigned __int64 v42; // [rsp+C0h] [rbp-168h]
  __int128 *v43; // [rsp+C8h] [rbp-160h] BYREF
  __int16 v44; // [rsp+D0h] [rbp-158h]
  char v45; // [rsp+D2h] [rbp-156h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-150h] BYREF
  _QWORD v47[3]; // [rsp+E0h] [rbp-148h] BYREF
  _QWORD v48[7]; // [rsp+F8h] [rbp-130h] BYREF
  _QWORD v49[7]; // [rsp+130h] [rbp-F8h] BYREF
  _QWORD v50[6]; // [rsp+168h] [rbp-C0h] BYREF
  _QWORD v51[6]; // [rsp+198h] [rbp-90h] BYREF
  _QWORD v52[12]; // [rsp+1C8h] [rbp-60h] BYREF

  uu_tr::operation::Sequence::from_str((__int64)v33, a2, a3);
  v29 = *(_OWORD *)&v33[8];
  v30 = v34;
  if ( !*(_QWORD *)v33 )
  {
    v37 = v30;
    v36 = v29;
    if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
           *((_QWORD *)&v29 + 1),
           *((_QWORD *)&v29 + 1) + 16 * v30) )
    {
      a1[1] = 0x8000000000000003LL;
      *a1 = 0x8000000000000000LL;
LABEL_35:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v36);
      return a1;
    }
    uu_tr::operation::Sequence::from_str((__int64)v33, a4, a5);
    v29 = *(_OWORD *)&v33[8];
    v30 = v34;
    if ( *(_QWORD *)v33 )
    {
      a1[3] = v30;
      *(_OWORD *)(a1 + 1) = v29;
      *a1 = 0x8000000000000000LL;
      goto LABEL_35;
    }
    v32 = v30;
    v31 = v29;
    if ( (unsigned __int64)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                             *((_QWORD *)&v29 + 1),
                             *((_QWORD *)&v29 + 1) + 16 * v30) > 1 )
    {
      v11 = 0x8000000000000002LL;
LABEL_9:
      a1[1] = v11;
      *a1 = 0x8000000000000000LL;
LABEL_34:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v31);
      goto LABEL_35;
    }
    v12 = a8;
    if ( a8 )
    {
      *(_QWORD *)v33 = *((_QWORD *)&v29 + 1);
      *(_QWORD *)&v33[8] = *((_QWORD *)&v29 + 1) + 16 * v30;
      if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v33) )
      {
        v11 = 0x8000000000000006LL;
        goto LABEL_9;
      }
    }
    v50[0] = *((_QWORD *)&v36 + 1);
    v50[1] = *((_QWORD *)&v36 + 1) + 16 * v37;
    v50[2] = 0LL;
    v50[4] = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v38, v50);
    if ( a6 )
    {
      v44 = 0;
      v45 = -1;
      v43 = &v38;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v33, &v43);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v38);
      v39 = *(_QWORD *)&v33[16];
      v38 = *(_OWORD *)v33;
    }
    v13 = v39;
    v52[0] = *((_QWORD *)&v31 + 1);
    v52[1] = *((_QWORD *)&v31 + 1) + 16 * v32;
    v52[2] = 0LL;
    v52[4] = 0LL;
    v14 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v52);
    v15 = 0LL;
    if ( v13 >= v14 )
      v15 = v13 - v14;
    v46 = v15;
    v47[0] = *((_QWORD *)&v31 + 1);
    v47[1] = *((_QWORD *)&v31 + 1) + 16 * v32;
    v47[2] = &v46;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v33, v47);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v31);
    v16 = *(_QWORD *)&v33[16];
    v32 = *(_QWORD *)&v33[16];
    v31 = *(_OWORD *)v33;
    v17 = *(_QWORD *)&v33[8];
    *(_QWORD *)&v29 = *(_QWORD *)&v33[8];
    *((_QWORD *)&v29 + 1) = *(_QWORD *)&v33[8] + 16LL * *(_QWORD *)&v33[16];
    v30 = 0LL;
    v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29);
    if ( v19 )
    {
      v42 = v13;
      while ( *v19 != 4 )
      {
LABEL_20:
        v18 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29);
        if ( !v19 )
        {
          v17 = *((_QWORD *)&v31 + 1);
          v16 = v32;
          goto LABEL_38;
        }
      }
      v20 = v12;
      if ( v18 )
      {
        v48[4] = *((_QWORD *)&v31 + 1);
        v48[5] = *((_QWORD *)&v31 + 1) + 16 * v32;
        v48[6] = v18;
        v48[0] = 0LL;
        v48[2] = 0LL;
        v21 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v48);
      }
      else
      {
        v21 = 0LL;
      }
      *(_QWORD *)v33 = *((_QWORD *)&v36 + 1);
      *(_QWORD *)&v33[8] = *((_QWORD *)&v36 + 1) + 16 * v37;
      *(_QWORD *)&v33[16] = 0LL;
      while ( 1 )
      {
        v23 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v33);
        if ( !v24 )
          break;
        if ( *v24 == 4 )
        {
          if ( v23 )
          {
            v49[4] = *((_QWORD *)&v36 + 1);
            v49[5] = *((_QWORD *)&v36 + 1) + 16 * v37;
            v49[6] = v23;
            v49[0] = 0LL;
            v49[2] = 0LL;
            v22 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v49);
          }
          else
          {
            v22 = 0LL;
          }
          if ( v22 == v21 )
          {
            v12 = v20;
            v13 = v42;
            goto LABEL_20;
          }
        }
      }
      a1[1] = 0x8000000000000007LL;
      *a1 = 0x8000000000000000LL;
      goto LABEL_33;
    }
LABEL_38:
    v51[0] = v17;
    v51[1] = v17 + 16 * v16;
    v51[2] = 0LL;
    v51[4] = 0LL;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v40, v51);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v29, &v40);
    alloc::slice::stable_sort(*((_QWORD *)&v29 + 1), v30);
    alloc::vec::Vec<T,A>::dedup_by(&v29);
    *(_QWORD *)v33 = *((_QWORD *)&v36 + 1);
    *(_QWORD *)&v33[8] = *((_QWORD *)&v36 + 1) + 16 * v37;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v33)
      && (_BYTE)v12
      && a6 )
    {
      v27 = 0x8000000000000009LL;
      if ( v30 > 1 || (v28 = v41, v41 > v13) )
      {
LABEL_51:
        a1[1] = v27;
        *a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v40);
LABEL_33:
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v38);
        goto LABEL_34;
      }
    }
    else
    {
      v28 = v41;
    }
    if ( v28 >= v39
      || a7
      || (v27 = v32) == 0
      || (v26 = *((_QWORD *)&v31 + 1), v27 = 16 * v32, *(_BYTE *)(16 * v32 + *((_QWORD *)&v31 + 1) - 16) != 4)
      || (v26 = *(unsigned __int8 *)(*((_QWORD *)&v31 + 1) + v27 - 16 + 1), v27 = 0x8000000000000008LL,
                                                                            (_DWORD)v26 != 10)
      && (_DWORD)v26 != 6 )
    {
      if ( a7 )
        alloc::vec::Vec<T,A>::truncate(&v38, v28, v26, v27);
      *(_QWORD *)&v33[16] = v39;
      *(_OWORD *)v33 = v38;
      v35 = v41;
      v34 = v40;
      *(_OWORD *)a1 = v38;
      a1[4] = *((_QWORD *)&v34 + 1);
      a1[5] = v35;
      a1[2] = *(_QWORD *)&v33[16];
      a1[3] = v34;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_tr::operation::Sequence>>(&v31);
      goto LABEL_35;
    }
    goto LABEL_51;
  }
  a1[3] = v30;
  *(_OWORD *)(a1 + 1) = v29;
  *a1 = 0x8000000000000000LL;
  return a1;
}
