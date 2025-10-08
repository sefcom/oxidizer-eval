
  int64_t uu_cp::platform::linux::check_for_data::h216f58a42b2327b0(int64_t* arg1)

{
    int32_t var_d0;
    int64_t rsi;
    std::fs::File::open::h87ebb42518eeb9ff(&var_d0, rsi);
    int64_t result;
    
    if (var_d0 == 1)
    {
        *arg1 = result;
        arg1[1] = 2;
        return result;
    }
    
    int32_t fd;
    int32_t fd_2 = fd;
    std::fs::File::metadata::h5e84e533705f8c98(&var_d0, &fd_2);
    int32_t fd_1;
    
    if (var_d0 != 2)
    {
        int64_t var_80;
        
        if (!var_80)
        {
            int64_t var_78;
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h451713e6c2a4190a(&var_d0, var_78);
            uint64_t var_c0;
            char rax_3;
            int64_t rdx_3;
            rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(&fd_2, 
                result, var_c0);
            
            if (!(rax_3 & 1))
            {
                int64_t result_1 = result;
                int64_t var_d8_1 = var_c0 + result;
                rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h634df474c9b6c8b5(&result_1);
                arg1[2] = 0;
                rdx_3 = 0;
            }
            else
                rax_3 = 2;
            
            *arg1 = rdx_3;
            arg1[1] = rax_3;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h320a3f42966bf686(var_d0, 
                result);
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
                *arg1 = *__errno_location() << 0x20 | 2;
                arg1[1] = 2;
            }
            else
            {
                *arg1 = var_80;
                arg1[1] = 1;
                arg1[2] = var_70;
            }
        }
        
        fd_1 = fd_2;
    }
    else
    {
        *arg1 = result;
        arg1[1] = 2;
        fd_1 = fd;
    }
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(fd_1);
}
