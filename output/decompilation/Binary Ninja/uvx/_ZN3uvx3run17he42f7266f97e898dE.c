
  int64_t uvx::run::he42f7266f97e898d(int32_t* arg1)

{
    char const (** var_110)[0x50];
    std::env::current_exe::h5073ac412771085b(&var_110);
    char const (** r14)[0x50] = var_110;
    int64_t var_108;
    
    if (-(r14) == -0x8000000000000000)
    {
        *(arg1 + 8) = var_108;
        *arg1 = 1;
        return -(r14);
    }
    
    int64_t var_100;
    char* rax_2;
    uint64_t rdx_1;
    rax_2 = std::path::Path::parent::hef287f60afa56900(var_108, var_100);
    
    if (!rax_2)
    {
        *(arg1 + 8) = std::io::error::Error::new::h31653b416e5e1c98(0, 
            "Could not determine the location…", 0x34);
        *arg1 = 1;
    }
    else
    {
        int64_t rax_3;
        int64_t rdx_2;
        rax_3 = uvx::get_uvx_suffix::h9d58d2b7efa33399();
        uvx::get_uv_path::h0750ce6cdeed20ac(&var_110, rax_2, rdx_1, rax_3);
        char const (** r13_2)[0x50] = var_110;
        
        if (r13_2 != -0x8000000000000000)
        {
            std::env::args_os::h5ff0cf6a45e392f2(&var_110);
            int128_t var_128_1 = var_100;
            int128_t var_138 = var_110;
            int64_t var_118_1 = 1;
            core::iter::traits::iterator::Iterator::chain::h3b964aa301fd32eb(&var_110, &var_138);
            void var_150;
            core::iter::traits::iterator::Iterator::collect::h4b4a40ddc3abafd2(&var_150, &var_110);
            var_138 = r13_2;
            *var_138[8] = var_108;
            var_128_1 = var_100;
            std::process::Command::new::hef36664ffd6e47a7(&var_110, &var_138);
            int64_t var_148;
            int64_t var_140;
            std::process::Command::args::h65a6d9d11bdbf24d(&var_110, var_148, var_140);
            *(arg1 + 8) = uvx::exec_spawn::h8a36b7e310b79222(&var_110);
            *arg1 = 1;
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h5b45e6faf5c9c67e(&var_110);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h90397a10563f40d7(&var_150);
        }
        else
        {
            *(arg1 + 8) = var_108;
            *arg1 = 1;
        }
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(r14, var_108);
}
