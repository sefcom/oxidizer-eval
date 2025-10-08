// attributes: thunk
__int64 uu_pinky::platform::unix::idle_string()
{
  return std::thread::local::LocalKey<T>::with();
}