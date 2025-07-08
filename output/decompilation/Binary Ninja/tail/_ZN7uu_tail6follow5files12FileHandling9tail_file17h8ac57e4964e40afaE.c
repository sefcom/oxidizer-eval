
  int64_t* uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(int64_t* arg1, int128_t* arg2, char* arg3, size_t arg4, char arg5)

{
    int64_t var_130 = -1;
    int64_t var_128 = 0;
    int64_t var_150 = 0;
    int64_t var_148 = 8;
    int128_t var_140 = {0};
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg2, arg3, arg4);
    
    if (!*(rax + 0xc8))
    {
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        int128_t* rax_2;
        int64_t rdx_1;
        rax_2 = uu_tail::chunks::BytesChunkBuffer::fill::h530d2248581353b2(&var_150, rax + 0xc8);
        
        if (rax_2)
        {
            *arg1 = rax_2;
            arg1[1] = rdx_1;
        }
        else if (!*var_140[8])
        {
            arg1[1] = 0;
            *arg1 = 0;
        }
        else
        {
            int128_t var_108;
            
            if (uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(arg2, arg3, 
                arg4, arg5))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_108, 
                    uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(arg2, arg3, arg4)
                        + 0xb0);
                int64_t var_100;
                uu_tail::paths::HeaderPrinter::print::h45f27ae0b4b499e5(arg2 + 0x48, var_100);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_108);
            }
            
            std::io::stdio::stdout::h077da66234850927();
            int64_t* var_158 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            void var_50;
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::haf7bea51889604aa(
                &var_50, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_158));
            rax_2 = uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(&var_150, &var_50);
            
            if (rax_2)
            {
                *arg1 = rax_2;
                arg1[1] = rdx_1;
            }
            else
            {
                int128_t var_120;
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_120, 
                    arg3, arg4);
                int64_t var_f8_1 = arg2[1];
                var_108 = *arg2;
                *arg2 = var_120;
                int64_t var_110;
                arg2[1] = var_110;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h63b24af75b14f95f(&var_108);
                var_108 = 2;
                uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(arg2, 
                    arg3, arg4, &var_108);
                arg1[1] = 1;
                *arg1 = 0;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&var_150);
    return arg1;
}
