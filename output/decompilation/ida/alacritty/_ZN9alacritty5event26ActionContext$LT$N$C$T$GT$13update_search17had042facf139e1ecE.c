__int64 __fastcall alacritty::event::ActionContext<N,T>::update_search(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // rsi
  __m128i v5; // kr00_16
  __m128i v6; // [rsp+0h] [rbp-2218h] BYREF
  _QWORD src[542]; // [rsp+10h] [rbp-2208h] BYREF
  _QWORD dest[542]; // [rsp+1100h] [rbp-1118h] BYREF

  dest[31] = 0LL;
  src[61] = 0LL;
  v1 = a1[13];
  result = alacritty::event::SearchState::regex(v1);
  if ( result )
  {
    if ( *(_BYTE *)(a1[8] + 464LL) )
    {
      v3 = result;
      alacritty::display::window::Window::set_mouse_visible(a1[6] + 800LL, 0);
      result = v3;
    }
    if ( *(_QWORD *)(result + 16) )
    {
      v4 = *(_QWORD *)(result + 8);
      alacritty_terminal::term::search::RegexSearch::new(&v6);
      v5 = v6;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(&v6), (__m128i)xmmword_E8640)) == 0xFFFF )
        core::ptr::drop_in_place<core::result::Result<alacritty_terminal::term::search::RegexSearch,alloc::boxed::Box<regex_automata::hybrid::error::BuildError>>>(
          &v6,
          v4);
      else
        memcpy(dest, src, sizeof(dest));
      core::ptr::drop_in_place<core::option::Option<alacritty_terminal::term::search::RegexSearch>>(v1);
      *(__m128i *)v1 = v5;
      memcpy((void *)(v1 + 16), dest, 0x10F0uLL);
      alacritty::event::ActionContext<N,T>::goto_match(a1, 1LL);
    }
    else
    {
      alacritty::event::ActionContext<N,T>::search_reset_state(a1);
      core::ptr::drop_in_place<core::option::Option<alacritty_terminal::term::search::RegexSearch>>(v1);
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)v1 = 2LL;
    }
    result = a1[15];
    *(_BYTE *)result = 1;
  }
  return result;
}