
  int64_t uu_sort::print_sorted::h73b47b9188ebe0a1(int128_t* arg1, void* arg2, int64_t* arg3)

{
    void var_48;
    uu_sort::Output::into_write::h9c5c08d876f77806(&var_48, arg3);
    int64_t var_58 = arg1[5];
    int128_t var_68 = arg1[4];
    int128_t var_78 = arg1[3];
    int128_t var_88 = arg1[2];
    int128_t var_98 = arg1[1];
    int128_t var_a8 = *arg1;
    
    while (true)
    {
        int64_t* rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b5124c46e724df6(&var_a8);
        
        if (!rax_1)
            break;
        
        uu_sort::Line::print::he3975e626e2ad263(rax_1, &var_48, arg2);
    }
    
    return core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&var_48);
}
