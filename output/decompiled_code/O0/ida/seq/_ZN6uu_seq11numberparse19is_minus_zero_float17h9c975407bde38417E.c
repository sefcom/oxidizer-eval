__int64 __fastcall uu_seq::numberparse::is_minus_zero_float(void *s2, size_t a2, __int64 a3)
{
  const void *v4; // rax
  size_t v5; // rdx
  unsigned int v6; // ebx
  char v8; // al
  __int64 v9; // rcx
  __int128 *v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+18h] [rbp-60h]
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  _QWORD v16[2]; // [rsp+48h] [rbp-30h] BYREF
  char v17; // [rsp+58h] [rbp-20h]

  LODWORD(v10) = 0;
  v4 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v10, 4LL);
  if ( v5 > a2 || bcmp(v4, s2, v5) )
  {
    return 0;
  }
  else
  {
    v14 = xmmword_1E170;
    v13 = anon_52158d68de30c31dc6c97ce83134c8ee_19_llvm_10101531615377826705;
    v15 = 0LL;
    v8 = *(_BYTE *)(a3 + 24);
    v9 = *(_QWORD *)(a3 + 32);
    v10 = &v13;
    v11 = 0LL;
    LOBYTE(v12) = 1;
    v16[0] = a3;
    v16[1] = v9;
    v17 = v8;
    v6 = bigdecimal::impl_cmp::check_equality_bigdecimal_ref(v16, &v10);
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, &v13);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v14, v10, v11, v12);
  }
  return v6;
}
