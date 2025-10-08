void *__fastcall forc_debug::server::handlers::<impl forc_debug::server::DapServer>::handle_continue(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  void *result; // rax
  _BYTE src[240]; // [rsp+8h] [rbp-F0h] BYREF

  forc_debug::server::DapServer::continue_debugging_tests(src, a2, 0LL);
  if ( src[0] == 51 )
  {
    v2 = src[1] == 0;
    *(_BYTE *)(a1 + 16) = 51;
    result = (void *)0x8000000000000004LL;
    *(_QWORD *)(a1 + 24) = 0x8000000000000004LL;
    *(_BYTE *)(a1 + 32) = 1;
    if ( v2 )
    {
      *(_QWORD *)a1 = 1LL;
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    result = memcpy((void *)(a1 + 16), src, 0xE8uLL);
    *(_QWORD *)a1 = 1LL;
    *(_QWORD *)(a1 + 8) = 1LL;
  }
  return result;
}