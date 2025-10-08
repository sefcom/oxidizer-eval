__int64 __fastcall uu_rmdir::uumain::uumain::points_to_directory(__int64 a1)
{
  char v1; // al
  int v3; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v4; // [rsp+8h] [rbp-B0h]
  int v5; // [rsp+38h] [rbp-80h]

  std::fs::metadata(&v3);
  if ( v3 == 2 )
  {
    *(_QWORD *)(a1 + 8) = v4;
    v1 = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = (v5 & 0xF000) == 0x4000;
    v1 = 0;
  }
  *(_BYTE *)a1 = v1;
  return a1;
}