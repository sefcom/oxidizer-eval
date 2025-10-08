
  int64_t fd::output::print_entry_uncolorized_base::h04738a32bb27dd9f(int64_t arg1, int32_t* arg2, void* arg3)

{
    int64_t rax;
    int64_t rdx;
    rax = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *(arg3 + 0x1e7));
    int128_t var_78;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, rax, rdx);
    char const* const var_60;
    
    if (!(0 + -(*(arg3 + 0x168))))
    {
        int64_t var_70;
        int64_t var_68;
        fd::output::replace_path_separator::h23f8702077a731dc(&var_60, var_70, var_68, 
            *(arg3 + 0x170), *(arg3 + 0x178));
        alloc::borrow::Cow$LT$B$GT$::to_mut::he3d567039a061c09(&var_78);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6194a405d9e61c9b(&var_78);
        int64_t var_50;
        int64_t var_68_1 = var_50;
        var_78 = var_60;
    }
    
    int128_t* var_30 = &var_78;
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
    var_60 = &data_470810;
    int64_t var_58 = 1;
    int64_t var_40 = 0;
    int128_t** var_50_1 = &var_30;
    int64_t var_48 = 1;
    int64_t result_1 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_60);
    int64_t result = result_1;
    
    if (!result_1)
        result = fd::output::print_trailing_slash::h43af0d27fcc999ec(arg1, arg2, *(arg3 + 0xb8), 
            *(arg3 + 0xc0), 0);
    
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_78);
    return result;
}
