char __rustcall
uu_ls::PathData::new::get_file_type
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int local_e0 [4];
  int local_d0 [44];
  
  if (param_4 != 0) {
    std::fs::metadata(local_d0,param_2,param_3);
    if (local_d0[0] != 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_d0);
      return '\x01';
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d0);
  }
  std::fs::DirEntry::file_type(local_e0,param_1);
  if (local_e0[0] == 0) {
    cVar1 = '\x01';
  }
  else {
                    /* try { // try from 00226eb0 to 00226ed2 has its CatchHandler @ 00226f1b */
    std::fs::symlink_metadata(local_d0,param_2,param_3);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d0);
    cVar1 = (local_d0[0] == 2) + '\x01';
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::FileType,std::io::error::Error>>(local_e0);
  return cVar1;
}