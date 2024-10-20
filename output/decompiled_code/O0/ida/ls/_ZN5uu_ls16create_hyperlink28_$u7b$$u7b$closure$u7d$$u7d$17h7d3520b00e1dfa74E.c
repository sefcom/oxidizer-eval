__int64 __fastcall uu_ls::create_hyperlink::{{closure}}(__int64 a1, _QWORD *a2, unsigned int a3)
{
  const void *v4; // r15
  size_t v5; // rdx
  size_t v6; // r14
  __int64 v7; // r12
  void *v8; // r13
  _BYTE *v11; // r12
  void *v12; // rax
  size_t v13; // rdx
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // [rsp+Bh] [rbp-BDh] BYREF
  int v18; // [rsp+Ch] [rbp-BCh] BYREF
  void *v19; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-B0h]
  void *dest; // [rsp+20h] [rbp-A8h]
  __int64 v22; // [rsp+28h] [rbp-A0h]
  _QWORD *v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  _QWORD v25[2]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+50h] [rbp-78h] BYREF
  __int64 v27; // [rsp+60h] [rbp-68h]
  _QWORD v28[6]; // [rsp+68h] [rbp-60h] BYREF
  char v29; // [rsp+98h] [rbp-30h]

  if ( (a3 & 0xFFFFFFDF) - 65 < 0x1A )
    goto LABEL_2;
  if ( a3 < 0x80 )
  {
    if ( a3 - 48 >= 0xA )
    {
      v14 = (_BYTE *)*a2;
      v15 = a2[1];
      if ( v15 > 0xF )
      {
        if ( core::slice::memchr::memchr_aligned((unsigned __int8)a3, v14) == 1 )
          goto LABEL_2;
      }
      else if ( v15 )
      {
        v16 = 0LL;
        while ( v14[v16] != (_BYTE)a3 )
        {
          if ( v15 == ++v16 )
            goto LABEL_18;
        }
        goto LABEL_2;
      }
LABEL_18:
      v17 = a3;
      v25[0] = &v17;
      v25[1] = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
      v28[0] = 2LL;
      v28[2] = 0LL;
      v28[3] = 2LL;
      v28[4] = 0LL;
      v28[5] = 0x800000020LL;
      v29 = 3;
      v19 = &anon_11f7478bcb2f9b4befb7b1d3f51baba0_430_llvm_2775220154043362954;
      v20 = 1LL;
      dest = v25;
      v22 = 1LL;
      v23 = v28;
      v24 = 1LL;
      alloc::fmt::format::format_inner(&v26, &v19);
      *(_QWORD *)(a1 + 16) = v27;
      *(_OWORD *)a1 = v26;
      return a1;
    }
  }
  else if ( !(unsigned __int8)core::unicode::unicode_data::alphabetic::lookup(a3)
         && !(unsigned __int8)core::unicode::unicode_data::n::lookup(a3) )
  {
    v11 = (_BYTE *)*a2;
    LODWORD(v19) = 0;
    v12 = (void *)core::char::methods::encode_utf8_raw(a3, &v19, 4LL);
    if ( !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(v12, v13, v11) )
      goto LABEL_18;
  }
LABEL_2:
  v18 = 0;
  v4 = (const void *)core::char::methods::encode_utf8_raw(a3, &v18, 4LL);
  v6 = v5;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v19, v5, 0LL);
  v7 = v20;
  if ( v19 )
    alloc::raw_vec::handle_error(v20, dest);
  v8 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v4, dest, 1LL, 1LL, v6);
  memcpy(v8, v4, v6);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v6;
  return a1;
}
