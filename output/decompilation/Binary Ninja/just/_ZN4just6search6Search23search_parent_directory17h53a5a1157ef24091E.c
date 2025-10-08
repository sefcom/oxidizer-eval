
  int64_t just::search::Search::search_parent_directory::h53a5a1157ef24091(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4, int64_t arg5)

{
    char* rax;
    int64_t rdx;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if (rax)
    {
        char* rax_1;
        uint64_t rdx_1;
        rax_1 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
        
        if (rax_1)
            /* tailcall */
            return just::search::Search::find_in_directory::h02746fb8a7674a3d(arg1, arg4, arg5, 
                rax_1, rdx_1);
    }
    
    int64_t result_1;
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&result_1, arg2, arg3);
    int64_t result = result_1;
    *(arg1 + 8) = -0x7ffffffffffffffd;
    arg1[1] = result;
    int128_t var_38;
    *(arg1 + 0x18) = var_38;
    *arg1 = -0x8000000000000000;
    return result;
}
