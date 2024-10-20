        __int64 a5)
{
  __int64 v7; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 *v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  unsigned __int8 v25; // cl
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v42; // [rsp+8h] [rbp-1E0h]
  __int128 v43; // [rsp+10h] [rbp-1D8h] BYREF
  unsigned __int64 v44; // [rsp+20h] [rbp-1C8h]
  __int64 v45; // [rsp+28h] [rbp-1C0h]
  __int64 v46; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-1B0h]
  _QWORD *v48; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v49; // [rsp+48h] [rbp-1A0h]
  _QWORD *v50; // [rsp+50h] [rbp-198h]
  __int64 v51; // [rsp+58h] [rbp-190h]
  unsigned __int64 v52; // [rsp+60h] [rbp-188h]
  unsigned __int64 v53; // [rsp+68h] [rbp-180h]
  unsigned __int64 v54; // [rsp+70h] [rbp-178h]
  __int128 v55; // [rsp+78h] [rbp-170h] BYREF
  _QWORD *v56; // [rsp+88h] [rbp-160h]
  __int128 v57; // [rsp+90h] [rbp-158h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-148h]
  char **v59; // [rsp+A8h] [rbp-140h]
  unsigned __int64 v60; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-130h]
  unsigned __int64 v62; // [rsp+C0h] [rbp-128h]
  _QWORD v63[2]; // [rsp+C8h] [rbp-120h] BYREF
  unsigned __int64 v64; // [rsp+D8h] [rbp-110h] BYREF
  _QWORD v65[2]; // [rsp+E0h] [rbp-108h] BYREF
  unsigned __int64 v66; // [rsp+F0h] [rbp-F8h] BYREF
  unsigned __int64 v67; // [rsp+F8h] [rbp-F0h]
  unsigned __int64 v68; // [rsp+100h] [rbp-E8h]
  __int64 v69; // [rsp+108h] [rbp-E0h]
  __int128 v70; // [rsp+110h] [rbp-D8h] BYREF
  _QWORD *v71; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v72; // [rsp+130h] [rbp-B8h] BYREF
  unsigned __int64 v73; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v74[16]; // [rsp+148h] [rbp-A0h] BYREF
  unsigned __int64 v75; // [rsp+158h] [rbp-90h] BYREF
  __int128 v76; // [rsp+160h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+170h] [rbp-78h] BYREF
  __int128 v78; // [rsp+180h] [rbp-68h] BYREF
  _QWORD *v79; // [rsp+190h] [rbp-58h] BYREF
  _BYTE v80[16]; // [rsp+1A0h] [rbp-48h] BYREF
  unsigned __int64 v81[7]; // [rsp+1B0h] [rbp-38h] BYREF

  v7 = a2;
  v69 = a3;
  v9 = a2 + 304 * a3;
  v10 = 1LL;
  v59 = &off_1FF310;
  v11 = 1LL;
  v12 = 1LL;
  v13 = 1LL;
  v46 = 1LL;
  v45 = 1LL;
  v53 = 1LL;
  v52 = 1LL;
  v54 = 1LL;
