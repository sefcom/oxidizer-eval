void _ZN4just9evaluator9Evaluator18evaluate_condition17hff24f5aa7f9c2ad8E
               (char *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char local_160;
  undefined7 uStack_15f;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined3 uStack_c8;
  undefined4 uStack_c5;
  undefined8 uStack_c1;
  
  _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E(&local_160,param_2,*param_3)
  ;
  if (local_160 == '8') {
    local_198 = local_158;
    uStack_194 = uStack_154;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
                    /* try { // try from 00366752 to 0036675e has its CatchHandler @ 00366bbe */
    _ZN4just9evaluator9Evaluator19evaluate_expression17h1032c41901323605E
              (&local_160,param_2,param_3[1]);
    if (local_160 == '8') {
      local_178 = local_158;
      uStack_174 = uStack_154;
      uStack_170 = uStack_150;
      uStack_16c = uStack_14c;
                    /* WARNING: Could not recover jumptable at 0x00366793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0016a7a4 + *(int *)(&DAT_0016a7a4 + (ulong)*(byte *)(param_3 + 2) * 4)))();
      return;
    }
    uStack_c8 = (undefined3)((uint)uStack_150 >> 8);
    uStack_c5 = uStack_14c;
    uStack_c1 = CONCAT44(uStack_144,local_148);
    uStack_d0 = (undefined4)CONCAT43(uStack_154,local_158._1_3_);
    uStack_cc = (undefined4)
                (CONCAT17((undefined)uStack_150,CONCAT43(uStack_154,local_158._1_3_)) >> 0x20);
    *(undefined8 *)(param_1 + 0x60) = local_100;
    *(undefined8 *)(param_1 + 0x50) = local_110;
    *(undefined8 *)(param_1 + 0x58) = uStack_108;
    *(undefined8 *)(param_1 + 0x40) = local_120;
    *(undefined8 *)(param_1 + 0x48) = uStack_118;
    *(undefined4 *)(param_1 + 0x30) = local_130;
    *(undefined4 *)(param_1 + 0x34) = uStack_12c;
    *(undefined4 *)(param_1 + 0x38) = uStack_128;
    *(undefined4 *)(param_1 + 0x3c) = uStack_124;
    *(undefined4 *)(param_1 + 0x20) = local_140;
    *(undefined4 *)(param_1 + 0x24) = uStack_13c;
    *(undefined4 *)(param_1 + 0x28) = uStack_138;
    *(undefined4 *)(param_1 + 0x2c) = uStack_134;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_14c,uStack_150);
    *(undefined8 *)(param_1 + 0x18) = uStack_c1;
    uStack_d8._0_4_ = (undefined4)uStack_15f;
    uStack_d8._4_4_ = (undefined4)(CONCAT17((undefined)local_158,uStack_15f) >> 0x20);
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_d8;
    *(undefined4 *)(param_1 + 5) = uStack_d8._4_4_;
    *(undefined4 *)(param_1 + 9) = uStack_d0;
    *(undefined4 *)(param_1 + 0xd) = uStack_cc;
    *param_1 = local_160;
    uStack_d8 = CONCAT17((undefined)local_158,uStack_15f);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_198);
  }
  else {
    uStack_d0 = (undefined4)CONCAT43(uStack_154,local_158._1_3_);
    uStack_cc = (undefined4)
                (CONCAT17((undefined)uStack_150,CONCAT43(uStack_154,local_158._1_3_)) >> 0x20);
    *(undefined8 *)(param_1 + 0x60) = local_100;
    *(undefined8 *)(param_1 + 0x50) = local_110;
    *(undefined8 *)(param_1 + 0x58) = uStack_108;
    *(undefined8 *)(param_1 + 0x40) = local_120;
    *(undefined8 *)(param_1 + 0x48) = uStack_118;
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_12c,local_130);
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_124,uStack_128);
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_13c,local_140);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_134,uStack_138);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_14c,uStack_150);
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_144,local_148);
    *(ulong *)(param_1 + 1) = CONCAT17((undefined)local_158,uStack_15f);
    *(ulong *)(param_1 + 9) = CONCAT44(uStack_cc,uStack_d0);
    *param_1 = local_160;
  }
  return;
}