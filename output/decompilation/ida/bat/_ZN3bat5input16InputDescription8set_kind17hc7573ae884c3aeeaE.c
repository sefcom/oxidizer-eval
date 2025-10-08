__int64 __fastcall bat::input::InputDescription::set_kind(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  core::ptr::drop_in_place<regex::error::Error>(a1 + 48);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 64) = result;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  return result;
}