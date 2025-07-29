__int64 metal_crusher::music::play_audio()
{
  _QWORD v1[5]; // [rsp+0h] [rbp-58h] BYREF
  char v2; // [rsp+28h] [rbp-30h]
  _BYTE v3[40]; // [rsp+30h] [rbp-28h] BYREF

  v1[2] = 0x8000000000000000LL;
  v1[0] = 0LL;
  v2 = 0;
  std::thread::Builder::spawn_unchecked(v3, v1);
  core::result::Result<T,E>::expect(v1, v3);
  return core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v1);
}