__int64 *__fastcall uu_unexpand::expand_shortcuts(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // r12
  const void *v7; // rbx
  __int64 v8; // r13
  const void *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r13
  int v13; // edx
  char v14; // al
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  unsigned __int16 *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v25; // r14
  __int64 v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 *result; // rax
  char v31; // [rsp+7h] [rbp-F1h] BYREF
  __int64 v32; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD *v33; // [rsp+10h] [rbp-E8h]
  __int64 v34; // [rsp+18h] [rbp-E0h]
  int v35; // [rsp+20h] [rbp-D8h]
  int v36; // [rsp+24h] [rbp-D4h]
  char **v37; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-C8h]
  __int64 v39; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-B8h]
  _QWORD *v41; // [rsp+48h] [rbp-B0h]
  __int64 v42; // [rsp+50h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A0h]
  __int64 v44; // [rsp+60h] [rbp-98h]
  int v45; // [rsp+68h] [rbp-90h]
  int v46; // [rsp+6Ch] [rbp-8Ch]
  char v47; // [rsp+70h] [rbp-88h]
  __int16 v48; // [rsp+78h] [rbp-80h]
  __int64 *v49; // [rsp+80h] [rbp-78h]
  __int128 v50; // [rsp+88h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-38h]

  v4 = a2;
  v49 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, a3, 0LL);
  if ( v39 )
    alloc::raw_vec::handle_error(v40, v41);
  v32 = v40;
  v33 = v41;
  v34 = 0LL;
  if ( a3 )
  {
    v38 = a2 + 24 * a3;
    v35 = 0;
    v37 = &off_10ADF0;
    v36 = 0;
    while ( 1 )
    {
      if ( !v4 )
      {
LABEL_42:
        if ( (v36 & 1) != 0 && !(_BYTE)v35 )
        {
          alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v39, 12LL, 0LL);
          v24 = v40;
          if ( v39 )
            alloc::raw_vec::handle_error(v40, v41);
          v25 = v41;
          core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1ED02, v41, 1LL, 1LL, 12LL);
          qmemcpy(v25, "--first-only", 12);
          *(_QWORD *)&v50 = v24;
          *((_QWORD *)&v50 + 1) = v25;
          v51 = 12LL;
          v26 = v34;
          if ( v34 == v32 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v32);
          v27 = v33;
          v28 = 3 * v26;
          v29 = v50;
          v33[v28 + 2] = v51;
          *(_OWORD *)&v27[v28] = v29;
          v34 = v26 + 1;
        }
        goto LABEL_48;
      }
      v6 = v4;
      v7 = *(const void **)(v4 + 8);
      if ( !v7 )
        goto LABEL_49;
      v8 = *(_QWORD *)(v4 + 16);
      if ( v8 < 0 )
        goto LABEL_49;
      LODWORD(v39) = 0;
      v9 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v39, 4LL);
      v4 += 24LL;
      if ( v10 <= v8 && !bcmp(v9, v7, v10) )
      {
        v11 = *(_QWORD *)(v6 + 8);
        if ( !v11 )
          goto LABEL_49;
        v12 = *(_QWORD *)(v6 + 16);
        if ( v12 < 0 )
          goto LABEL_49;
        if ( (unsigned __int64)v12 <= 1 )
        {
          if ( v12 != 1 )
            goto LABEL_54;
        }
        else if ( *(char *)(v11 + 1) < -64 )
        {
          goto LABEL_54;
        }
        v52[0] = v11 + 1;
        v52[1] = v11 + v12;
        while ( (unsigned int)core::str::validations::next_code_point(v52) )
        {
          if ( (v13 ^ 0xD800u) - 2048 >= (unsigned int)&off_10F800 )
            core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_35_llvm_13207799637797456089, 57LL);
          if ( v13 == (_DWORD)&unk_110000 )
            break;
          if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::branch(((unsigned int)(v13 - 58) < 0xFFFFFFF6) & (unsigned __int8)(v13 != 44)) )
          {
            v14 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual>::from_residual();
            goto LABEL_24;
          }
        }
        v14 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::from_output();
LABEL_24:
        LOBYTE(v39) = v14;
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                                &v39,
                                &anon_ea5d52e0609cca556c29fc6699d6f586_36_llvm_13207799637797456089) )
          break;
      }
      <alloc::string::String as core::clone::Clone>::clone(&v53, v6);
      v15 = v34;
      if ( v34 == v32 )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v32);
      v16 = v33;
      v17 = 3 * v15;
      v18 = v53;
      v33[v17 + 2] = v54;
      *(_OWORD *)&v16[v17] = v18;
      v34 = v15 + 1;
      v19 = *(unsigned __int16 **)(v6 + 8);
      if ( !v19 || (v20 = *(_QWORD *)(v6 + 16), v20 < 0) )
LABEL_49:
        core::panicking::panic_nounwind(anon_ea5d52e0609cca556c29fc6699d6f586_39_llvm_13207799637797456089, 162LL);
      if ( v20 == 2 )
      {
        v5 = *v19;
        if ( v5 != 24877 )
          goto LABEL_5;
LABEL_32:
        LOBYTE(v5) = 1;
        v35 = v5;
        if ( v4 == v38 )
          goto LABEL_48;
      }
      else
      {
        if ( v20 == 5 )
        {
          v5 = *(_DWORD *)v19 ^ 0x6C612D2D | *((unsigned __int8 *)v19 + 4) ^ 0x6C;
          if ( !v5 )
            goto LABEL_32;
        }
LABEL_5:
        if ( v4 == v38 )
          goto LABEL_42;
      }
    }
    v11 = *(_QWORD *)(v6 + 8);
    if ( !v11 )
      goto LABEL_49;
    v12 = *(_QWORD *)(v6 + 16);
    if ( v12 < 0 )
      goto LABEL_49;
    if ( (unsigned __int64)v12 <= 1 )
    {
      if ( v12 != 1 )
      {
LABEL_53:
        v37 = &off_10AE08;
LABEL_54:
        core::str::slice_error_fail(v11, v12, 1LL, v12, v37);
      }
    }
    else if ( *(char *)(v11 + 1) <= -65 )
    {
      goto LABEL_53;
    }
    LODWORD(v39) = 0;
    core::char::methods::encode_utf8_raw(44LL, &v39, 4LL);
    if ( v21 >= 0x100 )
      core::result::unwrap_failed(
        anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
        32LL,
        &v31,
        &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
        &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
    v22 = v39;
    v39 = 0LL;
    v40 = v12 - 1;
    v41 = (_QWORD *)(v11 + 1);
    v42 = v12 - 1;
    v43 = 0LL;
    v44 = v12 - 1;
    v45 = v22;
    v46 = 44;
    v47 = v21;
    v48 = 1;
    v23 = core::iter::traits::iterator::Iterator::fold(&v39, &v32);
    LOBYTE(v23) = 1;
    v36 = v23;
    goto LABEL_5;
  }
LABEL_48:
  result = v49;
  v49[2] = v34;
  *result = v32;
  result[1] = (__int64)v33;
  return result;
}
