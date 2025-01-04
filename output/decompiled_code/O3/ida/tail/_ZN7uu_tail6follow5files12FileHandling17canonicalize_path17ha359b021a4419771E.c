__int64 __fastcall uu_tail::follow::files::FileHandling::canonicalize_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+18h] [rbp-20h]

  if ( (unsigned __int8)std::path::Path::is_absolute(a2, a3)
    || (unsigned __int8)<std::path::Path as uu_tail::paths::PathExtTail>::is_stdin(a2, a3) )
  {
    return std::path::Path::to_path_buf(a1, a2, a3);
  }
  std::fs::canonicalize(&v5, a2, a3);
  if ( (_QWORD)v5 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v5);
    return std::path::Path::to_path_buf(a1, a2, a3);
  }
  result = v6;
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  return result;
}
