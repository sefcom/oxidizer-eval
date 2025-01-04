void __rustcall
uu_ln::existing_backup_path
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  
  simple_backup_path(local_f0,param_2,param_3,&DAT_00115fd8,4);
                    /* try { // try from 001bb060 to 001bb0ac has its CatchHandler @ 001bb0c8 */
  std::fs::metadata(&local_d8,local_e8,local_e0);
  if (local_d8 == 2) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (2,local_d0);
    simple_backup_path(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_d8,local_d0);
    numbered_backup_path(param_1,param_2,param_3);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(local_f0);
  return;
}