undefined  [16]
_ZN5uu_cp8platform5linux18copy_fifo_contents17he2d8ed4668670194E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint __fd;
  long lVar4;
  undefined auVar5 [16];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
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
  _ZN3std2fs4File4open17h9d5fc688c698f3f4E(&local_c0,&local_e0);
  __fd = local_bc;
  if (local_c0 == 0) {
    local_f8 = local_bc;
                    /* try { // try from 0021354a to 0021358f has its CatchHandler @ 00213642 */
    uVar1 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
    local_bc = ~uVar1 & 0x192;
    local_c0 = 0;
    uStack_b3 = 0;
    local_b8 = 0;
    uStack_b6 = 0;
    uStack_b4 = 1;
    uStack_b7 = 1;
    _ZN3std2fs11OpenOptions4open17hb8d9aa9fb7330c1eE(&local_f0,&local_c0,&local_d0);
    lVar4 = local_e8;
    if (local_f0 == 0) {
      local_f4 = local_ec;
                    /* try { // try from 002135a6 to 002135ea has its CatchHandler @ 00213631 */
      auVar5 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17ha1823f747cb4d7cfE
                         (&local_f8,&local_f4);
      lVar4 = auVar5._8_8_;
      lVar3 = lVar4;
      if (auVar5._0_8_ == 0) {
        _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_c0,&local_f8);
        if (local_c0 == 2) {
          lVar3 = CONCAT26(uStack_b2,
                           CONCAT15(uStack_b3,
                                    CONCAT14(uStack_b4,
                                             CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)))));
        }
        else {
          lVar3 = _ZN3std2fs4File15set_permissions17h14239b20adbb1b7dE(&local_f4,local_88);
          if (lVar3 == 0) {
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_f4);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_f8);
            uVar2 = 0;
            goto LAB_0021360e;
          }
        }
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_f4);
      lVar4 = lVar3;
      __fd = local_f8;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(__fd);
    uVar2 = 1;
  }
  else {
    lVar4 = CONCAT26(uStack_b2,
                     CONCAT15(uStack_b3,
                              CONCAT14(uStack_b4,CONCAT22(uStack_b6,CONCAT11(uStack_b7,local_b8)))))
    ;
    uVar2 = 1;
  }
LAB_0021360e:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}