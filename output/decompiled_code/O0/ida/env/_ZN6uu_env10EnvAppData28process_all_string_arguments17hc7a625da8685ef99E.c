__int64 __fastcall uu_env::EnvAppData::process_all_string_arguments(__int64 a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  _WORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  const void *v10; // r13
  size_t v11; // rbx
  __int64 v12; // rbp
  void *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  char *v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-C0h]
  _WORD *v23; // [rsp+20h] [rbp-B8h]
  __int64 v24; // [rsp+28h] [rbp-B0h]
  __int64 v25; // [rsp+30h] [rbp-A8h]
  __int64 v26; // [rsp+38h] [rbp-A0h] BYREF
  char v27; // [rsp+40h] [rbp-98h] BYREF
  __int64 v28; // [rsp+48h] [rbp-90h] BYREF
  char v29; // [rsp+50h] [rbp-88h] BYREF
  __int64 v30; // [rsp+58h] [rbp-80h] BYREF
  char v31; // [rsp+60h] [rbp-78h] BYREF
  __int64 v32; // [rsp+68h] [rbp-70h] BYREF
  char v33; // [rsp+70h] [rbp-68h] BYREF
  __int128 v34; // [rsp+78h] [rbp-60h]
  size_t v35; // [rsp+88h] [rbp-50h]
  __int64 v36; // [rsp+90h] [rbp-48h] BYREF
  __int64 v37; // [rsp+98h] [rbp-40h]
  void *dest; // [rsp+A0h] [rbp-38h]

  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 8LL;
  v22 = 0LL;
  v3 = *(_QWORD *)(a3 + 8);
  if ( !v3 || (v3 & 7) != 0 || (v4 = a3, v5 = *(_QWORD *)(a3 + 16), v5 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v5 )
  {
LABEL_23:
    *(_QWORD *)(a1 + 16) = v22;
    *(_OWORD *)a1 = v21;
    return a1;
  }
  v7 = a2;
  v8 = 24 * v5 - 24;
  v23 = a2;
  while ( 1 )
  {
    uu_env::check_and_handle_string_args((__int64)&v26, v3, aSplitString_0, 0xEuLL, (__int64)&v21, 0LL);
    v9 = v26;
    if ( v26 )
    {
      v18 = &v27;
      goto LABEL_28;
    }
    if ( (v27 & 1) != 0 )
      goto LABEL_18;
    uu_env::check_and_handle_string_args((__int64)&v28, v3, aS_0, 2uLL, (__int64)&v21, 0LL);
    v9 = v28;
    if ( v28 )
    {
      v18 = &v29;
      goto LABEL_28;
    }
    if ( (v29 & 1) != 0 )
    {
LABEL_18:
      *((_BYTE *)v7 + 1) = 1;
      goto LABEL_19;
    }
    uu_env::check_and_handle_string_args((__int64)&v30, v3, aVs, 3uLL, (__int64)&v21, 0LL);
    v9 = v30;
    if ( v30 )
    {
      v18 = &v31;
      goto LABEL_28;
    }
    if ( (v31 & 1) != 0 )
    {
      *v7 = 257;
      goto LABEL_19;
    }
    uu_env::check_and_handle_string_args((__int64)&v32, v3, &unk_1C2EC, 4uLL, (__int64)&v21, v4);
    v9 = v32;
    if ( v32 )
      break;
    if ( (v33 & 1) != 0 )
    {
      v7 = v23;
      *v23 = 257;
      *((_BYTE *)v7 + 2) = 0;
    }
    else
    {
      v10 = *(const void **)(v3 + 8);
      v11 = *(_QWORD *)(v3 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v11);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, v11, 0LL);
      v24 = v4;
      v25 = a1;
      v12 = v37;
      if ( v36 )
        alloc::raw_vec::handle_error(v37, dest);
      v13 = dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v10, dest, 1LL, 1LL, v11);
      memcpy(v13, v10, v11);
      *(_QWORD *)&v34 = v12;
      *((_QWORD *)&v34 + 1) = v13;
      v35 = v11;
      v14 = v22;
      if ( v22 == (_QWORD)v21 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v21);
      v15 = *((_QWORD *)&v21 + 1);
      v16 = 3 * v14;
      v17 = v34;
      *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8 * v16 + 16) = v35;
      *(_OWORD *)(v15 + 8 * v16) = v17;
      v22 = v14 + 1;
      a1 = v25;
      v4 = v24;
      v7 = v23;
    }
LABEL_19:
    if ( !v8 )
      goto LABEL_23;
    v3 += 24LL;
    v8 -= 24LL;
  }
  v18 = &v33;
LABEL_28:
  v19 = *(_QWORD *)v18;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v19;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v21);
  return a1;
}
