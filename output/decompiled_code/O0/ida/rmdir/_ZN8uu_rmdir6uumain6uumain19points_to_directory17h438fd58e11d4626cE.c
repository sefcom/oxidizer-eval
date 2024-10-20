__int64 __fastcall uu_rmdir::uumain::uumain::points_to_directory(__int64 a1)
{
  char v1; // al
  _QWORD v3[7]; // [rsp+0h] [rbp-B8h] BYREF
  int v4; // [rsp+38h] [rbp-80h]

  std::sys::pal::unix::fs::stat(v3);
  if ( v3[0] == 2LL )
  {
    *(_QWORD *)(a1 + 8) = v3[1];
    v1 = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 1) = (v4 & 0xF000) == 0x4000;
    v1 = 0;
  }
  *(_BYTE *)a1 = v1;
  return a1;
}
