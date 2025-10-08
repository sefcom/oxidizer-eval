unsigned __int64 __fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_restart(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 result; // rax

  forc_debug::server::state::ServerState::reset(a2);
  *(_BYTE *)(a1 + 16) = 51;
  result = 0x8000000000000013LL;
  *(_QWORD *)(a1 + 24) = 0x8000000000000013LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}