
  int64_t zoxide::db::stream::StreamOptions::new::ha9455680dd6cde2c(int64_t* arg1, int64_t arg2)

{
    int64_t result = 0;
    arg1[9] = arg2;
    
    if (arg2 >= 0x76a700)
        result = arg2 - 0x76a700;
    
    *arg1 = 0;
    arg1[1] = 8;
    *(arg1 + 0x10) = {0};
    arg1[4] = 8;
    arg1[5] = 0;
    arg1[0xb] = 0;
    arg1[0xa] = result;
    arg1[6] = -0x8000000000000000;
    return result;
}
