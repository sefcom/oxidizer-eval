void __fastcall __noreturn fd::exit_codes::ExitCode::exit(char a1)
{
  unsigned __int8 v1; // al
  int v2; // ebx
  _DWORD v3[6]; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1 - 2;
  if ( (unsigned __int8)(a1 - 2) >= 4u )
    v1 = 1;
  v2 = v1;
  switch ( v1 )
  {
    case 0u:
      break;
    case 1u:
      std::process::exit((a1 & 1) == 0);
    case 2u:
      std::process::exit(1);
    case 3u:
      nix::sys::signal::signal(v3, 2LL, 0LL);
      v2 = 130;
      if ( v3[0] != 4 )
      {
        nix::sys::signal::raise(2LL);
        std::process::exit(130);
      }
      return;
  }
  std::process::exit(v2);
}