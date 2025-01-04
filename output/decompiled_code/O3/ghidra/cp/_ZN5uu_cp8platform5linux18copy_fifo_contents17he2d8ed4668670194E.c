undefined  [16] __rustcall
uu_cp::platform::linux::copy_fifo_contents
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  uint local_bc;
  undefined local_b8;
  undefined uStack_b7;
  undefined2 uStack_b6;
  undefined uStack_b4;
  undefined uStack_b3;
  undefined2 uStack_b2;
  undefined4 local_88;
  
  local_e0 = param_1;
  local_d8 = param_2;
  local_d0 = param_3;
  local_c8 = param_4;
  std::fs::File::open(&local_c0,&local_e0);
  uVar4 = local_bc;
  if (local_c0 == 0) {
    local_f8 = local_bc;
                    /* try { // try from 0021354a to 0021358f has its CatchHandler @ 00213642 */
    uVar1 = uucore::features::mode::get_umask();
    local_bc = ~uVar1 & 0x192;
    local_c0 = 0;
    uStack_b3 = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    uStack_b4 = 1;
    uStack_b7 = 1;
    std::fs::OpenOptions::open(&local_f0,&local_c0,&local_d0);
    lVar5 = local_e8;
    if (local_f0 == 0) {
      local_f4 = local_ec;
                    /* try { // try from 002135a6 to 002135ea has its CatchHandler @ 00213631 */
      auVar6 = _<std::sys::pal::unix::kernel_copy::Copier<R,W>as_std::sys::pal::unix::kernel_copy::SpecCopy>
               ::copy(&local_f8,&local_f4);
      lVar5 = auVar6._8_8_;
      lVar3 = lVar5;
      if (auVar6._0_8_ == 0) {
        std::fs::File::metadata(&local_c0,&local_f8);
        if (local_c0 == 2) {
          lVar3 = CONCAT26(uStack_b2,
                           CONCAT15(uStack_b3,
                                    CONCAT14(uStack_b4,
                                             CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)))));
        }
        else {
          lVar3 = std::fs::File::set_permissions(&local_f4,local_88);
          if (lVar3 == 0) {
            core::ptr::drop_in_place<std::fs::File>(local_f4);
            core::ptr::drop_in_place<std::fs::File>(local_f8);
            uVar2 = 0;
            goto LAB_0021360e;
          }
        }
      }
      core::ptr::drop_in_place<std::fs::File>(local_f4);
      lVar5 = lVar3;
      uVar4 = local_f8;
    }
    core::ptr::drop_in_place<std::fs::File>(uVar4);
    uVar2 = 1;
  }
  else {
    lVar5 = CONCAT26(uStack_b2,
                     CONCAT15(uStack_b3,
                              CONCAT14(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)))))
    ;
    uVar2 = 1;
  }
LAB_0021360e:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}