__int64 __fastcall uu_wc::count_fast::count_bytes_fast(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  _QWORD v9[2053]; // [rsp+0h] [rbp-4028h] BYREF

  v9[1536] = 0LL;
  v9[1024] = 0LL;
  v9[512] = 0LL;
  v1 = 0LL;
  nix::sys::stat::fstat(v9, 0LL);
  if ( !LODWORD(v9[0]) )
  {
    if ( (v9[4] & 0x1000LL) != 0 )
    {
      v2 = uu_wc::count_fast::count_bytes_using_splice(a1);
      v1 = v3;
      if ( !v2 )
        return v1;
    }
    else
    {
      v1 = 0LL;
    }
  }
  memset(v9, 0, 0x4000uLL);
  v4 = v1;
  do
  {
    v1 = v4;
    while ( 1 )
    {
      v5 = <std::io::stdio::StdinLock as std::io::Read>::read(a1, v9, 0x4000LL);
      v7 = v6;
      if ( !v5 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v6) != 35 )
        return v1;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v7);
    }
    v4 = v1 + v6;
  }
  while ( v6 );
  return v1;
}
