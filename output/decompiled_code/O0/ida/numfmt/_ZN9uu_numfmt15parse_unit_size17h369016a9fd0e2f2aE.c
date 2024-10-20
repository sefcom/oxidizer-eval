_QWORD *__fastcall uu_numfmt::parse_unit_size(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  void *v7; // rbp
  size_t v8; // r14
  const void *v9; // rbx
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // r13
  int v13; // edx
  __int64 v14; // rbx
  const void *v15; // rax
  size_t v16; // rdx
  double *v17; // rax
  double v18; // xmm0_8
  unsigned __int64 v19; // rax
  void *v20; // rsi
  __int128 v22; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-128h]
  __int64 v24; // [rsp+18h] [rbp-120h]
  __int64 v25; // [rsp+20h] [rbp-118h]
  void *s2[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v27; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v28; // [rsp+48h] [rbp-F0h]
  __int64 v29; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v30; // [rsp+58h] [rbp-E0h]
  __int128 v31; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-C8h]
  char v33[8]; // [rsp+78h] [rbp-C0h] BYREF
  void *s1; // [rsp+80h] [rbp-B8h]
  size_t n; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+A0h] [rbp-98h]
  __int64 v38; // [rsp+A8h] [rbp-90h]
  char v39[8]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+B8h] [rbp-80h]
  _QWORD v41[2]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v42[3]; // [rsp+D0h] [rbp-68h] BYREF
  char v43; // [rsp+E8h] [rbp-50h]
  __int128 v44; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+100h] [rbp-38h]

  v3 = a3;
  v4 = a1;
  *(_QWORD *)&v36 = 0LL;
  *((_QWORD *)&v36 + 1) = 1LL;
  v37 = 0LL;
  *(_QWORD *)&v31 = a2;
  v38 = a2 + a3;
  *((_QWORD *)&v31 + 1) = a2 + a3;
  LOBYTE(v32) = 0;
  <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::size_hint(&v22, &v31);
  v22 = v31;
  v23 = v32;
  <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v22, &v36);
  *(_OWORD *)s2 = v36;
  v5 = v37;
  v27 = v37;
  if ( v37 )
  {
    if ( v3 <= v37 )
    {
      if ( v3 != v37 )
        goto LABEL_51;
    }
    else if ( *(char *)(a2 + v37) < -64 )
    {
      goto LABEL_51;
    }
  }
  v6 = v3 - v37;
  if ( v3 < v37 )
    core::panicking::panic_nounwind(anon_3b19d6da1157f8a5be874edba1fa8efa_12_llvm_3026733004089231496, 102LL);
  if ( !a2 )
LABEL_51:
    core::str::slice_error_fail(a2, v3, v37, v3, &off_11EF08);
  v29 = a2;
  v30 = v3;
  if ( v37 )
  {
    alloc::str::<impl str>::repeat(v33, a0_2, 1LL, v37);
    v28 = a1;
    v7 = s1;
    v8 = n;
    core::slice::raw::from_raw_parts::precondition_check(s1, 1LL, 1LL, n);
    v9 = s2[1];
    v10 = v27;
    core::slice::raw::from_raw_parts::precondition_check(s2[1], 1LL, 1LL, v27);
    if ( v8 == v10 && !bcmp(v7, v9, v8) )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v22, v33);
      v4 = v28;
      if ( *((_QWORD *)&v22 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v22, *((_QWORD *)&v22 + 1), v23);
      goto LABEL_47;
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v22, v33);
    v4 = v28;
    if ( *((_QWORD *)&v22 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v22, *((_QWORD *)&v22 + 1), v23);
    v3 = v30;
  }
  v11 = 1LL;
  if ( v3 != v5 )
  {
    v12 = v29 + v5;
    *(_QWORD *)&v22 = v12;
    *((_QWORD *)&v22 + 1) = v38;
    if ( !(unsigned int)core::str::validations::next_code_point(&v22) )
LABEL_53:
      core::option::unwrap_failed(&off_11EF48);
    if ( (v13 ^ 0xD800u) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(anon_b059a92c305f842a453962f602edcc08_8_llvm_14020448505035660279, 57LL);
    switch ( v13 )
    {
      case 'E':
        v14 = 6LL;
        if ( v6 == 1 )
          goto LABEL_34;
        goto LABEL_29;
      case 'F':
      case 'H':
      case 'I':
      case 'J':
      case 'L':
      case 'N':
      case 'O':
      case 'Q':
      case 'R':
      case 'S':
        goto LABEL_47;
      case 'G':
        v14 = 3LL;
        if ( v6 == 1 )
          goto LABEL_34;
        goto LABEL_29;
      case 'K':
        v14 = 1LL;
        if ( v6 == 1 )
          goto LABEL_34;
        goto LABEL_29;
      case 'M':
        v14 = 2LL;
        if ( v6 == 1 )
          goto LABEL_34;
        goto LABEL_29;
      case 'P':
        v14 = 5LL;
        if ( v6 != 1 )
          goto LABEL_29;
        goto LABEL_34;
      case 'T':
        v14 = 4LL;
        if ( v6 == 1 )
        {
LABEL_34:
          v17 = (double *)&unk_23C28;
        }
        else
        {
LABEL_29:
          if ( v6 != 2 )
            goto LABEL_47;
          LODWORD(v31) = 0;
          v15 = (const void *)core::char::methods::encode_utf8_raw(105LL, &v31, 4LL);
          if ( v16 >= 3 || bcmp(v15, (const void *)(v12 - v16 + 2), v16) )
            goto LABEL_47;
          v17 = (double *)&unk_23C78;
        }
        v18 = v17[v14];
        v19 = 0LL;
        if ( v18 >= 0.0 )
          v19 = (unsigned int)(int)v18;
        v11 = -1LL;
        if ( v18 <= 1.844674407370955e19 )
          v11 = v19;
        break;
      default:
        if ( v13 != (_DWORD)&loc_110000 )
          goto LABEL_47;
        goto LABEL_53;
    }
  }
  if ( !v27 )
    goto LABEL_45;
  if ( v27 < 0 || (v20 = s2[1]) == 0LL )
    core::panicking::panic_nounwind(anon_b059a92c305f842a453962f602edcc08_22_llvm_14020448505035660279, 162LL);
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v39);
  if ( (v39[0] & 1) == 0 )
  {
    if ( !is_mul_ok(v40, v11) )
      core::panicking::panic_const::panic_const_mul_overflow(&off_11EF20, v20, (v40 * (unsigned __int128)v11) >> 64);
    v11 *= v40;
LABEL_45:
    v4[1] = v11;
    *v4 = 0x8000000000000000LL;
    goto LABEL_48;
  }
LABEL_47:
  v42[0] = 0LL;
  v42[1] = v29;
  v42[2] = v30;
  v43 = 1;
  v41[0] = v42;
  v41[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v22 = &off_11EF38;
  *((_QWORD *)&v22 + 1) = 1LL;
  v23 = v41;
  v24 = 1LL;
  v25 = 0LL;
  alloc::fmt::format::format_inner(&v44, &v22);
  v4[2] = v45;
  *(_OWORD *)v4 = v44;
LABEL_48:
  alloc::raw_vec::RawVec<T,A>::current_memory(&v22, s2);
  if ( *((_QWORD *)&v22 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v27, v22, *((_QWORD *)&v22 + 1), v23);
  return v4;
}
