
  fn just::search::Search::search_parent_directory::h53a5a1157ef24091(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64, arg5: i64) -> i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if rax != 0
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: u64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
        
        if rax_1 != 0
        {
            /* tailcall */
            return just::search::Search::find_in_directory::h02746fb8a7674a3d(arg1, arg4, arg5, 
                rax_1, rdx_1);
        }
    }
    
    let mut result_1: i64;
    _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&result_1, arg2, arg3);
    let result: i64 = result_1;
    *arg1.byte_offset(8) = -0x7ffffffffffffffd;
    arg1[1] = result;
    let var_38: i128;
    *arg1.byte_offset(0x18) = var_38;
    *arg1 = -0x8000000000000000;
    result
}
