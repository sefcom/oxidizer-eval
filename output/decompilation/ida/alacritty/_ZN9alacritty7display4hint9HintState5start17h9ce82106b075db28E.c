__int64 __fastcall alacritty::display::hint::HintState::start(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<alacritty::config::ui_config::Hint>>>(a1 + 96);
  *(_QWORD *)(a1 + 96) = a2;
  return result;
}