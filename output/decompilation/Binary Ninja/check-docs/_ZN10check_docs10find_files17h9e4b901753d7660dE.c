
  int64_t* check_docs::find_files::h9e4b901753d7660d(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, int64_t arg5)

{
    int64_t var_170 = arg2;
    int64_t var_168 = arg3;
    void** const var_128;
    std::process::Command::new::h6b193cfe60369f89(&var_128, "findFAILbi");
    int64_t* var_1f8 = arg4;
    int64_t r8;
    int64_t var_1f0 = r8;
    char const* const var_1e8 = "-typef-nameProgram `find` not in…";
    int64_t var_1e0 = 5;
    char const* const var_1d8 = "f-nameProgram `find` not in PATH…";
    int64_t var_1d0 = 1;
    char const* const var_1c8 = "-nameProgram `find` not in PATHI…";
    int64_t var_1c0 = 5;
    int64_t var_1b8 = arg2;
    int64_t var_1b0 = arg3;
    void* const var_1a8 = "!^(\S+):(\d+):\s*\{\{\s*#include…";
    int64_t var_1a0 = 1;
    char const* const var_198 = "-nameProgram `find` not in PATHI…";
    int64_t var_190 = 5;
    int64_t r9;
    int64_t var_188 = r9;
    int64_t var_180 = arg5;
    std::process::Command::args::hc106b3ad5f0cb0e8(&var_128);
    std::process::Command::output::h8d3fd625d1d0bec1(&var_1f8);
    void var_160;
    core::result::Result$LT$T$C$E$GT$::expect::hd013351f25734c35(&var_160, &var_1f8, 
        "Program `find` not in PATHInclud…", 0x1a);
    uint64_t rdx =
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h13e711a87b909194(&var_128);
    int32_t var_130;
    int128_t var_120;
    
    if (!var_130)
    {
        alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_128, &var_160);
        void** const rax_2 = var_128;
        var_1f8 = var_120;
        int64_t var_110;
        
        if (-(rax_2) != -0x8000000000000000)
        {
            int64_t var_110_2 = var_110;
            int128_t var_120_1 = var_1f8;
            var_128 = rax_2;
            int64_t var_108;
            int64_t var_108_2 = var_108;
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
        int64_t (* var_1f0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8c5b7927cb42b082;
        var_128 = &data_5d36c0;
        var_120 = 1;
        int64_t var_108_1 = 0;
        *var_120[8] = &var_1f8;
        int64_t var_110_1 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::hb92624ab2af3a182(&var_48, 0, rdx, &var_128);
        arg1[1] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h1606e8560e5c3217(&var_48);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_160);
    }
    void var_148;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3b4e207945e3471f(&var_148);
    return arg1;
}
