
  fn FakeCrypt::fileops::encrypt_file::ha7bc1626977de376(arg1: i64, arg2: i64, arg3: *mut i128, arg4: i64) -> i64

{
    let mut var_7e8: i64 = arg1;
    let var_7e0: i64 = arg2;
    let mut var_810: i8;
    std::fs::File::open::h9589f8a30f4c81c4(&var_810, arg1);
    
    if (var_810 & 1) == 0
    {
        let fd_1: i32;
        let mut fd: i32 = fd_1;
        let mut var_800: i64 = 0;
        let var_7f8_1: i64 = 1;
        let var_7f0_1: i64 = 0;
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::h0619605a8d236003(
            &fd, &var_800);
        
        if rax_2 == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5f68c5cabed77c10(0, rdx_1);
            alloc::vec::Vec$LT$T$C$A$GT$::resize::h50c127f716084c0f(&var_800, 
                (0x7ffffffffffffff0 & var_7f0_1) + 0x10, 0);
            let mut var_7b8: *mut *mut [i8; 0xcd];
            _$LT$aes..autodetect..Aes256$u20$as$u20$crypto_common..KeyInit$GT$::new::hc251919afc52b389(&var_7b8, arg3);
            let mut var_3f8: ();
            _$LT$cbc..decrypt..Decryptor$LT$C$GT$$u20$as$u20$crypto_common..InnerIvInit$GT$::inner_iv_init::h767b9b8c258b0744(&var_3f8, &var_7b8, arg4);
            let mut rax_3: i64;
            let mut rdx_4: u64;
            rax_3 = cipher::block::BlockEncryptMut::encrypt_padded_mut::hd555d618ee738abc(&var_3f8, 
                var_7f8_1, var_7f0_1, var_7f0_1);
            let mut var_7d8: *mut i64;
            
            if rax_3 == 0
            {
                var_7d8 = &var_7e8;
                let var_7d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h7a0a1daf0de9b880;
                let mut var_811: ();
                let var_7c8_1: *mut c_void = &var_811;
                let var_7c0_1: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$inout..errors..PadError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b76fa3f5d7cfb5c;
                var_7b8 = &data_4d95a0;
                let var_7b0_1: i64 = 3;
                let var_798_1: i64 = 0;
                let var_7a8_1: *mut *mut i64 = &var_7d8;
                let var_7a0_1: i64 = 2;
                std::io::stdio::_eprint::hc8807d5917a19629(&var_7b8);
            }
            else
            {
                std::fs::File::create::h370b037dc00cbdda(&var_7b8, var_7e8);
                
                if var_7b8 == 0
                {
                    var_7d8 = *var_7b8[4];
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h52eca53ec7fb34e8(std::io::Write::write_all::h61cad997d75bad86(&var_7d8, rax_3, rdx_4));
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc222f4db551af96(var_7d8);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h3f5dd9ad240898e4(&var_7b8);
                }
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h5f68c5cabed77c10(rax_2, rdx_1);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0777b7bfa8327074(&var_800);
        let result: i64 = core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc222f4db551af96(fd);
        
        if (var_810 & 1) == 0
        {
            return result;
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h3f5dd9ad240898e4(&var_810)
}
