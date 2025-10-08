__int64 __fastcall just::justfile::Justfile::run_recipe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9,
        __int64 a10)
{
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  char v20; // al
  unsigned __int64 v21; // r12
  __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  int v24; // eax
  int v25; // edx
  char v26; // al
  char v27; // al
  char v28; // cl
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  unsigned __int8 v44; // [rsp+Fh] [rbp-1B9h]
  __int64 v46; // [rsp+18h] [rbp-1B0h]
  char v47; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v48[103]; // [rsp+21h] [rbp-1A7h]
  __int64 v49; // [rsp+88h] [rbp-140h] BYREF
  __int128 v50; // [rsp+90h] [rbp-138h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-128h]
  __int128 v52; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-108h]
  __int128 v54; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-E8h]
  __m256i v56; // [rsp+F0h] [rbp-D8h]
  _QWORD *v57; // [rsp+110h] [rbp-B8h]
  char v58; // [rsp+118h] [rbp-B0h]
  __int64 v59; // [rsp+128h] [rbp-A0h]
  _QWORD v60[4]; // [rsp+130h] [rbp-98h] BYREF
  int v61; // [rsp+150h] [rbp-78h] BYREF
  char v62; // [rsp+154h] [rbp-74h]
  __int64 v63; // [rsp+158h] [rbp-70h]
  __int64 v64; // [rsp+168h] [rbp-60h]
  _OWORD v65[5]; // [rsp+170h] [rbp-58h] BYREF

  v49 = just::ran::Ran::mutex(a7, a8, a2, a3);
  std::sync::poison::mutex::Mutex<T>::lock(&v47, v49 + 16);
  v13 = core::result::Result<T,E>::unwrap(&v47);
  v44 = v14 & 1;
  v46 = v13;
  if ( !*(_BYTE *)(v13 + 5) )
  {
    if ( !*(_BYTE *)(a4 + 421) )
    {
      just::recipe::Recipe<D>::confirm(&v47, a8);
      v28 = v47;
      v29 = v48[0];
      if ( v47 != 56 )
      {
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v48[95];
        *(_OWORD *)(a1 + 82) = *(_OWORD *)&v48[81];
        *(_OWORD *)(a1 + 66) = *(_OWORD *)&v48[65];
        v34 = *(_OWORD *)&v48[1];
        v35 = *(_OWORD *)&v48[17];
        v36 = *(_OWORD *)&v48[33];
        *(_OWORD *)(a1 + 50) = *(_OWORD *)&v48[49];
        *(_OWORD *)(a1 + 34) = v36;
        *(_OWORD *)(a1 + 18) = v35;
        *(_OWORD *)(a1 + 2) = v34;
        *(_BYTE *)a1 = v28;
        *(_BYTE *)(a1 + 1) = v29;
        goto LABEL_18;
      }
      if ( (v48[0] & 1) == 0 )
      {
        v30 = just::token::Token::lexeme(a8 + 18);
        *(_BYTE *)a1 = 38;
        *(_QWORD *)(a1 + 8) = v30;
        *(_QWORD *)(a1 + 16) = v31;
        goto LABEL_18;
      }
    }
    v15 = just::recipe::Recipe::module_path(a8);
    v17 = (__int64 *)alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a9, a9[1], v15, v16);
    if ( !v17 )
      core::option::expect_failed(aFailedToRetrie, 35LL, &off_430280);
    v18 = *v17;
    *(_QWORD *)&v50 = a4;
    *((_QWORD *)&v50 + 1) = a5;
    *(_QWORD *)&v51 = v18;
    *((_QWORD *)&v51 + 1) = a10;
    v19 = a8[10];
    v59 = a6;
    just::evaluator::Evaluator::evaluate_parameters((__int64)&v47, &v50, a6, a2, a3, v19, a8[11], v17[1]);
    v20 = v47;
    if ( v47 != 56 )
    {
      *(_OWORD *)((char *)&v56.m256i_u64[1] + 7) = *(_OWORD *)&v48[47];
      *(_OWORD *)v56.m256i_i8 = *(_OWORD *)&v48[32];
      v55 = *(_OWORD *)&v48[16];
      v54 = *(_OWORD *)v48;
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v48[95];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v48[79];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v48[63];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)((char *)&v56.m256i_u64[1] + 7);
      v32 = v54;
      v33 = v55;
      *(_OWORD *)(a1 + 33) = *(_OWORD *)v56.m256i_i8;
      *(_OWORD *)(a1 + 17) = v33;
      *(_OWORD *)(a1 + 1) = v32;
      *(_BYTE *)a1 = v20;
      goto LABEL_18;
    }
    v56.m256i_i8[23] = v48[55];
    *(__int64 *)((char *)&v56.m256i_i64[1] + 7) = *(_QWORD *)&v48[47];
    v65[1] = *(_OWORD *)&v48[23];
    v65[0] = *(_OWORD *)&v48[7];
    v53 = *(_QWORD *)&v48[55];
    v52 = *(_OWORD *)&v48[39];
    v60[0] = 0LL;
    v60[2] = 0LL;
    v60[3] = v65;
    *(_OWORD *)v56.m256i_i8 = 0LL;
    v54 = v50;
    v55 = v51;
    v58 = 1;
    v56.m256i_i64[3] = 0LL;
    v57 = v60;
    v21 = a8[30];
    v22 = a8[4];
    v23 = a8[5];
    v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v21, v22, v23);
    just::justfile::Justfile::run_dependencies(
      (unsigned int)&v47,
      a4,
      (unsigned int)&v50,
      v24,
      v25,
      a5,
      (__int64)&v54,
      a7,
      (__int64)a8,
      (__int64)a9,
      a10);
    v26 = v47;
    if ( v47 == 56
      && (just::recipe::Recipe<D>::run(
            (unsigned int)&v47,
            (_DWORD)a8,
            (unsigned int)&v50,
            (unsigned int)v60,
            DWORD2(v52),
            v53,
            v59),
          v26 = v47,
          v47 == 56) )
    {
      if ( v23 < v21 )
        core::slice::index::slice_start_index_len_fail(v21, v23, &off_4302B0);
      v61 = 0;
      v62 = 0;
      v63 = 0LL;
      v64 = 0LL;
      just::justfile::Justfile::run_dependencies(
        (unsigned int)&v47,
        a4,
        (unsigned int)&v50,
        32 * v21 + v22,
        v23 - v21,
        a5,
        (__int64)&v54,
        (__int64)&v61,
        (__int64)a8,
        (__int64)a9,
        a10);
      v27 = v47;
      if ( v47 == 56 )
      {
        core::ptr::drop_in_place<just::ran::Ran>(&v61);
        *(_BYTE *)(v46 + 5) = 1;
        *(_BYTE *)a1 = 56;
        core::ptr::drop_in_place<just::evaluator::Evaluator>(&v54);
        core::ptr::drop_in_place<just::scope::Scope>(v60);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v52);
        core::ptr::drop_in_place<just::scope::Scope>(v65);
        goto LABEL_18;
      }
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v48[95];
      *(_OWORD *)(a1 + 81) = *(_OWORD *)&v48[80];
      *(_OWORD *)(a1 + 65) = *(_OWORD *)&v48[64];
      v41 = *(_OWORD *)v48;
      v42 = *(_OWORD *)&v48[16];
      v43 = *(_OWORD *)&v48[32];
      *(_OWORD *)(a1 + 49) = *(_OWORD *)&v48[48];
      *(_OWORD *)(a1 + 33) = v43;
      *(_OWORD *)(a1 + 17) = v42;
      *(_OWORD *)(a1 + 1) = v41;
      *(_BYTE *)a1 = v27;
      core::ptr::drop_in_place<just::ran::Ran>(&v61);
    }
    else
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v48[95];
      *(_OWORD *)(a1 + 81) = *(_OWORD *)&v48[80];
      *(_OWORD *)(a1 + 65) = *(_OWORD *)&v48[64];
      v37 = *(_OWORD *)v48;
      v38 = *(_OWORD *)&v48[16];
      v39 = *(_OWORD *)&v48[32];
      *(_OWORD *)(a1 + 49) = *(_OWORD *)&v48[48];
      *(_OWORD *)(a1 + 33) = v39;
      *(_OWORD *)(a1 + 17) = v38;
      *(_OWORD *)(a1 + 1) = v37;
      *(_BYTE *)a1 = v26;
    }
    core::ptr::drop_in_place<just::evaluator::Evaluator>(&v54);
    core::ptr::drop_in_place<just::scope::Scope>(v60);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v52);
    core::ptr::drop_in_place<just::scope::Scope>(v65);
    goto LABEL_18;
  }
  *(_BYTE *)a1 = 56;
LABEL_18:
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v46, v44);
  return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<bool>>>(&v49);
}