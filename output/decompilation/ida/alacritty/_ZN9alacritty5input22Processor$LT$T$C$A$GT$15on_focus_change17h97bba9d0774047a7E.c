__int64 __fastcall alacritty::input::Processor<T,A>::on_focus_change(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  const char *v6; // rcx
  _QWORD v7[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v8[2]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v9[6]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v10[48]; // [rsp+58h] [rbp-30h] BYREF

  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::terminal_mut(a2);
  if ( (*(_BYTE *)(a2 + 1757) & 8) != 0 )
  {
    v6 = aO_3;
    if ( a3 )
      v6 = (const char *)&unk_10359E;
    v7[0] = v6;
    v7[1] = 1LL;
    v8[0] = v7;
    v8[1] = <&T as core::fmt::Display>::fmt;
    v9[0] = &off_882C60;
    v9[1] = 1LL;
    v9[4] = 0LL;
    v9[2] = v8;
    v9[3] = 1LL;
    core::option::Option<T>::map_or_else(v10, 0LL, v5, v9);
    return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(a1, v10);
  }
  return result;
}