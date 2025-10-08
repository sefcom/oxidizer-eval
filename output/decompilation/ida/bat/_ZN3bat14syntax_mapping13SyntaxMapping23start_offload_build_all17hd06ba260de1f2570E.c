__int64 __fastcall bat::syntax_mapping::SyntaxMapping::start_offload_build_all(__int64 a1)
{
  char v1; // of
  __int64 v2; // rt0
  _QWORD v4[5]; // [rsp+0h] [rbp-58h] BYREF
  char v5; // [rsp+28h] [rbp-30h]
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = _InterlockedIncrement64(*(volatile signed __int64 **)(a1 + 48));
  if ( (v2 < 0) ^ v1 | (v2 == 0) )
    BUG();
  v4[2] = 0x8000000000000000LL;
  v4[0] = 0LL;
  v5 = 0;
  std::thread::Builder::spawn_unchecked(v6, v4);
  core::result::Result<T,E>::expect(v4, v6);
  return core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v4);
}