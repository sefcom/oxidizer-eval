
  uint64_t ruff_python_formatter::comments::Comments::contains_comments::ha623dea00b22d660(int64_t* arg1, void* arg2)

{
    void* rdi = *arg1;
    int64_t* var_20 = 0x3d;
    char var_18 = arg2;
    int64_t result;
    result = 1;
    
    if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(rdi + 0x40, 
            &var_20))
        return result;
    
    var_20 = arg1;
    var_18 = 0;
    ruff_python_ast::generated::AnyNodeRef::visit_source_order::h412f3303938f1097(arg2, &var_20);
    return var_18;
}
