
  int64_t uu_pathchk::check_path::h3260b82c8fbc03b6(char* arg1, void* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    switch (jump_table_418538[*arg1])
    {
        case 0x3d8f5:
        {
            /* tailcall */
            return uu_pathchk::check_default::hab06eef46e470948(arg2, arg3);
        }
        case 0x3d907:
        {
            if (!uu_pathchk::check_default::hab06eef46e470948(arg2, arg3))
                return 0;
            
            /* tailcall */
            return uu_pathchk::check_extra::h08af7cafa8f69b56(arg2, arg3);
        }
        case 0x3d928:
        {
            if (uu_pathchk::check_basic::h0fc1234dee308fd2(arg2, arg3))
                /* tailcall */
                return uu_pathchk::check_extra::h08af7cafa8f69b56(arg2, arg3);
            
            return 0;
            break;
        }
        case 0x3d941:
        {
            /* tailcall */
            return uu_pathchk::check_basic::h0fc1234dee308fd2(arg2, arg3);
        }
    }
}
