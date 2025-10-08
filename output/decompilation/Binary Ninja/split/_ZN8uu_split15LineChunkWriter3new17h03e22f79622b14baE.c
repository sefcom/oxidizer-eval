
  int64_t uu_split::LineChunkWriter::new::h03e22f79622b14ba(int64_t* arg1, int64_t arg2, void* arg3)

{
    int64_t result_2;
    uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(&result_2, *(arg3 + 0x30), 
        *(arg3 + 0x38), arg3 + 0x40);
    int64_t result_4 = result_2;
    int64_t result_3;
    int64_t result = result_3;
    int64_t var_58;
    
    if (result_4 != -0x7fffffffffffffff)
    {
        int64_t result_5 = result_4;
        int64_t result_1 = result;
        uu_split::LineChunkWriter::start_new_chunk::h270b7287cecb38e1(&result_2, arg3, &result_5);
        result = result_2;
        
        if (result == -0x8000000000000000)
        {
            arg1[1] = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            arg1[2] = &data_50bc38;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$uu_split..filenames..FilenameIterator$GT$::h3a3dca25075fae6f(result_5, result_1);
        }
        
        int128_t var_50;
        *(arg1 + 0x20) = var_50;
        *(arg1 + 0x10) = var_58;
        int128_t var_30;
        arg1[0xe] = *var_30[8];
        int128_t zmm0_2 = result_5;
        int128_t var_40;
        *(arg1 + 0x60) = var_40;
        *(arg1 + 0x50) = var_50;
        *(arg1 + 0x40) = var_58;
        *(arg1 + 0x30) = zmm0_2;
        *arg1 = result;
        arg1[1] = result_3;
        arg1[0xf] = arg3;
        arg1[0x10] = arg2;
        arg1[0x11] = 0;
        arg1[0x12] = arg2;
    }
    else
    {
        arg1[1] = result;
        arg1[2] = var_58;
        *arg1 = -0x8000000000000000;
    }
    return result;
}
