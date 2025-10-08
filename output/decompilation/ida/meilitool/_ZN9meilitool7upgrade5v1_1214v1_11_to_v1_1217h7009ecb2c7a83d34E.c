__int64 __fastcall meilitool::upgrade::v1_12::v1_11_to_v1_12(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v4; // [rsp+20h] [rbp-28h]

  v3[0] = &off_526308;
  v3[1] = 1LL;
  v3[2] = 8LL;
  v4 = 0LL;
  std::io::stdio::_print(v3);
  return meilitool::upgrade::v1_12::convert_update_files(a1, a2);
}