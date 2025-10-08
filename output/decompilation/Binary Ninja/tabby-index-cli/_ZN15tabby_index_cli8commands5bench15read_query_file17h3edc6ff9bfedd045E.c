
  int64_t tabby_index_cli::commands::bench::read_query_file::h3edc6ff9bfedd045(int64_t* arg1)

{
    int32_t var_c8;
    int64_t rsi;
    std::fs::File::open::hb5fdc991c31df92c(&var_c8, rsi);
    int64_t result;
    
    if (var_c8 == 1)
    {
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int32_t fd_1;
    int32_t fd = fd_1;
    int128_t var_60;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h23039990b1920b90(&var_60, 
        &fd);
    int64_t var_e0 = 0;
    int64_t var_d8_1 = 8;
    int64_t var_d0_1 = 0;
    int128_t var_40;
    int128_t var_a8_1 = var_40;
    int128_t var_50;
    int128_t var_b8_1 = var_50;
    var_c8 = var_60;
    
    while (true)
    {
        int64_t var_90;
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2ff1e412ff3379d3(&var_90, &var_c8);
        int64_t rax_2 = var_90;
        
        if (rax_2 == -0x7fffffffffffffff)
        {
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$::h21d59927537c1757(var_c8, result);
            arg1[2] = var_d0_1;
            *arg1 = var_e0;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4ab6841d866e1435(fd);
        }
        
        int64_t var_88;
        
        if (rax_2 == -0x8000000000000000)
        {
            arg1[1] = var_88;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$::h21d59927537c1757(var_c8, result);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_e0);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4ab6841d866e1435(fd);
        }
        
        int64_t var_78 = rax_2;
        int64_t var_70_1 = var_88;
        int64_t var_80;
        int64_t var_68_1 = var_80;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbe183a96c535ca7e(&var_e0, &var_78);
    }
}
