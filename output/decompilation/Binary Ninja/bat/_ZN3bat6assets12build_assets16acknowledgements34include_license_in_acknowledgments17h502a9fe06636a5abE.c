
  uint64_t bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments::h502a9fe06636a5ab(char* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x50, 0);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = "The above copyright notice and t…";
    *(rax_1 + 8) = 0x7e;
    *(rax_1 + 0x10) = "Redistributions in binary form m…";
    *(rax_1 + 0x18) = 0x49;
    *(rax_1 + 0x20) = "Apache License Version 2.0, Janu…";
    *(rax_1 + 0x28) = 0x48;
    *(rax_1 + 0x30) = "Licensed under the Apache Licens…";
    *(rax_1 + 0x38) = 0x3f;
    *(rax_1 + 0x40) = "Creative Commons Attribution 4.0…";
    *(rax_1 + 0x48) = 0x3d;
    int32_t rax_2 =
        bat::assets::build_assets::acknowledgements::license_contains_marker::h7fe1f84f804c53fa(
        arg1, arg2, rax_1, 5);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(5, rax_1);
    return rax_2;
}
