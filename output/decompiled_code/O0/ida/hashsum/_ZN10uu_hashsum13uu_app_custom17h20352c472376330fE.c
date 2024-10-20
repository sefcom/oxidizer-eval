void *__fastcall uu_hashsum::uu_app_custom(void *a1)
{
  __int64 i; // r14
  char *v2; // rbp
  char *v3; // r12
  __int64 v4; // rbp
  __int128 v6; // [rsp+10h] [rbp-1018h]
  _BYTE v7[592]; // [rsp+38h] [rbp-FF0h] BYREF
  _BYTE v8[592]; // [rsp+288h] [rbp-DA0h] BYREF
  _BYTE dest[712]; // [rsp+4D8h] [rbp-B50h] BYREF
  _BYTE src[712]; // [rsp+7A0h] [rbp-888h] BYREF
  _BYTE v11[712]; // [rsp+A68h] [rbp-5C0h] BYREF
  _BYTE v12[760]; // [rsp+D30h] [rbp-2F8h] BYREF

  uu_hashsum::uu_app_common(v12);
  uu_hashsum::uu_app_opt_bits(v11, v12);
  uu_hashsum::uu_app_b3sum_opts(src, v11);
  for ( i = 0LL; i != 60; i += 4LL )
  {
    memcpy(dest, src, sizeof(dest));
    v2 = (&off_2FC9E8)[i];
    v3 = (&off_2FC9E8)[i + 1];
    <clap_builder::builder::arg::Arg as core::default::Default>::default(v8);
    *(_QWORD *)&v8[528] = v2;
    *(_QWORD *)&v8[536] = v3;
    memcpy(v7, v8, 544LL);
    *(_OWORD *)&v7[560] = *(_OWORD *)&v8[560];
    *(_OWORD *)&v7[576] = *(_OWORD *)&v8[576];
    *(_QWORD *)&v7[544] = v2;
    *(_QWORD *)&v7[552] = v3;
    <clap_builder::builder::styled_str::StyledStr as core::convert::From<&str>>::from(
      v8,
      (&off_2FC9E8)[i + 2],
      (&off_2FC9E8)[i + 3]);
    v4 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 != 0x8000000000000000LL )
      v6 = *(_OWORD *)&v8[8];
    if ( *(_QWORD *)&v7[440] != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(v8, &v7[440]);
      if ( *(_QWORD *)&v8[8] )
      {
        if ( *(_QWORD *)&v8[16] )
          _rust_dealloc(*(_QWORD *)v8, *(_QWORD *)&v8[16], *(_QWORD *)&v8[8]);
      }
    }
    *(_QWORD *)&v7[440] = v4;
    *(_OWORD *)&v7[448] = v6;
    memcpy(v8, v7, 0x24CuLL);
    *(_WORD *)&v8[589] = *(_WORD *)&v7[589];
    v8[591] = v7[591];
    v8[588] = 2;
    clap_builder::builder::command::Command::arg_internal(dest, v8);
    memcpy(src, dest, sizeof(src));
  }
  memcpy(a1, dest, 0x2C8uLL);
  return a1;
}
