void __rustcall
uu_cat::cat_path(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined7 uStack_bf;
  undefined local_b8;
  undefined7 uStack_b7;
  
  local_d0 = param_5;
  get_input_type(&local_c8);
  if (local_c8 == -0x7ffffffffffffffa) {
    if (local_c0 == '\0') {
      *param_1 = -0x7ffffffffffffffd;
    }
    else if (local_c0 == '\x02') {
      uVar2 = std::io::stdio::stdin();
      local_d8 = std::io::stdio::stdin();
      local_c0 = std::sys::pal::unix::io::is_terminal(&local_d8);
      local_c8 = uVar2;
      cat_handle(param_1,&local_c8,param_4,local_d0);
    }
    else {
      if (local_c0 == '\a') {
        std::os::unix::net::stream::UnixStream::connect();
        if ((int)local_c8 == 0) {
          uVar3 = local_c8._4_4_;
          local_d8 = CONCAT44(local_d8._4_4_,local_c8._4_4_);
                    /* try { // try from 001af2a7 to 001af2b4 has its CatchHandler @ 001af449 */
          lVar1 = std::os::unix::net::datagram::UnixDatagram::shutdown(&local_d8,1);
          if (lVar1 != 0) {
            *param_1 = -0x8000000000000000;
            param_1[1] = lVar1;
            core::ptr::drop_in_place<std::os::unix::net::stream::UnixStream>(uVar3);
            return;
          }
          local_c8._0_5_ = (uint5)uVar3;
                    /* try { // try from 001af3a1 to 001af3b5 has its CatchHandler @ 001af421 */
          cat_handle(param_1,&local_c8,param_4,local_d0);
          core::ptr::drop_in_place<uu_cat::InputHandle<std::os::unix::net::stream::UnixStream>>
                    (local_c8 & 0xffffffff);
          return;
        }
      }
      else {
        std::fs::File::open(&local_c8,param_2,param_3);
        if ((int)local_c8 == 0) {
          uVar3 = local_c8._4_4_;
          local_d8 = CONCAT44(local_d8._4_4_,local_c8._4_4_);
                    /* try { // try from 001af366 to 001af392 has its CatchHandler @ 001af45b */
          if ((param_6 != (long *)0x0) &&
             (lVar1 = uucore::features::fs::FileInformation::file_size(param_6), lVar1 != 0)) {
            uucore::features::fs::FileInformation::from_file(&local_c8,&local_d8);
            if (local_c8 == 0) {
              if ((CONCAT71(uStack_bf,local_c0) == *param_6) &&
                 (CONCAT71(uStack_b7,local_b8) == param_6[1])) {
                *param_1 = -0x7ffffffffffffffc;
                core::ptr::drop_in_place<std::fs::File>(uVar3);
                return;
              }
            }
            else {
              core::ptr::
              drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>
                        (&local_c8);
              uVar3 = (uint)local_d8;
            }
          }
          local_c8._0_5_ = (uint5)uVar3;
                    /* try { // try from 001af3f1 to 001af405 has its CatchHandler @ 001af435 */
          cat_handle(param_1,&local_c8,param_4,local_d0);
          core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>(local_c8 & 0xffffffff);
          return;
        }
      }
      *param_1 = -0x8000000000000000;
      param_1[1] = CONCAT71(uStack_bf,local_c0);
    }
  }
  else {
    param_1[2] = CONCAT71(uStack_b7,local_b8);
    *(ulong *)((long)param_1 + 9) = CONCAT17(local_b8,uStack_bf);
    *param_1 = local_c8;
    *(char *)(param_1 + 1) = local_c0;
  }
  return;
}