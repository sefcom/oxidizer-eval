__int64 __fastcall fuel_core_version::get_version_file_path(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = <&T as core::convert::AsRef<U>>::as_ref(a2);
  v4 = std::path::Path::parent(v2, v3);
  if ( v4 )
    return std::path::Path::join(a1, v4);
  a1[1] = eyre::error::<impl eyre::Report>::from_display();
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}