
  void uu_csplit::SplitWriter::finish_split::h02c3d655ecbf09e8(void* arg1)

{
    if (!*(arg1 + 0x38))
    {
        void* rax = *(arg1 + 0x20);
        
        if (*(rax + 0x62) == 1 && !*(arg1 + 0x30))
        {
            *(arg1 + 0x28) -= 1;
            return;
        }
        
        if (!*(rax + 0x61))
        {
            void* var_40 = arg1 + 0x30;
            uint64_t (* var_38)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            void* const var_30 = &data_642c88;
            int64_t var_28 = 2;
            int64_t var_10 = 0;
            void** var_20 = &var_40;
            int64_t var_18 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_30);
        }
    }
}
