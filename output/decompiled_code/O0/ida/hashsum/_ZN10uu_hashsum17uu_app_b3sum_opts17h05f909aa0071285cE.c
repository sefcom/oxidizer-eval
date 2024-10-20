void *__fastcall uu_hashsum::uu_app_b3sum_opts(void *dest, const void *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // r14
  __int128 v6; // [rsp+0h] [rbp-7B8h]
  _BYTE src[592]; // [rsp+28h] [rbp-790h] BYREF
  _BYTE v8[592]; // [rsp+278h] [rbp-540h] BYREF
  _BYTE desta[752]; // [rsp+4C8h] [rbp-2F0h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  <clap_builder::builder::arg::Arg as core::default::Default>::default(src);
  *(_QWORD *)&src[528] = aNoNames;
  *(_QWORD *)&src[536] = 8LL;
  memcpy(v8, src, 0x220uLL);
  *(_OWORD *)&v8[560] = *(_OWORD *)&src[560];
  *(_OWORD *)&v8[576] = *(_OWORD *)&src[576];
  *(_QWORD *)&v8[544] = aNoNames;
  *(_QWORD *)&v8[552] = 8LL;
  *(_QWORD *)src = 0LL;
  *(_QWORD *)&src[8] = 1LL;
  *(_QWORD *)&src[16] = 0LL;
  alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(src, 0LL, 67LL);
  v2 = *(_QWORD *)&src[8];
  v3 = *(_QWORD *)&src[16];
  core::intrinsics::copy_nonoverlapping::precondition_check(
    &unk_6AFE2,
    *(_QWORD *)&src[8] + *(_QWORD *)&src[16],
    1LL,
    1LL,
    67LL);
  qmemcpy((void *)(v2 + v3), "Omits filenames in the output (option not present in GNU/Coreutils)", 67);
  *(_QWORD *)&src[16] += 67LL;
  v4 = *(_QWORD *)src;
  if ( *(_QWORD *)src != 0x8000000000000000LL )
    v6 = *(_OWORD *)&src[8];
  if ( *(_QWORD *)&v8[440] != 0x8000000000000000LL )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(src, &v8[440]);
    if ( *(_QWORD *)&src[8] )
    {
      if ( *(_QWORD *)&src[16] )
        _rust_dealloc(*(_QWORD *)src, *(_QWORD *)&src[16], *(_QWORD *)&src[8]);
    }
  }
  *(_QWORD *)&v8[440] = v4;
  *(_OWORD *)&v8[448] = v6;
  memcpy(src, v8, 0x24CuLL);
  *(_WORD *)&src[589] = *(_WORD *)&v8[589];
  src[591] = v8[591];
  src[588] = 2;
  clap_builder::builder::command::Command::arg_internal(desta, src);
  memcpy(dest, desta, 0x2C8uLL);
  return dest;
}
