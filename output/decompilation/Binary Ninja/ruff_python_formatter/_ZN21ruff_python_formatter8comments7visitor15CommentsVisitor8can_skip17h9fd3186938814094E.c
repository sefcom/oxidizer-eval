
  int32_t* ruff_python_formatter::comments::visitor::CommentsVisitor::can_skip::h9fd3186938814094(int32_t* arg1, int32_t arg2)

{
    int32_t* result =
        *core::option::Option$LT$T$GT$::get_or_insert_with::h54dda6ace5d5614b(arg1, arg1 + 0x10);
    
    if (result)
    {
        result = *result >= arg2;
        return result;
    }
    
    result = 1;
    return result;
}
