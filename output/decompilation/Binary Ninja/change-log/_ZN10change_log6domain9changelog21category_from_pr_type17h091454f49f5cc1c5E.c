
  char const* const change_log::domain::changelog::category_from_pr_type::h091454f49f5cc1c5(int64_t arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h7ca8f070bd4eeac3(arg1, arg2);
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5d72a905da1b452a(rax_1, rdx, "feat[", 4))
        return "FeaturesS";
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5d72a905da1b452a(rax_1, rdx, "fixchoreChoresFixes\n# Breaking\n…", 3))
        return "Fixes\n# Breaking\n\n- \n\nMigra…";
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5d72a905da1b452a(rax_1, rdx, "choreChoresFixes\n# Breaking\n\n…", 5))
        return "ChoresFixes\n# Breaking\n\n- \n\n…";
    
    return nullptr;
}
