__int64 __fastcall uu_who::platform::unix::idle_string(__int64 a1, __int64 a2)
{
  return std::thread::local::LocalKey<T>::with(a1, 0LL, a2);
}