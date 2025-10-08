__int64 __fastcall alacritty::renderer::text::builtin_font::Canvas::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a1, a2 * a3);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  return result;
}