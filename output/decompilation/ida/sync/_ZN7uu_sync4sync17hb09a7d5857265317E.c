__int64 uu_sync::sync()
{
  uu_sync::platform::do_sync();
  return 0LL;
}