__int64 __fastcall uu_uniq::handle_obsolete::{{closure}}(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-40h]
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF

  v1 = <alloc::string::String as core::ops::deref::Deref>::deref();
  core::str::<impl str>::parse(v5, v1, v2);
  v4 = core::result::Result<T,E>::ok(v5);
  core::ptr::drop_in_place<alloc::string::String>(a1);
  return v4;
}
