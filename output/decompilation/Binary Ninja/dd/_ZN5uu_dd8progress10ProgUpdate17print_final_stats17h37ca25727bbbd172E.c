
  void* uu_dd::progress::ProgUpdate::print_final_stats::h37ca25727bbbd172(int64_t* arg1, char arg2, char arg3)

{
    void* result = jump_table_41f9c8[arg2] + &jump_table_41f9c8;
    
    switch (result)
    {
        case 0x48ef64:
        {
            /* tailcall */
            return uu_dd::progress::ProgUpdate::print_transfer_stats::h7b7c0ec0b63533bd(arg1, arg3);
        }
        case 0x48ef6d:
        {
            /* tailcall */
            return uu_dd::progress::ProgUpdate::print_io_lines::hde510828c1977c85(arg1);
        }
        case 0x48ef72:
        {
            return result;
            break;
        }
    }
}
