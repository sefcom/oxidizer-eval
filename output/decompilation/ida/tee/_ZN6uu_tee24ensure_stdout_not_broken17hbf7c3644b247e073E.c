__int64 __fastcall uu_tee::ensure_stdout_not_broken(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v4; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v5[4]; // [rsp+10h] [rbp-A8h] BYREF
  int v6; // [rsp+30h] [rbp-88h]

  std::io::stdio::stdout();
  nix::sys::stat::fstat(v5, 1LL);
  if ( LODWORD(v5[0]) == 1 )
  {
    *(_QWORD *)(a1 + 8) = ((unsigned __int64)HIDWORD(v5[0]) << 32) | 2;
    *(_BYTE *)a1 = 1;
  }
  else if ( (v6 & 0x1000) != 0 )
  {
    v4 = 0x8000000001LL;
    if ( (nix::poll::poll(&v4) & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = (v1 << 32) | 2;
      v2 = 1;
    }
    else
    {
      if ( (int)v1 <= 0 )
        core::panicking::panic(aInternalErrorE_0, 40LL, &off_EA5B0);
      v5[0] = &v4;
      v5[1] = v5;
      *(_BYTE *)(a1 + 1) = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v5) ^ 1;
      v2 = 0;
    }
    *(_BYTE *)a1 = v2;
  }
  else
  {
    *(_WORD *)a1 = 256;
  }
  return a1;
}