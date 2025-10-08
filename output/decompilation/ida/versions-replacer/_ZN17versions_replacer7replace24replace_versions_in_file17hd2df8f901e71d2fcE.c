__int64 __fastcall versions_replacer::replace::replace_versions_in_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v9 = <&T as core::convert::AsRef<U>>::as_ref();
  v10 = v4;
  std::fs::read_to_string(&v13, v9);
  eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err_with(&v7, &v13, &v9);
  if ( __OFSUB__(-(__int64)v7, 1LL) )
    return 1LL;
  v11 = v7;
  v12 = v8;
  versions_replacer::replace::replace_versions_in_string(&v13, *((_QWORD *)&v7 + 1), v8, a3);
  v8 = v14;
  v7 = v13;
  if ( v15
    && (v6 = std::fs::write(v9, v10, *((_QWORD *)&v7 + 1), v8),
        eyre::context::<impl eyre::WrapErr<T,E> for core::result::Result<T,E>>::wrap_err_with(v6, &v9)) )
  {
    core::ptr::drop_in_place<regex::error::Error>(&v7);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    return 1LL;
  }
  else
  {
    core::ptr::drop_in_place<regex::error::Error>(&v7);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    return 0LL;
  }
}