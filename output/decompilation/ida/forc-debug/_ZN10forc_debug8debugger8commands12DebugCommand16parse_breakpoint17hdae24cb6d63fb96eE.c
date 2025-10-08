__int64 __fastcall forc_debug::debugger::commands::DebugCommand::parse_breakpoint(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+10h] [rbp-B8h]
  __int128 v9; // [rsp+20h] [rbp-A8h]
  _BYTE v10[33]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v11; // [rsp+58h] [rbp-70h] BYREF
  __int64 v12; // [rsp+68h] [rbp-60h]
  __int128 v13; // [rsp+77h] [rbp-51h]
  __int64 v14; // [rsp+87h] [rbp-41h]
  __int128 v15; // [rsp+97h] [rbp-31h]

  if ( a3 == 2 )
  {
    <fuel_types::array_types::ContractId as core::str::traits::FromStr>::from_str(v10);
    if ( v10[0] )
    {
      forc_debug::debugger::commands::DebugCommand::parse_breakpoint::{{closure}}(&v11, a2);
      v4 = v11;
      v15 = v11;
      result = v12;
      v13 = v11;
      v14 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      *(_OWORD *)(a1 + 8) = v4;
      goto LABEL_11;
    }
    v8 = *(_OWORD *)&v10[1];
    v9 = *(_OWORD *)&v10[17];
    a2 += 24LL;
  }
  else
  {
    if ( !a3 )
    {
      result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, aBreakpointOffs);
      goto LABEL_11;
    }
    v9 = 0LL;
    v8 = 0LL;
  }
  v7 = a2;
  result = forc_debug::cli::commands::parse_int(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( (result & 1) != 0 )
  {
    v6 = v8;
    *(_OWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 0x8000000000000003LL;
    *(_QWORD *)(a1 + 40) = v5;
    return result;
  }
  forc_debug::debugger::commands::DebugCommand::parse_memory::{{closure}}::{{closure}}(v10, &v7);
  result = *(_QWORD *)&v10[16];
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v10;
  *(_QWORD *)(a1 + 24) = result;
LABEL_11:
  *(_QWORD *)a1 = 0x8000000000000007LL;
  return result;
}