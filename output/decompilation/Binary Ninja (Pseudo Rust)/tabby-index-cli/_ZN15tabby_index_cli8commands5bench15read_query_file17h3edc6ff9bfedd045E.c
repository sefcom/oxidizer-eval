
  fn tabby_index_cli::commands::bench::read_query_file::h3edc6ff9bfedd045(arg1: *mut i64) -> i64

{
    let mut var_c8: i32;
    let rsi: i64;
    std::fs::File::open::hb5fdc991c31df92c(&var_c8, rsi);
    let result: i64;
    
    if var_c8 == 1
    {
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let fd_1: i32;
    let mut fd: i32 = fd_1;
    let mut var_60: i128;
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h23039990b1920b90(&var_60, 
        &fd);
    let mut var_e0: i64 = 0;
    let var_d8_1: i64 = 8;
    let var_d0_1: i64 = 0;
    let var_40: i128;
    let var_a8_1: i128 = var_40;
    let var_50: i128;
    let var_b8_1: i128 = var_50;
    var_c8 = var_60;
    
    loop
    {
        let mut var_90: i64;
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2ff1e412ff3379d3(&var_90, &var_c8);
        let rax_2: i64 = var_90;
        
        if rax_2 == -0x7fffffffffffffff
        {
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$::h21d59927537c1757(var_c8, result);
            arg1[2] = var_d0_1;
            *arg1 = var_e0;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4ab6841d866e1435(fd);
        }
        
        let var_88: i64;
        
        if rax_2 == -0x8000000000000000
        {
            arg1[1] = var_88;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..buffered..bufreader..BufReader$LT$$RF$std..fs..File$GT$$GT$$GT$::h21d59927537c1757(var_c8, result);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7054847749bb044b(&var_e0);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4ab6841d866e1435(fd);
        }
        
        let mut var_78: i64 = rax_2;
        let var_70_1: i64 = var_88;
        let var_80: i64;
        let var_68_1: i64 = var_80;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbe183a96c535ca7e(&var_e0, &var_78);
    }
}
