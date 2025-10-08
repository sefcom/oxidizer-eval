
  fn uu_ls::colors::StyleManager::apply_normal::h69c01341e2d260d1(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let result: *mut i128 = uu_ls::colors::StyleManager::get_normal_style::h68940fba9ff7dfe3(*arg2);
    
    if result != 0
    {
        let var_1b: i64 = *result.byte_offset(0xd);
        let mut var_28: i128 = *result;
        return uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(arg1, arg2, &var_28);
    }
    
    *arg1 = 0;
    *arg1.byte_offset(8) = 1;
    arg1[1] = 0;
    result
}
