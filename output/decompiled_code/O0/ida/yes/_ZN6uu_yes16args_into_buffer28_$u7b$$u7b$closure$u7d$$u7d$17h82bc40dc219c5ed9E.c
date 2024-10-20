__int64 __fastcall uu_yes::args_into_buffer::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = <std::ffi::os_str::OsString as core::ops::deref::Deref>::deref(a2);
  return <std::ffi::os_str::OsStr as std::os::unix::ffi::os_str::OsStrExt>::as_bytes(v2, v3);
}
