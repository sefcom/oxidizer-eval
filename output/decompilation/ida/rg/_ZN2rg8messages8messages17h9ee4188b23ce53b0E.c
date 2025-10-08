bool rg::messages::messages()
{
  return (unsigned __int8)core::sync::atomic::atomic_load(&rg::messages::MESSAGES, 0LL) != 0;
}