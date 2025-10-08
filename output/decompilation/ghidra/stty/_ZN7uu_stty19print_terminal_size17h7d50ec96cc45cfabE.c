undefined4 _ZN7uu_stty19print_terminal_size17h7d50ec96cc45cfabE(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_30;
  code *local_28;
  long local_20;
  undefined *local_18;
  
  iVar2 = (*(code *)PTR__ZN3nix3sys7termios11cfgetospeed17h665fdba23cdf575bE_001eaf28)();
  local_80 = &PTR_s_0_001e2ad0;
  if (iVar2 != 0) {
    local_80 = &PTR_s_50_001e2ae8;
    if (iVar2 != 1) {
      local_80 = &PTR_s_75_001e2b00;
      if (iVar2 != 2) {
        local_80 = &PTR_s_110_001e2b18;
        if (iVar2 != 3) {
          local_80 = &PTR_s_134_001e2b30;
          if (iVar2 != 4) {
            local_80 = &PTR_s_150_001e2b48;
            if (iVar2 != 5) {
              local_80 = &PTR_s_200_001e2b60;
              if (iVar2 != 6) {
                local_80 = &PTR_s_300_001e2b78;
                if (iVar2 != 7) {
                  local_80 = &PTR_s_600_001e2b90;
                  if (iVar2 != 8) {
                    local_80 = &PTR_DAT_001e2ba8;
                    if (iVar2 != 9) {
                      local_80 = &PTR_DAT_001e2bc0;
                      if (iVar2 != 10) {
                        local_80 = &PTR_DAT_001e2bd8;
                        if (iVar2 != 0xb) {
                          local_80 = &PTR_DAT_001e2bf0;
                          if (iVar2 != 0xd) {
                            local_80 = &PTR_s_19200_001e2c08;
                            if (iVar2 != 0xe) {
                              local_80 = &PTR_s_38400_001e2c20;
                              if (iVar2 != 0xf) {
                                local_80 = &PTR_s_57600_001e2c38;
                                if (iVar2 != 0x1001) {
                                  local_80 = &PTR_s_115200_001e2c50;
                                  if (iVar2 != 0x1002) {
                                    local_80 = &PTR_s_230400_001e2c68;
                                    if (iVar2 != 0x1003) {
                                      local_80 = &PTR_s_500000_001e2c80;
                                      if (iVar2 != 0x1005) {
                                        local_80 = &PTR_s_576000_001e2c98;
                                        if (iVar2 != 0x1006) {
                                          local_80 = &PTR_s_921600_001e2cb0;
                                          if (iVar2 != 0x1007) {
                                            local_80 = &PTR_s_1000000_001e2cc8;
                                            if (iVar2 != 0x1008) {
                                              local_80 = &PTR_s_1152000_001e2ce0;
                                              if (iVar2 != 0x1009) {
                                                local_80 = &PTR_s_1500000_001e2cf8;
                                                if (iVar2 != 0x100a) {
                                                  local_80 = &PTR_s_2000000_001e2d10;
                                                  if (iVar2 != 0x100b) {
                                                    local_80 = &PTR_s_2500000_001e2d28;
                                                    if (iVar2 != 0x100c) {
                                                      local_80 = &PTR_s_3000000_001e2d40;
                                                      if (iVar2 != 0x100d) {
                                                        local_80 = &PTR_s_3500000_001e2d58;
                                                        if (iVar2 != 0x100e) {
                                                          local_80 = &PTR_s_4000000_001e2d70;
                                                          if (iVar2 != 0x100f) goto LAB_00158b05;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_30 = &local_80;
  local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h73b50bfbd05958dfE;
  local_78 = &PTR_s_speed_baud__001e2a50;
  local_70 = 2;
  uStack_58 = 0;
  local_68 = &local_30;
  local_60 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_78);
LAB_00158b05:
  if (*(char *)(param_2 + 0x28) != '\0') {
    local_80 = (undefined **)0x0;
    uVar4 = 1;
    if (*(char *)(param_2 + 0x18) == '\0') {
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
    }
    uVar3 = (*(code *)PTR__ZN7uu_stty10tiocgwinsz17hc5ed27eca5acd6afE_001eaf38)(uVar4,&local_80);
    if ((uVar3 & 1) != 0) {
      return extraout_EDX;
    }
    local_20 = (long)&local_80 + 2;
    local_28 = (code *)
               PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_001eaf40
    ;
    local_18 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_001eaf40
    ;
    local_78 = &PTR_s_rows___columns___001e2a70;
    local_70 = 3;
    uStack_58 = 0;
    local_68 = &local_30;
    local_60 = 2;
    local_30 = &local_80;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_78);
  }
  _ZN67__LT_core__cell__RefCell_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h4405abb245824463E
            (&local_78,param_1 + 0x20);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30;
  local_80 = (undefined **)CONCAT71(local_80._1_7_,(undefined)local_60);
  local_30 = &local_80;
  local_28 = (code *)
             PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_001eaf48
  ;
  local_78 = &PTR_s_line_____001e2aa0;
  local_70 = 2;
  uStack_58 = 0;
  local_68 = &local_30;
  local_60 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001eaf30)(&local_78);
  local_78 = &PTR_s__001e2ac0;
  local_70 = 1;
  local_68 = (undefined8 **)0x8;
  local_60 = 0;
  uStack_58 = 0;
  (*(code *)puVar1)(&local_78);
  return 0x86;
}