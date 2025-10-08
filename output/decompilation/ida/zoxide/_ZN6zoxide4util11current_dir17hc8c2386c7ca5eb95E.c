__int64 __fastcall zoxide::util::current_dir(__int64 a1)
{
  _BYTE v2[40]; // [rsp+0h] [rbp-28h] BYREF

  std::env::current_dir(v2);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a1, v2);
}