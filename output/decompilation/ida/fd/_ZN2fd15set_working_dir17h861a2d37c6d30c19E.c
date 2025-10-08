__int64 __fastcall fd::set_working_dir(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v6[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v7[6]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+58h] [rbp-30h] BYREF

  result = 0LL;
  if ( !__OFSUB__(0LL, a1[48]) )
  {
    v2 = a1[49];
    v3 = a1[50];
    if ( (unsigned __int8)fd::filesystem::is_existing_directory(v2, v3) )
    {
      v4 = std::env::set_current_dir(a1 + 48);
      return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v4, v2, v3);
    }
    else
    {
      alloc::string::String::from_utf8_lossy(v8, v2);
      v6[0] = v8;
      v6[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      v7[0] = &off_402828;
      v7[1] = 2LL;
      v7[4] = 0LL;
      v7[2] = v6;
      v7[3] = 1LL;
      core::option::Option<T>::map_or_else(v9, 0LL, v5, v7);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v8);
      return anyhow::error::<impl anyhow::Error>::msg(v9);
    }
  }
  return result;
}