__int64 rg::messages::set_errored()
{
  return core::sync::atomic::atomic_store(&rg::messages::ERRORED, 1LL, 0LL);
}