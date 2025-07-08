
  fn uu_dd::progress::ProgUpdate::print_final_stats::h62808bb79e95b615(arg1: *mut i64, arg2: i8, arg3: i8) -> *mut c_void

{
    let result: *mut c_void = jump_table_4269c0[arg2] + &jump_table_4269c0;
    
    match result
    {
        0x4f03e4 =>
        {
            /* tailcall */
            uu_dd::progress::ProgUpdate::print_transfer_stats::ha89ccd90455ae4e0(arg1, arg3)
        }
        0x4f03ec =>
        {
            /* tailcall */
            uu_dd::progress::ProgUpdate::print_io_lines::h171b91d694144e42(arg1)
        }
        0x4f03f1 =>
        {
            result
        }
    }
}
