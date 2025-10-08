_BOOL8 zoxide::util::current_time()
{
  int v0; // edx
  __int64 v2; // [rsp+8h] [rbp-40h] BYREF
  int v3; // [rsp+10h] [rbp-38h]
  __int64 v4; // [rsp+18h] [rbp-30h] BYREF
  int v5; // [rsp+20h] [rbp-28h]
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = std::time::SystemTime::now();
  v5 = v0;
  std::time::SystemTime::duration_since(v6, &v4, 0LL, 0LL);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v2, v6);
  return v3 == 1000000000;
}