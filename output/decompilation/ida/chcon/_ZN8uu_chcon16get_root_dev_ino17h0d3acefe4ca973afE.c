__int64 __fastcall uu_chcon::get_root_dev_ino(__int64 a1)
{
  int v2; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-B0h]
  __int128 v4; // [rsp+20h] [rbp-98h]

  std::fs::symlink_metadata(&v2);
  if ( v2 == 2 )
  {
    uu_chcon::errors::Error::from_io1(a1, v3);
  }
  else
  {
    *(_OWORD *)(a1 + 8) = v4;
    *(_DWORD *)a1 = 18;
  }
  return a1;
}