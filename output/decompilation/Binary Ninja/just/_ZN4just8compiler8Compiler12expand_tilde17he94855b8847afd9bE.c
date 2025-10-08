
  int64_t just::compiler::Compiler::expand_tilde::he94855b8847afd9b(char* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t rax;
    int64_t rdx_1;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        "~/!~=~!===SUBCOMMAND1.43.0Casey …", 2, arg2, arg3);
    int64_t result;
    char var_90;
    
    if (!rax)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_90, arg2, arg3);
        label_65c569:
        int64_t var_80;
        *(arg1 + 0x18) = var_80;
        *(arg1 + 8) = var_90;
        result = 0x38;
    }
    else
    {
        int64_t var_a8;
        dirs::home_dir::h56798f98581d6ac2(&var_a8);
        var_90 = 0x1b;
        
        if (!(0 + -(var_a8)))
        {
            core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_90);
            int64_t rax_1;
            int64_t rdx_3;
            rax_1 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h255918ccc9205e78(rax, rdx_1);
            int64_t var_a0;
            uint64_t var_98;
            std::path::Path::join::h1eac0ae5e7efa361(&var_90, var_a0, var_98, rax_1);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
            goto label_65c569;
        }
        
        result = 0x1b;
    }
    *arg1 = result;
    return result;
}
