__int64 __fastcall metal_crusher::fun::run_in_terminal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v6[5]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+48h] [rbp-30h]
  _BYTE v8[40]; // [rsp+50h] [rbp-28h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v5[3] = a4;
  v6[2] = 0x8000000000000000LL;
  v6[0] = 0LL;
  v7 = 0;
  ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *))std::thread::Builder::spawn_unchecked)(v8, v6, v5);
  core::result::Result<T,E>::expect(v6, v8);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v6);
  return 0LL;
}