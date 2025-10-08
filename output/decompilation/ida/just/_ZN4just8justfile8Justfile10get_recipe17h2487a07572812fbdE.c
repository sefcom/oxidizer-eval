__int64 __fastcall just::justfile::Justfile::get_recipe(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = (_QWORD *)alloc::collections::btree::map::BTreeMap<K,V,A>::get(
                   *(_QWORD *)(a1 + 696),
                   *(_QWORD *)(a1 + 704),
                   a2,
                   a3);
  if ( v5 )
    v6 = *v5 + 16LL;
  else
    v6 = 0LL;
  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  return core::option::Option<T>::or_else(v6, v8);
}