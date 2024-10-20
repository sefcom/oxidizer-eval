void *__fastcall uu_tail::args::parse_num(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  signed __int64 v4; // rdx
  _BYTE *v5; // r15
  signed __int64 v6; // r14
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  void *v17; // r13
  bool v18; // sf
  char *v19; // rbp
  __int64 v20; // rax
  void *result; // rax
  __int64 v22; // [rsp+8h] [rbp-100h]
  int v23; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-F0h]
  void *v25; // [rsp+20h] [rbp-E8h]
  __int64 v26; // [rsp+28h] [rbp-E0h]
  _QWORD v27[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v28[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v29; // [rsp+58h] [rbp-B0h]
  _QWORD v30[4]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v31; // [rsp+80h] [rbp-88h]
  char v32; // [rsp+82h] [rbp-86h]
  _QWORD v33[7]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v34[9]; // [rsp+C0h] [rbp-48h] BYREF

  v3 = (unsigned __int8 *)core::str::<impl str>::trim_matches(a2, a3);
  v5 = v3;
  if ( !v4 )
  {
    v11 = 0;
    v6 = 0LL;
    goto LABEL_19;
  }
  v6 = v4;
  v7 = *v3;
  if ( (v7 & 0x80u) == 0 )
  {
LABEL_9:
    if ( v7 != 43 )
      goto LABEL_10;
    goto LABEL_16;
  }
  v8 = v7 & 0x1F;
  v9 = v5[1] & 0x3F;
  if ( (unsigned __int8)v7 <= 0xDFu )
  {
    v7 = v9 | (v8 << 6);
    goto LABEL_9;
  }
  v10 = (v9 << 6) | v5[2] & 0x3F;
  if ( (unsigned __int8)v7 >= 0xF0u )
  {
    v7 = ((v7 & 7) << 18) | (v10 << 6) | v5[3] & 0x3F;
    if ( v7 == 43 )
      goto LABEL_16;
LABEL_10:
    if ( v7 == 45 )
    {
      if ( v6 != 1 && (char)v5[1] < -64 )
LABEL_41:
        core::str::slice_error_fail(v5, v6, 1LL, v6, &off_15BB30);
      ++v5;
      --v6;
    }
    v11 = 0;
    goto LABEL_19;
  }
  v7 = (v8 << 12) | v10;
  if ( v7 != 43 )
    goto LABEL_10;
LABEL_16:
  if ( v6 != 1 && (char)v5[1] <= -65 )
    goto LABEL_41;
  ++v5;
  --v6;
  v11 = 1;
LABEL_19:
  v31 = 0;
  v32 = 0;
  v30[0] = 0LL;
  v30[2] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v23, v30, v5, v6);
  if ( v23 != 3 )
  {
    v16 = v24;
    v17 = v25;
    v18 = v6 < 0;
    if ( !v6 )
      goto LABEL_22;
    goto LABEL_24;
  }
  if ( v26 )
  {
    v28[0] = 0LL;
    v28[1] = v5;
    v28[2] = v6;
    v29 = 1;
    v27[0] = v28;
    v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v33[0] = &anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    v33[1] = 2LL;
    v33[4] = 0LL;
    v33[2] = v27;
    v33[3] = 1LL;
    alloc::fmt::format::format_inner(v34, v33, v12, v13, v14, v15);
    v16 = v34[0];
    v17 = (void *)v34[1];
    v18 = v6 < 0;
    if ( !v6 )
    {
LABEL_22:
      v19 = (char *)&dword_0 + 1;
      goto LABEL_27;
    }
LABEL_24:
    if ( v18 )
    {
      v22 = 0LL;
    }
    else
    {
      v22 = 1LL;
      v20 = _rust_alloc(v6, 1LL);
      if ( v20 )
      {
        v19 = (char *)v20;
LABEL_27:
        result = memcpy(v19, v5, v6);
        *a1 = 1LL;
        a1[1] = v6;
        a1[2] = v19;
        a1[3] = v6;
        if ( v16 )
          return (void *)_rust_dealloc(v17, v16, 1LL);
        return result;
      }
    }
    alloc::raw_vec::handle_error(v22, v6);
  }
  result = v25;
  if ( v25 )
  {
    if ( v11 )
      a1[1] = 1LL;
    else
      a1[1] = 0LL;
    a1[2] = result;
  }
  else if ( v11 )
  {
    a1[1] = 2LL;
  }
  else
  {
    a1[1] = 3LL;
  }
  *a1 = 3LL;
  return result;
}
