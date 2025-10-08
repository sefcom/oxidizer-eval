__int64 __fastcall forc_debug::cli::state::is_valid_abi(__int64 a1)
{
  unsigned __int8 v1; // al
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v8[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( *(_BYTE *)a1 == 5 )
  {
    core::iter::traits::iterator::Iterator::collect(v8);
    hashbrown::map::HashMap<K,V,S,A>::iter(v7, v8);
    v1 = core::iter::traits::iterator::Iterator::try_fold(v7, a1 + 8);
    v2 = 0;
    if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v1, 0LL) )
    {
      v3 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             aFunctions_0,
             9LL);
      if ( v3 && *(_BYTE *)v3 == 4 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        v5 = v4 + 32LL * *(_QWORD *)(v3 + 24);
        v7[0] = v4;
        v7[1] = v5;
        v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(v7);
      }
      else
      {
        v2 = 0;
      }
    }
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<&&str>>(v8[0], v8[1]);
  }
  else
  {
    return 0;
  }
  return v2;
}