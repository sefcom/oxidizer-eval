__int64 __fastcall forc_debug::debugger::commands::DebugCommand::from_cli_args(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // rdi
  const char *v13; // rsi
  __m256i v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v4 = 0x8000000000000007LL;
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 8) = 2LL;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    goto LABEL_10;
  }
  v5 = a3 - 1;
  v6 = a2 + 24;
  v7 = *(_QWORD *)(a2 + 8);
  v16 = a2;
  v8 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aStartTx)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aN_5)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aTx_0)
    && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aNewTx) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aReset_1) )
    {
      if ( !v5 )
      {
        v4 = 0x8000000000000000LL;
        goto LABEL_10;
      }
      v12 = a1 + 16;
      v13 = aResetCommandTa;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aContinue_1)
        && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aC_7) )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                v7,
                                v8,
                                "stepBURNDIVIU256CodeCharcom1\x02")
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aS_27) )
        {
          forc_debug::debugger::commands::DebugCommand::parse_step(&v14, v6, v5);
        }
        else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBreakpoint_2)
               || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aBp_0)
               || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aB_6) )
        {
          forc_debug::debugger::commands::DebugCommand::parse_breakpoint(&v14, v6, v5);
        }
        else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aRegister)
               || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aR_4)
               || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aReg_0)
               || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aRegisters) )
        {
          forc_debug::debugger::commands::DebugCommand::parse_registers(&v14, v6, v5);
        }
        else
        {
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aMemory_1)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aM_2)
            && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aMem) )
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "quitdeclthenWordSha1")
              || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aQ_3)
              || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aExit_1) )
            {
              v4 = 0x8000000000000006LL;
            }
            else
            {
              <alloc::string::String as core::clone::Clone>::clone(a1 + 16, v16);
              *(_QWORD *)(a1 + 8) = 1LL;
            }
            goto LABEL_10;
          }
          forc_debug::debugger::commands::DebugCommand::parse_memory(&v14, v6, v5);
        }
        goto LABEL_7;
      }
      if ( !v5 )
      {
        v4 = 0x8000000000000001LL;
        goto LABEL_10;
      }
      v12 = a1 + 16;
      v13 = aContinueComman;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v12, v13);
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_10;
  }
  forc_debug::debugger::commands::DebugCommand::parse_start_tx(&v14, v6, v5);
LABEL_7:
  if ( v14.m256i_i64[0] != 0x8000000000000007LL )
  {
    v9 = *(_OWORD *)v14.m256i_i8;
    v10 = *(_OWORD *)&v14.m256i_u64[2];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    return a1;
  }
  *(_QWORD *)(a1 + 32) = v14.m256i_i64[3];
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v14.m256i_u64[1];
  *(_QWORD *)(a1 + 8) = 0LL;
LABEL_10:
  *(_QWORD *)a1 = v4;
  return a1;
}