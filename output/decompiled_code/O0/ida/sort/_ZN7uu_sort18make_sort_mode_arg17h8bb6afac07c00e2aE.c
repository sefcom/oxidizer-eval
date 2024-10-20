__int64 __fastcall uu_sort::make_sort_mode_arg(__int64 a1, const void *a2, size_t a3, int a4, __int64 a5, __int64 a6)
{
  size_t v10; // rbp
  __int64 v11; // r14
  char v12; // r15
  __int64 v13; // r12
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  char *v18; // rbx
  char *v19; // r14
  __int64 v20; // r15
  __int16 v22; // [rsp+Ch] [rbp-BECh]
  char v23; // [rsp+Eh] [rbp-BEAh]
  _OWORD src[37]; // [rsp+30h] [rbp-BC8h] BYREF
  _BYTE v25[592]; // [rsp+288h] [rbp-970h] BYREF
  _BYTE v26[588]; // [rsp+4D8h] [rbp-720h] BYREF
  char v27; // [rsp+724h] [rbp-4D4h]
  __int16 v28; // [rsp+725h] [rbp-4D3h]
  char v29; // [rsp+727h] [rbp-4D1h]
  _OWORD dest[37]; // [rsp+728h] [rbp-4D0h] BYREF
  _BYTE v31[588]; // [rsp+978h] [rbp-280h] BYREF

  <clap_builder::builder::arg::Arg as core::default::Default>::default(src);
  *(_QWORD *)&src[33] = a2;
  *((_QWORD *)&src[33] + 1) = a3;
  memcpy(dest, src, sizeof(dest));
  if ( a4 == 45 )
  {
    *(_QWORD *)&src[0] = &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_45_llvm_13186119769495240950;
    *((_QWORD *)&src[0] + 1) = 1LL;
    src[1] = 8uLL;
    core::panicking::panic_fmt(src, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_46_llvm_13186119769495240950);
  }
  LODWORD(dest[36]) = a4;
  memcpy(v25, dest, 0x220uLL);
  *(_OWORD *)&v25[560] = dest[35];
  *(_OWORD *)&v25[576] = dest[36];
  *(_QWORD *)&v25[544] = a2;
  v10 = a3;
  *(_QWORD *)&v25[552] = a3;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::string::String::push_str(src, a5, a6);
  v11 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    src[0] = *(_OWORD *)((char *)src + 8);
  if ( *(_QWORD *)&v25[440] != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v25[440]);
  *(_QWORD *)&v25[440] = v11;
  *(_OWORD *)&v25[448] = src[0];
  memcpy(v31, v25, sizeof(v31));
  v22 = *(_WORD *)&v25[589];
  v23 = v25[591];
  v12 = 2;
  v13 = 1LL;
  v14 = (char *)v10;
  do
  {
    v18 = (&off_1D30A0)[v13 - 1];
    v19 = (&off_1D30A0)[v13];
    if ( v19 != v14 || bcmp((&off_1D30A0)[v13 - 1], a2, v10) )
    {
      memcpy(v26, v31, sizeof(v26));
      v27 = v12;
      v29 = v23;
      v28 = v22;
      v20 = *(_QWORD *)&v26[120];
      if ( v18 )
      {
        if ( *(_QWORD *)&v26[120] == *(_QWORD *)&v26[104] )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v26[104]);
        v15 = *(_QWORD *)&v26[112];
        v16 = 16 * v20;
        *(_QWORD *)(*(_QWORD *)&v26[112] + v16) = v18;
        *(_QWORD *)(v15 + v16 + 8) = v19;
        v17 = v20 + 1;
      }
      else
      {
        core::slice::raw::from_raw_parts_mut::precondition_check(*(_QWORD *)&v26[112], 16LL, 8LL, *(_QWORD *)&v26[120]);
        v17 = 0LL;
      }
      *(_QWORD *)&v26[120] = v17;
      memcpy(v31, v26, sizeof(v31));
      v12 = v27;
      v22 = v28;
      v23 = v29;
    }
    v14 = (char *)v10;
    v13 += 2LL;
  }
  while ( v13 != 13 );
  memcpy((void *)a1, v31, 0x24CuLL);
  *(_BYTE *)(a1 + 588) = v12;
  *(_WORD *)(a1 + 589) = v22;
  *(_BYTE *)(a1 + 591) = v23;
  return a1;
}
