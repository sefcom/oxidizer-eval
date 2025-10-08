__int64 __fastcall uu_csplit::split_name::SplitName::get(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v7; // [rsp+8h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v7, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v4 = uucore::features::format::Format<F,T>::fmt(a2 + 24, &v7, a3);
  core::result::Result<T,E>::unwrap(v4);
  alloc::string::String::from_utf8_lossy(&v10, v8, v9);
  v5 = v11;
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1, v11, v12);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v10, v5);
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, v8);
}