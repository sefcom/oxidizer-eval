__int64 __fastcall alacritty::window_context::WindowContext::add_window_config(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  alacritty::message_bar::MessageBuffer::remove_target(a1 + 7376, (__int64)aAlacrittyLogWi, 27LL);
  alloc::vec::Vec<T,A>::extend_trusted(a1 + 7672, a3, a3 + 56 * a4, &off_884398);
  return alacritty::window_context::WindowContext::update_config(a1, a2);
}