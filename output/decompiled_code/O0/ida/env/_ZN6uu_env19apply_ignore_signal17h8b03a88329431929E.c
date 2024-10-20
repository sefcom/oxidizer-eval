_OWORD *__fastcall uu_env::apply_ignore_signal(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  _OWORD *result; // rax
  __int128 v9; // xmm0
  int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // xmm0
  unsigned int v17; // [rsp+Ch] [rbp-ACh] BYREF
  __int128 v18; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+20h] [rbp-98h]
  __int64 v20; // [rsp+30h] [rbp-88h]
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v23; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+80h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 104);
  if ( !v1 || (v1 & 7) != 0 || (v2 = *(_QWORD *)(a1 + 112), v2 >> 60) )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  if ( !v2 )
    return 0LL;
  v3 = 8 * v2;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*(unsigned int *)(v1 + v4));
    v7 = v6;
    if ( v5 )
      break;
    if ( signal(v6, (__sighandler_t)((char *)&dword_0 + 1)) == (__sighandler_t)-1LL )
    {
      v10 = _errno_location();
      if ( ((unsigned __int8)v10 & 3) != 0 )
        core::panicking::panic_misaligned_pointer_dereference(
          4LL,
          v10,
          &anon_77e16c7defca1adeda749c3345405d55_238_llvm_10211869485132708612);
      v11 = nix::errno::consts::from_i32((unsigned int)*v10);
      v17 = v7;
      v21[0] = nix::errno::desc(v11);
      v21[1] = v12;
      v22[0] = &v17;
      v22[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v22[2] = v21;
      v22[3] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &off_139140;
      *((_QWORD *)&v18 + 1) = 2LL;
      *(_QWORD *)&v19 = v22;
      *((_QWORD *)&v19 + 1) = 2LL;
      v20 = 0LL;
      alloc::fmt::format::format_inner(&v23, &v18, v12, v13, v14, v15);
      *(_QWORD *)&v19 = v24;
      v18 = v23;
      DWORD2(v19) = 125;
      result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v16 = v18;
      result[1] = v19;
      *result = v16;
      return result;
    }
    v4 += 8LL;
    if ( v3 == v4 )
      return 0LL;
  }
  *(_QWORD *)&v18 = 0x8000000000000000LL;
  *((_QWORD *)&v19 + 1) = ((unsigned __int64)v6 << 32) | 2;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v9 = v18;
  result[1] = v19;
  *result = v9;
  return result;
}
