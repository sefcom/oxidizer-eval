__int64 __fastcall forc_debug::server::DapServer::handle_command(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _BYTE src[256]; // [rsp+8h] [rbp-100h] BYREF

  switch ( *a3 )
  {
    case 0:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_attach(a1, a2);
      return a1;
    case 1:
      forc_debug::server::handlers::handle_breakpoint_locations::<impl forc_debug::server::DapServer>::handle_breakpoint_locations_command(a1);
      return a1;
    case 3:
      *(_BYTE *)(a2 + 2426) = 1;
      *(_BYTE *)(a1 + 16) = 51;
      v3 = 0x8000000000000003LL;
      goto LABEL_22;
    case 4:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_continue(a1, a2);
      return a1;
    case 7:
      *(_BYTE *)(a1 + 16) = 51;
      v4 = 0x8000000000000007LL;
      goto LABEL_26;
    case 8:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_evaluate(a1, (__int64)(a3 + 8));
      return a1;
    case 0xC:
      *(_BYTE *)(a1 + 16) = 51;
      *(_QWORD *)(a1 + 24) = 0x800000000000000CLL;
      *(_QWORD *)(a1 + 32) = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 56) = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 80) = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 104) = 0x8000000000000000LL;
      *(_BYTE *)(a1 + 128) = 1;
      *(_OWORD *)(a1 + 129) = xmmword_2D7BD0;
      *(_OWORD *)(a1 + 141) = xmmword_2D7BD0;
      *(_BYTE *)(a1 + 157) = 1;
      *(_DWORD *)(a1 + 158) = (_DWORD)&unk_2020202;
      *(_BYTE *)(a1 + 162) = 2;
      *(_QWORD *)a1 = 0LL;
      return a1;
    case 0xD:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_launch(a1, a2, (__int64)(a3 + 8));
      return a1;
    case 0x10:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_next(a1, a2);
      return a1;
    case 0x11:
      if ( *(_QWORD *)(a2 + 1736) )
        *(_WORD *)(*(_QWORD *)(a2 + 1728) + 720LL) = 257;
      *(_BYTE *)(a1 + 16) = 51;
      v3 = 0x8000000000000011LL;
      goto LABEL_22;
    case 0x13:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_restart(a1, a2);
      return a1;
    case 0x16:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_scopes(a1);
      return a1;
    case 0x17:
      forc_debug::server::handlers::handle_set_breakpoints::<impl forc_debug::server::DapServer>::handle_set_breakpoints_command(a1);
      return a1;
    case 0x1F:
      forc_debug::server::handlers::handle_stack_trace::<impl forc_debug::server::DapServer>::handle_stack_trace_command(a1);
      return a1;
    case 0x21:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, aThisFeatureIsN);
      forc_debug::server::DapServer::error(*(_QWORD *)(a2 + 2488), src);
      *(_BYTE *)(a1 + 16) = 51;
      v3 = 0x8000000000000021LL;
      goto LABEL_22;
    case 0x23:
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, aThisFeatureIsN);
      forc_debug::server::DapServer::error(*(_QWORD *)(a2 + 2488), src);
      *(_BYTE *)(a1 + 16) = 51;
      v3 = 0x8000000000000022LL;
LABEL_22:
      *(_QWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = 0LL;
      return a1;
    case 0x24:
      *(_BYTE *)(a1 + 16) = 51;
      v4 = 0x8000000000000023LL;
      goto LABEL_26;
    case 0x25:
      *(_BYTE *)(a1 + 16) = 51;
      v4 = 0x8000000000000024LL;
LABEL_26:
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)a1 = 1LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      break;
    case 0x26:
      forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_threads(a1);
      break;
    case 0x27:
      forc_debug::server::handlers::handle_variables::<impl forc_debug::server::DapServer>::handle_variables_command(a1);
      break;
    default:
      <dap::requests::Command as core::clone::Clone>::clone(src);
      memcpy((void *)(a1 + 16), src, 0xE8uLL);
      *(_QWORD *)a1 = 0LL;
      break;
  }
  return a1;
}