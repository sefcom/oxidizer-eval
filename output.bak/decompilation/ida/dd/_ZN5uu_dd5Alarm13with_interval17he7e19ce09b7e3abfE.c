__int64 __fastcall uu_dd::Alarm::with_interval(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v4[2]; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-50h]
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  _BYTE v8[32]; // [rsp+48h] [rbp-20h] BYREF

  v4[0] = 1LL;
  v4[1] = 1LL;
  LOBYTE(v5) = 0;
  v3 = alloc::boxed::Box<T>::new(v4);
  v6[0] = alloc::sync::Arc<T,A>::downgrade(&v3);
  v6[1] = 1LL;
  v7 = 0;
  v5 = 0x8000000000000000LL;
  v4[0] = 0LL;
  std::thread::Builder::spawn_unchecked(v8, v4, v6);
  core::result::Result<T,E>::expect(v4, v8);
  core::ptr::drop_in_place<std::thread::JoinHandle<()>>(v4);
  v1 = v3;
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v1;
  return a1;
}
