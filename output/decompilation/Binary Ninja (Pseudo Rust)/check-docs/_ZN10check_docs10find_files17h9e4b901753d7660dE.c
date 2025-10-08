
  fn check_docs::find_files::h9e4b901753d7660d(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: i64) -> *mut i64

{
    let mut var_170: i64 = arg2;
    let var_168: i64 = arg3;
    let mut var_128: *mut *mut c_void;
    std::process::Command::new::h6b193cfe60369f89(&var_128, "findFAILbi");
    let mut var_1f8: *mut i64 = arg4;
    let r8: i64;
    let var_1f0: i64 = r8;
    let var_1e8: *const i8 = "-typef-nameProgram `find` not in…";
    let var_1e0: i64 = 5;
    let var_1d8: *const i8 = "f-nameProgram `find` not in PATH…";
    let var_1d0: i64 = 1;
    let var_1c8: *const i8 = "-nameProgram `find` not in PATHI…";
    let var_1c0: i64 = 5;
    let var_1b8: i64 = arg2;
    let var_1b0: i64 = arg3;
    let var_1a8: *mut c_void = "!^(\S+):(\d+):\s*\{\{\s*#include…";
    let var_1a0: i64 = 1;
    let var_198: *const i8 = "-nameProgram `find` not in PATHI…";
    let var_190: i64 = 5;
    let r9: i64;
    let var_188: i64 = r9;
    let var_180: i64 = arg5;
    std::process::Command::args::hc106b3ad5f0cb0e8(&var_128);
    std::process::Command::output::h8d3fd625d1d0bec1(&var_1f8);
    let mut var_160: ();
    core::result::Result$LT$T$C$E$GT$::expect::hd013351f25734c35(&var_160, &var_1f8, 
        "Program `find` not in PATHInclud…", 0x1a);
    let rdx: u64 =
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h13e711a87b909194(&var_128);
    let var_130: i32;
    let mut var_120: i128;
    
    if var_130 == 0
    {
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_128, &var_160);
        let rax_2: *mut *mut c_void = var_128;
        var_1f8 = var_120;
        let var_110: i64;
        
        if -(rax_2) != -0x8000000000000000
        {
            let var_110_2: i64 = var_110;
            let var_120_1: i128 = var_1f8;
            var_128 = rax_2;
            let var_108: i64;
            let var_108_2: i64 = var_108;
            arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::ha48715314de132c6(&var_128);
            *arg1 = -0x8000000000000000;
        }
        else
        {
            arg1[2] = var_110;
            *arg1 = var_1f8;
        }
    }
    else
    {
        var_1f8 = &var_170;
        let var_1f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        var_128 = &data_5d36c0;
        var_120 = 1;
        let var_108_1: i64 = 0;
        *var_120[8] = &var_1f8;
        let var_110_1: i64 = 1;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::hb92624ab2af3a182(&var_48, 0, rdx, &var_128);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h1606e8560e5c3217(&var_48);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_160);
    }
    let mut var_148: ();
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_148);
    arg1
}
