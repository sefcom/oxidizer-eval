_QWORD *__fastcall uu_whoami::whoami(_QWORD *a1)
{
  __uid_t v1; // eax
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+8h] [rbp-140h] BYREF
  __int128 v10; // [rsp+20h] [rbp-128h] BYREF
  __int128 v11; // [rsp+30h] [rbp-118h]
  __int128 v12; // [rsp+40h] [rbp-108h]
  __int128 v13; // [rsp+50h] [rbp-F8h]
  __int128 v14; // [rsp+60h] [rbp-E8h]
  __int128 v15; // [rsp+70h] [rbp-D8h]
  __int128 v16; // [rsp+80h] [rbp-C8h]
  __int128 v17; // [rsp+90h] [rbp-B8h]
  _OWORD v18[10]; // [rsp+A0h] [rbp-A8h] BYREF

  v1 = geteuid();
  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v18, v1);
  if ( *(_QWORD *)&v18[0] == 0x8000000000000000LL )
  {
    v2 = *((_QWORD *)&v18[0] + 1);
  }
  else
  {
    v17 = v18[7];
    v16 = v18[6];
    v15 = v18[5];
    v14 = v18[4];
    v13 = v18[3];
    v12 = v18[2];
    v11 = v18[1];
    v10 = v18[0];
    uucore::features::entries::uid2usr::{{closure}}(v9, &v10);
    v2 = v9[1];
    if ( v9[0] != 0x8000000000000000LL )
    {
      v7 = v9[2];
      *a1 = v9[0];
      a1[1] = v2;
      a1[2] = v7;
      return a1;
    }
  }
  *(_QWORD *)&v18[0] = v2;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, 22LL, 0LL);
  v3 = *((_QWORD *)&v10 + 1);
  if ( (_QWORD)v10 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v10 + 1), v11);
  v4 = v11;
  core::intrinsics::copy_nonoverlapping::precondition_check(&aInnerfailedToG[5], v11, 1LL, 1LL, 22LL);
  *(_QWORD *)(v4 + 14) = 0x656D616E72657375LL;
  *(_OWORD *)v4 = *(_OWORD *)&aInnerfailedToG[5];
  *(_QWORD *)&v10 = v3;
  *((_QWORD *)&v10 + 1) = v4;
  *(_QWORD *)&v11 = 22LL;
  *((_QWORD *)&v11 + 1) = v2;
  v5 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v6 = v10;
  v5[1] = v11;
  *v5 = v6;
  a1[1] = v5;
  a1[2] = &off_FBBF8;
  *a1 = 0x8000000000000000LL;
  return a1;
}
