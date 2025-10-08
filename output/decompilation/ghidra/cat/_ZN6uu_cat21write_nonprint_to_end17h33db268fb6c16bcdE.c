long _ZN6uu_cat21write_nonprint_to_end17h33db268fb6c16bcdE
               (long param_1,long param_2,undefined8 param_3,byte *param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  byte local_42 [3];
  byte local_3f [4];
  byte local_3b [3];
  undefined8 local_38;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar3 = 0;
    local_38 = param_5;
    do {
      bVar1 = *(byte *)(param_1 + lVar3);
      uVar2 = local_38;
      pbVar4 = param_4;
      if (bVar1 != 9) {
        if (bVar1 == 0x7f) {
          uVar2 = 2;
          pbVar4 = (byte *)"^?";
        }
        else {
          if (bVar1 == 10) {
            return lVar3;
          }
          if (bVar1 < 0x20) {
            local_42[2] = bVar1 | 0x40;
            local_42[1] = 0x5e;
            uVar2 = 2;
            pbVar4 = local_42 + 1;
          }
          else if ((byte)(bVar1 - 0x20) < 0x5f) {
            uVar2 = 1;
            pbVar4 = local_42;
            local_42[0] = bVar1;
          }
          else if ((char)bVar1 < -0x60) {
            local_3f[3] = bVar1 - 0x40;
            local_3f[0] = 0x4d;
            local_3f[1] = 0x2d;
            local_3f[2] = 0x5e;
            uVar2 = 4;
            pbVar4 = local_3f;
          }
          else if ((byte)(bVar1 + 0x60) < 0x5f) {
            local_3b[2] = bVar1 & 0x7f;
            local_3b[0] = 0x4d;
            local_3b[1] = 0x2d;
            uVar2 = 3;
            pbVar4 = local_3b;
          }
          else {
            uVar2 = 4;
            pbVar4 = &DAT_001195d4;
          }
        }
      }
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
                        (param_3,pbVar4,uVar2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7628d8a11a4ef90dE
                (uVar2,&PTR_s_src_uu_cat_src_cat_rs_001ead50);
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
  }
  return param_2;
}