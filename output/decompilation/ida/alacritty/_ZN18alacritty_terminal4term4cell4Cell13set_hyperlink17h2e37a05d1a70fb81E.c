__int64 __fastcall alacritty_terminal::term::cell::Cell::set_hyperlink(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 mut; // r14
  __int64 result; // rax
  __int64 v6; // rax
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a2;
  if ( a2 || (v6 = *a1) != 0 && (*(_QWORD *)(v6 + 32) || *(_BYTE *)(v6 + 48) != 3) )
  {
    v3 = <alloc::sync::Arc<T> as core::default::Default>::default();
    core::option::Option<T>::get_or_insert_with(a1, v3);
    v7[1] = a2;
    mut = alloc::sync::Arc<T,A>::make_mut(a1);
    result = core::ptr::drop_in_place<core::option::Option<alacritty_terminal::term::cell::Hyperlink>>(mut + 24);
    *(_QWORD *)(mut + 24) = a2;
  }
  else
  {
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<alacritty_terminal::term::cell::CellExtra>>>(a1);
    *a1 = 0LL;
    return core::ptr::drop_in_place<core::option::Option<alacritty_terminal::term::cell::Hyperlink>>(v7);
  }
  return result;
}