__int64 __fastcall alacritty::window_context::WindowContext::reset_window_config(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi

  alacritty::message_bar::MessageBuffer::remove_target(a1 + 7376, (__int64)aAlacrittyLogWi, 27LL);
  v4 = *(_QWORD *)(a1 + 7680);
  v5 = *(_QWORD *)(a1 + 7688);
  *(_QWORD *)(a1 + 7688) = 0LL;
  core::ptr::drop_in_place<[(alloc::string::String,toml::value::Value)]>(v4, v5);
  return alacritty::window_context::WindowContext::update_config(a1, a2);
}