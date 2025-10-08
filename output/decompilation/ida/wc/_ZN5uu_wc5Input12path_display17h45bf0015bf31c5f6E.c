__int64 __fastcall uu_wc::Input::path_display(__int64 a1, _QWORD *a2)
{
  if ( *a2 == 0x8000000000000001LL )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
             a1,
             "standard inputalwaysneverinternal error: entered unreachable code: Should have been caught by clap(uutils c"
             "oreutils) 0.0.30Display newline, word, and byte counts for each FILE, and a total line if\n"
             "more than one FILE is specified. With no FILE, or when FILE is -, read standard input.{} [OPTION]... [FILE]"
             "...print the byte countsprint the character countsFread input from the files specified by\n"
             "  NUL-terminated names in file F;\n"
             "  If F is - then read names from standard inputprint the newline countsprint the length of the longest line"
             "when to print a line with total counts;\n"
             "  WHEN can be: auto, always, only, neverprint the word countscannot open  for readingAll escaped names with"
             " the escaping option return valid strings.: read error: \n"
             "<stdin>",
             14LL);
  else
    return uu_wc::escape_name_wrapper(a1, a2[1], a2[2]);
}