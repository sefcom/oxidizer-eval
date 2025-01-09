__int64 __fastcall uu_env::string_expander::StringExpander::put_string(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]
  __int64 v6; // [rsp+18h] [rbp-10h]

  v5 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v6 = v2;
  v4 = 0x8000000000000000LL;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a1,
    v5,
    v5 + v2);
  return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v4);
}
