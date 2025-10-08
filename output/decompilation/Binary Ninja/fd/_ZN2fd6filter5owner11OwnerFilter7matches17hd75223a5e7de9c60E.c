
  int64_t fd::filter::owner::OwnerFilter::matches::hd75223a5e7de9c60(int32_t* arg1, int32_t arg2, int32_t arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (!fd::filter::owner::Check$LT$T$GT$::check::h63b4f06e810f44cd(*arg1, arg1[1], arg2))
        return 0;
    
    /* tailcall */
    return fd::filter::owner::Check$LT$T$GT$::check::h63b4f06e810f44cd(arg1[2], arg1[3], arg3);
}
