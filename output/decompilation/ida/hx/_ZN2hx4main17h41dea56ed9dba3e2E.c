__int64 hx::main()
{
  _DWORD v1[2]; // [rsp+8h] [rbp-10h] BYREF
  __int64 v2; // [rsp+10h] [rbp-8h]

  hx::main_impl(v1);
  if ( v1[0] != 1 )
    std::process::exit(v1[1]);
  return v2;
}