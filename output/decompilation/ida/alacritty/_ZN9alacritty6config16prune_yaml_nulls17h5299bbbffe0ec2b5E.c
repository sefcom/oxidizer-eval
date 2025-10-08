__int64 __fastcall alacritty::config::prune_yaml_nulls(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v6[4]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  result = alacritty::config::prune_yaml_nulls::walk();
  if ( (_BYTE)result )
  {
    v2 = std::thread::local::LocalKey<T>::with();
    indexmap::map::IndexMap<K,V,S>::with_capacity_and_hasher(v6, v2);
    core::ptr::drop_in_place<serde_yaml::value::Value>(a1);
    result = v7;
    *(_QWORD *)(a1 + 64) = v7;
    v3 = v6[0];
    v4 = v6[1];
    v5 = v6[2];
    *(_OWORD *)(a1 + 48) = v6[3];
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  return result;
}