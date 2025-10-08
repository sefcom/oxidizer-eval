
  fn uu_sort::print_sorted::h10a88dada5bd82d9(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64) -> i64

{
    let o: bool = 0 + -(*arg3);
    let mut rdx: u64 = 0xf;
    
    if !o
    {
        rdx = arg3[2];
    }
    
    let mut rsi: *const i8 = "standard outputwrite failed: -in…";
    
    if !o
    {
        rsi = arg3[1];
    }
    
    let mut var_88: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_88, rsi, rdx);
    let mut var_78: i64;
    let var_98: i64 = var_78;
    let mut var_a8: i128 = var_88;
    let mut var_58: ();
    uu_sort::Output::into_write::hce87a09f168f8bb5(&var_58, arg3);
    let var_68: i128 = arg1[2];
    var_78 = arg1[1];
    var_88 = *arg1;
    let mut result: i64;
    
    loop
    {
        let rax_1: *mut i64 = _$LT$itertools..adaptors..coalesce..CoalesceBy$LT$I$C$F$C$C$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3581e615067ebc9c(&var_88);
        
        if rax_1 == 0
        {
            let result_2: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h292ac1231d8a1435(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h66ce957f28f29ab2(&var_58));
            result = result_2;
            
            if result_2 == 0
            {
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h9ee5d69f67e9e91a(&var_58);
                result = 0;
                break;
            }
        }
        else
        {
            let result_1: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h292ac1231d8a1435(uu_sort::Line::print::ha2405589ab768a70(*rax_1, rax_1[1], &var_58, 
                arg2));
            result = result_1;
            
            if result_1 == 0
            {
                continue;
            }
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h9ee5d69f67e9e91a(&var_58);
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8941431298e6659e(&var_a8);
    result
}
