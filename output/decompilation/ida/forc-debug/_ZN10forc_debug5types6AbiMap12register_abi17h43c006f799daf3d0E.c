__int64 __fastcall forc_debug::types::AbiMap::register_abi(__int64 a1)
{
  _BYTE dest[256]; // [rsp+8h] [rbp-100h] BYREF

  hashbrown::map::HashMap<K,V,S,A>::insert(dest);
  return core::ptr::drop_in_place<core::option::Option<sway_core::asm_generation::abi::ProgramABI>>(dest, a1);
}