
  fn ruff_python_formatter::comments::visitor::CommentPlacement::or_else::h1eeeae6cff7d3bf8(arg1: *mut i64, arg2: *mut i32, arg3: *mut i8, arg4: i64) -> *mut i32

{
    if *arg2 <= 0x5d
    {
        /* tailcall */
        return ruff_python_formatter::comments::placement::handle_own_line_comment_around_body::_$u7b$$u7b$closure$u7d$$u7d$::h485e9d6a5f0dc71a(arg1, arg3, arg4, arg2);
    }
    
    *arg1.byte_offset(0x40) = *arg2.byte_offset(0x40);
    let zmm0: i128 = *arg2;
    let zmm1: i128 = *arg2.byte_offset(0x10);
    let zmm2: i128 = *arg2.byte_offset(0x20);
    *arg1.byte_offset(0x30) = *arg2.byte_offset(0x30);
    *arg1.byte_offset(0x20) = zmm2;
    *arg1.byte_offset(0x10) = zmm1;
    *arg1 = zmm0;
    arg2
}
