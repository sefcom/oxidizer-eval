
  int64_t firecracker::seccomp::get_default_filters::h6575115e05aaac67(int128_t* arg1)

{
    int64_t result_1;
    vmm::seccomp::deserialize_binary::h9d92e16560a10d85(&result_1);
    int64_t result = result_1;
    int128_t var_80;
    int128_t var_70;
    
    if (result)
    {
        int64_t result_2 = result;
        int128_t var_50 = var_80;
        int128_t var_40 = var_70;
        int64_t var_60;
        int64_t var_30 = var_60;
        return firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(arg1, &result_2);
    }
    
    int128_t var_28 = var_80;
    int128_t var_18 = var_70;
    *(arg1 + 0x18) = var_70;
    *(arg1 + 8) = var_80;
    *arg1 = 0;
    return result;
}
