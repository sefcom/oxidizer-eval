
  int64_t uu_tail::follow::files::FileHandling::tail_file::h556ffa1173747618(int64_t* arg1, int64_t* arg2, char* arg3, uint64_t arg4, char arg5)

{
    int64_t var_128 = -1;
    int64_t var_120 = 0;
    int64_t var_148 = 0;
    int64_t var_140 = 8;
    int128_t var_138 = {0};
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg2, arg3, arg4);
    int64_t rsi_1 = *(rax + 0xc8);
    
    if (!rsi_1)
    {
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        int64_t rax_1;
        int64_t rdx_2;
        rax_1 = uu_tail::chunks::BytesChunkBuffer::fill::h87d2a1e91e32429e(&var_148, rsi_1, 
            *(rax + 0xd0));
        
        if (rax_1)
        {
            *arg1 = rax_1;
            arg1[1] = rdx_2;
        }
        else if (!*var_138[8])
        {
            arg1[1] = 0;
            *arg1 = 0;
        }
        else
        {
            int64_t* var_d8;
            
            if (uu_tail::follow::files::FileHandling::needs_header::hff0f2b81d091aff6(arg2, arg3, 
                arg4, arg5))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_d8, 
                    uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(arg2, arg3, arg4)
                        + 0xb0);
                int64_t var_d0;
                uu_tail::paths::HeaderPrinter::print::hb9d96eaf79a3fd0e(&arg2[9], var_d0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_d8);
            }
            
            std::io::stdio::stdout::hb6a8e10bcccf3287();
            var_d8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
            void var_118;
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h263c6123d9aad573(
                &var_118, std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d8));
            uint64_t rax_6;
            int64_t rdx_6;
            rax_6 = uu_tail::chunks::BytesChunkBuffer::print::h021bb420f35b3c38(&var_148, &var_118);
            
            if (rax_6)
                goto label_4a2ba9;
            
            if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::ha1f2842950199d30(&var_118))
            {
                int128_t var_f0;
                std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_f0, 
                    arg3, arg4);
                int64_t rdi_14 = *arg2;
                int64_t rsi_9 = arg2[1];
                int64_t var_e0;
                arg2[2] = var_e0;
                *arg2 = var_f0;
                core::ptr::drop_in_place$LT$uu_tail..paths..InputKind$GT$::h046d3096d1779570(
                    rdi_14, rsi_9);
                var_d8 = 2;
                uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(arg2, 
                    arg3, arg4, &var_d8);
                arg1[1] = 1;
                *arg1 = 0;
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9abdbdfff854d5b5(&var_118);
            }
            else
            {
                rax_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                label_4a2ba9:
                *arg1 = rax_6;
                arg1[1] = rdx_6;
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9abdbdfff854d5b5(&var_118);
            }
        }
    }
    
    return core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::hdc77aa670acf7026(
        &var_148);
}
