unsigned __int64 __fastcall bat::output::BuiltinPager::new(__int64 a1)
{
  unsigned __int64 result; // rax
  __int128 v2; // xmm0
  __int128 v3; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v4; // [rsp+10h] [rbp-A8h]
  char v5; // [rsp+28h] [rbp-90h]
  _OWORD v6[2]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v7[2]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v8[2]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+90h] [rbp-28h] BYREF

  minus::pager::Pager::new(v6);
  <minus::pager::Pager as core::clone::Clone>::clone(v8, v6);
  v7[1] = v8[1];
  v7[0] = v8[0];
  v4 = 0x8000000000000000LL;
  *(_QWORD *)&v3 = 0LL;
  v5 = 0;
  std::thread::Builder::spawn_unchecked(v9, &v3, v7);
  core::result::Result<T,E>::expect(&v3, v9);
  result = v4;
  *(_QWORD *)(a1 + 48) = v4;
  *(_OWORD *)(a1 + 32) = v3;
  v2 = v6[0];
  *(_OWORD *)(a1 + 16) = v6[1];
  *(_OWORD *)a1 = v2;
  return result;
}