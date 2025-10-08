
  fn bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements::h305a91287eb31f3e(arg1: *mut i8, arg2: i64) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x30, 0);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = "This is free and unencumbered so…";
    *(rax_1 + 8) = 0x47;
    *(rax_1 + 0x10) = "DO WHAT THE FUCK YOU WANT TO PUB…";
    *(rax_1 + 0x18) = 0x2b;
    *(rax_1 + 0x20) = "Permission to copy, use, modify,…";
    *(rax_1 + 0x28) = 0xce;
    let rax_2: i32 =
        bat::assets::build_assets::acknowledgements::license_contains_marker::h7fe1f84f804c53fa(
        arg1, arg2, rax_1, 3);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..string..String$C$$RF$alloc..string..String$RP$$GT$$GT$::h5d217fd71d6c8aa5(3, rax_1);
    rax_2
}
