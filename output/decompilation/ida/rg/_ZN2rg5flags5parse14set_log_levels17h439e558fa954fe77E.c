__int64 __fastcall rg::flags::parse::set_log_levels(unsigned __int8 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi

  rg::messages::set_messages(a1[578] ^ 1);
  rg::messages::set_ignore_messages(a1[575] ^ 1);
  v1 = a1[599];
  v2 = v1 + 4;
  if ( v1 == 2 )
    v2 = 2LL;
  return core::sync::atomic::atomic_store(&log::MAX_LOG_LEVEL_FILTER, v2, 0LL);
}