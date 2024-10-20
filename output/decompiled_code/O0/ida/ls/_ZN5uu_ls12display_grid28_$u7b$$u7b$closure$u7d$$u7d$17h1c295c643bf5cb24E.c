__int64 __fastcall uu_ls::display_grid::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // r15
  __int64 v5; // r12
  const void *v6; // rax
  size_t v7; // rdx
  const void *v8; // r15
  __int64 v9; // r12
  const void *v10; // rax
  size_t v11; // rdx
  void *v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h]
  _QWORD *v15; // [rsp+10h] [rbp-68h]
  __int64 v16; // [rsp+18h] [rbp-60h]
  __int64 v17; // [rsp+20h] [rbp-58h]
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v3 = *(const void **)(a3 + 8);
  if ( !v3 )
    goto LABEL_13;
  v5 = *(_QWORD *)(a3 + 16);
  if ( v5 < 0 )
    goto LABEL_13;
  LODWORD(v13) = 0;
  v6 = (const void *)core::char::methods::encode_utf8_raw(39LL, &v13, 4LL);
  if ( v7 <= v5 && !bcmp(v6, v3, v7) )
    goto LABEL_11;
  v8 = *(const void **)(a3 + 8);
  if ( !v8 || (v9 = *(_QWORD *)(a3 + 16), v9 < 0) )
LABEL_13:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  LODWORD(v13) = 0;
  v10 = (const void *)core::char::methods::encode_utf8_raw(34LL, &v13, 4LL);
  if ( v11 <= v9 && !bcmp(v10, v8, v11) )
  {
LABEL_11:
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a3;
    return a1;
  }
  v18[0] = a3;
  v18[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v13 = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_372_llvm_2775220154043362954;
  v14 = 1LL;
  v15 = v18;
  v16 = 1LL;
  v17 = 0LL;
  alloc::fmt::format::format_inner(&v19, &v13);
  *(_QWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v19;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v13, a3);
  if ( v14 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a3 + 16, v13, v14, v15);
  return a1;
}
