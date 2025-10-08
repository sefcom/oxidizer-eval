
  fn fd::output::print_entry_uncolorized_base::h04738a32bb27dd9f(arg1: i64, arg2: *mut i32, arg3: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *arg3.byte_offset(0x1e7));
    let mut var_78: i128;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, rax, rdx);
    let mut var_60: *const i8;
    
    if !(0 + -(*arg3.byte_offset(0x168)))
    {
        let var_70: i64;
        let var_68: i64;
        fd::output::replace_path_separator::h23f8702077a731dc(&var_60, var_70, var_68, 
            *arg3.byte_offset(0x170), *arg3.byte_offset(0x178));
        alloc::borrow::Cow$LT$B$GT$::to_mut::he3d567039a061c09(&var_78);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(&var_78);
        let var_50: i64;
        let var_68_1: i64 = var_50;
        var_78 = var_60;
    }
    
    let mut var_30: *mut i128 = &var_78;
    let var_28: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
    var_60 = &data_470810;
    let var_58: i64 = 1;
    let var_40: i64 = 0;
    let var_50_1: *mut *mut i128 = &var_30;
    let var_48: i64 = 1;
    let result_1: i64 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_60);
    let mut result: i64 = result_1;
    
    if result_1 == 0
    {
        result = fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, arg2, 
            *arg3.byte_offset(0xb8), *arg3.byte_offset(0xc0), 0);
    }
    
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_78);
    result
}
