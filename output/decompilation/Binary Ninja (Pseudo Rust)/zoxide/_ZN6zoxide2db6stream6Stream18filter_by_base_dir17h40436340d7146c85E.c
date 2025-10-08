
  fn zoxide::db::stream::Stream::filter_by_base_dir::h40436340d7146c85(arg1: *mut c_void, arg2: *mut i8, arg3: i64) -> i64

{
    if !(0 + -(*arg1.byte_offset(0x30)))
    {
        /* tailcall */
        return std::path::Path::starts_with::h4b8298ea2f2dff17(arg2, arg3, arg1.byte_offset(0x30));
    }
    
    let mut rax: i64;
    rax = 1;
    1
}
