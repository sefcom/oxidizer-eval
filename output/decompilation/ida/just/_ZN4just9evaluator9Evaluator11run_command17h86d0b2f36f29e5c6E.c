__int64 __fastcall just::evaluator::Evaluator::run_command(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r12
  __int64 v11; // [rsp+10h] [rbp-208h]
  _BYTE src[224]; // [rsp+28h] [rbp-1F0h] BYREF
  _BYTE dest[272]; // [rsp+108h] [rbp-110h] BYREF

  v9 = a2[2];
  v11 = *a2;
  just::settings::Settings::shell_command(src);
  std::process::Command::arg(src, a3, a4);
  std::process::Command::args(src, a5, a6);
  just::execution_context::ExecutionContext::working_directory(dest, v9, a2[3]);
  std::process::Command::current_dir(src, dest);
  <std::process::Command as just::command_ext::CommandExt>::export(src, v9 + 168, a2[1], a2 + 5, v9 + 568);
  std::process::Command::stdin(src, 0LL);
  std::process::Command::stderr(src, *(_BYTE *)(v11 + 423) == 0);
  std::process::Command::stdout(src, 2LL);
  memcpy(dest, src, 0xE0uLL);
  return <std::process::Command as just::command_ext::CommandExt>::output_guard_stdout(a1, dest);
}