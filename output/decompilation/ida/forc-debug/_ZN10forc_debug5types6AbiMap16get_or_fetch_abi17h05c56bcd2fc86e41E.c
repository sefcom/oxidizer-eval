__int64 __fastcall forc_debug::types::AbiMap::get_or_fetch_abi(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 inner; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD src[31]; // [rsp+20h] [rbp-208h] BYREF
  _BYTE dest[248]; // [rsp+118h] [rbp-110h] BYREF

  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, a2, a3, a4, a5, a6) )
  {
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, a2, v6, v7, v8, v9);
    result = inner + 32;
    if ( !inner )
      return 0LL;
    return result;
  }
  forc_debug::types::fetch_abi_from_registry(src);
  if ( LODWORD(src[0]) == 4 )
  {
    result = 0LL;
LABEL_10:
    v17 = result;
    core::ptr::drop_in_place<core::result::Result<sway_core::asm_generation::abi::ProgramABI,forc_debug::error::Error>>(src);
    return v17;
  }
  memcpy(dest, src, sizeof(dest));
  forc_debug::types::AbiMap::register_abi(a1);
  v16 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, a2, v12, v13, v14, v15);
  result = v16 + 32;
  if ( !v16 )
    result = 0LL;
  if ( src[0] == 4LL )
    goto LABEL_10;
  return result;
}