bool __fastcall alacritty::config::prune_yaml_nulls::walk(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // rax
  _BYTE v4[9]; // [rsp+Fh] [rbp-9h] BYREF

  v4[0] = a2;
  v2 = 5LL;
  if ( (*a1 ^ 0x8000000000000000LL) < 7 )
    v2 = *a1 ^ 0x8000000000000000LL;
  if ( v2 == 5 )
  {
    indexmap::map::core::IndexMapCore<K,V>::retain_in_order(a1, v4);
    return a1[6] == 0LL;
  }
  else if ( v2 == 4 )
  {
    alloc::vec::Vec<T,A>::retain_mut(a1 + 1, v4);
    return a1[3] == 0LL;
  }
  else
  {
    return v2 == 0;
  }
}