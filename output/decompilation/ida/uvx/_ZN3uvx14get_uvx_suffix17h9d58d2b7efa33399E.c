__int64 uvx::get_uvx_suffix()
{
  __int64 v0; // rax
  _BYTE v2[8]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v3; // [rsp+8h] [rbp-10h]
  __int64 v4; // [rsp+10h] [rbp-8h]

  v0 = std::path::Path::file_name();
  if ( v0 && (core::str::converts::from_utf8(v2, v0), (v2[0] & 1) == 0) )
    return <&str as core::str::pattern::Pattern>::strip_prefix_of(v3, v4);
  else
    return 0LL;
}