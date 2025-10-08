undefined8 *
_ZN3bat6assets18HighlightingAssets10from_cache17h8cfca79731ebfcd6E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined3 uStack_78;
  undefined4 uStack_75;
  undefined8 local_71;
  char local_68;
  undefined7 uStack_67;
  undefined local_60;
  undefined7 uStack_5f;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(&local_b8,param_2,param_3,&DAT_0019fb00,0xc);
                    /* try { // try from 0053555a to 00535576 has its CatchHandler @ 0053566b */
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(local_a0,param_2,param_3,&DAT_0019fb0c,10);
                    /* try { // try from 00535581 to 0053558a has its CatchHandler @ 0053564e */
  _ZN3bat6assets16asset_from_cache17h3795340a0ae6536fE(&local_68,local_98,local_90);
  uStack_78 = (undefined3)((uint)uStack_58 >> 8);
  uStack_80 = (undefined4)uStack_5f;
  if (local_68 == '\r') {
    uStack_84 = CONCAT13(local_60,(undefined3)uStack_84);
    uStack_7c = CONCAT13((undefined)uStack_58,(int3)((uint7)uStack_5f >> 0x20));
    uStack_75 = uStack_54;
    param_1[0xf] = CONCAT44(uStack_4c,local_50);
    param_1[0xd] = CONCAT71(uStack_5f,local_60);
    param_1[0xe] = CONCAT44(uStack_54,uStack_58);
    *(undefined4 *)param_1 = local_b8;
    *(undefined4 *)((long)param_1 + 4) = uStack_b4;
    *(undefined4 *)(param_1 + 1) = uStack_b0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
    param_1[2] = local_a8;
    param_1[3] = 0x8000000000000000;
    param_1[0x10] = 0;
  }
  else {
    uStack_75 = uStack_54;
    local_71 = CONCAT44(uStack_4c,local_50);
    uStack_88 = (undefined4)uStack_67;
    uStack_84 = (undefined4)(CONCAT17(local_60,uStack_67) >> 0x20);
    uStack_7c = (undefined4)(CONCAT17((undefined)uStack_58,uStack_5f) >> 0x20);
    param_1[9] = local_28;
    param_1[10] = uStack_20;
    *(undefined4 *)(param_1 + 7) = local_38;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_34;
    *(undefined4 *)(param_1 + 8) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_2c;
    *(undefined4 *)(param_1 + 5) = local_48;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_44;
    *(undefined4 *)(param_1 + 6) = uStack_40;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_3c;
    param_1[3] = CONCAT44(uStack_54,uStack_58);
    param_1[4] = local_71;
    *(undefined4 *)((long)param_1 + 9) = uStack_88;
    *(undefined4 *)((long)param_1 + 0xd) = uStack_84;
    *(undefined4 *)((long)param_1 + 0x11) = uStack_80;
    *(undefined4 *)((long)param_1 + 0x15) = uStack_7c;
    *(char *)(param_1 + 1) = local_68;
    *param_1 = 0x8000000000000001;
    _ZN4core3ptr76drop_in_place_LT_bat__assets__serialized_syntax_set__SerializedSyntaxSet_GT_17h6dfb02adb4d69a30E
              (&local_b8);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(local_a0);
  return param_1;
}