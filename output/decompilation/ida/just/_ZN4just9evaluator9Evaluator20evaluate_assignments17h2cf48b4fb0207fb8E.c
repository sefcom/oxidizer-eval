__int64 __fastcall just::evaluator::Evaluator::evaluate_assignments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  _BOOL8 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  char v19; // r12
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  char v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int128 *v27; // rsi
  _BOOL8 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  int v31; // ecx
  __int128 v32; // xmm0
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm0
  __int128 v37; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+20h] [rbp-198h]
  _BOOL8 v39; // [rsp+28h] [rbp-190h] BYREF
  __int64 v40; // [rsp+30h] [rbp-188h]
  __int64 v41; // [rsp+38h] [rbp-180h]
  __int64 v42; // [rsp+40h] [rbp-178h]
  _BOOL8 v43; // [rsp+48h] [rbp-170h]
  __int64 v44; // [rsp+50h] [rbp-168h]
  __int64 v45; // [rsp+58h] [rbp-160h]
  __int64 v46; // [rsp+60h] [rbp-158h]
  __int64 v47; // [rsp+68h] [rbp-150h]
  __int128 v48; // [rsp+70h] [rbp-148h] BYREF
  __int128 v49; // [rsp+80h] [rbp-138h]
  _BYTE v50[40]; // [rsp+90h] [rbp-128h]
  char v51; // [rsp+B8h] [rbp-100h]
  __int64 v52; // [rsp+C0h] [rbp-F8h]
  __int128 v53; // [rsp+C8h] [rbp-F0h]
  __int64 v54; // [rsp+D8h] [rbp-E0h]
  __int128 v55; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-C8h]
  _BYTE v57[40]; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v58; // [rsp+128h] [rbp-90h]
  __int128 v59; // [rsp+138h] [rbp-80h]
  __int128 v60; // [rsp+148h] [rbp-70h]
  __int128 v61; // [rsp+158h] [rbp-60h]
  __int128 v62; // [rsp+170h] [rbp-48h] BYREF
  __int64 v63; // [rsp+180h] [rbp-38h]

  *((_QWORD *)&v53 + 1) = a3;
  *(_QWORD *)&v53 = a2;
  *(_QWORD *)&v55 = 0LL;
  *(_QWORD *)&v56 = 0LL;
  *((_QWORD *)&v56 + 1) = a6;
  *(_QWORD *)&v37 = 0LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  v38 = 0LL;
  v7 = *a5;
  v8 = a5[1];
  v9 = *a5;
  v10 = *a5 != 0;
  if ( *a5 )
    v9 = a5[2];
  v39 = *a5 != 0;
  v40 = 0LL;
  v41 = v7;
  v42 = v8;
  v43 = v10;
  v44 = 0LL;
  v45 = v7;
  v46 = v8;
  v47 = v9;
  v52 = a4 + 640;
  v11 = *(_QWORD *)(a4 + 640);
  v54 = a4;
  v12 = *(_QWORD *)(a4 + 648);
  while ( 1 )
  {
    v13 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v39);
    v16 = v13;
    if ( !v13 )
      break;
    v17 = v14;
    v18 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(v11, v12, *(_QWORD *)(v13 + 8), *(_QWORD *)(v13 + 16));
    if ( v18 )
    {
      v19 = *(_BYTE *)(v18 + 205);
      *(_QWORD *)&v50[32] = *(_QWORD *)(v18 + 192);
      v20 = *(_OWORD *)(v18 + 128);
      v21 = *(_OWORD *)(v18 + 144);
      v22 = *(_OWORD *)(v18 + 160);
      *(_OWORD *)&v50[16] = *(_OWORD *)(v18 + 176);
      *(_OWORD *)v50 = v22;
      v49 = v21;
      v48 = v20;
      v23 = *(_BYTE *)(v18 + 206);
      <alloc::string::String as core::clone::Clone>::clone(&v62, v17);
      BYTE12(v61) = 0;
      BYTE13(v61) = v19;
      DWORD2(v61) = 0;
      *(_QWORD *)&v61 = *(_QWORD *)&v50[32];
      v60 = *(_OWORD *)&v50[16];
      v59 = *(_OWORD *)v50;
      v58 = v49;
      *(_OWORD *)&v57[24] = v48;
      BYTE14(v61) = v23;
      *(_OWORD *)v57 = v62;
      *(_QWORD *)&v57[16] = v63;
      just::scope::Scope::bind(&v55, v57);
    }
    else
    {
      <alloc::string::String as core::clone::Clone>::clone(v57, v16);
      alloc::vec::Vec<T,A>::push(&v37, v57, &off_42FAF0);
    }
  }
  if ( v38 )
  {
    *(_QWORD *)&v57[23] = v38;
    *(_OWORD *)&v57[7] = v37;
    *(_BYTE *)a1 = 51;
    v25 = *(_QWORD *)&v57[23];
    v24 = *(_QWORD *)&v57[15];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v57;
    *(_OWORD *)(a1 + 16) = __PAIR128__(v25, v24);
    return core::ptr::drop_in_place<just::scope::Scope>(&v55);
  }
  else
  {
    *(_OWORD *)&v50[24] = v56;
    *(_OWORD *)&v50[8] = v55;
    *(_QWORD *)v50 = v52;
    v48 = v53;
    v27 = (__int128 *)v54;
    *(_QWORD *)&v49 = v54;
    *((_QWORD *)&v49 + 1) = a7;
    v51 = 0;
    v28 = 0LL;
    v29 = v11;
    LOBYTE(v14) = v11 != 0;
    if ( v11 )
      v29 = *(_QWORD *)(v54 + 656);
    LOBYTE(v28) = v11 != 0;
    v39 = v28;
    v40 = 0LL;
    v41 = v11;
    v42 = v12;
    v43 = v28;
    v44 = 0LL;
    v45 = v11;
    v46 = v12;
    v47 = v29;
    while ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(
              &v39,
              v27,
              v14,
              v29,
              v15) )
    {
      v27 = &v48;
      just::evaluator::Evaluator::evaluate_assignment(v57, &v48);
      v30 = v57[0];
      if ( v57[0] != 56 )
      {
        v31 = *(_DWORD *)&v57[1];
        *(_DWORD *)(a1 + 4) = *(_DWORD *)&v57[4];
        *(_DWORD *)(a1 + 1) = v31;
        v32 = *(_OWORD *)&v57[8];
        v33 = v58;
        v34 = v59;
        *(_OWORD *)(a1 + 24) = *(_OWORD *)&v57[24];
        *(_OWORD *)(a1 + 40) = v33;
        *(_OWORD *)(a1 + 56) = v34;
        *(_OWORD *)(a1 + 72) = v60;
        *(_OWORD *)(a1 + 88) = v61;
        *(_BYTE *)a1 = v30;
        *(_OWORD *)(a1 + 8) = v32;
        core::ptr::drop_in_place<just::evaluator::Evaluator>(&v48);
        return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v37);
      }
    }
    v35 = *(_OWORD *)&v50[8];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v50[24];
    *(_OWORD *)(a1 + 8) = v35;
    *(_BYTE *)a1 = 56;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v37);
  }
}