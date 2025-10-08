__int64 __fastcall rg::messages::set_ignore_messages(unsigned int a1)
{
  return core::sync::atomic::atomic_store(&rg::messages::IGNORE_MESSAGES, a1, 0LL);
}