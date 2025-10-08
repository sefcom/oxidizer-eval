void *__fastcall fd::exec::CommandBuilder::new_command(_QWORD *dest, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _BYTE v6[264]; // [rsp+0h] [rbp-108h] BYREF

  if ( !a3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_402230);
  argmax::Command::new(v6);
  std::process::Command::stdin(v6);
  std::process::Command::stdout(v6);
  std::process::Command::stderr(v6);
  if ( (argmax::Command::try_args(v6, a2 + 24, a3 - 1) & 1) == 0 )
    return memcpy(dest, v6, 0xE8uLL);
  dest[1] = v4;
  *dest = 0x8000000000000000LL;
  return (void *)core::ptr::drop_in_place<argmax::Command>(v6);
}