__int64 __fastcall alacritty::input::Processor<T,A>::mouse_moved(_QWORD *a1, double a2, double a3)
{
  unsigned int v3; // edx
  unsigned int v4; // ebp
  __int64 v5; // r14
  bool v6; // r13
  __int64 v7; // r12
  char is_empty; // al
  bool v9; // r13
  __int64 v10; // rax
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // esi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbp
  char v17; // bp
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // r15d
  unsigned __int8 v21; // bl
  bool v22; // r12
  __int64 result; // rax
  unsigned __int8 v24; // bl
  __int64 v25; // rax
  _BYTE *v26; // rbx
  int v27; // ebx
  __int64 v28; // rsi
  char v29; // [rsp+Fh] [rbp-89h]
  unsigned int v30; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  unsigned __int8 v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+30h] [rbp-68h]
  int v36; // [rsp+3Ch] [rbp-5Ch]
  _BYTE v37[16]; // [rsp+40h] [rbp-58h] BYREF
  float v38; // [rsp+50h] [rbp-48h]
  float v39; // [rsp+54h] [rbp-44h]

  v35 = a1[6];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::size_info(v37);
  v30 = dpi::<impl core::convert::From<dpi::PhysicalPosition<P>> for (X,X)>::from(a2, a3);
  v4 = v3;
  v5 = a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  v29 = *(_BYTE *)(v5 + 52);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  v6 = *(_BYTE *)(v5 + 54) == 0;
  v7 = a1[1];
  is_empty = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::selection_is_empty(v7);
  v9 = v29 == 0 || v6;
  if ( v9 && !is_empty )
    alacritty::input::Processor<T,A>::update_selection_scrolling(v35, a1[12], v4);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v7);
  v32 = v7;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  v10 = alacritty::event::Mouse::point(*(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40), (__int64)v37);
  v12 = (int)v38;
  if ( v38 > 2147483500.0 )
    v12 = 0x7FFFFFFF;
  v33 = v10;
  v36 = v11;
  v13 = core::cmp::Ord::clamp(v30, (unsigned int)(v12 - 1));
  v14 = (int)v39;
  if ( v39 > 2147483500.0 )
    v14 = 0x7FFFFFFF;
  v15 = v13;
  v16 = (int)core::cmp::Ord::clamp(v4, (unsigned int)(v14 - 1));
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  *(_QWORD *)(v5 + 32) = v15;
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  *(_QWORD *)(v5 + 40) = v16;
  v17 = alacritty::display::SizeInfo::contains_point((__int64)v37, v15, v16);
  LOBYTE(v15) = alacritty::input::Processor<T,A>::cell_side(v35, v15);
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  v18 = alacritty::event::Mouse::point(*(_QWORD *)(v5 + 32), *(_QWORD *)(v5 + 40), (__int64)v37);
  v20 = v19;
  v21 = v15;
  v31 = v18;
  v22 = v36 != v19 || v33 != v18;
  if ( v22
    || (<alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5),
        *(_BYTE *)(v5 + 55) != v21)
    || (result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5),
        v17 != *(_BYTE *)(v5 + 58)) )
  {
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
    *(_BYTE *)(v5 + 58) = v17;
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
    v34 = v21;
    *(_BYTE *)(v5 + 55) = v21;
    v24 = alacritty::input::Processor<T,A>::cursor_state(a1);
    v25 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(v35);
    if ( v24 != *(_BYTE *)(v25 + 245) )
    {
      *(_BYTE *)(v25 + 245) = v24;
      winit::window::Window::set_cursor(*(_QWORD *)(v25 + 32), *(_QWORD *)(v25 + 40), v24);
    }
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
    *(_BYTE *)(v5 + 57) = 1;
    result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
    *(_BYTE *)(v5 + 56) = 1;
    if ( v9 )
    {
      v26 = (_BYTE *)a1[5];
      <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v26);
      if ( (*v26 & 4) != 0 )
        return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::update_selection(
                 a1,
                 v31,
                 v20,
                 v34);
      result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::mouse_mode(v32);
      if ( !(_BYTE)result )
        return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::update_selection(
                 a1,
                 v31,
                 v20,
                 v34);
    }
    if ( v22 )
    {
      result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v32);
      v27 = *(_DWORD *)(v32 + 1756);
      if ( (v27 & 0x2040) != 0 )
      {
        if ( v29 )
        {
          <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
          if ( *(_BYTE *)(v5 + 53) )
          {
            <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
            if ( *(_BYTE *)(v5 + 54) )
            {
              result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(v32);
              if ( (v27 & 0x40) == 0 )
                return result;
              v28 = 35LL;
            }
            else
            {
              v28 = 34LL;
            }
          }
          else
          {
            v28 = 33LL;
          }
        }
        else
        {
          v28 = 32LL;
        }
        return alacritty::input::Processor<T,A>::mouse_report(a1, v28, 0LL);
      }
    }
  }
  return result;
}