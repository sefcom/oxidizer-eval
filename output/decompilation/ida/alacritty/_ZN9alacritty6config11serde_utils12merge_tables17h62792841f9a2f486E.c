_OWORD *__fastcall alacritty::config::serde_utils::merge_tables(_OWORD *a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _QWORD v8[3]; // [rsp+8h] [rbp-130h] BYREF
  __int128 v9; // [rsp+20h] [rbp-118h] BYREF
  __int128 v10; // [rsp+30h] [rbp-108h]
  __int128 v11; // [rsp+40h] [rbp-F8h]
  __int128 v12; // [rsp+50h] [rbp-E8h]
  _OWORD v13[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v14; // [rsp+80h] [rbp-B8h] BYREF
  char v15; // [rsp+9Ah] [rbp-9Eh]
  _BYTE v16[72]; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v17[80]; // [rsp+E8h] [rbp-50h] BYREF

  <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, a3);
  while ( 1 )
  {
    <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v8, v16);
    if ( __OFSUB__(0LL, v8[0]) )
      break;
    v12 = v10;
    v11 = v9;
    alloc::collections::btree::map::BTreeMap<K,V,A>::remove(&v14, a2, v8[1], v8[2]);
    if ( v15 == 8 )
    {
      v13[1] = v10;
      v13[0] = v9;
    }
    else
    {
      alacritty::config::serde_utils::merge((__int64)v13, &v14, &v9, v3, v4, v5);
    }
    alloc::collections::btree::map::BTreeMap<K,V,A>::insert(v17, a2, v8, v13);
    core::ptr::drop_in_place<core::option::Option<toml::value::Value>>(v17);
  }
  core::ptr::drop_in_place<toml::map::IntoIter<alloc::string::String,toml::value::Value>>(v16);
  v6 = *a2;
  result = a1;
  a1[1] = a2[1];
  *a1 = v6;
  return result;
}