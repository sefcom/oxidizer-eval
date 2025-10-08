
  void* uu_ls::display_uname::h7c414fef392325b1(int32_t arg1, char arg2, void* arg3)

{
    int64_t var_28;
    hashbrown::rustc_entry::_$LT$impl$u20$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$GT$::rustc_entry::h51f17f2f0e1d34a5(&var_28, arg3 + 0x88, arg1);
    int64_t var_48;
    int128_t var_20;
    
    if (!var_28)
    {
        int128_t var_40_1 = var_20;
        var_48 = 0;
    }
    else
    {
        int128_t var_40;
        *var_40[8] = *var_20[8];
        var_48 = var_28;
    }
    return std::collections::hash::map::Entry$LT$K$C$V$GT$::or_insert_with::hdd1791e9fc9dd94a(
        &var_48, arg2);
}
