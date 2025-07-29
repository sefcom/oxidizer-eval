__int64 metal_crusher::fun::is_gnome()
{
  unsigned int is_contained_in; // ebx
  _BYTE v2[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+10h] [rbp-38h]
  __int64 v4; // [rsp+18h] [rbp-30h]
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  std::env::var(v5, aXdgCurrentDesk, 19LL);
  if ( (v5[0] & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v5);
    return 0LL;
  }
  else
  {
    core::result::Result<T,E>::unwrap(v2, v5, &off_596640);
    is_contained_in = <&str as core::str::pattern::Pattern>::is_contained_in(aGnome, 5LL, v3, v4);
    core::ptr::drop_in_place<alloc::string::String>(v2);
    return is_contained_in;
  }
}