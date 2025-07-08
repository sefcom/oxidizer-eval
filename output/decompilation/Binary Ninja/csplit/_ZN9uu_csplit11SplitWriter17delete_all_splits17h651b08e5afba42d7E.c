
  void** uu_csplit::SplitWriter::delete_all_splits::h651b08e5afba42d7(void* arg1)

{
    void** result_2 = nullptr;
    int64_t r15 = *(arg1 + 0x28);
    
    if (!r15)
        return nullptr;
    
    void* rbx_1 = *(arg1 + 0x20);
    void** result = nullptr;
    int64_t rbp_1 = 0;
    int64_t rax_1;
    
    do
    {
        rax_1 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            rbp_1);
        void var_48;
        uu_csplit::split_name::SplitName::get::h6978abebafad78db(&var_48, rbx_1, rbp_1);
        void** result_1 = std::fs::remove_file::he9a77943a534f5d9(&var_48);
        
        if (result_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6090d7ef5efdac7e(&result_2);
            result_2 = result_1;
            result = result_1;
        }
        
        rbp_1 = rax_1;
    } while (rax_1 < r15);
    return result;
}
