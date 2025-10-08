__int64 __fastcall uu_wc::count_fast::count_bytes_fast(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD s[2054]; // [rsp+0h] [rbp-4030h] BYREF

  s[1536] = 0LL;
  s[1024] = 0LL;
  s[512] = 0LL;
  s[0] = 0LL;
  v1 = 0LL;
  nix::sys::stat::fstat(s, 0LL);
  if ( (s[0] & 1) == 0 )
  {
    if ( (s[4] & 0x1000LL) != 0 )
    {
      v2 = uu_wc::count_fast::count_bytes_using_splice(s);
      v1 = v3;
      if ( (v2 & 1) == 0 )
        return v1;
    }
    else
    {
      v1 = 0LL;
    }
  }
  memset(s, 0, 0x4000uLL);
  v4 = v1;
  do
  {
    v1 = v4;
    while ( 1 )
    {
      v6 = <std::io::stdio::StdinLock as std::io::Read>::read(a1, s, 0x4000LL);
      v7 = v5;
      if ( (v6 & 1) == 0 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) != 35 )
        return v1;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v6, v7);
    }
    v4 = v1 + v5;
  }
  while ( v5 );
  return v1;
}