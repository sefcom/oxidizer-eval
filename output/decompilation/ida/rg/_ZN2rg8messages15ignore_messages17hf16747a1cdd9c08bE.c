bool rg::messages::ignore_messages()
{
  return (unsigned __int8)core::sync::atomic::atomic_load(&rg::messages::IGNORE_MESSAGES, 0LL) != 0;
}