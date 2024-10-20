_OWORD *__fastcall uu_ls::dired::print_dired_output(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD *result; // rax
  __int128 v12; // xmm0
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // [rsp+0h] [rbp-98h] BYREF
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int128 v29; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v30[24]; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  const char *v33; // [rsp+50h] [rbp-48h] BYREF
  __int64 v34; // [rsp+58h] [rbp-40h]
  __int64 v35; // [rsp+60h] [rbp-38h]

  v4 = a2;
  v5 = a1;
  v6 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a3);
  if ( v6 || (v6 = <std::io::stdio::Stdout as std::io::Write>::flush(a3 + 32)) != 0 )
  {
    *(_QWORD *)&v29 = 0x8000000000000000LL;
    *(_QWORD *)&v30[8] = v6;
    result = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v12 = v29;
    result[1] = *(_OWORD *)v30;
    *result = v12;
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 16);
    v32 = a1;
    if ( v13 )
    {
      v35 = a2;
      v14 = *(_QWORD *)(a2 + 8);
      v33 = aDired;
      v34 = 9LL;
      *(_QWORD *)&v29 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      *((_QWORD *)&v29 + 1) = 1LL;
      *(_QWORD *)v30 = &v27;
      *(_OWORD *)&v30[8] = 1uLL;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, const char **, __int64 (__fastcall *)()))std::io::stdio::_print)(
        &v29,
        a2,
        v7,
        v8,
        v9,
        v10,
        &v33,
        <&T as core::fmt::Display>::fmt);
      v19 = 16 * v13;
      do
      {
        v31 = v14;
        v14 += 16LL;
        *(_QWORD *)&v29 = &off_1AD1F0;
        *((_QWORD *)&v29 + 1) = 1LL;
        *(_QWORD *)v30 = &v27;
        *(_OWORD *)&v30[8] = 1uLL;
        ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64 *, __int64 (__fastcall *)()))std::io::stdio::_print)(
          &v29,
          a2,
          v15,
          v16,
          v17,
          v18,
          &v31,
          <&T as core::fmt::Display>::fmt);
        v19 -= 16LL;
      }
      while ( v19 );
      *(_QWORD *)&v29 = &off_1AD1E0;
      *((_QWORD *)&v29 + 1) = 1LL;
      *(_QWORD *)v30 = 8LL;
      *(_OWORD *)&v30[8] = 0LL;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v29,
        a2,
        v15,
        v16,
        v17,
        v18,
        v27,
        v28);
      v5 = v32;
      v4 = v35;
    }
    if ( *(_BYTE *)(v5 + 230) )
    {
      v20 = *(_QWORD *)(v4 + 32);
      v21 = *(_QWORD *)(v4 + 40);
      v33 = aSubdired;
      v34 = 12LL;
      *(_QWORD *)&v29 = anon_d50a8711bbf133864699943db9e5cd80_7_llvm_14484771386075166372;
      *((_QWORD *)&v29 + 1) = 1LL;
      *(_QWORD *)v30 = &v27;
      *(_OWORD *)&v30[8] = 1uLL;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, const char **, __int64 (__fastcall *)()))std::io::stdio::_print)(
        &v29,
        a2,
        v7,
        v8,
        v9,
        v10,
        &v33,
        <&T as core::fmt::Display>::fmt);
      if ( v21 )
      {
        v26 = 16 * v21;
        do
        {
          v31 = v20;
          v20 += 16LL;
          *(_QWORD *)&v29 = &off_1AD1F0;
          *((_QWORD *)&v29 + 1) = 1LL;
          *(_QWORD *)v30 = &v27;
          *(_OWORD *)&v30[8] = 1uLL;
          ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64 *, __int64 (__fastcall *)()))std::io::stdio::_print)(
            &v29,
            a2,
            v22,
            v23,
            v24,
            v25,
            &v31,
            <&T as core::fmt::Display>::fmt);
          v26 -= 16LL;
        }
        while ( v26 );
      }
      *(_QWORD *)&v29 = &off_1AD1E0;
      *((_QWORD *)&v29 + 1) = 1LL;
      *(_QWORD *)v30 = 8LL;
      *(_OWORD *)&v30[8] = 0LL;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v29,
        a2,
        v22,
        v23,
        v24,
        v25,
        v27,
        v28);
      v5 = v32;
    }
    *(_QWORD *)&v29 = &off_1AD1C0;
    *((_QWORD *)&v29 + 1) = 2LL;
    *(_QWORD *)v30 = &v27;
    *(_OWORD *)&v30[8] = 1uLL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)()))std::io::stdio::_print)(
      &v29,
      a2,
      v7,
      v8,
      v9,
      v10,
      v5 + 245,
      <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt);
    return 0LL;
  }
  return result;
}
