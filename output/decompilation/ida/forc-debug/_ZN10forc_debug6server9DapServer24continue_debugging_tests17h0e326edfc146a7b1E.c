void __fastcall forc_debug::server::DapServer::continue_debugging_tests(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // r12
  __int64 v6; // [rsp+8h] [rbp-290h] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-288h]
  _BYTE src[192]; // [rsp+18h] [rbp-280h] BYREF
  __int64 v9; // [rsp+D8h] [rbp-1C0h]
  unsigned __int64 v10; // [rsp+E0h] [rbp-1B8h]
  _BYTE v11[192]; // [rsp+E8h] [rbp-1B0h] BYREF
  _BYTE dest[192]; // [rsp+1A8h] [rbp-F0h] BYREF

  forc_debug::server::state::ServerState::update_vm_breakpoints((__int64)a2);
  if ( a2[217] )
  {
    v4 = a2[216];
    *(_BYTE *)(v4 + 720) = 1;
    *(_BYTE *)(v4 + 721) = a3;
    forc_test::execute::TestExecutor::continue_debugging(&v6, v4);
    v5 = v7;
    if ( v6 == 4 )
    {
      *(_BYTE *)a1 = 50;
      *(_QWORD *)(a1 + 8) = v5;
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( (_DWORD)v6 == 3 )
      {
        *(_WORD *)(v4 + 720) = 1;
        forc_debug::server::DapServer::stop((_WORD *)a1, a2, v5);
      }
      else
      {
        v9 = v6;
        v10 = v7;
        memcpy(v11, dest, sizeof(v11));
        forc_debug::server::state::ServerState::test_complete((__int64)a2);
        forc_debug::server::DapServer::start_debugging_tests(a1, a2, a3);
      }
    }
  }
  else
  {
    forc_debug::server::DapServer::log_test_results(a2);
    *(_WORD *)a1 = 51;
  }
}