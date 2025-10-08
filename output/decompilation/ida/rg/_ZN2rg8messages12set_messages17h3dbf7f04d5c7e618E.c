__int64 __fastcall rg::messages::set_messages(unsigned int a1)
{
  return core::sync::atomic::atomic_store(&rg::messages::MESSAGES, a1, 0LL);
}