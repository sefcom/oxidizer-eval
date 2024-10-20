void *__fastcall uu_hashsum::uu_app_length(void *dest)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r14
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+0h] [rbp-C58h]
  _BYTE src[592]; // [rsp+20h] [rbp-C38h] BYREF
  _OWORD desta[36]; // [rsp+270h] [rbp-9E8h] BYREF
  __int128 v13; // [rsp+4B0h] [rbp-7A8h]
  _OWORD v14[37]; // [rsp+4C0h] [rbp-798h] BYREF
  _QWORD v15[74]; // [rsp+710h] [rbp-548h] BYREF
  _BYTE v16[760]; // [rsp+960h] [rbp-2F8h] BYREF

  uu_hashsum::uu_app_common(v16);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(src);
  *(_QWORD *)&src[528] = aLength_0;
  *(_QWORD *)&src[536] = 6LL;
  memcpy(desta, src, 0x220uLL);
  desta[35] = *(_OWORD *)&src[560];
  v13 = *(_OWORD *)&src[576];
  *(_QWORD *)&desta[34] = aLength_0;
  *((_QWORD *)&desta[34] + 1) = 6LL;
  v1 = (_QWORD *)_rust_alloc(8LL, 8LL);
  if ( !v1 )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  v2 = v1;
  *v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str;
  if ( *(_QWORD *)&desta[5] >= 4uLL && *(_QWORD *)&desta[5] != 5LL )
  {
    if ( **(_QWORD **)&desta[6] )
      (**(void (__fastcall ***)(_QWORD))&desta[6])(*((_QWORD *)&desta[5] + 1));
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop((char *)&desta[5] + 8);
  }
  *(_QWORD *)&desta[5] = 4LL;
  *((_QWORD *)&desta[5] + 1) = v2;
  *(_QWORD *)&desta[6] = &unk_2FC480;
  memcpy(v14, desta, 0x240uLL);
  *(_QWORD *)((char *)&v14[36] + 4) = *(_QWORD *)((char *)&v13 + 4);
  HIDWORD(v14[36]) = HIDWORD(v13);
  LODWORD(v14[36]) = 108;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 99LL);
  v3 = *(_QWORD *)&src[8];
  v4 = *(_QWORD *)&src[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AF7F,
    *(_QWORD *)&src[8] + *(_QWORD *)&src[16],
    1LL,
    1LL,
    99LL);
  qmemcpy(
    (void *)(v3 + v4),
    "digest length in bits; must not exceed the max for the blake2 algorithm and must be a multiple of 8",
    99);
  *(_QWORD *)&src[16] += 99LL;
  v5 = *(_QWORD *)src;
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    v10 = *(_OWORD *)&src[8];
  if ( *((_QWORD *)&v14[27] + 1) != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(src, (char *)&v14[27] + 8);
    if ( *(_QWORD *)&src[8] )
    {
      if ( *(_QWORD *)&src[16] )
        _rust_dealloc(*(_QWORD *)src, *(_QWORD *)&src[16], *(_QWORD *)&src[8]);
    }
  }
  *((_QWORD *)&v14[27] + 1) = v5;
  v14[28] = v10;
  memcpy(v15, v14, sizeof(v15));
  v6 = v15[18];
  if ( v15[18] == v15[16] )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v15[16]);
  v7 = v15[17];
  v8 = 16 * v6;
  *(_QWORD *)(v15[17] + v8) = aLength_0;
  *(_QWORD *)(v7 + v8 + 8) = 6LL;
  v15[18] = v6 + 1;
  memcpy(src, v15, 0x24CuLL);
  *(_WORD *)&src[589] = *(_WORD *)((char *)&v15[73] + 5);
  src[591] = HIBYTE(v15[73]);
  src[588] = 0;
  clap_builder::builder::command::Command::arg_internal(v16, src);
  memcpy(dest, v16, 0x2C8uLL);
  return dest;
}
