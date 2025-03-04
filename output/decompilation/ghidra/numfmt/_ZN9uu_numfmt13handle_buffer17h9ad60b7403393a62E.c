undefined  [16] _ZN9uu_numfmt13handle_buffer17h9ad60b7403393a62E(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined **local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined **ppuStack_a8;
  undefined ***local_a0;
  undefined *local_98;
  undefined **local_90;
  undefined ***pppuStack_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulong local_50;
  undefined *local_48;
  undefined **local_40;
  undefined ***local_38;
  
  ppuVar4 = (undefined **)0x8000000000000001;
  local_60 = &local_68;
  local_58 = 0;
  local_68 = param_1;
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0cf431a8968d0747E
            (&local_50,&local_60);
  if (local_48 != (undefined *)0x8000000000000001) {
    uVar1 = *(ulong *)(param_2 + 0xc0);
    ppuVar4 = &local_b0;
    do {
      if (local_48 == (undefined *)0x8000000000000000) {
        local_c0 = local_40;
                    /* try { // try from 00171538 to 0017156d has its CatchHandler @ 0017159a */
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h4cabc1d81ea85127E
                  (&local_b0,&local_c0);
        local_80 = local_a0;
        local_90 = (undefined **)local_b0;
        pppuStack_88 = (undefined ***)ppuStack_a8;
        local_98 = (undefined *)0x0;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb050645051cd6acaE(&local_98);
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hf7266ee2a8c411ceE(&local_c0);
        auVar5._8_8_ = &
                       PTR__ZN4core3ptr51drop_in_place_LT_uu_numfmt__errors__NumfmtError_GT_17h9519fa4ce8294667E_002329c0
        ;
        auVar5._0_8_ = uVar3;
        return auVar5;
      }
      if (local_50 < uVar1) {
        local_b0 = local_48;
        ppuStack_a8 = local_40;
        local_a0 = local_38;
        local_b8 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_98 = &DAT_00232968;
        local_90 = (undefined **)0x2;
        local_78 = 0;
        pppuStack_88 = &local_c0;
        local_80 = (undefined ***)0x1;
                    /* try { // try from 001714da to 001714e4 has its CatchHandler @ 001715a9 */
        local_c0 = ppuVar4;
        (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00239940)(&local_98);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8713d35d56fb5a34E(ppuVar4);
      }
      else {
        local_98 = local_48;
        local_90 = local_40;
        pppuStack_88 = local_38;
                    /* try { // try from 0017150f to 00171517 has its CatchHandler @ 001715b8 */
        auVar5 = (*(code *)
                   PTR__ZN9uu_numfmt28format_and_handle_validation17he0ebc98d5f24d5daE_00239938)
                           (local_40,local_38,param_2);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8713d35d56fb5a34E(&local_98);
        if (auVar5._0_8_ != 0) {
          return auVar5;
        }
      }
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0cf431a8968d0747E
                (&local_50,&local_60);
    } while (local_48 != (undefined *)0x8000000000000001);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ppuVar4;
  return auVar2 << 0x40;
}