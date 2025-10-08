__int64 __fastcall uu_dd::Alarm::with_interval(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // [rsp+0h] [rbp-88h]
  _QWORD v6[2]; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-70h]
  char v8; // [rsp+30h] [rbp-58h]
  _QWORD v9[2]; // [rsp+38h] [rbp-50h] BYREF
  int v10; // [rsp+48h] [rbp-40h]
  _BYTE v11[56]; // [rsp+50h] [rbp-38h] BYREF

  v6[0] = 1LL;
  v6[1] = 1LL;
  LOBYTE(v7) = 0;
  v5 = alloc::boxed::Box<T>::new(v6);
  alloc::sync::Arc<T,A>::downgrade(v5);
  v9[0] = v5;
  v9[1] = a2;
  v10 = a3;
  v7 = 0x8000000000000000LL;
  v6[0] = 0LL;
  v8 = 0;
  std::thread::Builder::spawn_unchecked(v11, v6, v9);
  core::result::Result<T,E>::expect(v6, v11);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v6);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = v5;
  return a1;
}