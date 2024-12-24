__int64 __fastcall uu_wc::count_fast::count_bytes_fast(int *a1)
{
  int v1; // ebp
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int16 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD s[2054]; // [rsp+0h] [rbp-4030h] BYREF

  s[1536] = 0LL;
  s[1024] = 0LL;
  s[512] = 0LL;
  s[0] = 0LL;
  v1 = *a1;
  nix::sys::stat::fstat(s, (unsigned int)*a1);
  if ( LODWORD(s[0]) )
  {
    v2 = 0LL;
LABEL_3:
    memset(s, 0, 0x4000uLL);
    do
    {
      v3 = v2;
      while ( 1 )
      {
        v4 = <std::fs::File as std::io::Read>::read(a1, s, 0x4000LL);
        v6 = v5;
        if ( !v4 )
          break;
        if ( (unsigned __int8)std::io::error::Error::kind(v5) != 35 )
          return v3;
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v6);
      }
      v2 += v5;
    }
    while ( v5 );
    return v3;
  }
  v7 = s[4];
  v2 = 0LL;
  if ( v1 > 0 && SLOWORD(s[4]) < 0 )
  {
    v3 = s[7];
    if ( s[7] > 0LL )
    {
      v8 = s[8];
      v9 = sysconf(30);
      if ( !v9 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_131F20);
      if ( (v3 | v9) >> 32 )
      {
        if ( v3 % v9 )
          return v3;
      }
      else if ( (unsigned int)v3 % (unsigned int)v9 )
      {
        return v3;
      }
      v10 = v8 + 1;
      if ( !v10 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_131F38);
      if ( (v10 | (unsigned __int64)v3) >> 32 )
        v11 = v3 % v10;
      else
        v11 = (unsigned int)v3 % (unsigned int)v10;
      v2 = 0LL;
      v12 = <std::fs::File as std::io::Seek>::seek(a1, 0LL, v3 - v11);
      if ( !v12 )
        v2 = v13;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v12, v13);
    }
  }
  if ( (v7 & 0x1000) == 0 )
    goto LABEL_3;
  v14 = uu_wc::count_fast::count_bytes_using_splice((__int64)a1);
  v2 = v15;
  v3 = v15;
  if ( v14 )
    goto LABEL_3;
  return v3;
}
