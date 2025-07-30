
  char const (**)[0x109] flealib::ftp::FTP::write_file::h859ae53e9703cadf(int64_t* arg1, int64_t* arg2)

{
    char var_20;
    std::fs::File::create::hb10f4de1cd0f279a(&var_20, arg1);
    char const (** result)[0x109];
    char const (** result_1)[0x109];
    
    if (!(var_20 & 1))
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        result = std::io::Write::write_all::h066e478a0016aaba(&fd, arg2[1], arg2[2]);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
        
        if (!result)
            result = nullptr;
    }
    else
        result = result_1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(arg2);
    return result;
}
