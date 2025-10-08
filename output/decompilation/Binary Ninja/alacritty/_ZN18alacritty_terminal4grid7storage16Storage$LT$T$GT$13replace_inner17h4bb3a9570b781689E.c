
  int64_t alacritty_terminal::grid::storage::Storage$LT$T$GT$::replace_inner::h4bb3a9570b781689(int64_t* arg1, int128_t* arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int128_t* rbx = arg1;
    arg1[5] = arg2[1];
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$GT$$GT$::h27df7d3e70b8b5de(arg1);
    int64_t result = arg2[1];
    rbx[1] = result;
    *rbx = *arg2;
    *(rbx + 0x18) = 0;
    return result;
}
