bool rg::messages::errored()
{
  return (unsigned __int8)core::sync::atomic::atomic_load(&rg::messages::ERRORED, 0LL) != 0;
}