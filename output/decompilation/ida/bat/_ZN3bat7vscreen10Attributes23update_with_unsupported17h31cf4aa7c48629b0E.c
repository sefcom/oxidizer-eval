__int64 __fastcall bat::vscreen::Attributes::update_with_unsupported(__int64 a1, __int64 a2, __int64 a3)
{
  return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
           a1 + 96,
           a2,
           a2 + a3);
}