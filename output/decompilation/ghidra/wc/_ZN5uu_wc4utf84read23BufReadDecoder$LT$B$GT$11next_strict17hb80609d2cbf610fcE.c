undefined8 *
_ZN5uu_wc4utf84read23BufReadDecoder_LT_B_GT_11next_strict17hb80609d2cbf610fcE
          (undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_48;
  ulong local_40;
  byte local_38;
  byte local_37;
  
  lVar1 = param_2 + 0x18;
LAB_001c2bd0:
  do {
    if (*(long *)(param_2 + 0x10) != 0) {
      _ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_7consume17h5ee28ccd51983a15E
                (param_2);
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    _ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_8fill_buf17h6ecd177c436464d2E
              (&local_48,param_2);
    uVar6 = local_40;
    lVar2 = local_48;
    if (local_48 == 0) {
LAB_001c2cff:
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = local_40;
      return param_1;
    }
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if (local_40 == 0) {
        *param_1 = 2;
        return param_1;
      }
      _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E(&local_48,local_48,local_40);
      if (local_48 == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = local_40;
        if (local_40 == 0) {
          if ((local_38 & 1) == 0) {
            *(ulong *)(param_2 + 0x10) = uVar6;
            uVar3 = _ZN5uu_wc4utf810Incomplete3new17hcf6109872b689ce7E(lVar2,uVar6);
            *(int *)(param_2 + 0x18) = (int)uVar3;
            *(char *)(param_2 + 0x1c) = (char)((ulong)uVar3 >> 0x20);
            goto LAB_001c2bd0;
          }
          uVar5 = (ulong)local_37;
        }
        uVar4 = (ulong)(local_40 == 0);
        uVar6 = uVar5;
      }
      *(ulong *)(param_2 + 0x10) = uVar6;
      _ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_8fill_buf17h6ecd177c436464d2E
                (&local_48,param_2);
      if (local_48 == 0) goto LAB_001c2cff;
      auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hcc9c09d4ae31832dE
                         (uVar6,local_48,local_40);
      goto LAB_001c2ceb;
    }
    if (local_40 == 0) {
      auVar7 = _ZN5uu_wc4utf810Incomplete11take_buffer17h14a764021c5821f9E(lVar1);
      goto LAB_001c2d1e;
    }
    auVar7 = _ZN5uu_wc4utf810Incomplete20try_complete_offsets17h9c1fcf79f71d155fE
                       (lVar1,local_48,local_40);
    *(long *)(param_2 + 0x10) = auVar7._0_8_;
    if (auVar7[8] != '\x02') {
      uVar4 = auVar7._8_8_ & 0xffffffff;
      auVar7 = _ZN5uu_wc4utf810Incomplete11take_buffer17h14a764021c5821f9E(lVar1);
LAB_001c2ceb:
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
      }
      else {
LAB_001c2d1e:
        *param_1 = 1;
      }
      *(undefined (*) [16])(param_1 + 1) = auVar7;
      return param_1;
    }
  } while( true );
}