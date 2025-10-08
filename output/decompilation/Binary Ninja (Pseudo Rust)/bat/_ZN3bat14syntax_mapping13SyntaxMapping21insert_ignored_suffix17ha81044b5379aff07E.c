
  fn bat::syntax_mapping::SyntaxMapping::insert_ignored_suffix::ha81044b5379aff07(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    /* tailcall */
    bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::add_suffix::h4573027403ec263a(
        arg1.byte_offset(0x18), arg2, arg3)
}
