__int64 __fastcall alacritty_terminal::term::cell::Cell::set_underline_color(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  if ( (_BYTE)a2 != 3 || (v2 = *a1) != 0 && (*(_QWORD *)(v2 + 32) || *(_QWORD *)(v2 + 40)) )
  {
    v3 = <alloc::sync::Arc<T> as core::default::Default>::default();
    core::option::Option<T>::get_or_insert_with(a1, v3);
    result = alloc::sync::Arc<T,A>::make_mut(a1);
    *(_BYTE *)(result + 32) = a2;
    *(_BYTE *)(result + 35) = a2 >> 8 >> 16;
    *(_WORD *)(result + 33) = a2 >> 8;
  }
  else
  {
    result = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<alacritty_terminal::term::cell::CellExtra>>>(a1);
    *a1 = 0LL;
  }
  return result;
}