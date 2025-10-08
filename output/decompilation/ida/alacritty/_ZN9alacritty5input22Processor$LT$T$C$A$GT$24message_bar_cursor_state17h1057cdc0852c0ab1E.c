char __fastcall alacritty::input::Processor<T,A>::message_bar_cursor_state(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rcx
  char result; // al
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+8h] [rbp-80h] BYREF
  float v13; // [rsp+24h] [rbp-64h]
  float v14; // [rsp+2Ch] [rbp-5Ch]
  _BYTE v15[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = (unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v12);
  v2 = (unsigned int)(int)v14;
  if ( v14 < 0.0 )
    v2 = 0LL;
  if ( v14 > 1.8446743e19 )
    v2 = -1LL;
  v3 = (unsigned int)(int)v13;
  if ( v13 < 0.0 )
    v3 = 0LL;
  if ( v13 > 1.8446743e19 )
    v3 = -1LL;
  v4 = v12[0] + v1;
  v5 = a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(a1[1]);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v15);
  v6 = *(_QWORD *)(v5 + 40);
  v7 = alacritty::event::Mouse::point(*(_QWORD *)(v5 + 32), v6, (__int64)v15);
  v8 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::message(a1[7], v6);
  result = 36;
  if ( v8 )
  {
    v10 = v2 + v3 * v4;
    v11 = *(_QWORD *)(v5 + 40);
    if ( v11 > v10 )
    {
      if ( v11 <= v3 + v10 )
        return 3 * ((unsigned __int64)(v7 + 3) >= v12[1]);
      else
        return 0;
    }
  }
  return result;
}