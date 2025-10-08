
  void fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(int64_t* arg1)

{
    switch (*arg1)
    {
        case 0:
        {
            return;
            break;
        }
        case 1:
        case 2:
        {
            arg1[6];
            return;
            break;
        }
        case 3:
        {
            int64_t var_8 = 0;
            void* rax_1 = fd::dir_entry::DirEntry::metadata::hb1432c4a87d609c2(arg1);
            
            if (!rax_1)
                return;
            
            *(rax_1 + 0x38);
            return;
            break;
        }
    }
}
