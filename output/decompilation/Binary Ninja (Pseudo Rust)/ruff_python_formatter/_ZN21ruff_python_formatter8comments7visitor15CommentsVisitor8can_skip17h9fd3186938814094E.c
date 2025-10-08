
  fn ruff_python_formatter::comments::visitor::CommentsVisitor::can_skip::h9fd3186938814094(arg1: *mut i32, arg2: i32) -> *mut i32

{
    let mut result: *mut i32 = *
        core::option::Option$LT$T$GT$::get_or_insert_with::h54dda6ace5d5614b(arg1, 
        arg1.byte_offset(0x10));
    
    if result != 0
    {
        result = *result >= arg2;
        return result;
    }
    
    result = 1;
    result
}
