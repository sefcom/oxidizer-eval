
  int64_t uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(int64_t* arg1)

{
    int32_t var_d0;
    int64_t rsi;
    std::fs::File::open::h2ade805364297b3f(&var_d0, rsi);
    int64_t result;
    
    if (var_d0)
    {
        *arg1 = result;
        arg1[1] = 2;
        return result;
    }
    
    int32_t fd;
    int32_t fd_2 = fd;
    std::fs::File::metadata::he899a18112e6f19e(&var_d0, &fd_2);
    int32_t fd_1;
    int64_t var_80;
    
    if (var_d0 == 2)
    {
        *arg1 = result;
        arg1[1] = 2;
        fd_1 = fd;
    }
    else if (!var_80)
    {
        int64_t var_78;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&var_d0, var_78);
        uint64_t var_c0;
        char* rax_3;
        int64_t rdx_2;
        rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&fd_2, 
            result, var_c0);
        
        if (!rax_3)
        {
            int64_t result_1 = result;
            int64_t var_d8_1 = var_c0 + result;
            rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h682aa6afec1bbf51(&result_1);
            arg1[2] = 0;
            rdx_2 = 0;
        }
        else
            rax_3 = 2;
        
        *arg1 = rdx_2;
        arg1[1] = rax_3;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&var_d0);
        fd_1 = fd_2;
    }
    else
    {
        off64_t rax_2 = lseek(fd, 0, 3);
        int64_t var_70;
        
        if (rax_2 == -1)
        {
            *arg1 = var_80;
            arg1[1] = 0;
            arg1[2] = var_70;
        }
        else if (rax_2 < 0)
        {
            *arg1 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() << 0x20 | 2;
            arg1[1] = 2;
        }
        else
        {
            *arg1 = var_80;
            arg1[1] = 1;
            arg1[2] = var_70;
        }
        fd_1 = fd_2;
    }
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(fd_1);
}
