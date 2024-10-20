void *__fastcall uu_hashsum::uu_app_opt_bits(void *dest, const void *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r14
  __int128 v6; // [rsp+10h] [rbp-9F8h]
  _OWORD src[37]; // [rsp+28h] [rbp-9E0h] BYREF
  _QWORD v8[74]; // [rsp+278h] [rbp-790h] BYREF
  _OWORD v9[37]; // [rsp+4C8h] [rbp-540h] BYREF
  _BYTE desta[752]; // [rsp+718h] [rbp-2F0h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(src);
  *(_QWORD *)&src[33] = aBits;
  *((_QWORD *)&src[33] + 1) = 4LL;
  memcpy(v9, src, 0x220uLL);
  v9[35] = src[35];
  v9[36] = src[36];
  *(_QWORD *)&v9[34] = aBits;
  *((_QWORD *)&v9[34] + 1) = 4LL;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 1LL;
  *(_QWORD *)&src[1] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 43LL);
  v2 = *((_QWORD *)&src[0] + 1);
  v3 = *(_QWORD *)&src[1];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6B025,
    *((_QWORD *)&src[0] + 1) + *(_QWORD *)&src[1],
    1LL,
    1LL,
    43LL);
  qmemcpy((void *)(v2 + v3), "set the size of the output (only for SHAKE)", 43);
  *(_QWORD *)&src[1] += 43LL;
  v4 = *(_QWORD *)&src[0];
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    v6 = *(_OWORD *)((char *)src + 8);
  if ( *((_QWORD *)&v9[27] + 1) != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(src, (char *)&v9[27] + 8);
    if ( *((_QWORD *)&src[0] + 1) )
    {
      if ( *(_QWORD *)&src[1] )
        _rust_dealloc(*(_QWORD *)&src[0], *(_QWORD *)&src[1], *((_QWORD *)&src[0] + 1));
    }
  }
  *((_QWORD *)&v9[27] + 1) = v4;
  v9[28] = v6;
  memcpy(src, v9, sizeof(src));
  clap_builder::builder::arg::Arg::value_names(v8, src);
  if ( v8[10] >= 4uLL && v8[10] != 5LL )
  {
    if ( *(_QWORD *)v8[12] )
      (*(void (__fastcall **)(_QWORD))v8[12])(v8[11]);
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v8[11]);
  }
  v8[10] = 4LL;
  v8[11] = 1LL;
  v8[12] = &unk_2FC4D0;
  memcpy(src, v8, sizeof(src));
  clap_builder::builder::command::Command::arg_internal(desta, src);
  memcpy(dest, desta, 0x2C8uLL);
  return dest;
}
