_OWORD *__fastcall uu_env::apply_unset_env_vars(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int8 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbx
  _OWORD *result; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  _OWORD *v22; // rbx
  unsigned __int64 v23; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-C8h]
  __int64 v25; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+40h] [rbp-98h]
  char **v29; // [rsp+58h] [rbp-80h]
  _QWORD v30[2]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v31; // [rsp+70h] [rbp-68h] BYREF
  __int64 v32; // [rsp+80h] [rbp-58h]
  __int64 v33; // [rsp+88h] [rbp-50h] BYREF
  __int128 v34; // [rsp+90h] [rbp-48h]
  char v35; // [rsp+A0h] [rbp-38h]

  v6 = *(__int64 **)(a1 + 32);
  if ( !v6 || ((unsigned __int8)v6 & 7) != 0 || (v7 = *(_QWORD *)(a1 + 40), v7 >> 59) )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  if ( !v7 )
    return 0LL;
  v8 = 16 * v7;
  v29 = &off_139090;
  while ( 1 )
  {
    v9 = *v6;
    v10 = v6[1];
    v23 = 0x8000000000000000LL;
    v24 = v9;
    v25 = v10;
    if ( !v10 )
      break;
    LODWORD(v26) = 0;
    core::char::methods::encode_utf8_raw(0LL, &v26, 4LL);
    if ( v11 != 1 )
      goto LABEL_27;
    v12 = v26;
    v13 = v24;
    v14 = v25;
    if ( v23 != 0x8000000000000000LL )
      core::slice::raw::from_raw_parts::precondition_check(v24, 1LL, 1LL, v25);
    if ( core::slice::memchr::memchr(v12, v13, v14) == 1 )
      break;
    LODWORD(v26) = 0;
    core::char::methods::encode_utf8_raw(61LL, &v26, 4LL);
    if ( v15 != 1 )
    {
      v29 = &off_1390A8;
LABEL_27:
      core::option::unwrap_failed(v29);
    }
    v16 = v26;
    v17 = v24;
    v18 = v25;
    if ( v23 != 0x8000000000000000LL )
      core::slice::raw::from_raw_parts::precondition_check(v24, 1LL, 1LL, v25);
    if ( core::slice::memchr::memchr(v16, v17, v18) == 1 )
      break;
    std::env::remove_var(v6);
    if ( v23 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v26, &v23);
      a3 = *((_QWORD *)&v26 + 1);
      if ( *((_QWORD *)&v26 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v25, v26, *((_QWORD *)&v26 + 1), v27);
    }
    v6 += 2;
    v8 -= 16LL;
    if ( !v8 )
      return 0LL;
  }
  v20 = *(_OWORD *)v6;
  v33 = 1LL;
  v34 = v20;
  v35 = 1;
  v30[0] = &v33;
  v30[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v26 = &off_1390C0;
  *((_QWORD *)&v26 + 1) = 2LL;
  *(_QWORD *)&v27 = v30;
  *((_QWORD *)&v27 + 1) = 1LL;
  v28 = 0LL;
  alloc::fmt::format::format_inner(&v31, &v26, a3, v10, a5, a6);
  *(_QWORD *)&v27 = v32;
  v26 = v31;
  DWORD2(v27) = 125;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v21 = v26;
  result[1] = v27;
  *result = v21;
  if ( v23 != 0x8000000000000000LL )
  {
    v22 = result;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v26, &v23);
    if ( *((_QWORD *)&v26 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v25, v26, *((_QWORD *)&v26 + 1), v27);
    return v22;
  }
  return result;
}
