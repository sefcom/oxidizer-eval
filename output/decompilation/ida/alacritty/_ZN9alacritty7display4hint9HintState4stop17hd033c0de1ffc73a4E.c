__int64 __fastcall alacritty::display::hint::HintState::stop(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = a1;
  a1[5] = 0LL;
  v2 = a1[7];
  v3 = v1[8];
  v1[8] = 0LL;
  core::ptr::drop_in_place<[alloc::vec::Vec<char>]>(v2, v3);
  v1[11] = 0LL;
  v1 += 12;
  result = core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<alacritty::config::ui_config::Hint>>>(v1);
  *v1 = 0LL;
  return result;
}