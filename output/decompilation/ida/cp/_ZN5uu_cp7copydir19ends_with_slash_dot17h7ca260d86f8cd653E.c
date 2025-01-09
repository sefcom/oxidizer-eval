__int64 uu_cp::copydir::ends_with_slash_dot()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  _BYTE v3[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-20h]
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = <&T as core::convert::AsRef<U>>::as_ref();
  v6[1] = v0;
  <T as alloc::string::ToString>::to_string(v3, v6);
  v1 = core::slice::<impl [T]>::ends_with(v4, v5, asc_2D6D7, 2LL);
  core::ptr::drop_in_place<alloc::string::String>(v3);
  return v1;
}
