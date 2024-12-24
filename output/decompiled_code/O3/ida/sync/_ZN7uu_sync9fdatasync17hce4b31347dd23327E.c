__int64 __fastcall uu_sync::fdatasync(__int64 a1)
{
  uu_sync::platform::do_fdatasync(a1);
  return 0LL;
}
