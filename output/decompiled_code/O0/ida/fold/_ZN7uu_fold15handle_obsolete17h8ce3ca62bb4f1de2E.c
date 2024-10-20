__int64 __fastcall uu_fold::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  const void *v6; // rbp
  __int64 v7; // r13
  const void *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 result; // rax
  size_t v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r12
  const void *v23; // r15
  void *v24; // r13
  __int128 v26; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+28h] [rbp-90h] BYREF
  __int64 v29; // [rsp+30h] [rbp-88h]
  void *dest; // [rsp+38h] [rbp-80h]
  _QWORD v31[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+50h] [rbp-68h]
  unsigned __int64 v33; // [rsp+60h] [rbp-58h]
  __int128 v34; // [rsp+70h] [rbp-48h] BYREF
  __int64 v35; // [rsp+80h] [rbp-38h]

  if ( a3 )
  {
    v3 = 24 * a3;
    v4 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      if ( !(v4 + a2) )
        goto LABEL_24;
      v6 = *(const void **)(a2 + v4 + 8);
      if ( !v6 )
        goto LABEL_29;
      v7 = *(_QWORD *)(a2 + v4 + 16);
      if ( v7 < 0 )
        goto LABEL_29;
      LODWORD(v28) = 0;
      v8 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v28, 4LL);
      if ( v9 <= v7 && !bcmp(v8, v6, v9) )
      {
        v10 = *(_QWORD *)(a2 + v4 + 8);
        if ( !v10 )
          goto LABEL_29;
        v11 = *(_QWORD *)(a2 + v4 + 16);
        if ( v11 < 0 )
          goto LABEL_29;
        v31[0] = *(_QWORD *)(a2 + v4 + 8);
        v31[1] = v10 + v11;
        if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v31, 1LL) )
        {
          if ( (unsigned int)core::str::validations::next_code_point(v31) )
          {
            if ( (v12 ^ 0xD800u) - 2048 >= (unsigned int)&unk_10F800 )
              core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_11_llvm_11417008648433573330, 57LL);
            if ( (unsigned int)(v12 - 48) < 0xA )
              break;
          }
        }
      }
      v4 += 24LL;
      ++v5;
      if ( v3 == v4 )
        goto LABEL_24;
    }
    alloc::slice::<impl [T]>::to_vec(&v26, a2, a3);
    v13 = v27;
    v14 = v27 - v5;
    if ( v27 <= v5 )
      alloc::vec::Vec<T,A>::remove::assert_failed(v5, v27, &off_10A168);
    if ( (((unsigned __int8)(BYTE8(v26) + v4) | (unsigned __int8)(BYTE8(v26) + v4 + 24)) & 7) != 0 )
      core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_11_llvm_17686139402540038789, 104LL);
    v15 = *(_QWORD *)(*((_QWORD *)&v26 + 1) + v4);
    v16 = *(_QWORD *)(*((_QWORD *)&v26 + 1) + v4 + 8);
    memmove((void *)(*((_QWORD *)&v26 + 1) + v4), (const void *)(*((_QWORD *)&v26 + 1) + v4 + 24), 24 * v14 - 24);
    v27 = v13 - 1;
    if ( v15 )
      _rust_dealloc(v16, v15, 1LL);
    v33 = v27;
    v32 = v26;
    v17 = *(_QWORD *)(a2 + v4 + 8);
    if ( !v17 || (v18 = *(_QWORD *)(a2 + v4 + 16), v18 < 0) )
LABEL_29:
      core::panicking::panic_nounwind(anon_a80d68ed0ca9468bdfa8ffec365be6d5_30_llvm_17686139402540038789, 162LL);
    if ( (unsigned __int64)v18 <= 1 )
    {
      if ( v18 != 1 )
LABEL_23:
        core::str::slice_error_fail(v17, v18, 1LL, v18, &off_10A180);
    }
    else if ( *(char *)(v17 + 1) <= -65 )
    {
      goto LABEL_23;
    }
    v20 = v18 - 1;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v28, v20, 0LL);
    v22 = v29;
    if ( v28 )
      alloc::raw_vec::handle_error(v29, dest);
    v23 = (const void *)(v17 + 1);
    v24 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v23, dest, 1LL, 1LL, v20);
    memcpy(v24, v23, v20);
    result = a1;
    *(_QWORD *)(a1 + 16) = v33;
    *(_OWORD *)a1 = v32;
    *(_QWORD *)(a1 + 24) = v22;
    *(_QWORD *)(a1 + 32) = v24;
    v21 = 40LL;
  }
  else
  {
LABEL_24:
    alloc::slice::<impl [T]>::to_vec(&v34, a2, a3);
    result = a1;
    *(_QWORD *)(a1 + 16) = v35;
    *(_OWORD *)a1 = v34;
    v20 = 0x8000000000000000LL;
    v21 = 24LL;
  }
  *(_QWORD *)(result + v21) = v20;
  return result;
}
