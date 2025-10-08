
  fn uu_ptx::read_input::h2aa7184f71c3fbbd(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut r14: *mut c_void = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdc2be79178508d50();
    let mut var_108: i128 = *data_650de8;
    let var_f8: i128 = data_650df8;
    let mut result: *mut i64;
    
    if arg3 == 0
    {
        'label_52bacd:
        let zmm0: i128 = var_108;
        result = arg1;
        result[4] = rax;
        result[5] = rdx;
        *result.byte_offset(0x10) = var_f8;
        *result = zmm0;
    }
    else
    {
        let mut r15_1: i64 = arg3 * 0x18;
        let mut rbx_2: i64 = 0;
        
        loop
        {
            let mut var_148: i32;
            let var_140: i64;
            let mut rax_2: u64;
            let mut rdx_1: *mut c_void;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(*r14.byte_offset(8), *r14.byte_offset(0x10), "-[^]+[^ \t\n]+", 1) == 0
            {
                std::fs::File::open::h695eaf09d3a17d8c(&var_148, r14);
                
                if var_148 != 1
                {
                    let var_144: i32;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_144);
                    rdx_1 = &data_651680;
                    goto 'label_52b9ee;
                }
                
                result = arg1;
                result[1] = var_140;
            }
            else
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                rax_2 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
                    &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                rdx_1 = &data_6516d8;
                'label_52b9ee:
                let mut var_a0: ();
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h3d0c7b14f6b3f130(
                    &var_a0, rax_2, rdx_1);
                core::iter::traits::iterator::Iterator::collect::he2fa0028cb9148a2(&var_148, 
                    &var_a0);
                let rax_3: i64 = var_148;
                
                if -(rax_3) == -0x8000000000000000
                {
                    result = arg1;
                    result[1] = var_140;
                }
                else
                {
                    let mut var_138: i64;
                    let rbp_1: i64 = var_138;
                    let var_158_1: i64 = var_140;
                    let mut var_d0: i128;
                    core::iter::traits::iterator::Iterator::collect::h75228c1ae200d50c(&var_d0, 
                        var_140);
                    let mut var_b8: ();
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b8, r14);
                    var_138 = rbp_1;
                    var_148 = rax_3;
                    let var_c0: i64;
                    let var_120_1: i64 = var_c0;
                    let var_130_1: i128 = var_d0;
                    let var_118_1: i64 = rbx_2;
                    let mut var_68: ();
                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4f58e0fefa489ec5(
                        &var_68, &var_108, &var_b8, &var_148);
                    r14 += 0x18;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_ptx..FileContent$GT$$GT$::hbb7b2e41fca10735(&var_68);
                    rbx_2 += rbp_1;
                    let temp1_1: i64 = r15_1;
                    r15_1 -= 0x18;
                    
                    if temp1_1 == 0x18
                    {
                        goto 'label_52bacd;
                    }
                    
                    continue;
                }
            }
            *result = 0;
            core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h033d5e534b5f9d40(&var_108);
            break;
        }
    }
    
    result
}
