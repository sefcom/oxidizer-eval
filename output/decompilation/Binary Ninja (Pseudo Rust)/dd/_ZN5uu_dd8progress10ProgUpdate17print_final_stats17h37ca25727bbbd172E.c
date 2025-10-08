
  fn uu_dd::progress::ProgUpdate::print_final_stats::h37ca25727bbbd172(arg1: *mut i64, arg2: i8, arg3: i8) -> *mut c_void

{
    let result: *mut c_void = jump_table_41f9c8[arg2] + &jump_table_41f9c8;
    
    match result
    {
        0x48ef64 =>
        {
            /* tailcall */
            uu_dd::progress::ProgUpdate::print_transfer_stats::h7b7c0ec0b63533bd(arg1, arg3)
        }
        0x48ef6d =>
        {
            /* tailcall */
            uu_dd::progress::ProgUpdate::print_io_lines::hde510828c1977c85(arg1)
        }
        0x48ef72 =>
        {
            result
        }
    }
}
