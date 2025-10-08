__int64 __fastcall uu_tr::operation::Sequence::solve_set_characters(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8)
{
  __int64 v10; // rbx
  __int64 v11; // r13
  int v12; // ecx
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // ecx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // rdx
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  int v30; // edx
  __int16 *v31; // rsi
  __int128 *v32; // rdi
  int v33; // esi
  __int128 v34; // xmm0
  __int16 *v35; // [rsp+8h] [rbp-190h]
  _BYTE v36[24]; // [rsp+10h] [rbp-188h] BYREF
  __int128 v37; // [rsp+28h] [rbp-170h]
  unsigned __int64 v38; // [rsp+38h] [rbp-160h]
  char v39; // [rsp+47h] [rbp-151h] BYREF
  __int128 *v40; // [rsp+48h] [rbp-150h] BYREF
  __int16 *v41; // [rsp+50h] [rbp-148h]
  unsigned __int64 v42; // [rsp+58h] [rbp-140h]
  __int128 *v43; // [rsp+60h] [rbp-138h]
  __int16 *v44; // [rsp+68h] [rbp-130h]
  __int128 v45; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v46; // [rsp+80h] [rbp-118h]
  __int16 *v47; // [rsp+88h] [rbp-110h]
  __int64 v48; // [rsp+90h] [rbp-108h]
  unsigned __int64 v49; // [rsp+98h] [rbp-100h]
  __int128 v50; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned __int64 v51; // [rsp+B0h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-E0h]
  unsigned __int64 v53; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD v54[7]; // [rsp+C8h] [rbp-D0h] BYREF
  _QWORD v55[7]; // [rsp+100h] [rbp-98h] BYREF
  _QWORD v56[12]; // [rsp+138h] [rbp-60h] BYREF

  uu_tr::operation::Sequence::from_str(v36);
  if ( *(_DWORD *)v36 == 12 )
  {
    v48 = *(_QWORD *)&v36[8];
    v10 = *(_QWORD *)&v36[16];
    v11 = *(_QWORD *)&v36[16] + 16 * v37;
    if ( <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(*(_QWORD *)&v36[16], v11) )
    {
      *(_DWORD *)(a1 + 8) = 3;
LABEL_10:
      *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_11:
      core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v48, v10);
      return a1;
    }
    uu_tr::operation::Sequence::from_str(v36);
    if ( *(_DWORD *)v36 != 12 )
    {
      v16 = *(_DWORD *)&v36[4];
      v17 = *(_OWORD *)&v36[8];
      v18 = v37;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)v36;
      *(_DWORD *)(a1 + 12) = v16;
      *(_OWORD *)(a1 + 16) = v17;
      *(_QWORD *)(a1 + 32) = v18;
      goto LABEL_10;
    }
    v43 = *(__int128 **)&v36[8];
    v15 = *(_QWORD *)&v36[16] + 16 * v37;
    v35 = *(__int16 **)&v36[16];
    if ( (unsigned __int64)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                             *(_QWORD *)&v36[16],
                             v15) <= 1 )
    {
      if ( !a8
        || (*(_QWORD *)v36 = v35,
            *(_QWORD *)&v36[8] = v15,
            !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v36)) )
      {
        *(_QWORD *)v36 = v10;
        *(_QWORD *)&v36[8] = v11;
        *(_QWORD *)&v36[16] = 0LL;
        *((_QWORD *)&v37 + 1) = 0LL;
        core::iter::traits::iterator::Iterator::collect(&v45, v36);
        if ( a6 )
        {
          LOWORD(v41) = 0;
          BYTE2(v41) = -1;
          v40 = &v45;
          core::iter::traits::iterator::Iterator::collect(v36, &v40);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v45, *((_QWORD *)&v45 + 1));
          v46 = *(_QWORD *)&v36[16];
          v45 = *(_OWORD *)v36;
        }
        v49 = v46;
        v56[0] = v35;
        v56[1] = v15;
        v56[2] = 0LL;
        v56[4] = 0LL;
        v20 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v56);
        v21 = 0LL;
        if ( v49 >= v20 )
          v21 = v49 - v20;
        v53 = v21;
        *(_QWORD *)v36 = v35;
        *(_QWORD *)&v36[8] = v15;
        *(_QWORD *)&v36[16] = &v53;
        core::iter::traits::iterator::Iterator::collect(&v40, v36);
        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v43, v35);
        v43 = v40;
        v52 = v42;
        v35 = v41;
        v40 = (__int128 *)v41;
        v44 = &v41[8 * v42];
        v41 = v44;
        v42 = 0LL;
        v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v40);
        if ( v23 )
        {
          while ( *v23 != 4 )
          {
LABEL_22:
            v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v40);
            if ( !v23 )
              goto LABEL_35;
          }
          if ( v22 )
          {
            v54[4] = v35;
            v54[5] = v44;
            v54[6] = v22;
            v54[0] = 0LL;
            v54[2] = 0LL;
            v24 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v54);
          }
          else
          {
            v24 = 0LL;
          }
          *(_QWORD *)v36 = v10;
          *(_QWORD *)&v36[8] = v11;
          *(_QWORD *)&v36[16] = 0LL;
          while ( 1 )
          {
            v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v36);
            if ( !v27 )
              break;
            if ( *v27 == 4 )
            {
              if ( v26 )
              {
                v55[4] = v10;
                v55[5] = v11;
                v55[6] = v26;
                v55[0] = 0LL;
                v55[2] = 0LL;
                v25 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(v55);
              }
              else
              {
                v25 = 0LL;
              }
              if ( v25 == v24 )
                goto LABEL_22;
            }
          }
          *(_DWORD *)(a1 + 8) = 7;
          *(_QWORD *)a1 = 0x8000000000000000LL;
        }
        else
        {
LABEL_35:
          *(_QWORD *)v36 = v35;
          *(_QWORD *)&v36[8] = v44;
          *(_QWORD *)&v36[16] = 0LL;
          *((_QWORD *)&v37 + 1) = 0LL;
          core::iter::traits::iterator::Iterator::collect(&v50, v36);
          v28 = v51;
          v29 = *((_QWORD *)&v50 + 1);
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v40, *((_QWORD *)&v50 + 1), v51);
          if ( v42 >= 2 )
          {
            v47 = v41;
            if ( v42 >= 0x15 )
              core::slice::sort::unstable::ipnsort(v47, v42, &v39);
            else
              core::slice::sort::shared::smallsort::insertion_sort_shift_left(v47, v42, 1LL);
          }
          alloc::vec::Vec<T,A>::dedup_by(&v40);
          *(_QWORD *)v36 = v10;
          *(_QWORD *)&v36[8] = v11;
          if ( (a6 & (unsigned __int8)(<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v36) & a8)) == 0
            || (v30 = 9, v42 <= 1) && v28 <= v49 )
          {
            if ( a7 | (v28 >= v46)
              || v52 == 0
              || v44 == &word_10
              || *((_BYTE *)v44 - 16) != 4
              || (v33 = *((unsigned __int8 *)v44 - 15), v30 = 8, v33 != 10) && v33 != 6 )
            {
              if ( ((v28 <= v46) & a7) != 0 )
                v46 = v28;
              *(_QWORD *)&v36[16] = v46;
              v34 = v45;
              *(_OWORD *)v36 = v45;
              v38 = v51;
              v37 = v50;
              *(_QWORD *)(a1 + 32) = *((_QWORD *)&v50 + 1);
              *(_QWORD *)(a1 + 40) = v38;
              *(_QWORD *)(a1 + 16) = *(_QWORD *)&v36[16];
              *(_QWORD *)(a1 + 24) = v37;
              *(_OWORD *)a1 = v34;
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v40, v41);
              v32 = v43;
              v31 = v35;
              goto LABEL_42;
            }
          }
          *(_DWORD *)(a1 + 8) = v30;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v40, v41);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v50, v29);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v45, *((_QWORD *)&v45 + 1));
LABEL_41:
        v31 = v35;
        v32 = v43;
LABEL_42:
        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v32, v31);
        goto LABEL_11;
      }
      *(_DWORD *)(a1 + 8) = 6;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 2;
    }
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_41;
  }
  v12 = *(_DWORD *)&v36[4];
  v13 = *(_OWORD *)&v36[8];
  v14 = v37;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)v36;
  *(_DWORD *)(a1 + 12) = v12;
  *(_OWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 32) = v14;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}