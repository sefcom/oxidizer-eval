__int64 __fastcall metal_crusher::fun::run_in_terminal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[4]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v8[5]; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+48h] [rbp-30h]
  _BYTE v10[40]; // [rsp+50h] [rbp-28h] BYREF

  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  v7[3] = a4;
  v8[2] = 0x8000000000000000LL;
  v8[0] = 0LL;
  v9 = 0;
  ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, __int64, __int64, __int64))std::thread::Builder::spawn_unchecked)(
    v10,
    v8,
    v7,
    a4,
    a5,
    a6);
  core::result::Result<T,E>::expect(v8, v10);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v8);
  return 0LL;
}