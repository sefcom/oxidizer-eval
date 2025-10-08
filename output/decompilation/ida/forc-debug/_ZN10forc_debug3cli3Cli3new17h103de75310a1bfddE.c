char *__fastcall forc_debug::cli::Cli::new(char *dest)
{
  char v1; // bp
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // r14
  __int128 v8; // [rsp+10h] [rbp-918h]
  _QWORD v9[139]; // [rsp+20h] [rbp-908h] BYREF
  _QWORD v10[6]; // [rsp+478h] [rbp-4B0h] BYREF
  _BYTE v11[24]; // [rsp+4A8h] [rbp-480h] BYREF
  _QWORD src[136]; // [rsp+4C0h] [rbp-468h] BYREF

  *(_QWORD *)v11 = 100LL;
  *(_QWORD *)&v11[8] = 100LL;
  *(_QWORD *)&v11[16] = 8LL;
  src[0] = 2LL;
  LOWORD(src[1]) = 0;
  *(_QWORD *)((char *)&src[1] + 4) = 0x100000100000101LL;
  WORD2(src[2]) = 0;
  BYTE6(src[2]) = 0;
  rustyline::config::Builder::edit_mode(v10, v11, 1LL);
  v10[0] = 100LL;
  rustyline::Editor<H,rustyline::history::FileHistory>::with_config(v11, v10);
  if ( *(_QWORD *)v11 == 2LL )
  {
    *(_OWORD *)&v11[7] = *(_OWORD *)&v11[8];
    dest[8] = 60;
    *(_OWORD *)(dest + 9) = *(_OWORD *)v11;
    *((_QWORD *)dest + 3) = *(_QWORD *)&v11[15];
    *(_QWORD *)dest = 2LL;
  }
  else
  {
    memcpy(&v9[3], src, 0x440uLL);
    *(_OWORD *)&v9[1] = *(_OWORD *)&v11[8];
    v9[0] = *(_QWORD *)v11;
    v9[55] = aStartTx;
    v9[56] = 8LL;
    v9[57] = &off_1F8CC38;
    v9[58] = 3LL;
    v9[59] = aStartANewTrans;
    v9[60] = 23LL;
    v9[61] = aReset_1;
    v9[62] = 5LL;
    v9[63] = 8LL;
    v9[64] = 0LL;
    v9[65] = aResetDebuggerS;
    v9[66] = 20LL;
    v9[67] = aContinue_1;
    v9[68] = 8LL;
    v9[69] = &off_1F8CC68;
    v9[70] = 1LL;
    v9[71] = aContinueExecut;
    v9[72] = 18LL;
    v9[73] = "stepBURNDIVIU256CodeCharcom1\x02";
    v9[74] = 4LL;
    v9[75] = &off_1F8CC78;
    v9[76] = 1LL;
    v9[77] = aStepExecution;
    v9[78] = 14LL;
    v9[79] = aBreakpoint_2;
    v9[80] = 10LL;
    v9[81] = &off_1F8CC88;
    v9[82] = 1LL;
    v9[83] = aSetBreakpoint;
    v9[84] = 14LL;
    v9[85] = aRegister;
    v9[86] = 8LL;
    v9[87] = &off_1F8CC98;
    v9[88] = 3LL;
    v9[89] = aViewRegisters;
    v9[90] = 14LL;
    v9[91] = aMemory_1;
    v9[92] = 6LL;
    v9[93] = &off_1F8CCC8;
    v9[94] = 2LL;
    v9[95] = aViewMemory;
    v9[96] = 11LL;
    v9[97] = "quitdeclthenWordSha1";
    v9[98] = 4LL;
    v9[99] = &off_1F8CCE8;
    v9[100] = 1LL;
    v9[101] = aExitDebugger;
    v9[102] = 13LL;
    v9[103] = aHelp;
    v9[104] = 4LL;
    v9[105] = &off_1F8CCF8;
    v9[106] = 2LL;
    v9[107] = aShowHelpForCom;
    v9[108] = 22LL;
    forc_debug::cli::get_history_file_path(v11);
    v1 = v11[0];
    if ( v11[0] == 61 )
    {
      v2 = *(_QWORD *)&v11[8];
      v3 = *(_QWORD *)&v11[16];
      v4 = src[0];
      <rustyline::history::FileHistory as rustyline::history::History>::load(v11, &v9[36], *(_QWORD *)&v11[16], src[0]);
      core::ptr::drop_in_place<core::result::Result<(),rustyline::error::ReadlineError>>(v11);
      memcpy(dest, v9, 0x458uLL);
      *((_QWORD *)dest + 139) = v2;
      *((_QWORD *)dest + 140) = v3;
      *((_QWORD *)dest + 141) = v4;
    }
    else
    {
      v5 = *(_DWORD *)&v11[1];
      *((_DWORD *)dest + 3) = *(_DWORD *)&v11[4];
      *(_DWORD *)(dest + 9) = v5;
      v8 = *(_OWORD *)&v11[8];
      v6 = src[0];
      memcpy(dest + 40, &src[1], 0xC8uLL);
      dest[8] = v1;
      *((_OWORD *)dest + 1) = v8;
      *((_QWORD *)dest + 4) = v6;
      *(_QWORD *)dest = 2LL;
      core::ptr::drop_in_place<rustyline::Editor<forc_debug::cli::state::DebuggerHelper,rustyline::history::FileHistory>>(v9);
    }
  }
  return dest;
}