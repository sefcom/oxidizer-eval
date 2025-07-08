
  int64_t uu_sort::print_sorted::h399956c01eacbd36(int64_t arg1, int64_t arg2, void* arg3, int64_t* arg4)

{
    void var_50;
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_50, arg4);
    int64_t var_60 = arg1;
    int64_t var_58 = arg2;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_60);
        
        if (!rax_1)
            break;
        
        uu_sort::Line::print::he3975e626e2ad263(rax_1, &var_50, arg3);
    }
    
    return core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_50);
}
