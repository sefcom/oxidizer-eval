undefined8 __rustcall
uu_split::get_input_size
          (long param_1,undefined *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 local_11c;
  long local_118;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  ulong local_f8;
  long **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_b0;
  undefined local_50 [24];
  undefined local_38 [24];
  
  local_118 = param_1;
  if (param_4 == 0) {
    param_5 = uucore::features::fs::sane_blksize::sane_blksize_from_path
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  local_100 = param_2;
  local_f8 = param_5;
  auVar2 = std::io::default_read_to_end(&local_100,param_3,0);
  if (auVar2._0_8_ == 0) {
    if (auVar2._8_8_ < param_5) {
      return 0;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),"-",1);
    if (cVar1 == '\0') {
      std::fs::metadata(&local_100,param_1);
      if ((int)local_100 != 2) {
        if (auVar2._8_8_ <= local_b0) {
          return 0;
        }
        std::fs::File::open(&local_100,*(undefined8 *)(local_118 + 8),
                            *(undefined8 *)(local_118 + 0x10));
        if ((int)local_100 == 0) {
          local_11c = local_100._4_4_;
                    /* try { // try from 001cbe55 to 001cbf0c has its CatchHandler @ 001cbf12 */
          auVar2 = _<std::fs::File_as_std::io::Seek>::seek(&local_11c,1,0);
          if (auVar2._0_8_ == 0) {
            if (auVar2._8_8_ != 0) {
              core::ptr::drop_in_place<std::fs::File>(&local_11c);
              return 0;
            }
            local_110 = &local_118;
            local_108 = _<&T_as_core::fmt::Display>::fmt;
            local_100 = &DAT_002488c0;
            local_f8 = 2;
            local_e0 = 0;
            local_f0 = &local_110;
            local_e8 = 1;
            core::option::Option<T>::map_or_else(local_50,0,&local_100);
            std::io::error::Error::new(0x27,local_50);
          }
          core::ptr::drop_in_place<std::fs::File>(&local_11c);
        }
      }
    }
    else {
      local_110 = &local_118;
      local_108 = _<&T_as_core::fmt::Display>::fmt;
      local_100 = &DAT_002488e0;
      local_f8 = 2;
      local_e0 = 0;
      local_f0 = &local_110;
      local_e8 = 1;
      core::option::Option<T>::map_or_else(local_38,0,&local_100);
      std::io::error::Error::new(0x27,local_38);
    }
  }
  return 1;
}