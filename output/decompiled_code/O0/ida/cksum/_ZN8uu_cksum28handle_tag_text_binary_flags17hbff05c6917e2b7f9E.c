__int64 __fastcall uu_cksum::handle_tag_text_binary_flags(__int64 a1, __int64 a2)
{
  char flag; // r14
  char v3; // bp
  char v4; // r15
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r11
  unsigned __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // r13
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r15
  unsigned __int64 v18; // r11
  __int64 v19; // r13
  __int64 v20; // r15
  char v21; // bp
  __int64 v22; // rcx
  __int64 v23; // r9
  char v25; // [rsp+7h] [rbp-91h]
  _BYTE v26[8]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v27; // [rsp+10h] [rbp-88h]
  unsigned __int64 v28; // [rsp+18h] [rbp-80h]
  _OWORD v29[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v30[5]; // [rsp+48h] [rbp-50h] BYREF

  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aUntagged, 8LL, &off_3106A8);
  v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aTag, 3LL, &off_3106C0);
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aBinary_0, 6LL, &off_3106D8);
  std::env::args_os(v30);
  v29[1] = v30[1];
  v29[0] = v30[0];
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v26, v29);
  v6 = v27;
  if ( !v27 || (v27 & 7) != 0 || (v7 = v28, v28 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_5881361bc50ddb8569a319ef7cd28565_32_llvm_17519153253422479168, 162LL);
  if ( !v28 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v10 = 0LL;
    v8 = 0LL;
    v18 = 0LL;
    v6 = 0LL;
    goto LABEL_37;
  }
  v25 = v4;
  v5 = v27 + 24 * v28;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(_QWORD **)(v27 + v9 + 8);
    if ( !v11 || (v12 = *(_QWORD *)(v27 + v9 + 16), v12 < 0) )
LABEL_38:
      core::panicking::panic_nounwind(aUnsafePrecondi_13, 162LL);
    if ( v12 != 8 )
      break;
    if ( *v11 == 0x7972616E69622D2DLL )
      goto LABEL_13;
LABEL_7:
    ++v10;
    v9 += 24LL;
    if ( 24 * v28 == v9 )
      goto LABEL_14;
  }
  if ( v12 != 2 || *(_WORD *)v11 != 25133 )
    goto LABEL_7;
LABEL_13:
  v8 = 1LL;
  if ( v10 >= v28 )
    goto LABEL_33;
LABEL_14:
  v13 = 0LL;
  v14 = 0LL;
  v15 = v27;
  while ( 1 )
  {
    if ( !v15 )
    {
      v14 = (0xF555555555555555LL * v27) >> 3;
      goto LABEL_25;
    }
    v16 = *(_QWORD *)(v15 + 8);
    if ( !v16 )
      goto LABEL_38;
    v17 = *(_QWORD *)(v15 + 16);
    if ( v17 < 0 )
      goto LABEL_38;
    if ( v17 == 5 && !(*(_DWORD *)v16 ^ 0x61742D2D | *(unsigned __int8 *)(v16 + 4) ^ 0x67) )
      break;
    ++v14;
    v15 += 24LL;
    if ( v15 == v5 )
      goto LABEL_25;
  }
  v13 = 1LL;
  if ( v14 >= v28 )
LABEL_33:
    core::panicking::panic_nounwind(aUnsafePrecondi_12, 104LL);
LABEL_25:
  v18 = 0LL;
  while ( 2 )
  {
    if ( !v6 )
    {
      v6 = 0LL;
      v18 = (0xF555555555555555LL * v27) >> 3;
      goto LABEL_36;
    }
    v19 = *(_QWORD *)(v6 + 8);
    if ( !v19 )
      goto LABEL_38;
    v20 = *(_QWORD *)(v6 + 16);
    if ( v20 < 0 )
      goto LABEL_38;
    if ( v20 != 10 || *(_QWORD *)v19 ^ 0x676761746E752D2DLL | *(unsigned __int16 *)(v19 + 8) ^ 0x6465LL )
    {
      ++v18;
      v6 += 24LL;
      if ( v6 != v5 )
        continue;
      v6 = 0LL;
LABEL_36:
      v4 = v25;
      goto LABEL_37;
    }
    break;
  }
  LOBYTE(v6) = 1;
  v4 = v25;
  if ( v18 >= v28 )
    goto LABEL_33;
LABEL_37:
  v21 = flag ^ 1 | v3;
  v22 = v8 ^ 1;
  v23 = v22 | v13 ^ 1;
  LOBYTE(v22) = v4 & ~(v21 | (v23 == 0) & v6 & (v10 < v14) & (v14 < v18));
  *(_BYTE *)(a1 + 8) = v21;
  *(_BYTE *)(a1 + 9) = v22;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v26, v7, v6, v22, v5, v23);
  return a1;
}
