
  int32_t* uu_chcon::get_root_dev_ino::h0d3acefe4ca973af(int32_t* arg1)

{
    int32_t var_b8;
    std::fs::symlink_metadata::hc0e2d0e49957759e(&var_b8);
    
    if (var_b8 == 2)
    {
        int64_t var_b0;
        uu_chcon::errors::Error::from_io1::h4a84c8fef6f8f370(arg1, var_b0);
        return arg1;
    }
    
    int128_t var_98;
    *(arg1 + 8) = var_98;
    *arg1 = 0x12;
    return arg1;
}
