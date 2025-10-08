__int64 __fastcall uu_tail::paths::Input::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 result; // rax
  __int128 v6; // [rsp+8h] [rbp-70h] BYREF
  __int64 v7; // [rsp+18h] [rbp-60h]
  __int128 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  <uu_tail::paths::InputKind as core::convert::From<&std::ffi::os_str::OsStr>>::from(&v10, v2);
  if ( __OFSUB__(-(__int64)v10, 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, aStandardInput, 14LL);
    v9 = v7;
    v8 = v6;
  }
  else
  {
    alloc::string::String::from_utf8_lossy(&v6, v2, v4);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8, *((_QWORD *)&v6 + 1), v7);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
  }
  *(_QWORD *)(a1 + 40) = v11;
  *(_OWORD *)(a1 + 24) = v10;
  *(_OWORD *)a1 = v8;
  result = v9;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}