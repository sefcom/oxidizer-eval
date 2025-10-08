__int64 __fastcall alacritty::window_context::WindowContext::draw(const __m128i *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // [rsp-28h] [rbp-28h]

  a1[344].m128i_i8[1] = 0;
  if ( !a1[483].m128i_i8[10] )
  {
    v12 = result;
    a1[483].m128i_i8[8] = 0;
    alacritty::display::Display::process_renderer_update((__int64)a1[279].m128i_i64);
    if ( !alacritty::display::bell::VisualBell::completed((__int64)a1[369].m128i_i64) )
    {
      if ( a1[344].m128i_i8[0] )
      {
        if ( !a1[344].m128i_i8[1] )
        {
          a1[344].m128i_i8[1] = 1;
          winit::window::Window::request_redraw(&a1[331], a2, v7, v8, v9, v10, v12, v3, v4, v5, v6);
        }
      }
      else
      {
        a1[483].m128i_i8[8] = 1;
      }
    }
    v11 = a1[481].m128i_i64[1] + 16;
    alacritty_terminal::sync::FairMutex<T>::lock(v11);
    alacritty::display::Display::draw(
      (__int64)a1[279].m128i_i64,
      v11,
      a2,
      (__int64)a1[461].m128i_i64,
      a1[482].m128i_i64[0] + 16,
      a1);
  }
  return result;
}