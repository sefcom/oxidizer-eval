undefined  [16]
_ZN5uu_cp8platform5linux11copy_stream17h194a761372098ffcE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint __fd;
  undefined auVar5 [16];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  uint uStack_c4;
  undefined local_c0;
  undefined uStack_bf;
  undefined2 uStack_be;
  undefined uStack_bc;
  undefined uStack_bb;
  undefined2 uStack_ba;
  undefined4 local_90;
  
  local_e8 = param_1;
  local_e0 = param_2;
  local_d8 = param_3;
  local_d0 = param_4;
  _ZN3std2fs4File4open17hcf22eb549d8d01fbE(&local_c8,&local_e8);
  __fd = uStack_c4;
  if (local_c8 == 1) {
    lVar4 = CONCAT26(uStack_ba,
                     CONCAT15(uStack_bb,
                              CONCAT14(uStack_bc,CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0)))))
    ;
  }
  else {
    local_100 = uStack_c4;
                    /* try { // try from 0019b8ac to 0019b8f1 has its CatchHandler @ 0019b9dc */
    uVar1 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_00267b08)();
    uStack_c4 = ~uVar1 & 0x192;
    local_c8 = 0;
    uStack_bb = 0;
    local_c0 = 0;
    uStack_be = 0;
    uStack_bc = 1;
    uStack_bf = 1;
    _ZN3std2fs11OpenOptions4open17h613d0f70adb4f6caE(&local_f8,&local_c8,&local_d8);
    lVar4 = local_f0;
    if (local_f8 != 1) {
      local_fc = local_f4;
                    /* try { // try from 0019b908 to 0019b99a has its CatchHandler @ 0019b9bb */
      _ZN6uucore8features8buf_copy5linux11copy_stream17hb97e3869c80a2c8fE
                (&local_c8,&local_100,&local_fc);
      if (CONCAT44(uStack_c4,local_c8) == 0) {
        lVar4 = CONCAT26(uStack_ba,
                         CONCAT15(uStack_bb,
                                  CONCAT14(uStack_bc,
                                           CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0)))));
        if (param_5 == '\0') {
LAB_0019b9a5:
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_fc);
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_100);
          uVar2 = 0;
          goto LAB_0019b955;
        }
        (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_c8,&local_100);
        if (local_c8 == 2) {
          lVar3 = CONCAT26(uStack_ba,
                           CONCAT15(uStack_bb,
                                    CONCAT14(uStack_bc,
                                             CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0)))));
        }
        else {
          lVar3 = (*(code *)PTR__ZN3std2fs4File15set_permissions17h44e1848d00d414e9E_00267b38)
                            (&local_fc,local_90);
          if (lVar3 == 0) goto LAB_0019b9a5;
        }
      }
      else {
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3fae8bb6fba1fa61E
                  (CONCAT44(uStack_c4,local_c8),
                   CONCAT26(uStack_ba,
                            CONCAT15(uStack_bb,
                                     CONCAT14(uStack_bc,
                                              CONCAT22(uStack_be,CONCAT11(uStack_bf,local_c0))))));
        lVar3 = 0x2800000003;
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_fc);
      lVar4 = lVar3;
      __fd = local_100;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd);
  }
  uVar2 = 1;
LAB_0019b955:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}