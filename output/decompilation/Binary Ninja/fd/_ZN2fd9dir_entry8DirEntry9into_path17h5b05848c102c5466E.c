
  int128_t* fd::dir_entry::DirEntry::into_path::h5b05848c102c5466(int128_t* arg1, int32_t* arg2)

{
    if (*arg2 == 3)
    {
        int64_t result = *(arg2 + 0x18);
        arg1[1] = result;
        *arg1 = *(arg2 + 8);
        return result;
    }
    
    int128_t var_18 = *(arg2 + 0x60);
    int128_t var_28 = *(arg2 + 0x50);
    int128_t var_38 = *(arg2 + 0x40);
    int128_t var_48 = *(arg2 + 0x30);
    int128_t var_58 = *(arg2 + 0x20);
    int128_t var_68 = *(arg2 + 0x10);
    int128_t var_78 = *arg2;
    return ignore::walk::DirEntry::into_path::hd772e5e3e847583e(arg1, &var_78);
}
