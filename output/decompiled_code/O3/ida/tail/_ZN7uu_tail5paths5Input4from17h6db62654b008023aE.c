__int64 __fastcall uu_tail::paths::Input::from(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int128 v6; // [rsp+8h] [rbp-60h] BYREF
  __int64 v7; // [rsp+18h] [rbp-50h]
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = v3;
  <uu_tail::paths::InputKind as core::convert::From<&std::ffi::os_str::OsStr>>::from(&v10, v2);
  if ( (_QWORD)v10 == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v6, "standard input/dev/stdin/dev/fd/0 <==\n\n", 14LL);
    v9 = v7;
    v8 = v6;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_string_lossy(&v6, v2, v4);
    <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(&v8, *((_QWORD *)&v6 + 1), v7);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v6);
  }
  *(_QWORD *)(a1 + 40) = v11;
  *(_OWORD *)(a1 + 24) = v10;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 16) = v9;
  return a1;
}
