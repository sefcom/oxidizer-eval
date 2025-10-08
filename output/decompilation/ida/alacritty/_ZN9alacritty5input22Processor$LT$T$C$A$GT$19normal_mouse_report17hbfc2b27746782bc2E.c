char __fastcall alacritty::input::Processor<T,A>::normal_mouse_report(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5)
{
  unsigned int v8; // r12d
  unsigned __int64 v9; // rcx
  char result; // al
  __int64 v11; // rax
  int v12; // r12d
  __int128 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h]
  __int128 v15; // [rsp+18h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]

  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(a2);
  v8 = *(_DWORD *)(a2 + 1756);
  v9 = 223LL;
  if ( (v8 & 0x4000) != 0 )
    v9 = 2015LL;
  result = a4 >= (int)v9;
  if ( a4 < (int)v9 && a3 < v9 )
  {
    v11 = alloc::alloc::Global::alloc_impl(1LL, 4LL, 0LL);
    if ( !v11 )
      alloc::alloc::handle_alloc_error(1LL, 4LL);
    v12 = (v8 >> 14) & 1;
    *(_WORD *)v11 = 23323;
    *(_BYTE *)(v11 + 2) = 77;
    *(_BYTE *)(v11 + 3) = a5 + 32;
    *(_QWORD *)&v15 = 4LL;
    *((_QWORD *)&v15 + 1) = v11;
    v16 = 4LL;
    if ( ((unsigned __int8)v12 & (a3 >= 0x5F)) != 0 )
    {
      alacritty::input::Processor<T,A>::normal_mouse_report::{{closure}}(&v13, a3);
      alloc::vec::Vec<T,A>::append_elements(&v15, *((_QWORD *)&v13 + 1), v14);
      v14 = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
    }
    else
    {
      alloc::vec::Vec<T,A>::push(&v15, (unsigned __int8)(a3 + 33), &off_882D80);
    }
    if ( ((unsigned __int8)v12 & (a4 >= 95)) != 0 )
    {
      alacritty::input::Processor<T,A>::normal_mouse_report::{{closure}}(&v13, (unsigned int)a4);
      alloc::vec::Vec<T,A>::append_elements(&v15, *((_QWORD *)&v13 + 1), v14);
      v14 = 0LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v13);
    }
    else
    {
      alloc::vec::Vec<T,A>::push(&v15, (unsigned __int8)(a4 + 33), &off_882D98);
    }
    v14 = v16;
    v13 = v15;
    return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(a1, &v13);
  }
  return result;
}