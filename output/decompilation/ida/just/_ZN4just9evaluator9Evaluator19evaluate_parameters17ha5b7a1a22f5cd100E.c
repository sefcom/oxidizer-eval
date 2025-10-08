__int64 __fastcall just::evaluator::Evaluator::evaluate_parameters(
        __int64 a1,
        _OWORD *a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v9; // xmm1
  __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  char v19; // al
  unsigned __int8 v20; // al
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 result; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int64 v35; // rdx
  _BYTE v36[31]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v37; // [rsp+20h] [rbp-158h]
  __int128 v38; // [rsp+28h] [rbp-150h] BYREF
  __int64 v39; // [rsp+38h] [rbp-140h]
  _BYTE v40[96]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-D8h]
  __int128 v42; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-B8h]
  __int64 v44; // [rsp+C8h] [rbp-B0h]
  __int64 v45; // [rsp+D0h] [rbp-A8h]
  __int64 v46; // [rsp+D8h] [rbp-A0h]
  _OWORD v47[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v48; // [rsp+100h] [rbp-78h]
  __int128 v49; // [rsp+108h] [rbp-70h] BYREF
  __int128 v50; // [rsp+118h] [rbp-60h]
  char v51; // [rsp+128h] [rbp-50h]

  v37 = a1;
  v48 = 0LL;
  v9 = a2[1];
  v47[0] = *a2;
  v47[1] = v9;
  v51 = a3;
  *(_QWORD *)&v49 = 0LL;
  *(_QWORD *)&v50 = 0LL;
  *((_QWORD *)&v50 + 1) = a8;
  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 8LL;
  v39 = 0LL;
  if ( !a7 )
  {
LABEL_16:
    v24 = v49;
    *(_OWORD *)&v40[16] = v50;
    v25 = v50;
    *(_OWORD *)v40 = v49;
    v26 = v38;
    *(_OWORD *)&v40[32] = v38;
    result = v39;
    *(_QWORD *)&v40[48] = v39;
    v28 = v37;
    *(_QWORD *)(v37 + 56) = v39;
    *(_OWORD *)(v28 + 40) = v26;
    *(_OWORD *)(v28 + 24) = v25;
    *(_OWORD *)(v28 + 8) = v24;
    *(_BYTE *)v28 = 56;
    return result;
  }
  v10 = a6;
  v45 = a6 + 208 * a7;
  v12 = a6 + 208;
  while ( 1 )
  {
    v46 = v12;
    if ( !a5 )
      break;
    if ( *(_BYTE *)(v10 + 201) != 1 )
    {
      v44 = a5;
      v16 = 24 * a5;
      v17 = 0LL;
      do
      {
        <alloc::string::String as core::clone::Clone>::clone(v40, v17 + a4);
        alloc::vec::Vec<T,A>::push(&v38, v40, &off_42FBC0);
        v17 += 24LL;
      }
      while ( v16 != v17 );
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v36, a4, v44);
      alloc::str::join_generic_copy(v40, *(_QWORD *)&v36[8], *(_QWORD *)&v36[16], asc_6E4F0, 1LL);
      v18 = *(_QWORD *)&v40[8];
      v13 = *(_QWORD *)v40;
      v15 = *(_QWORD *)&v40[16];
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v36);
      v14 = v18;
      a4 = 8LL;
      goto LABEL_14;
    }
    <alloc::string::String as core::clone::Clone>::clone(v36, a4);
    <alloc::string::String as core::clone::Clone>::clone(v40, v36);
    alloc::vec::Vec<T,A>::push(&v38, v40, &off_42FBA8);
    --a5;
    a4 += 24LL;
    v14 = *(_QWORD *)&v36[8];
    v13 = *(_QWORD *)v36;
    v15 = *(_QWORD *)&v36[16];
LABEL_15:
    v20 = *(_BYTE *)(v10 + 200);
    *(_QWORD *)&v40[88] = *(_QWORD *)(v10 + 192);
    v21 = *(_OWORD *)(v10 + 128);
    v22 = *(_OWORD *)(v10 + 144);
    v23 = *(_OWORD *)(v10 + 160);
    *(_OWORD *)&v40[72] = *(_OWORD *)(v10 + 176);
    *(_OWORD *)&v40[56] = v23;
    *(_OWORD *)&v40[40] = v22;
    *(_OWORD *)&v40[24] = v21;
    BYTE4(v41) = 0;
    *(_WORD *)((char *)&v41 + 5) = v20;
    LODWORD(v41) = 0;
    *(_QWORD *)v40 = v13;
    *(_QWORD *)&v40[8] = v14;
    *(_QWORD *)&v40[16] = v15;
    just::scope::Scope::bind(&v49, v40);
    v12 = v46 + 208;
    v10 = v46;
    if ( v46 == v45 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)v10 == 18 )
  {
    if ( *(_BYTE *)(v10 + 201) != 2 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v40, aMissingParamet);
      v29 = *(_QWORD *)&v40[16];
      *(_OWORD *)&v40[7] = *(_OWORD *)v40;
      *(_QWORD *)&v40[23] = v29;
      v30 = v37;
      *(_BYTE *)v37 = 29;
      v31 = *(_QWORD *)&v40[15];
      v32 = *(_QWORD *)&v40[23];
      *(_OWORD *)(v30 + 1) = *(_OWORD *)v40;
      *(_QWORD *)(v30 + 16) = v31;
      *(_QWORD *)(v30 + 24) = v32;
      goto LABEL_19;
    }
    v14 = 1LL;
    v13 = 0LL;
    v15 = 0LL;
    goto LABEL_14;
  }
  just::evaluator::Evaluator::evaluate_expression((__int64)v40, v47, (__int64 *)v10);
  v19 = v40[0];
  if ( v40[0] == 56 )
  {
    *(_QWORD *)&v36[23] = *(_QWORD *)&v40[24];
    *(_OWORD *)&v36[7] = *(_OWORD *)&v40[8];
    v42 = *(_OWORD *)&v40[8];
    v43 = *(_QWORD *)&v40[24];
    <alloc::string::String as core::clone::Clone>::clone(v40, &v42);
    alloc::vec::Vec<T,A>::push(&v38, v40, &off_42FB90);
    v14 = *((_QWORD *)&v42 + 1);
    v13 = v42;
    v15 = v43;
LABEL_14:
    a5 = 0LL;
    goto LABEL_15;
  }
  v33 = *(_OWORD *)&v40[32];
  v34 = *(_OWORD *)&v40[48];
  *(_OWORD *)&v36[15] = *(_OWORD *)&v40[16];
  *(_OWORD *)v36 = *(_OWORD *)&v40[1];
  v35 = v37;
  *(_QWORD *)(v37 + 96) = v41;
  *(_OWORD *)(v35 + 80) = *(_OWORD *)&v40[80];
  *(_OWORD *)(v35 + 64) = *(_OWORD *)&v40[64];
  *(_OWORD *)(v35 + 48) = v34;
  *(_OWORD *)(v35 + 32) = v33;
  *(_OWORD *)(v35 + 16) = *(_OWORD *)&v36[15];
  *(_OWORD *)(v35 + 1) = *(_OWORD *)v36;
  *(_BYTE *)v35 = v19;
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
  return core::ptr::drop_in_place<just::evaluator::Evaluator>(v47);
}