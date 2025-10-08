unsigned __int64 __fastcall alacritty::event::ActionContext<N,T>::goto_match(_QWORD *a1, __int64 a2)
{
  const __m128i *v2; // r14
  unsigned __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int32 v15; // ebp
  int v16; // r12d
  int v17; // r13d
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-218h]
  __m128i v21[2]; // [rsp+8h] [rbp-210h] BYREF
  __int64 v22; // [rsp+28h] [rbp-1F0h]
  _QWORD v23[30]; // [rsp+30h] [rbp-1E8h] BYREF
  _QWORD v24[31]; // [rsp+120h] [rbp-F8h] BYREF

  v2 = (const __m128i *)a1[13];
  result = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v2), (__m128i)xmmword_E8640));
  if ( (_DWORD)result != 0xFFFF )
  {
    v4 = a1[1];
    v5 = core::option::Option<T>::filter(a2, *(_QWORD *)(v4 + 80));
    v7 = v6;
    v8 = v2[278].m128i_u8[12];
    v9 = alacritty_terminal::index::Point::grid_clamp(v2[275].m128i_i64[0], v2[275].m128i_u32[2], v4, 1LL);
    alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::search_next(
      (int)v21,
      v4,
      (int)v2,
      v9,
      v10,
      v8,
      0,
      v5,
      v7);
    if ( (_BYTE)v22 == 2 )
    {
      if ( v5 == 1 )
      {
        v11 = a1[6] + 800LL;
        v12 = alacritty::display::window::Window::id(v11);
        v13 = a1[12];
        if ( !(unsigned __int8)alacritty::scheduler::Scheduler::scheduled(v13, v12) )
        {
          v23[0] = 0x8000000000000009LL;
          v14 = alacritty::display::window::Window::id(v11);
          alacritty::event::Event::new(v24, v23, v14);
          alacritty::scheduler::Scheduler::schedule(v13, (unsigned int)v24, 0, 500000000, 0, v12, 1);
        }
        v2[278].m128i_i8[0] = 2;
      }
      else
      {
        alacritty::event::ActionContext<N,T>::search_reset_state(a1);
      }
    }
    else
    {
      v20 = v21[0].m128i_i64[0];
      v15 = v21[0].m128i_i32[2];
      v16 = *(_DWORD *)(v4 + 200);
      v17 = *(_DWORD *)(v4 + 1756);
      alacritty_terminal::term::Term<T>::scroll_to_point(v4, v21[0].m128i_i32[2]);
      if ( (v17 & 0x10000) != 0 )
      {
        *(_QWORD *)(v4 + 656) = v20;
        *(_DWORD *)(v4 + 664) = v15;
        alacritty_terminal::term::Term<T>::vi_mode_recompute_selection(v4);
      }
      v2[278].m128i_i64[0] = v22;
      v18 = _mm_loadu_si128(v21);
      v2[277] = v21[1];
      v2[276] = v18;
      v2[278].m128i_i32[2] += v16 - *(_DWORD *)(v4 + 200);
      v19 = alacritty::display::window::Window::id(a1[6] + 800LL);
      alacritty::scheduler::Scheduler::unschedule(v23, a1[12], v19, 1LL);
      core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(v23);
    }
    result = a1[15];
    *(_BYTE *)result = 1;
  }
  return result;
}