__int64 just::main()
{
  __int64 result; // rax
  int v1; // edx
  _BYTE v2[40]; // [rsp+0h] [rbp-28h] BYREF

  std::env::args_os(v2);
  result = just::run::run((__int64)v2);
  if ( (result & 1) != 0 )
    std::process::exit(v1);
  return result;
}