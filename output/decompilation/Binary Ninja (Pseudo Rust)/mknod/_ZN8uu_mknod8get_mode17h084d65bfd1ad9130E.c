
  fn uu_mknod::get_mode::h084d65bfd1ad9130(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    if arg2 == 0
    {
        arg1[1] = 0x1b6;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_68: i64;
        uucore::features::mode::parse_mode::h0c942428ddc01afa(&var_68, *arg2.byte_offset(8), 
            *arg2.byte_offset(0x10));
        let var_60: i32;
        
        if var_68 != -0x8000000000000000
        {
            let var_58: i64;
            let var_18_1: i64 = var_58;
            let mut var_28: i128 = var_68;
            let mut var_50: i64;
            uu_mknod::get_mode::_$u7b$$u7b$closure$u7d$$u7d$::hedf9e9beb09a3d08(&var_50, &var_28);
            let rax_4: i64 = var_50;
            let var_3c: i32;
            let var_30_1: i32 = var_3c;
            let var_44: i64;
            let var_38_1: i64 = var_44;
            *arg1.byte_offset(0x14) = var_3c;
            *arg1.byte_offset(0xc) = var_44;
            *arg1 = rax_4;
            let var_48: i32;
            arg1[1] = var_48;
        }
        else if var_60 <= 0x1ff
        {
            arg1[1] = var_60;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7e6cafe721babae1(arg1, "mode must specify only file perm…", 0x2b);
        }
    }
    
    arg1
}