LABEL_2:
  v62 = v13;
  v61 = v12;
  v60 = v11;
  v14 = v7;
  while ( v14 != v9 )
  {
    v15 = v14;
    if ( !v14 )
      break;
    if ( (*(_BYTE *)(a4 + 233) & 1) == 0 )
      goto LABEL_14;
    v16 = *(_QWORD *)(v14 + 72);
    if ( v16 == 3 )
    {
      v17 = (__int64 *)core::cell::once::OnceCell<T>::try_init(v14 + 72, v14, a5);
      v16 = *v17;
    }
    else
    {
      v17 = (__int64 *)(v14 + 72);
    }
    v14 = v15 + 304;
    if ( v16 != 2 )
    {
      v51 = a5;
      v63[0] = v17[5];
      v65[0] = v63;
      v65[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v55 = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
      *((_QWORD *)&v55 + 1) = 1LL;
      v56 = v65;
      v57 = 1uLL;
      alloc::fmt::format::format_inner(&v43, &v55);
      v18 = v44;
      v77 = v44;
      v76 = v43;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v55, &v76);
      if ( *((_QWORD *)&v55 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v77, v55, *((_QWORD *)&v55 + 1), v56);
      v19 = v54;
      if ( v18 > v54 )
        v19 = v18;
      v54 = v19;
      a5 = v51;
LABEL_14:
      if ( (*(_BYTE *)(a4 + 234) & 1) != 0 )
      {
        v20 = *(_QWORD *)(v15 + 72);
        if ( v20 == 3 )
        {
          v21 = core::cell::once::OnceCell<T>::try_init(v15 + 72, v15, a5);
          if ( *(_QWORD *)v21 != 2LL )
          {
LABEL_17:
            v22 = *(_DWORD *)(v21 + 56) & 0xB000 | 0x4000u;
            if ( (_DWORD)v22 == 24576 )
            {
              v23 = 0LL;
            }
            else
            {
              v24 = *(_QWORD *)(v21 + 96);
              if ( v24 >> 55 )
                core::panicking::panic_const::panic_const_mul_overflow(
                  &anon_11f7478bcb2f9b4befb7b1d3f51baba0_363_llvm_2775220154043362954,
                  v24,
                  45056LL,
                  v22);
              v23 = v24 << 9;
            }
            v25 = *(_BYTE *)(a4 + 241);
            v51 = a5;
            if ( !v25 )
            {
              v26 = *(_QWORD *)(a4 + 216);
              if ( !v26 )
                core::panicking::panic_const::panic_const_div_by_zero(&anon_11f7478bcb2f9b4befb7b1d3f51baba0_364_llvm_2775220154043362954);
              if ( (v26 | v23) >> 32 )
                v23 /= v26;
              else
                v23 = (unsigned int)v23 / (unsigned int)v26;
            }
            uucore::features::format::human::human_readable(v80, v23, v25);
            v27 = v81[0];
            alloc::raw_vec::RawVec<T,A>::current_memory(&v55, v80);
            if ( *((_QWORD *)&v55 + 1) )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v81, v55, *((_QWORD *)&v55 + 1), v56);
            v28 = v10;
            if ( v27 > v10 )
              v28 = v27;
            a5 = v51;
            v10 = v28;
          }
        }
        else
        {
          v21 = v15 + 72;
          if ( v20 != 2 )
            goto LABEL_17;
        }
      }
      v14 = v15 + 304;
      if ( *(_BYTE *)(a4 + 248) == 1 )
      {
        v29 = *(_QWORD *)(v15 + 64);
        v30 = *(_QWORD *)(v15 + 72);
        if ( v30 == 3 )
        {
          v47 = *(_QWORD *)(v15 + 64);
          v37 = (_QWORD *)core::cell::once::OnceCell<T>::try_init(v15 + 72, v15, a5);
          v29 = v47;
          v31 = (__int64)v37;
          if ( *v37 != 2LL )
            goto LABEL_40;
LABEL_38:
          v32 = 0LL;
          v48 = 0LL;
          v50 = 0LL;
          v49 = 0LL;
          v33 = 0LL;
          v34 = 0LL;
          v35 = v46;
          v36 = v45;
          goto LABEL_57;
        }
        v31 = v15 + 72;
        if ( v30 == 2 )
          goto LABEL_38;
LABEL_40:
        v47 = v29;
        uu_ls::display_len_or_rdev((__int64)&v55, v31, a4);
        if ( (_QWORD)v57 == 0x8000000000000000LL )
        {
          v78 = v55;
          v48 = v56;
          v79 = v56;
          alloc::raw_vec::RawVec<T,A>::current_memory(&v43, &v78);
          if ( *((_QWORD *)&v43 + 1) )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v79, v43, *((_QWORD *)&v43 + 1), v44);
          v49 = 0LL;
          v50 = 0LL;
          goto LABEL_50;
        }
        v71 = v56;
        v70 = v55;
        v72 = v57;
        v73 = v58;
        v50 = v56;
        v49 = v58;
        v38 = (unsigned __int64)v56 + v58;
        if ( __CFADD__(v58, v56) )
          goto LABEL_81;
        v48 = (_QWORD *)(v38 + 2);
        if ( v38 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v59 = &off_1FF328;
LABEL_81:
          core::panicking::panic_const::panic_const_add_overflow(v59);
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(&v43, &v72);
        if ( *((_QWORD *)&v43 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v73, v43, *((_QWORD *)&v43 + 1), v44);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v43, &v70);
        if ( *((_QWORD *)&v43 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v71, v43, *((_QWORD *)&v43 + 1), v44);
LABEL_50:
        uu_ls::display_symlink_count((__int64)v74, v31);
        v68 = v75;
        uu_ls::display_uname((__int64)v63, v31, a4);
        v67 = v64;
        uu_ls::display_group((__int64)v65, v31, a4);
        v42 = v66;
        alloc::raw_vec::RawVec<T,A>::current_memory(&v43, v65);
        if ( *((_QWORD *)&v43 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v66, v43, *((_QWORD *)&v43 + 1), v44);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v43, v63);
        if ( *((_QWORD *)&v43 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v64, v43, *((_QWORD *)&v43 + 1), v44);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v43, v74);
        if ( *((_QWORD *)&v43 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v75, v43, *((_QWORD *)&v43 + 1), v44);
        v35 = v46;
        v36 = v45;
        v29 = v47;
        v34 = v68;
        v33 = v67;
        v32 = v42;
LABEL_57:
        v7 = v15 + 304;
        v39 = v52;
        if ( v34 > v52 )
          v39 = v34;
        v52 = v39;
        v40 = v53;
        if ( v33 > v53 )
          v40 = v33;
        v53 = v40;
        if ( v32 > v36 )
          v36 = v32;
        v45 = v36;
        if ( v29 <= v35 )
          v29 = v35;
        if ( (*(_BYTE *)(a4 + 235) & 1) != 0 )
          v35 = v29;
        v46 = v35;
        v11 = 0LL;
        v12 = 0LL;
        v13 = 0LL;
        if ( v69 != 1 )
        {
          v12 = v61;
          if ( (unsigned __int64)v50 > v61 )
            v12 = (unsigned __int64)v50;
          v11 = v60;
          if ( v49 > v60 )
            v11 = v49;
          v13 = v62;
          if ( (unsigned __int64)v48 > v62 )
            v13 = (unsigned __int64)v48;
          if ( v13 <= v12 )
            v13 = v12;
        }
        goto LABEL_2;
      }
    }
  }
  *a1 = v54;
  a1[1] = v52;
  a1[2] = v53;
  a1[3] = v45;
  a1[4] = v46;
  a1[5] = v62;
  a1[6] = v61;
  a1[7] = v60;
  a1[8] = v10;
  return a1;
}
