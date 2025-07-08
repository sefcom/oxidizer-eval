
  fn uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: size_t, arg5: i8) -> *mut i64

{
    let var_130: i64 = -1;
    let var_128: i64 = 0;
    let mut var_150: i64 = 0;
    let var_148: i64 = 8;
    let var_140: i128 = {0};
    let rax: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg2, arg3, arg4);
    
    if *rax.byte_offset(0xc8) == 0
    {
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        let mut rax_2: *mut i128;
        let mut rdx_1: i64;
        rax_2 = uu_tail::chunks::BytesChunkBuffer::fill::h530d2248581353b2(&var_150, 
            rax.byte_offset(0xc8));
        
        if rax_2 != 0
        {
            *arg1 = rax_2;
            arg1[1] = rdx_1;
        }
        else if *var_140[8] == 0
        {
            arg1[1] = 0;
            *arg1 = 0;
        }
        else
        {
            let mut var_108: i128;
            
            if uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(arg2, arg3, 
                arg4, arg5) != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_108, 
                    uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(arg2, arg3, arg4).
                        byte_offset(0xb0));
                let var_100: i64;
                uu_tail::paths::HeaderPrinter::print::h45f27ae0b4b499e5(arg2.byte_offset(0x48), 
                    var_100);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_108);
            }
            
            std::io::stdio::stdout::h077da66234850927();
            let mut var_158: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
            let mut var_50: ();
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::haf7bea51889604aa(
                &var_50, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_158));
            rax_2 = uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(&var_150, &var_50);
            
            if rax_2 != 0
            {
                *arg1 = rax_2;
                arg1[1] = rdx_1;
            }
            else
            {
                let mut var_120: i128;
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_120, 
                    arg3, arg4);
                let var_f8_1: i64 = arg2[1];
                var_108 = *arg2;
                *arg2 = var_120;
                let var_110: i64;
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
    arg1
}
