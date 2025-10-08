undefined8
_ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_5query17hb4cde70ad6f18db1E
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  auVar2 = _ZN6zoxide4util12current_time17hc177626caa3eacceE();
  uVar1 = auVar2._8_8_;
  if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_10get_stream17h9fa08a87e4cae412E
              (&local_90,param_1,param_2,uVar1);
    local_98 = local_20;
    local_a8 = local_30;
    uStack_a0 = uStack_28;
    local_b8 = local_40;
    uStack_b0 = uStack_38;
    local_c8 = local_50;
    uStack_c4 = uStack_4c;
    uStack_c0 = uStack_48;
    uStack_bc = uStack_44;
    local_d8 = local_60;
    uStack_d4 = uStack_5c;
    uStack_d0 = uStack_58;
    uStack_cc = uStack_54;
    local_e8 = local_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uStack_68;
    uStack_dc = uStack_64;
    local_f8 = local_80;
    uStack_f4 = uStack_7c;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    local_108 = local_90;
    local_100 = local_88;
    if (*(char *)(param_1 + 0x49) == '\0') {
      if (*(char *)(param_1 + 0x4a) == '\0') {
        uVar1 = _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_11query_first17h2951b26d66defb32E
                          (param_1,&local_108,uVar1);
      }
      else {
        uVar1 = _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_10query_list17h1793189bc91b0810E
                          (param_1,&local_108,uVar1);
      }
    }
    else {
                    /* try { // try from 0018fb39 to 0018fb6d has its CatchHandler @ 0018fb8c */
      uVar1 = _ZN6zoxide3cmd5query41__LT_impl_u20_zoxide__cmd__cmd__Query_GT_17query_interactive17hb59cdf2fd68d3de0E
                        (param_1,&local_108,uVar1);
    }
    _ZN4core3ptr47drop_in_place_LT_zoxide__db__stream__Stream_GT_17h136fa476fd0ea1b1E(&local_108);
  }
  return uVar1;
}