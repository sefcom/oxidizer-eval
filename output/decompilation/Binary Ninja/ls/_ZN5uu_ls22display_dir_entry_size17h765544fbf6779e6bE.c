
  void* uu_ls::display_dir_entry_size::h765544fbf6779e6b(int64_t* arg1, void* arg2, void* arg3, void* arg4)

{
    void* result = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg4);
    
    if (!result)
    {
        __builtin_memset(arg1, 0, 0x30);
        return result;
    }
    
    int64_t var_60;
    uu_ls::display_len_or_rdev::h54f0966b5b04a08a(&var_60, result, *(arg3 + 0xd0), *(arg3 + 0xf9));
    int64_t var_78_1;
    int64_t var_70_1;
    int64_t var_68_1;
    int64_t var_50;
    int64_t var_48;
    
    if (!(0 + -(var_60)))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_48);
        int64_t var_38;
        var_68_1 = var_38;
        var_70_1 = var_50;
        var_78_1 = var_38 + 2 + var_50;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
    }
    else
    {
        var_78_1 = var_48;
        void var_58;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_58);
        var_68_1 = 0;
        var_70_1 = 0;
    }
    uu_ls::display_symlink_count::h2fe71a64427ba274(&var_60, *(result + 0x30));
    char rbp_2 = *(arg3 + 0xeb);
    int64_t r12_1 =
        *(uu_ls::display_uname::h7c414fef392325b1(*(result + 0x3c), rbp_2, arg4) + 0x10);
    int64_t rax_5 =
        *(uu_ls::display_group::h274df09bb9587751(*(result + 0x40), rbp_2, arg4) + 0x10);
    *arg1 = var_50;
    arg1[1] = r12_1;
    arg1[2] = rax_5;
    arg1[3] = var_78_1;
    arg1[4] = var_70_1;
    arg1[5] = var_68_1;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
}
