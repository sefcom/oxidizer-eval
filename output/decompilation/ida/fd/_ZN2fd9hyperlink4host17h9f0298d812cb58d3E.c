__int64 __fastcall fd::hyperlink::host(__int64 a1)
{
  return *(_QWORD *)(std::sync::once_lock::OnceLock<T>::get_or_try_init(a1) + 8);
}