void __rustcall
uu_expr::syntax_tree::BinOp::eval
          (undefined8 *param_1,char param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long alStack_118 [6];
  long lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == '\0') {
    RelationOp::eval(param_1,param_3,param_4,param_5);
    return;
  }
  if (param_2 == '\x01') {
    AstNode::eval(&lStack_e8,param_4);
    uStack_58 = uStack_e0;
    uStack_54 = uStack_dc;
    uStack_50 = uStack_d8;
    uStack_4c = uStack_d4;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    uStack_40 = uStack_c8;
    uStack_3c = uStack_c4;
    uStack_138 = uStack_e0;
    uStack_134 = uStack_dc;
    uStack_130 = uStack_d8;
    uStack_12c = uStack_d4;
    uStack_128 = uStack_d0;
    uStack_124 = uStack_cc;
    uStack_120 = uStack_c8;
    uStack_11c = uStack_c4;
    if (lStack_e8 == 0) {
      NumOrStr::eval_as_bigint(alStack_118,&uStack_58);
      uStack_138 = (undefined4)alStack_118[1];
      uStack_134 = (undefined4)((ulong)alStack_118[1] >> 0x20);
      uStack_130 = (undefined4)alStack_118[2];
      uStack_12c = (undefined4)((ulong)alStack_118[2] >> 0x20);
      uStack_128 = (undefined4)alStack_118[3];
      uStack_124 = (undefined4)((ulong)alStack_118[3] >> 0x20);
      uStack_120 = (undefined4)alStack_118[4];
      uStack_11c = (undefined4)((ulong)alStack_118[4] >> 0x20);
      if (alStack_118[0] == 0) {
        uStack_88 = uStack_128;
        uStack_84 = uStack_124;
        uStack_80 = uStack_120;
        uStack_7c = uStack_11c;
        uStack_98 = uStack_138;
        uStack_94 = uStack_134;
        uStack_90 = uStack_130;
        uStack_8c = uStack_12c;
        AstNode::eval(&lStack_e8,param_5);
        uStack_38 = uStack_e0;
        uStack_34 = uStack_dc;
        uStack_30 = uStack_d8;
        uStack_2c = uStack_d4;
        uStack_28 = uStack_d0;
        uStack_24 = uStack_cc;
        uStack_20 = uStack_c8;
        uStack_1c = uStack_c4;
        uStack_138 = uStack_e0;
        uStack_134 = uStack_dc;
        uStack_130 = uStack_d8;
        uStack_12c = uStack_d4;
        uStack_128 = uStack_d0;
        uStack_124 = uStack_cc;
        uStack_120 = uStack_c8;
        uStack_11c = uStack_c4;
        if (lStack_e8 == 0) {
          NumOrStr::eval_as_bigint(alStack_118,&uStack_38);
          uStack_138 = (undefined4)alStack_118[1];
          uStack_134 = (undefined4)((ulong)alStack_118[1] >> 0x20);
          uStack_130 = (undefined4)alStack_118[2];
          uStack_12c = (undefined4)((ulong)alStack_118[2] >> 0x20);
          uStack_128 = (undefined4)alStack_118[3];
          uStack_124 = (undefined4)((ulong)alStack_118[3] >> 0x20);
          uStack_120 = (undefined4)alStack_118[4];
          uStack_11c = (undefined4)((ulong)alStack_118[4] >> 0x20);
          if (alStack_118[0] == 0) {
            uStack_a8 = uStack_128;
            uStack_a4 = uStack_124;
            uStack_a0 = uStack_120;
            uStack_9c = uStack_11c;
            uStack_b8 = uStack_138;
            uStack_b4 = uStack_134;
            uStack_b0 = uStack_130;
            uStack_ac = uStack_12c;
                    /* WARNING: Could not recover jumptable at 0x0022e6e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)&switchD_0022e6e1::caseD_d +
                      (long)(int)(&switchD_0022e6e1::caseD_d)[param_3]))();
            return;
          }
        }
        *(undefined4 *)(param_1 + 3) = uStack_128;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_124;
        *(undefined4 *)(param_1 + 4) = uStack_120;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_11c;
        *(undefined4 *)(param_1 + 1) = uStack_138;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_134;
        *(undefined4 *)(param_1 + 2) = uStack_130;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_12c;
        *param_1 = 1;
        core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&uStack_98);
        return;
      }
    }
    *(undefined4 *)(param_1 + 3) = uStack_128;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_124;
    *(undefined4 *)(param_1 + 4) = uStack_120;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_11c;
    *(undefined4 *)(param_1 + 1) = uStack_138;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_134;
    *(undefined4 *)(param_1 + 2) = uStack_130;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_12c;
    *param_1 = 1;
    return;
  }
  StringOp::eval();
  return;
}