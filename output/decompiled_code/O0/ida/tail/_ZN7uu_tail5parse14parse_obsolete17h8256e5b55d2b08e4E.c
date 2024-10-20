_BYTE *__fastcall uu_tail::parse::parse_obsolete(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r13
  unsigned __int8 v7; // al
  char v8; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r13
  bool v22; // cf
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r13
  __int64 v30; // rax
  int v31; // edx
  unsigned __int8 v32; // [rsp+Ah] [rbp-9Eh]
  char v33; // [rsp+Bh] [rbp-9Dh]
  char v34; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v35; // [rsp+10h] [rbp-98h]
  unsigned __int64 v36; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-88h]
  unsigned __int64 v38; // [rsp+28h] [rbp-80h]
  unsigned __int64 v39; // [rsp+30h] [rbp-78h]
  __int64 v40; // [rsp+38h] [rbp-70h]
  char v41[8]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-60h]
  _QWORD v43[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v44; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  if ( !*(_QWORD *)(a2 + 8) || *(__int64 *)(a2 + 16) < 0 )
    core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
  std::sys::os_str::bytes::Slice::to_str(&v36);
  if ( v36 || (v2 = v37) == 0 )
  {
    *a1 = 3;
    goto LABEL_9;
  }
  v3 = v38;
  LODWORD(v36) = 0;
  v4 = core::char::methods::encode_utf8_raw(45LL, &v36, 4LL);
  v6 = v5;
  v7 = core::slice::<impl [T]>::starts_with(v2, v3, v4, v5);
  if ( v7 )
  {
    if ( v6 > v3 )
LABEL_59:
      core::panicking::panic_nounwind(anon_e1ed2e6cfa6ed8bcbbef24801fa18de4_39_llvm_17209501424320820274, 102LL);
  }
  else
  {
    LODWORD(v36) = 0;
    v10 = core::char::methods::encode_utf8_raw(43LL, &v36, 4LL);
    v6 = v11;
    if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v2, v3, v10, v11) )
    {
      v8 = 3;
      goto LABEL_10;
    }
    if ( v6 > v3 )
      goto LABEL_59;
    v7 = 0;
  }
  v32 = v7;
  v33 = v7 ^ 1;
  v12 = v2 + v6;
  v13 = v3 + v2;
  v14 = v3 - v6;
  v36 = v12;
  v37 = v14;
  v38 = v12;
  v39 = v13;
  v40 = 0LL;
  do
    <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(&v44, &v36);
  while ( v44 == 1 );
  if ( v44 )
  {
    v15 = v14;
    if ( !v14 )
      goto LABEL_18;
  }
  else
  {
    v15 = v45;
    if ( !v45 )
    {
LABEL_18:
      v16 = 10LL;
      goto LABEL_28;
    }
  }
  if ( v14 > v15 )
  {
    if ( *(char *)(v12 + v15) > -65 )
      goto LABEL_25;
LABEL_60:
    core::str::slice_error_fail(v12, v14, 0LL, v15, &off_18A100);
  }
  if ( v14 != v15 )
    goto LABEL_60;
LABEL_25:
  core::num::<impl core::str::traits::FromStr for u64>::from_str(v41, v12, v15);
  if ( (v41[0] & 1) == 0 )
  {
    v16 = v42;
    if ( v14 > v15 && *(char *)(v12 + v15) <= -65 )
      core::str::slice_error_fail(v12, v14, v15, v14, &off_18A130);
LABEL_28:
    v17 = v15 + v12;
    v18 = v14 - v15;
    LODWORD(v36) = 0;
    v19 = core::char::methods::encode_utf8_raw(108LL, &v36, 4LL);
    v21 = v20;
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v17, v18, v19, v20) )
    {
      v22 = v18 < v21;
      v18 -= v21;
      if ( v22 )
        goto LABEL_59;
      v17 += v21;
LABEL_40:
      v34 = 1;
      v35 = 1LL;
      if ( v18 <= 0xF )
      {
LABEL_41:
        if ( v18 )
        {
          v30 = 0LL;
          while ( *(_BYTE *)(v17 + v30) != 102 )
          {
            if ( v18 == ++v30 )
              goto LABEL_45;
          }
          v8 = 1;
        }
        else
        {
LABEL_45:
          v8 = 0;
        }
        goto LABEL_47;
      }
LABEL_39:
      v8 = core::slice::memchr::memchr_aligned(102LL, v17, v18) == 1;
LABEL_47:
      v43[0] = v17;
      v43[1] = v17 + v18;
      do
      {
        if ( !(unsigned int)core::str::validations::next_code_point(v43) )
          goto LABEL_52;
        if ( (v31 ^ 0xD800u) - 2048 >= 0x10F800 )
          core::panicking::panic_nounwind(anon_d47df02a786f831a0d9960a1e02c39b9_4_llvm_1356039585147583896, 57LL);
      }
      while ( v31 == 102 );
      if ( v31 == (_DWORD)&loc_110000 )
      {
LABEL_52:
        if ( !is_mul_ok(v35, v16) )
        {
          *a1 = 1;
          goto LABEL_9;
        }
        *(_QWORD *)a1 = v35 * v16;
        a1[8] = v33;
        a1[9] = v34;
        goto LABEL_10;
      }
      v8 = 3;
      if ( ((v15 != 0) & v32) == 0 )
        goto LABEL_10;
      *a1 = 2;
      goto LABEL_9;
    }
    LODWORD(v36) = 0;
    v23 = core::char::methods::encode_utf8_raw(99LL, &v36, 4LL);
    v25 = v24;
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v17, v18, v23, v24) )
    {
      v22 = v18 < v25;
      v18 -= v25;
      if ( v22 )
        goto LABEL_59;
      v17 += v25;
      v26 = 1LL;
    }
    else
    {
      LODWORD(v36) = 0;
      v27 = core::char::methods::encode_utf8_raw(98LL, &v36, 4LL);
      v29 = v28;
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v17, v18, v27, v28) )
        goto LABEL_40;
      v22 = v18 < v29;
      v18 -= v29;
      if ( v22 )
        goto LABEL_59;
      v17 += v29;
      v26 = 512LL;
    }
    v35 = v26;
    v34 = 0;
    if ( v18 <= 0xF )
      goto LABEL_41;
    goto LABEL_39;
  }
  *a1 = 0;
LABEL_9:
  v8 = 2;
LABEL_10:
  a1[10] = v8;
  return a1;
}
