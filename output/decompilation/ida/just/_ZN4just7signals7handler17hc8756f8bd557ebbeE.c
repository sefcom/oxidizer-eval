__int64 __fastcall just::signals::handler(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v5; // rsi
  const char *v6; // rdi
  __int64 v7; // rdx
  char v8; // [rsp+7h] [rbp-21h] BYREF
  _DWORD v9[8]; // [rsp+8h] [rbp-20h] BYREF

  v1 = nix::errno::<impl nix::errno::consts::Errno>::last();
  if ( a1 >= 0x100 )
  {
    v5 = 17LL;
    v6 = aUnexpectedSign_0;
    goto LABEL_8;
  }
  v2 = v1;
  v3 = core::sync::atomic::atomic_load();
  if ( v3 == -1 )
    core::option::expect_failed(aFd1, 8LL, &off_430FB0);
  v8 = a1;
  nix::unistd::write(v9, v3, &v8, 1LL);
  if ( v9[0] == 1 )
  {
    v6 = (const char *)nix::errno::<impl nix::errno::consts::Errno>::desc(v9[1]);
    v5 = v7;
LABEL_8:
    just::signals::die((__int64)v6, v5);
  }
  return nix::errno::<impl nix::errno::consts::Errno>::set(v2);
}