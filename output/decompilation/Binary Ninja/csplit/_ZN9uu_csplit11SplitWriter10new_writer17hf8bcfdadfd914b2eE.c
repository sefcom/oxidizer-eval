
  int64_t uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(int128_t* arg1)

{
    void var_28;
    uu_csplit::split_name::SplitName::get::h6978abebafad78db(&var_28, arg1[2], *(arg1 + 0x28));
    int32_t var_48;
    std::fs::File::create::hf27309c53a086f3b(&var_48, &var_28);
    
    if (var_48)
    {
        int64_t result;
        return result;
    }
    
    int32_t var_44;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h49ebb8e54e383c4e(&var_48, 
        0x2000, var_44);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$$GT$::h415acb109cb632b9(arg1);
    int128_t zmm0_1 = var_48;
    int128_t var_38;
    arg1[1] = var_38;
    *arg1 = zmm0_1;
    *(arg1 + 0x28) += 1;
    arg1[3] = 0;
    *(arg1 + 0x38) = 0;
    return 0;
}
