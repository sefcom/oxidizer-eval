__int64 __fastcall uu_tail::follow::files::FileHandling::get(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+8h] [rbp-80h] BYREF
  __int64 v9; // [rsp+10h] [rbp-78h]
  __int64 v10; // [rsp+18h] [rbp-70h]
  _OWORD v11[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  uu_tail::follow::files::FileHandling::canonicalize_path(&v8);
  if ( !*(_QWORD *)(a1 + 48) )
    goto LABEL_6;
  v1 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v11[0] = _mm_xor_si128(_mm_shuffle_epi32(v1, 68), (__m128i)xmmword_21E90);
  v11[1] = _mm_xor_si128(_mm_shuffle_epi32(v1, 238), (__m128i)xmmword_21DD0);
  v11[2] = v1;
  v11[3] = 0LL;
  v12 = 0LL;
  v2 = v9;
  v3 = v10;
  core::slice::raw::from_raw_parts::precondition_check(v9, 1LL, 1LL, v10);
  <std::path::Path as core::hash::Hash>::hash(v2, v3, v11);
  v4 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v11);
  v5 = hashbrown::raw::RawTable<T,A>::find(a1 + 24, v4, &v8);
  if ( !v5 )
LABEL_6:
    core::option::unwrap_failed(&anon_05a4d4ca64bdea474ebd4b0eb3197a7a_32_llvm_11384070901547909942);
  if ( v8 )
  {
    v6 = v5;
    _rust_dealloc(v9, v8, 1LL);
    v5 = v6;
  }
  return v5 - 216;
}
