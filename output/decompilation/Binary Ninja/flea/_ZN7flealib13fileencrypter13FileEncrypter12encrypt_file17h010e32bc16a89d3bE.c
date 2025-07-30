
  char const (**)[0x109] flealib::fileencrypter::FileEncrypter::encrypt_file::h010e32bc16a89d3b(int64_t arg1, int64_t arg2)

{
    char var_98;
    std::fs::File::open::h072f7934218d9ec9(&var_98, arg2);
    char const (** var_90)[0x109];
    
    if (var_98 & 1)
        return var_90;
    
    int32_t fd_2;
    int32_t fd = fd_2;
    int64_t var_80 = 0;
    int64_t var_78_1 = 1;
    uint64_t var_70_1 = 0;
    int64_t rax_2;
    char const (** rdx_1)[0x109];
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(&fd, 
        &var_80);
    char const (** r12)[0x109];
    
    if (!rax_2)
    {
        int32_t fd_1;
        alloc::string::String::from_utf8_lossy::h44ed577670f061c9(&fd_1, var_78_1, var_70_1);
        int64_t var_60;
        uint64_t var_58;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_98, 
            var_60, var_58);
        int64_t var_88;
        int64_t var_28_1 = var_88;
        int128_t var_38 = var_98;
        void var_50;
        flealib::fileencrypter::FileEncrypter::encrypt::h95176c86bdb309f0(&var_50, arg1, &var_38);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb29927c53dd8f325(&fd_1);
        std::fs::File::create::hefcfd813751427cb(&var_98, arg2);
        
        if (!(var_98 & 1))
        {
            fd_1 = fd_2;
            int64_t var_48;
            uint64_t var_40;
            r12 = std::io::Write::write_all::h066e478a0016aaba(&fd_1, var_48, var_40);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd_1);
            
            if (!r12)
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
            r12 = var_90;
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_50);
    }
    else
        r12 = rdx_1;
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_80);
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
    return r12;
}
