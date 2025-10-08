
  int64_t fd::output::print_entry_format::h055b3d4dd7dc026a(int64_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)

{
    int64_t rax_1;
    int64_t rdx;
    rax_1 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *(arg3 + 0x1e7));
    int64_t r8 = 0;
    
    if (!(0 + -(*(arg3 + 0x168))))
        r8 = *(arg3 + 0x170);
    
    int64_t var_88;
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_88, arg4, rax_1, rdx, r8, 
        *(arg3 + 0x178));
    int64_t var_80;
    int64_t var_78;
    void var_30;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_30, var_80, var_78);
    void* var_70 = &var_30;
    int64_t (* var_68)(int64_t* arg1, int64_t* arg2) =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
    char const* const var_60 = &data_470810;
    int64_t var_58 = 1;
    int64_t var_40 = 0;
    void** var_50 = &var_70;
    int64_t var_48 = 1;
    int64_t result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_60);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(var_88, var_80);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_30);
    return result;
}
