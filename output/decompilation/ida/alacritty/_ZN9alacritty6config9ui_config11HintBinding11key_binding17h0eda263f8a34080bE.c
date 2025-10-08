__int64 __fastcall alacritty::config::ui_config::HintBinding::key_binding(__int64 a1, __int64 a2)
{
  return core::cell::once::OnceCell<T>::get_or_try_init(a1 + 40, a1, a2);
}