
  int64_t bat::assets::build_assets::acknowledgements::handle_file::hb5a8e1bdb81e5e02(char* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    char* r15 = *(arg2 + 0x20);
    uint64_t r12 = *(arg2 + 0x28);
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(r15, r12, "NOTICEERROR: License is of unkno…", 6))
    {
        *(arg2 + 0x10);
        /* tailcall */
        return bat::assets::build_assets::acknowledgements::handle_notice::h6c212b1b9d68349d(arg1, 
            *(arg2 + 8));
    }
    
    char result =
        core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(
        r15, r12, "LICENSENOTICEERROR: License is o…", 7);
    
    if (result)
    {
        *(arg2 + 0x10);
        /* tailcall */
        return bat::assets::build_assets::acknowledgements::handle_license::h76a66dfc08dd74eb(arg1, 
            *(arg2 + 8));
    }
    
    *(arg1 + 8) = -0x8000000000000000;
    *arg1 = 0xd;
    return result;
}
