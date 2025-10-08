__int64 __fastcall forc_debug::server::handlers::handle_breakpoint_locations::<impl forc_debug::server::DapServer>::breakpoint_locations(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 inner; // r14
  __int64 v6; // [rsp+0h] [rbp-118h] BYREF
  __int64 v7; // [rsp+8h] [rbp-110h]
  _BYTE v8[256]; // [rsp+18h] [rbp-100h] BYREF

  result = 0LL;
  if ( __OFSUB__(0LL, *(_QWORD *)(a3 + 72)) )
  {
    *a1 = 44;
  }
  else
  {
    v8[0] = 44;
    core::ptr::drop_in_place<forc_debug::error::AdapterError>(v8);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, *(_QWORD *)(a3 + 80));
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2 + 2376, &v6);
    if ( inner )
    {
      v8[0] = 45;
      core::ptr::drop_in_place<forc_debug::error::AdapterError>(v8);
      core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
      result = core::iter::traits::iterator::Iterator::collect(
                 a1 + 8,
                 *(_QWORD *)(inner + 32),
                 *(_QWORD *)(inner + 32) + 320LL * *(_QWORD *)(inner + 40));
      *a1 = 51;
    }
    else
    {
      *a1 = 45;
      return core::ptr::drop_in_place<std::path::PathBuf>(v6, v7);
    }
  }
  return result;
}