_BYTE *__fastcall alacritty::event::ActionContext<N,T>::update_cursor_blinking(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax
  char v4; // r14
  unsigned __int8 v5; // bp
  int v6; // r15d
  char v7; // al
  __int64 v8; // rbp
  bool v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  _BYTE *result; // rax
  char v13; // [rsp+4h] [rbp-134h]
  _BYTE v14[296]; // [rsp+10h] [rbp-128h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE **)(a1 + 64);
  v4 = v3[982];
  v5 = v3[983];
  v6 = *(_DWORD *)(v2 + 1756);
  if ( (v6 & 0x10000) != 0 && v3[980] != 4 )
  {
    v5 = v3[981];
    v4 = v3[980];
  }
  v7 = alacritty_terminal::term::Term<T>::cursor_style(v2);
  if ( v4 != 3 && (unsigned int)v5 - 1 >= 2 )
  {
    if ( v5 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      v13 = 1;
      if ( (v6 & 0x10001) != 0 )
        goto LABEL_9;
LABEL_11:
      v9 = 0;
      goto LABEL_12;
    }
    v7 = 0;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v13 = v7;
  if ( (v6 & 0x10001) == 0 )
    goto LABEL_11;
LABEL_9:
  v9 = *(_DWORD *)(v8 + 720) == 2;
LABEL_12:
  v10 = alacritty::display::window::Window::id(v8 + 800);
  v11 = *(_QWORD *)(a1 + 96);
  alacritty::scheduler::Scheduler::unschedule(v14, v11, v10, 2LL);
  core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(v14);
  alacritty::scheduler::Scheduler::unschedule(v14, v11, v10, 3LL);
  core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(v14);
  **(_BYTE **)(a1 + 72) = 0;
  if ( (v9 & (unsigned __int8)v13) != 0 && *(_BYTE *)(v2 + 1762) == 1 )
  {
    alacritty::event::ActionContext<N,T>::schedule_blinking(a1);
    return (_BYTE *)alacritty::event::ActionContext<N,T>::schedule_blinking_timeout(a1);
  }
  else
  {
    *(_BYTE *)(v8 + 2102) = 0;
    result = *(_BYTE **)(a1 + 120);
    *result = 1;
  }
  return result;
}