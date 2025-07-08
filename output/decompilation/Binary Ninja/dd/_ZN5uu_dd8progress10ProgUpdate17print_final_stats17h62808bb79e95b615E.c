
  void* uu_dd::progress::ProgUpdate::print_final_stats::h62808bb79e95b615(int64_t* arg1, char arg2, char arg3)

{
    void* result = jump_table_4269c0[arg2] + &jump_table_4269c0;
    
    switch (result)
    {
        case 0x4f03e4:
        {
            /* tailcall */
            return uu_dd::progress::ProgUpdate::print_transfer_stats::ha89ccd90455ae4e0(arg1, arg3);
        }
        case 0x4f03ec:
        {
            /* tailcall */
            return uu_dd::progress::ProgUpdate::print_io_lines::h171b91d694144e42(arg1);
        }
        case 0x4f03f1:
        {
            return result;
            break;
        }
    }
}
