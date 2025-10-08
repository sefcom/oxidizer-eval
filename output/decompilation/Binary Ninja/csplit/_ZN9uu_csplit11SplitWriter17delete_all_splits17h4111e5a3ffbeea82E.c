
  void** uu_csplit::SplitWriter::delete_all_splits::h4111e5a3ffbeea82(void* arg1)

{
    void** result_2 = nullptr;
    int64_t r13 = *(arg1 + 0x28);
    
    if (!r13)
        return nullptr;
    
    void* rbx_1 = *(arg1 + 0x20);
    int64_t r14_1 = 0;
    void** result = nullptr;
    
    while (true)
    {
        void var_48;
        uu_csplit::split_name::SplitName::get::hecaf47b623a4fc62(&var_48, rbx_1, r14_1);
        void** result_1 = std::fs::remove_file::h4addf1ceb4211f90(&var_48);
        void** result_3 = result_1;
        
        if (!result_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7233fab9261f68f6(&result_3);
            r14_1 += 1;
            
            if (r13 == r14_1)
                break;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7233fab9261f68f6(&result_2);
            result_2 = result_1;
            result = result_1;
            r14_1 += 1;
            
            if (r13 == r14_1)
                break;
        }
    }
    
    return result;
}
