
  fn uu_pr::print_page::h6e73dbc2020375d5(arg1: i64, arg2: i64, arg3: *mut c_void, arg4: i64) -> i64

{
    let rax: i64 = *arg3.byte_offset(0x50);
    let rax_1: u64 = *arg3.byte_offset(0x58);
    let rbx: i64 = *arg3.byte_offset(0x98);
    let r15: u64 = *arg3.byte_offset(0xa0);
    let mut var_48: ();
    uu_pr::header_content::h02dbeaeea8884abb(&var_48, arg3, arg4);
    let mut var_c0: ();
    uu_pr::trailer_content::h355b304d1d1d6111(&var_c0, *arg3.byte_offset(0x141), 
        *arg3.byte_offset(0x142));
    let mut rbp: i64;
    rbp = 1;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_68: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_f8: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_68);
    let mut var_e0: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&var_e0, &var_48);
    let mut var_60: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&var_60, &var_e0);
    
    if var_60 == -0x8000000000000000
    {
        'label_5c792c:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&var_e0);
        let mut rax_5: i64;
        let mut rdx_5: *mut *mut [i8; 0x9b];
        rax_5 = uu_pr::write_columns::h4b27546e3d45b76a(arg1, arg2, arg3, &var_f8);
        
        if rax_5 == 0
        {
            let var_b8: i64;
            var_e0 = var_b8;
            let var_b0: i64;
            let var_d8_1: i64 = var_b8 + var_b0 * 0x18;
            let var_d0_1: i64 = 0;
            let mut rax_7: i64;
            let mut i: *mut c_void;
            rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&var_e0);
            
            if i != 0
            {
                let mut r15_1: i64 = rax_7;
                
                do
                {
                    if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, *i.byte_offset(8), *i.byte_offset(0x10)) != 0
                    {
                        goto 'label_5c7a3c;
                    }
                    
                    if r15_1 + 1 != var_b0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rax, rax_1) != 0
                    {
                        goto 'label_5c7a3c;
                    }
                    
                    let mut rax_8: i64;
                    rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&var_e0);
                    r15_1 = rax_8;
                } while i != 0;
            }
            
            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rbx, r15) == 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&var_f8) == 0
            {
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1(
                    var_f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&var_c0);
                return 0;
            }
        }
    }
    else
    {
        loop
        {
            let mut var_a8: i128 = var_60;
            let var_50: u64;
            let var_98_1: u64 = var_50;
            
            if _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, *var_a8[8], var_50) == 0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rax, rax_1) == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&var_60, &var_e0);
                
                if var_60 == -0x8000000000000000
                {
                    goto 'label_5c792c;
                }
                
                continue;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_a8);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&var_e0);
            break;
        }
    }
    
    'label_5c7a3c:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1(var_f8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(
        &var_c0);
    1
}
