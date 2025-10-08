
  fn uu_ptx::format_tex_line::hd442331aff487d86(arg1: *mut i128, arg2: *mut *mut [i8; 0x9b], arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64, arg7: i64, arg8: i64, arg9: *mut i8, arg10: i64) -> i64

{
    let mut var_208: i64 = 0;
    let var_200: i64 = 1;
    let var_1f8: i64 = 0;
    let mut var_d8: *mut *mut [i8; 0x9b] = arg2;
    let var_d0: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let mut var_1f0: *mut *mut [i8; 0xa0] = &data_651a90;
    let var_1e8: i64 = 2;
    let var_1d0: i64 = 0;
    let var_1e0: *mut i64 = &var_d8;
    let var_1d8: i64 = 1;
    let mut rax: i8;
    let mut zmm0: [i32; 0x4];
    rax = _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_1f0);
    core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(rax);
    uu_ptx::prepare_line_chunks::h265ec8f47d6fd28d(&var_1f0, arg2, arg3, arg4, arg5, arg6, zmm0, 
        arg7, arg8, arg9, arg10);
    let mut var_178: i128 = var_1f0;
    let mut var_158: i128 = var_1d8;
    let mut var_1c0: i128;
    let mut var_138: i128 = var_1c0;
    let mut var_1a8: i128;
    let mut var_118: i128 = var_1a8;
    let var_190: i128;
    let mut var_f8: i128 = var_190;
    let mut var_90: ();
    uu_ptx::format_tex_field::h94516d53c8f62932(&var_90, *var_178[8], var_1e0);
    let var_1c8: i64;
    let mut var_78: ();
    uu_ptx::format_tex_field::h94516d53c8f62932(&var_78, *var_158[8], var_1c8);
    let var_1b0: i64;
    let mut var_60: ();
    uu_ptx::format_tex_field::h94516d53c8f62932(&var_60, *var_138[8], var_1b0);
    let var_198: i64;
    let mut var_48: ();
    uu_ptx::format_tex_field::h94516d53c8f62932(&var_48, *var_118[8], var_198);
    let var_180: i64;
    let mut var_a8: *mut *mut c_void;
    uu_ptx::format_tex_field::h94516d53c8f62932(&var_a8, *var_f8[8], var_180);
    var_1f0 = &var_90;
    let var_1e8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_1e0_1: *mut c_void = &var_78;
    let var_1d8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_1d0_1: *mut c_void = &var_60;
    let var_1c8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1c0 = &var_48;
    *var_1c0[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    let var_1b0_1: *mut *mut *mut c_void = &var_a8;
    var_1a8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_d8 = &data_651ab0;
    let var_d0_1: i64 = 6;
    let var_b8: i64 = 0;
    let var_c8: *const *mut *mut [i8; 0xa0] = &var_1f0;
    let var_c0: i64 = 5;
    core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_d8));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_48);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_60);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_90);
    
    if *arg2.byte_offset(0x59) != 0 || *arg2.byte_offset(0x5a) == 1
    {
        uu_ptx::format_tex_field::h94516d53c8f62932(&var_d8, arg9, arg10);
        var_a8 = &var_d8;
        let var_a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_1f0 = &data_651b10;
        let var_1e8_2: i64 = 2;
        let var_1d0_2: i64 = 0;
        let var_1e0_2: *mut *mut *mut c_void = &var_a8;
        let var_1d8_2: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h32ad99550983bc66(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h7f67013864aca505(&var_208, &var_1f0));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_d8);
    }
    
    arg1[1] = var_1f8;
    *arg1 = var_208;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_f8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_118);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_138);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_158);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_178)
}
