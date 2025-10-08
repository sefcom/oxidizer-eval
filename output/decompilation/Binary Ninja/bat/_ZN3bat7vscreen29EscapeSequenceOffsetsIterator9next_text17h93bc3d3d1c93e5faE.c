
  int64_t bat::vscreen::EscapeSequenceOffsetsIterator::next_text::h93bc3d3d1c93e5fa(int64_t* arg1, void* arg2)

{
    int32_t var_20;
    bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hd7045924a81021b7(&var_20, arg2);
    int64_t result = 5;
    
    if (var_20 == 1)
    {
        int128_t var_18;
        *(arg1 + 8) = var_18;
        result = 0;
    }
    
    *arg1 = result;
    return result;
}
