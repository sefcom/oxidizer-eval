
  int64_t bat::assets::build_assets::acknowledgements::handle_notice::h6c212b1b9d68349d(char* arg1, int64_t arg2)

{
    int64_t result_1;
    std::fs::read_to_string::h512db2d9218e57c1(&result_1, arg2);
    int64_t result = result_1;
    int64_t rdx_2;
    int64_t result_2;
    
    if (-(result) != -0x8000000000000000)
    {
        *(arg1 + 0x10) = result_2;
        int64_t var_10;
        *(arg1 + 0x18) = var_10;
        rdx_2 = 0xd;
    }
    else
    {
        rdx_2 = 0;
        result = result_2;
    }
    *arg1 = rdx_2;
    *(arg1 + 8) = result;
    return result;
}
