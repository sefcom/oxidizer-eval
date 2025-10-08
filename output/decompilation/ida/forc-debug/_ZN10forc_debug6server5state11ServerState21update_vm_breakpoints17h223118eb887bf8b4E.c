__int64 __fastcall forc_debug::server::state::ServerState::update_vm_breakpoints(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[8]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v3[40]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+68h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 2427) == 1 )
  {
    hashbrown::map::HashMap<K,V,S,A>::iter(v3, a1 + 2376);
    v2[0] = 0LL;
    v2[4] = 0LL;
    v4 = a1 + 1624;
    <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::for_each(
      *(_QWORD *)(a1 + 1728),
      *(_QWORD *)(a1 + 1728) + 2632LL * *(_QWORD *)(a1 + 1736),
      v2);
    *(_BYTE *)(a1 + 2427) = 0;
    return core::ptr::drop_in_place<core::iter::adapters::flatten::FlatMap<std::collections::hash::map::Iter<std::path::PathBuf,alloc::vec::Vec<dap::types::Breakpoint>>,alloc::vec::Vec<&usize>,forc_debug::server::state::ServerState::update_vm_breakpoints::{{closure}}>>(v2);
  }
  return result;
}