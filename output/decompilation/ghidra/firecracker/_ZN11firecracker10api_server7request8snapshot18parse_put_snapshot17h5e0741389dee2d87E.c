void _ZN11firecracker10api_server7request8snapshot18parse_put_snapshot17h5e0741389dee2d87E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined8 local_78;
  long *local_68;
  code *pcStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined local_40 [24];
  
  if (param_4 == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
              (&local_68,"Missing snapshot operation type.",0x20);
    uStack_82 = (undefined2)local_58;
    local_80 = (undefined6)((ulong)local_58 >> 0x10);
    uStack_92 = SUB82(local_68,0);
    uStack_90 = (undefined6)((ulong)local_68 >> 0x10);
    uStack_8a = SUB82(pcStack_60,0);
    uStack_88 = (undefined6)((ulong)pcStack_60 >> 0x10);
    *(undefined2 *)(param_1 + 1) = 0x301;
  }
  else {
    local_50 = param_4;
    local_48 = param_5;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                      (param_4,param_5,&DAT_0013826c,6);
    if (cVar1 != '\0') {
      _ZN11firecracker10api_server7request8snapshot25parse_put_snapshot_create17h4a6c9706c6202664E
                (param_1,param_2,param_3);
      return;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                      (param_4,param_5,"loadIntr",4);
    if (cVar1 != '\0') {
      _ZN11firecracker10api_server7request8snapshot23parse_put_snapshot_load17ha6addff4be7448a3E
                (param_1,param_2,param_3);
      return;
    }
    local_68 = &local_50;
    pcStack_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
    local_98 = 0x4a38a0;
    uStack_92 = 0;
    uStack_90 = 1;
    uStack_8a = 0;
    local_78 = 0;
    uStack_88 = SUB86(&local_68,0);
    uStack_82 = (undefined2)((ulong)&local_68 >> 0x30);
    local_80 = 1;
    uStack_7a = 0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
              (local_40,0,extraout_RDX,&local_98);
    uStack_92 = (undefined2)local_40._0_8_;
    uStack_90 = SUB86(local_40._0_8_,2);
    uStack_8a = (undefined2)local_40._8_8_;
    uStack_88 = SUB86(local_40._8_8_,2);
    uStack_82 = (undefined2)local_40._16_8_;
    local_80 = SUB86(local_40._16_8_,2);
    *(undefined2 *)(param_1 + 1) = 0x103;
  }
  *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_92,local_98);
  *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_8a,uStack_90);
  param_1[3] = CONCAT62(uStack_88,uStack_8a);
  param_1[4] = CONCAT62(local_80,uStack_82);
  *param_1 = 1;
  return;
}