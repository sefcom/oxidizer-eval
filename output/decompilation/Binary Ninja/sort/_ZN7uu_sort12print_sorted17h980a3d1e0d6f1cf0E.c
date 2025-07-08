
  int64_t uu_sort::print_sorted::h980a3d1e0d6f1cf0(int128_t* arg1, void* arg2, int64_t* arg3)

{
    void var_48;
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_48, arg3);
    int128_t var_58 = arg1[2];
    int128_t var_68 = arg1[1];
    int128_t var_78 = *arg1;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$itertools..adaptors..coalesce..CoalesceBy$LT$I$C$F$C$C$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h734feeaecfaf1fbf(&var_78);
        
        if (!rax_1)
            break;
        
        uu_sort::Line::print::he3975e626e2ad263(rax_1, &var_48, arg2);
    }
    
    return core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_48);
}
