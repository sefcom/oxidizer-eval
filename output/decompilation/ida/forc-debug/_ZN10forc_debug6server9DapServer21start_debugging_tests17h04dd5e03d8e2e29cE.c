__int64 __fastcall forc_debug::server::DapServer::start_debugging_tests(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r13
  __int64 result; // rax
  __int64 v7; // [rsp+18h] [rbp-290h] BYREF
  unsigned __int64 v8; // [rsp+20h] [rbp-288h]
  _BYTE src[192]; // [rsp+28h] [rbp-280h] BYREF
  __int64 v10; // [rsp+E8h] [rbp-1C0h]
  unsigned __int64 v11; // [rsp+F0h] [rbp-1B8h]
  _BYTE v12[192]; // [rsp+F8h] [rbp-1B0h] BYREF
  _BYTE dest[192]; // [rsp+1B8h] [rbp-F0h] BYREF

  forc_debug::server::state::ServerState::update_vm_breakpoints((__int64)a2);
  if ( a2[217] )
  {
    while ( 1 )
    {
      v3 = a2[216];
      *(_BYTE *)(v3 + 720) = 1;
      *(_BYTE *)(v3 + 721) = a3;
      forc_test::execute::TestExecutor::start_debugging(&v7, v3);
      v4 = v8;
      if ( v7 == 4 )
      {
        result = a1;
        *(_BYTE *)a1 = 50;
        *(_QWORD *)(a1 + 8) = v4;
        return result;
      }
      memcpy(dest, src, sizeof(dest));
      if ( (_DWORD)v7 == 3 )
        break;
      v10 = v7;
      v11 = v8;
      memcpy(v12, dest, sizeof(v12));
      forc_debug::server::state::ServerState::test_complete((__int64)a2);
      if ( !a2[217] )
        goto LABEL_5;
    }
    *(_WORD *)(v3 + 720) = 1;
    return forc_debug::server::DapServer::stop((_WORD *)a1, a2, v4);
  }
  else
  {
LABEL_5:
    forc_debug::server::DapServer::log_test_results(a2);
    result = a1;
    *(_WORD *)a1 = 51;
  }
  return result;
}