bool __fastcall alacritty::renderer::GlExtensions::contains(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = std::sync::once_lock::OnceLock<T>::get_or_try_init(a1);
  return hashbrown::map::HashMap<K,V,S,A>::get_inner(v2, a1, a2) != 0;
}