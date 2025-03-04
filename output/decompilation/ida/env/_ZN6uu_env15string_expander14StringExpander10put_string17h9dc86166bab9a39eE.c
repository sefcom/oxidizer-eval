__int64 __fastcall uu_env::string_expander::StringExpander::put_string(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]

  v11 = <std::ffi::os_str::OsString as core::convert::AsRef<std::ffi::os_str::OsStr>>::as_ref(
          *(_QWORD *)(a2 + 8),
          *(_QWORD *)(a2 + 16));
  v12 = v3;
  v10 = 0x8000000000000000LL;
  v4 = v11;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a1,
    v11,
    v11 + v3);
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v10);
  return core::ptr::drop_in_place<std::ffi::os_str::OsString>(a2, v4, v5, v6, v7, v8, v10, v11, v12);
}
