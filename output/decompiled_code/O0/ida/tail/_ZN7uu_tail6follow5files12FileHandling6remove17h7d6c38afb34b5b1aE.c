_QWORD *__fastcall uu_tail::follow::files::FileHandling::remove(_QWORD *a1)
{
  __int64 v1; // r14
  _QWORD v3[3]; // [rsp+8h] [rbp-1F0h] BYREF
  _QWORD v4[3]; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v5; // [rsp+38h] [rbp-1C0h]
  _BYTE src[208]; // [rsp+40h] [rbp-1B8h] BYREF
  _BYTE dest[208]; // [rsp+110h] [rbp-E8h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(v3);
  hashbrown::map::HashMap<K,V,S,A>::remove_entry(v4);
  v1 = v5;
  if ( v5 == 3 )
    core::option::unwrap_failed(&anon_05a4d4ca64bdea474ebd4b0eb3197a7a_31_llvm_11384070901547909942);
  memcpy(dest, src, sizeof(dest));
  if ( v4[0] )
    _rust_dealloc(v4[1], v4[0], 1LL);
  *a1 = v1;
  memcpy(a1 + 1, dest, 0xD0uLL);
  if ( v3[0] )
    _rust_dealloc(v3[1], v3[0], 1LL);
  return a1;
}
