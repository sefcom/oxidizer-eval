__int64 __fastcall firecracker::seccomp::SeccompConfig::from_args(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v4[4]; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+4h] [rbp-14h]
  __int64 v6; // [rsp+8h] [rbp-10h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 21;
  }
  else if ( a3 )
  {
    std::fs::File::open(v4, a3);
    if ( (v4[0] & 1) != 0 )
    {
      result = v6;
      *(_BYTE *)a1 = 20;
      *(_QWORD *)(a1 + 8) = result;
    }
    else
    {
      result = v5;
      *(_DWORD *)(a1 + 4) = 2;
      *(_DWORD *)(a1 + 8) = result;
      *(_BYTE *)a1 = 21;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 1;
    *(_BYTE *)a1 = 21;
  }
  return result;
}