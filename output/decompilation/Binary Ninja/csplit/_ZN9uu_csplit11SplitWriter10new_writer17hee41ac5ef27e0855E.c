
  int64_t uu_csplit::SplitWriter::new_writer::hee41ac5ef27e0855(int64_t* arg1)

{
    void var_28;
    uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(&var_28, arg1[4], arg1[5]);
    int32_t var_48;
    std::fs::File::create::h9a48f376b3cc205c(&var_48, &var_28);
    
    if (var_48 == 1)
    {
        int64_t result;
        return result;
    }
    
    int32_t var_44;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7c2b7c3db821253c(&var_48, 
        var_44);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$$GT$::h8e7ec623bec16818(arg1);
    int128_t zmm0 = var_48;
    int128_t var_38;
    *(arg1 + 0x10) = var_38;
    *arg1 = zmm0;
    arg1[5] += 1;
    arg1[6] = 0;
    arg1[7] = 0;
    return 0;
}
