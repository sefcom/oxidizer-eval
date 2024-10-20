_OWORD *__fastcall uu_expand::expand_shortcuts(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // rbp
  unsigned __int64 v6; // r13
  const void *v7; // rax
  size_t v8; // rdx
  int v9; // edx
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned __int64 v15; // rdx
  int v16; // eax
  _OWORD *result; // rax
  char v18; // [rsp+7h] [rbp-101h] BYREF
  __int128 v19; // [rsp+8h] [rbp-100h] BYREF
  __int64 v20; // [rsp+18h] [rbp-F0h]
  __int64 v21; // [rsp+20h] [rbp-E8h] BYREF
  __int128 s2; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  __int64 v24; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v25; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+50h] [rbp-B8h]
  int v27; // [rsp+54h] [rbp-B4h]
  char v28; // [rsp+58h] [rbp-B0h]
  __int16 v29; // [rsp+60h] [rbp-A8h]
  _BYTE v30[24]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  unsigned __int64 v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  _QWORD v39[8]; // [rsp+C8h] [rbp-40h] BYREF

  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v21, a2[2], 0LL);
  v36 = a1;
  if ( v21 )
    alloc::raw_vec::handle_error(s2, *((_QWORD *)&s2 + 1));
  v19 = s2;
  v20 = 0LL;
  v2 = *a2;
  v4 = a2[2];
  v31 = a2[1];
  v3 = v31;
  v32 = v31;
  v33 = v2;
  v34 = v31 + 24 * v4;
  if ( v4 )
  {
    do
    {
      v32 = v3 + 24;
      if ( *(_QWORD *)v3 == 0x8000000000000000LL )
        break;
      *(_QWORD *)v30 = *(_QWORD *)v3;
      *(_OWORD *)&v30[8] = *(_OWORD *)(v3 + 8);
      if ( !*(_QWORD *)&v30[8] || *(__int64 *)&v30[16] < 0 )
        core::panicking::panic_nounwind(anon_aaac0ddc4ff511c8d0d06f52b75d74e5_33_llvm_5208339479224688215, 162LL);
      std::sys::os_str::bytes::Slice::to_str(&v21);
      if ( v21 )
        goto LABEL_25;
      v5 = (char *)s2;
      if ( !(_QWORD)s2 )
        goto LABEL_25;
      v6 = *((_QWORD *)&s2 + 1);
      LODWORD(v21) = 0;
      v7 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v21, 4LL);
      if ( v8 > v6 || bcmp(v7, v5, v8) )
        goto LABEL_25;
      if ( v6 <= 1 )
      {
        if ( v6 != 1 )
LABEL_38:
          core::str::slice_error_fail(v5, v6, 1LL, v6, &off_10A928);
      }
      else if ( v5[1] <= -65 )
      {
        goto LABEL_38;
      }
      v35 = v6 - 1;
      v39[0] = v5 + 1;
      v39[1] = &v5[v6];
      while ( (unsigned int)core::str::validations::next_code_point(v39) )
      {
        if ( (v9 ^ 0xD800u) - 2048 >= (unsigned int)&off_10F800 )
          core::panicking::panic_nounwind(anon_aaac0ddc4ff511c8d0d06f52b75d74e5_29_llvm_5208339479224688215, 57LL);
        if ( v9 == (_DWORD)&unk_110000 )
          break;
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::branch(((unsigned int)(v9 - 58) < 0xFFFFFFF6) & (unsigned __int8)(v9 != 44)) )
        {
          v10 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual>::from_residual();
          goto LABEL_21;
        }
      }
      v10 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::from_output();
LABEL_21:
      LOBYTE(v21) = v10;
      if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(
                               &v21,
                               &anon_aaac0ddc4ff511c8d0d06f52b75d74e5_30_llvm_5208339479224688215) )
      {
LABEL_25:
        v38 = *(_QWORD *)&v30[16];
        v37 = *(_OWORD *)v30;
        v11 = v20;
        if ( v20 == (_QWORD)v19 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v19);
        v12 = *((_QWORD *)&v19 + 1);
        v13 = 3 * v11;
        v14 = v37;
        *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8 * v13 + 16) = v38;
        *(_OWORD *)(v12 + 8 * v13) = v14;
        v20 = v11 + 1;
      }
      else
      {
        if ( v6 > 1 && v5[1] <= -65 )
          core::str::slice_error_fail(v5, v6, 1LL, v6, &off_10A940);
        LODWORD(v21) = 0;
        core::char::methods::encode_utf8_raw(44LL, &v21, 4LL);
        if ( v15 >= 0x100 )
          core::result::unwrap_failed(
            anon_b8e768ed0ddf17f1539d76bb5aedca5a_46_llvm_9157631453777517788,
            32LL,
            &v18,
            &anon_cf3a0699d036d4a433c5534177ef0521_7_llvm_15788873575520176247,
            &anon_02b40c0e5390e28ea90696fc8ba4da26_29_llvm_16801938774416938183);
        v16 = v21;
        v21 = 0LL;
        *(_QWORD *)&s2 = v35;
        *((_QWORD *)&s2 + 1) = v5 + 1;
        v23 = v35;
        v24 = 0LL;
        v25 = v35;
        v26 = v16;
        v27 = 44;
        v28 = v15;
        v29 = 1;
        core::iter::traits::iterator::Iterator::fold(&v21, &v19);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v21, v30);
        if ( (_QWORD)s2 && *((_QWORD *)&s2 + 1) )
          _rust_dealloc(v21);
      }
      v3 = v32;
    }
    while ( v32 != v34 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v31);
  result = (_OWORD *)v36;
  *(_QWORD *)(v36 + 16) = v20;
  *result = v19;
  return result;
}
