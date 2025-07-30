
  fn flealib::fileencrypter::FileEncrypter::encrypt_file::h010e32bc16a89d3b(arg1: i64, arg2: i64) -> *mut *mut [i8; 0x109]

{
    let mut var_98: i8;
    std::fs::File::open::h072f7934218d9ec9(&var_98, arg2);
    let var_90: *mut *mut [i8; 0x109];
    
    if (var_98 & 1) != 0
    {
        return var_90;
    }
    
    let fd_2: i32;
    let mut fd: i32 = fd_2;
    let mut var_80: i64 = 0;
    let var_78_1: i64 = 1;
    let var_70_1: u64 = 0;
    let mut rax_2: i64;
    let mut rdx_1: *mut *mut [i8; 0x109];
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(&fd, 
        &var_80);
    let mut r12: *mut *mut [i8; 0x109];
    
    if rax_2 == 0
    {
        let mut fd_1: i32;
        alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&fd_1, var_78_1, var_70_1);
        let var_60: i64;
        let var_58: u64;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_98, 
            var_60, var_58);
        let var_88: i64;
        let var_28_1: i64 = var_88;
        let mut var_38: i128 = var_98;
        let mut var_50: ();
        flealib::fileencrypter::FileEncrypter::encrypt::h95176c86bdb309f0(&var_50, arg1, &var_38);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(&fd_1);
        std::fs::File::create::hefcfd813751427cb(&var_98, arg2);
        
        if (var_98 & 1) == 0
        {
            fd_1 = fd_2;
            let var_48: i64;
            let var_40: u64;
            r12 = std::io::Write::write_all::h066e478a0016aaba(&fd_1, var_48, var_40);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd_1);
            
            if r12 == 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                    &var_50);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                    &var_80);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
                return nullptr;
            }
        }
        else
        {
            r12 = var_90;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_50);
    }
    else
    {
        r12 = rdx_1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_80);
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
    r12
}
