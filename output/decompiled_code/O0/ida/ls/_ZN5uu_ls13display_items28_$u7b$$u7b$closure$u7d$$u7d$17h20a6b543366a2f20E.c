__int64 __fastcall uu_ls::display_items::{{closure}}(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  void *v5; // rbx
  size_t v6; // r14
  const void *v7; // rax
  size_t v8; // rdx
  _BYTE v10[8]; // [rsp+8h] [rbp-40h] BYREF
  void *s2; // [rsp+10h] [rbp-38h]
  __int64 v12; // [rsp+18h] [rbp-30h] BYREF
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3
    || (v4 = *(_QWORD *)(a2 + 16), v4 < 0)
    || (uucore::features::quoting_style::escape_name_inner(v10, v3, v4, *a1 + 245LL, 0LL), (v5 = s2) == 0LL)
    || (v6 = v12, v12 < 0) )
  {
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  LODWORD(v13) = 0;
  v7 = (const void *)core::char::methods::encode_utf8_raw(39LL, &v13, 4LL);
  if ( v8 <= v6 )
    LOBYTE(v5) = bcmp(v7, v5, v8) == 0;
  else
    LODWORD(v5) = 0;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v13, v10);
  if ( v14 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v12, v13, v14, v15);
  return (unsigned int)v5;
}
