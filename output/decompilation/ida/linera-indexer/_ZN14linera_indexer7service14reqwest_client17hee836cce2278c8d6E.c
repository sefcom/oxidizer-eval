__int64 linera_indexer::service::reqwest_client()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  _QWORD v3[60]; // [rsp+0h] [rbp-288h] BYREF
  int v4; // [rsp+1E0h] [rbp-A8h]

  <reqwest::async_impl::client::ClientBuilder as core::default::Default>::default(v3);
  v3[59] = 30LL;
  v4 = 0;
  v0 = reqwest::async_impl::client::ClientBuilder::build(v3);
  return core::result::Result<T,E>::unwrap(v0, v1);
}