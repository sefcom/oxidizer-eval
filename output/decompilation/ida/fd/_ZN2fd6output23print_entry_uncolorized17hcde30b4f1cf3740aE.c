__int64 __fastcall fd::output::print_entry_uncolorized(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a3 + 485) || !__OFSUB__(-*(_QWORD *)(a3 + 360), 1LL) )
    return fd::output::print_entry_uncolorized_base(a1, a2, a3);
  v4 = fd::dir_entry::DirEntry::stripped_path((__int64)a2, *(_BYTE *)(a3 + 487));
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, v4);
  if ( !result )
    return fd::output::print_trailing_slash(a1, a2, *(_QWORD *)(a3 + 184), *(_QWORD *)(a3 + 192), 0LL);
  return result;
}