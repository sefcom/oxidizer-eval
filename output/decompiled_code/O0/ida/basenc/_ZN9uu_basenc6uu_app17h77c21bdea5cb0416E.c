void *__fastcall uu_basenc::uu_app(void *a1)
{
  char **v1; // rbx
  char *v2; // rbp
  char *v3; // r15
  char *v4; // rsi
  char *v5; // rdx
  __int64 v6; // rbp
  char v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbp
  char *v12; // r13
  __int64 v13; // rbp
  char *v14; // r12
  __int16 v16; // [rsp+Ch] [rbp-F2Ch]
  char v17; // [rsp+Eh] [rbp-F2Ah]
  __int64 i; // [rsp+10h] [rbp-F28h]
  _OWORD src[37]; // [rsp+20h] [rbp-F18h] BYREF
  char **v20; // [rsp+270h] [rbp-CC8h]
  _BYTE dest[592]; // [rsp+280h] [rbp-CB8h] BYREF
  _OWORD v22[37]; // [rsp+4D0h] [rbp-A68h] BYREF
  _BYTE v23[712]; // [rsp+728h] [rbp-810h] BYREF
  _BYTE v24[712]; // [rsp+9F0h] [rbp-548h] BYREF
  _BYTE v25[640]; // [rsp+CB8h] [rbp-280h] BYREF

  uu_base32::base_common::base_app(v23, aEncodeDecodeDa, 297LL, aOptionFile, 21LL);
  v1 = &off_12FCF8;
  for ( i = 0LL; i != 40; v1 = &(&off_12FCF8)[i] )
  {
    v2 = *v1;
    v3 = v1[1];
    <clap_builder::builder::arg::Arg as core::default::Default>::default(src);
    *(_QWORD *)&src[33] = v2;
    *((_QWORD *)&src[33] + 1) = v3;
    memcpy(dest, src, 0x220uLL);
    *(_OWORD *)&dest[560] = src[35];
    *(_OWORD *)&dest[576] = src[36];
    *(_QWORD *)&dest[544] = v2;
    *(_QWORD *)&dest[552] = v3;
    v4 = v1[3];
    v5 = v1[4];
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = 1LL;
    *(_QWORD *)&src[1] = 0LL;
    alloc::string::String::push_str(src, v4, v5);
    v6 = *(_QWORD *)&src[0];
    v22[0] = *(_OWORD *)((char *)src + 8);
    if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
      src[0] = v22[0];
    if ( *(_QWORD *)&dest[440] != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&dest[440]);
    i += 5LL;
    *(_QWORD *)&dest[440] = v6;
    *(_OWORD *)&dest[448] = src[0];
    memcpy(v25, dest, 0x24CuLL);
    v17 = dest[591];
    v16 = *(_WORD *)&dest[589];
    v7 = 2;
    v8 = 0LL;
    memcpy(src, v25, 588LL);
    while ( 1 )
    {
      BYTE12(src[36]) = v7;
      *(_WORD *)((char *)&src[36] + 13) = v16;
      HIBYTE(src[36]) = v17;
      v20 = &(&off_12FCF8)[v8];
      v12 = (&off_12FCF8)[v8];
      v13 = *(_QWORD *)&src[9];
      if ( v12 )
      {
        v14 = (&off_12FCF8)[v8 + 1];
        if ( *(_QWORD *)&src[9] == *(_QWORD *)&src[8] )
          alloc::raw_vec::RawVec<T,A>::grow_one(&src[8]);
        v9 = *((_QWORD *)&src[8] + 1);
        v10 = 16 * v13;
        *(_QWORD *)(*((_QWORD *)&src[8] + 1) + v10) = v12;
        *(_QWORD *)(v9 + v10 + 8) = v14;
        v11 = v13 + 1;
      }
      else
      {
        core::slice::raw::from_raw_parts_mut::precondition_check(
          *((_QWORD *)&src[8] + 1),
          16LL,
          8LL,
          *(_QWORD *)&src[9]);
        v11 = 0LL;
      }
      *(_QWORD *)&src[9] = v11;
      memcpy(v25, src, 0x24CuLL);
      v7 = BYTE12(src[36]);
      v16 = *(_WORD *)((char *)&src[36] + 13);
      v17 = HIBYTE(src[36]);
      v8 += 5LL;
      if ( v8 == 40 )
        break;
      memcpy(src, v25, 588LL);
    }
    memcpy(v22, src, sizeof(v22));
    memcpy(v24, v23, sizeof(v24));
    clap_builder::builder::command::Command::arg_internal(v24, v22);
    memcpy(v23, v24, sizeof(v23));
  }
  memcpy(a1, v24, 0x2C8uLL);
  return a1;
}
