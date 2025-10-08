__int64 __fastcall alacritty::input::Processor<T,A>::on_mouse_press(_QWORD *a1, unsigned __int16 a2, __int16 a3)
{
  _BYTE *v5; // rdi
  __int64 v6; // r14
  __int64 result; // rax
  char v8; // al
  __int64 v9; // r12
  unsigned int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // r14
  unsigned int v13; // edx
  int v14; // eax
  char v15; // r15
  unsigned int v16; // [rsp+4h] [rbp-64h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  _BYTE v18[88]; // [rsp+10h] [rbp-58h] BYREF

  v5 = (_BYTE *)a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v5);
  if ( (*v5 & 4) != 0
    || (v5 = (_BYTE *)a1[1],
        !(unsigned __int8)<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v5)) )
  {
    v9 = std::time::Instant::now(v5);
    v11 = v10;
    v12 = a1[3];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    v17 = <std::time::Instant as core::ops::arith::Sub>::sub(v9, v11, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
    v16 = v13;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    *(_QWORD *)v12 = v9;
    *(_DWORD *)(v12 + 8) = v11;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    if ( a2 == *(_WORD *)(v12 + 48) && (a2 != 5 || a3 == *(_WORD *)(v12 + 50)) )
    {
      v14 = *(unsigned __int8 *)(v12 + 59);
      if ( v14 == 1 )
      {
        v15 = (v17 == 0 && v16 < 0x17D78400) + 1;
      }
      else
      {
        v15 = 1;
        if ( v14 == 2 )
          v15 = 2 * (v17 == 0 && v16 < 0x17D78400) + 1;
      }
    }
    else
    {
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
      *(_WORD *)(v12 + 48) = a2;
      *(_WORD *)(v12 + 50) = a3;
      v15 = 1;
    }
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    *(_BYTE *)(v12 + 59) = v15;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(a1[1]);
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v12);
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v18);
    result = alacritty::event::Mouse::point(*(_QWORD *)(v12 + 32), *(_QWORD *)(v12 + 40), (__int64)v18);
    if ( !a2 )
      return alacritty::input::Processor<T,A>::on_left_click(a1, result);
  }
  else
  {
    v6 = a1[3];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v6);
    *(_BYTE *)(v6 + 59) = 0;
    result = a2;
    switch ( a2 )
    {
      case 0u:
        v8 = 0;
        goto LABEL_17;
      case 1u:
        v8 = 2;
        goto LABEL_17;
      case 2u:
        v8 = 1;
LABEL_17:
        result = alacritty::input::Processor<T,A>::mouse_report(a1, v8, 0);
        break;
      case 3u:
      case 4u:
      case 5u:
        return result;
    }
  }
  return result;
}