__int64 __fastcall just::scope::Scope::value(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi

  v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a1);
  if ( v4 )
    return *(_QWORD *)(v4 + 8);
  v6 = a1[3];
  if ( v6 )
    return just::scope::Scope::value(v6, a2, a3);
  else
    return 0LL;
}