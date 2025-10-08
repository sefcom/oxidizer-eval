__int64 __fastcall alacritty::input::Processor<T,A>::mouse_report(_QWORD *a1, char a2, unsigned __int8 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // r13
  unsigned int v9; // r12d
  _DWORD *v10; // rbp
  char v11; // bp
  __int64 v12; // rdi
  unsigned __int8 v13; // bp
  _BYTE v14[88]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a1[1];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v4);
  v5 = a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v14);
  result = alacritty::event::Mouse::point(*(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40), (__int64)v14);
  if ( v7 >= 0 )
  {
    v8 = result;
    v9 = v7;
    v10 = (_DWORD *)a1[5];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v10);
    v11 = *v10 & 4 | (*v10 >> 5) & 8 | ((unsigned __int8)*v10 >> 1) & 0x10;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v4);
    if ( (*(_BYTE *)(v4 + 1756) & 0x20) != 0 )
    {
      return alacritty::input::Processor<T,A>::sgr_mouse_report(*a1, v8, v9, (unsigned __int8)(a2 + v11), a3);
    }
    else
    {
      v12 = *a1;
      if ( a3 )
        v13 = v11 | 3;
      else
        v13 = a2 + v11;
      return alacritty::input::Processor<T,A>::normal_mouse_report(v12, v4, v8, v9, v13);
    }
  }
  return result;
}