__int64 __fastcall fd::determine_ls_command(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp-6h] [rbp-8h] BYREF

  v4 = v2;
  HIBYTE(v4) = a2;
  fd::determine_ls_command::{{closure}}(a1, (char *)&v4 + 7);
  return v4;
}