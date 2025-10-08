__int64 __fastcall fuel_core_version::find_dependency_version(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v2 = toml::value::Value::get(a2, aWorkspace, 9LL);
  if ( !v2 )
    goto LABEL_8;
  v3 = toml::value::Value::get(v2, aDependencies, 12LL);
  if ( !v3 )
    goto LABEL_8;
  v4 = toml::value::Value::get(v3, aFuelCore, 9LL);
  if ( !v4 )
    goto LABEL_8;
  if ( !*(_BYTE *)v4 )
    return <alloc::string::String as core::clone::Clone>::clone(a1, v4 + 8);
  if ( *(_BYTE *)v4 != 6
    || (v5 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16))) == 0
    || *(_BYTE *)v5 )
  {
LABEL_8:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, *(_QWORD *)(v5 + 16), *(_QWORD *)(v5 + 24));
}