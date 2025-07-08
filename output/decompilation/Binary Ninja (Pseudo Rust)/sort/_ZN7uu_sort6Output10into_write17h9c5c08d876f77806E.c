
  fn uu_sort::Output::into_write::h9c5c08d876f77806(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut rcx: *mut c_void;
    let mut rdx: *mut i64;
    let mut rdi: *mut i64;
    
    if *arg2 != -0x8000000000000000
    {
        let var_18_1: i64 = arg2[2];
        let mut var_28: i128 = *arg2;
        let mut var_34: i32 = arg2[3];
        let mut var_30: i64 = std::fs::File::set_len::hd21acd2eeb028efb(&var_34, 0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&var_30);
        let rax_4: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::hea03e04285d5c204(var_34);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44b8f79efaf87542(&var_28);
        rcx = &data_5ff738;
        rdi = arg1;
        rdx = rax_4;
    }
    else
    {
        std::io::stdio::stdout::h077da66234850927();
        rcx = &data_5ff6e8;
        rdi = arg1;
        rdx = alloc::boxed::Box$LT$T$GT$::new::h86b0794f31e6b95f(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    }
    
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h88a23f20aed6b056(rdi, 0x2000, 
        rdx, rcx);
    arg1
}
