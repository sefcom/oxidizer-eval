__int64 __fastcall uu_env::string_expander::StringExpander::put_string(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a1,
    v2,
    v2 + v3);
  return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000LL, v2);
}