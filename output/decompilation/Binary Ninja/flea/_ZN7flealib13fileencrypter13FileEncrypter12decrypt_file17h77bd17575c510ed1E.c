
  void* flealib::fileencrypter::FileEncrypter::decrypt_file::h77bd17575c510ed1(int64_t arg1, int64_t arg2)

{
    char var_78;
    std::fs::File::open::h072f7934218d9ec9(&var_78, arg2);
    void* var_70;
    
    if (var_78 & 1)
        return var_70;
    
    int32_t fd_2;
    int32_t fd = fd_2;
    int64_t var_48 = 0;
    int64_t var_40_1 = 1;
    int64_t var_38_1 = 0;
    int64_t rax_2;
    void* rdx_1;
    rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::hc5ce334212601c81(&fd, 
        &var_48);
    void* rbx;
    
    if (!rax_2)
    {
        int64_t var_68_1 = var_38_1;
        var_78 = var_48;
        int64_t var_60;
        flealib::fileencrypter::FileEncrypter::decrypt::hff9e86b8c682ae6b(&var_60, arg1, &var_78);
        
        if (!(0 + -(var_60)))
        {
            var_78 = var_60;
            char var_30;
            std::fs::File::create::hefcfd813751427cb(&var_30, arg2);
            
            if (!(var_30 & 1))
            {
                int32_t fd_3;
                int32_t fd_1 = fd_3;
                uint64_t var_50;
                rbx = std::io::Write::write_all::h066e478a0016aaba(&fd_1, var_70, var_50);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd_1);
                
                if (rbx)
                    goto label_78a91e;
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_78);
                rbx = nullptr;
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
                
                if (var_60 == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::hf6714259a7336112(&var_60);
            }
            else
            {
                void* var_28;
                rbx = var_28;
                label_78a91e:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_78);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
                
                if (var_60 == -0x8000000000000000)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::hf6714259a7336112(&var_60);
            }
        }
        else
        {
            rbx = std::io::error::Error::new::h73bba56a22ab7bbe(0x28, 
                "Failed to decryptfailed to encry…", 0x11);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
            
            if (var_60 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::hf6714259a7336112(&var_60);
        }
    }
    else
    {
        rbx = rdx_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_48);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
    }
    
    return rbx;
}
