__int64 __fastcall forc_debug::server::state::ServerState::vm_pc_to_source_location(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v4; // rax
  char v5; // al
  __int128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]

  sway_core::source_map::SourceMap::addr_to_span(&v7, a2 + 1624, a3 >> 2);
  v4 = (unsigned __int64 *)(a1 + 8);
  if ( __OFSUB__(0LL, (_QWORD)v7) )
  {
    *v4 = a3;
    v5 = 46;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)v4 = v7;
    *(_QWORD *)(a1 + 32) = v9;
    v5 = 51;
  }
  *(_BYTE *)a1 = v5;
  return a1;
}