void _ZN12forc_publish14md_pre_process16flatten_markdown17ha70b80a78302ad97E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  long local_58;
  undefined8 uStack_50;
  undefined local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN12forc_publish14md_pre_process16MarkdownDepGraph5build17hcb57cec854dfb558E(&local_e8);
  local_a8 = local_d0;
  lVar2 = local_a8;
  uStack_a0 = lStack_c8;
  lVar1 = uStack_a0;
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    param_1[2] = local_d0;
    param_1[3] = lStack_c8;
    *param_1 = CONCAT44(uStack_dc,uStack_e0);
    param_1[1] = CONCAT44(uStack_d4,uStack_d8);
  }
  else {
    local_a8._0_4_ = (undefined4)local_d0;
    local_a8._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
    uStack_a0._0_4_ = (undefined4)lStack_c8;
    uStack_a0._4_4_ = (undefined4)((ulong)lStack_c8 >> 0x20);
    local_40 = uStack_e0;
    uStack_3c = uStack_dc;
    uStack_38 = uStack_d8;
    uStack_34 = uStack_d4;
    local_30 = (undefined4)local_a8;
    uStack_2c = local_a8._4_4_;
    uStack_28 = (undefined4)uStack_a0;
    uStack_24 = uStack_a0._4_4_;
    local_20 = local_c0;
                    /* try { // try from 0076499d to 007649ac has its CatchHandler @ 00764b47 */
    local_a8 = lVar2;
    uStack_a0 = lVar1;
    _ZN12forc_publish14md_pre_process16MarkdownDepGraph16topological_sort17h47c705fd8070ccadE
              (&local_e8,local_48);
    local_a8 = local_d0;
    if (CONCAT44(uStack_e4,local_e8) == 6) {
      local_78 = local_d0;
      local_88 = uStack_e0;
      uStack_84 = uStack_dc;
      uStack_80 = uStack_d8;
      uStack_7c = uStack_d4;
                    /* try { // try from 007649e8 to 007649ef has its CatchHandler @ 00764b16 */
      _ZN12forc_publish14md_pre_process17MarkdownFlattener13flatten_files17h26adfa89f42a2c83E
                (&local_e8,CONCAT44(uStack_d4,uStack_d8));
      local_58 = local_d0;
      uStack_50 = lStack_c8;
      lVar2 = uStack_50;
      if (CONCAT44(uStack_e4,local_e8) == 0) {
        param_1[2] = local_d0;
        param_1[3] = lStack_c8;
        *(undefined4 *)param_1 = uStack_e0;
        *(undefined4 *)((long)param_1 + 4) = uStack_dc;
        *(undefined4 *)(param_1 + 1) = uStack_d8;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_d4;
      }
      else {
        uStack_50._0_4_ = (undefined4)lStack_c8;
        uStack_50._4_4_ = (undefined4)((ulong)lStack_c8 >> 0x20);
        local_a8 = CONCAT44(uStack_d4,uStack_d8);
        uStack_a0 = local_d0;
        uStack_98 = (undefined4)uStack_50;
        uStack_94 = uStack_50._4_4_;
        local_90 = local_c0;
                    /* try { // try from 00764a40 to 00764ace has its CatchHandler @ 00764b1b */
        uStack_50 = lVar2;
        lVar2 = _ZN12forc_publish14md_pre_process17MarkdownFlattener8get_file17h2d3aca7f456dc271E
                          (local_b8,param_2,param_3);
        if (lVar2 == 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h038d919039a4e533E
                    (&local_e8,"Could not flatten entry file",0x1c);
          param_1[3] = CONCAT44(uStack_d4,uStack_d8);
          *(undefined4 *)(param_1 + 1) = local_e8;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_e4;
          *(undefined4 *)(param_1 + 2) = uStack_e0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_dc;
          lVar2 = 5;
        }
        else {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h038d919039a4e533E
                    (&local_e8,lVar2);
          *(undefined4 *)(param_1 + 2) = uStack_e0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_dc;
          *(undefined4 *)(param_1 + 3) = uStack_d8;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_d4;
          param_1[1] = CONCAT44(uStack_e4,local_e8);
          lVar2 = 6;
        }
        *param_1 = lVar2;
        _ZN4core3ptr68drop_in_place_LT_forc_publish__md_pre_process__MarkdownFlattener_GT_17h434fcf5755f7eda4E
                  (local_b8);
      }
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17hf8f879b1104fcb5aE
                (&local_88);
    }
    else {
      param_1[3] = local_d0;
      *(undefined4 *)(param_1 + 1) = uStack_e0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_dc;
      *(undefined4 *)(param_1 + 2) = uStack_d8;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_d4;
      *param_1 = CONCAT44(uStack_e4,local_e8);
    }
    _ZN4core3ptr67drop_in_place_LT_forc_publish__md_pre_process__MarkdownDepGraph_GT_17h7fc5461fe7e81a86E
              (local_48);
  }
  return;
}