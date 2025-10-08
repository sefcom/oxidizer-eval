__int64 __fastcall uu_cp::copydir::get_local_to_root_parent(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( !a4 || std::path::Path::strip_prefix(a2, a3, a4, a5) )
    return std::path::Path::to_path_buf();
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}