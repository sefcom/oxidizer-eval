undefined8 __rustcall uu_tail::paths::path_is_tailable(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long local_c8;
  undefined8 local_c0;
  
  cVar1 = std::path::Path::is_file();
  uVar2 = 1;
  if (cVar1 == '\0') {
    std::fs::metadata(&local_c8,param_1,param_2);
    if (local_c8 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (2,local_c0);
      uVar2 = 0;
    }
    else {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_c8,local_c0);
      std::fs::metadata(&local_c8,param_1,param_2);
      uVar2 = core::result::Result<T,E>::map_or(&local_c8);
    }
  }
  return uVar2;
}