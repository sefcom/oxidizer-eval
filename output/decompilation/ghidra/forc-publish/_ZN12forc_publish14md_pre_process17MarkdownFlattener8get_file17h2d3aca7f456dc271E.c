undefined  [16]
_ZN12forc_publish14md_pre_process17MarkdownFlattener8get_file17h2d3aca7f456dc271E
          (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_R15;
  undefined auVar3 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN3std2fs12canonicalize17h7b404ad07e351b4bE(&local_30);
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  uStack_34 = uStack_1c;
  local_48 = local_30;
                    /* try { // try from 007648d0 to 007648da has its CatchHandler @ 0076490a */
  lVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hb2ceaefb36fdf086E
                    (param_1,&local_48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    unaff_R15 = *(undefined8 *)(lVar1 + 0x28);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E
            (local_30,CONCAT44(uStack_3c,local_40));
  auVar3._8_8_ = unaff_R15;
  auVar3._0_8_ = uVar2;
  return auVar3;
}