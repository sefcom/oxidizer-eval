
  int64_t rg::search::SearchWorker$LT$W$GT$::should_preprocess::h843309bce3ef4a26(void* arg1, int64_t arg2)

{
    int64_t result = 0;
    
    if (!(0 + -(*(arg1 + 0x280))))
    {
        if (!*(arg1 + 0x230))
        {
            result = 1;
            return 1;
        }
        
        int64_t var_8_1 = 0;
        result = ignore::overrides::Override::matched::h96500a335d15963e(arg1 + 0x218, arg2) != 1;
    }
    
    return result;
}
