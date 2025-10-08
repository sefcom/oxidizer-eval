__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 field; // rax

  v5 = *(_QWORD *)(a4 + 16);
  if ( !v5 )
    return 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    if ( a5 != v9 )
    {
      v10 = std::ffi::os_str::<impl core::convert::AsRef<std::ffi::os_str::OsStr> for alloc::string::String>::as_ref(
              a1,
              a2);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v10);
      if ( result )
        break;
      field = uu_join::Line::get_field(a4, v9);
      if ( !field )
        core::option::unwrap_failed(&off_FD2C8);
      result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, field);
      if ( result )
        break;
    }
    if ( v5 == ++v9 )
      return 0LL;
  }
  return result;
}