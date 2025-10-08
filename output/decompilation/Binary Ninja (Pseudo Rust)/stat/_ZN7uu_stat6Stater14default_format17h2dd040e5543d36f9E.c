
  fn uu_stat::Stater::default_format::h2dd040e5543d36f9(arg1: *mut i64, arg2: i32, arg3: i8, arg4: i8) -> *mut i64

{
    if arg2 != 0
    {
        if arg3 == 0
        {
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "  File: "%n"\n    ID: %-8i Namel…", 0xab);
        }
        
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "%n %i %l %t %s %S %b %f %a %c %d…", 0x21);
    }
    
    if arg3 != 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, "%n %s %b %f %u %g %D %i %h %t %T…", 0x30);
    }
    
    let mut rcx_3: i64 = 0x28;
    
    if arg4 != 0
    {
        rcx_3 = 0x3d;
    }
    
    let mut rdx_3: *mut c_void = "Device: %Dh/%dd\tInode: %-10i  L…";
    
    if arg4 != 0
    {
        rdx_3 = "Device: %Dh/%dd\tInode: %-10i  L…";
    }
    
    let mut var_40: *mut c_void = "  File: %N\n  Size: %-10s\tBlock…";
    let var_38: i64 = 0x39;
    let var_30: *mut c_void = rdx_3;
    let var_28: i64 = rcx_3;
    let var_20: *const i8 = "Access: (%04a/%10.10A)  Uid: (%5…";
    let var_18: i64 = 0x38;
    let var_10: *const i8 = "Access: %x\nModify: %y\nChange: …";
    let var_8: i64 = 0x2c;
    alloc::str::join_generic_copy::h5d56894876c21cae(arg1, &var_40)
}
