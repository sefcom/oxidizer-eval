__int64 __fastcall flealib::systemcmd::SystemCmd::get_process_list(__int64 a1, __int64 a2)
{
  flealib::systemcmd::SystemCmd::execute_bash_command(a1, a2, (__int64)aPsAux, 6LL);
  return a1;
}