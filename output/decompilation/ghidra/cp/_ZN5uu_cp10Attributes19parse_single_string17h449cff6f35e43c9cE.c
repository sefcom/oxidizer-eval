undefined8 * _ZN5uu_cp10Attributes19parse_single_string17h449cff6f35e43c9cE(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined local_b8 [8];
  undefined local_b0 [8];
  undefined local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)local_b8;
  (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_00267ba8)
            (local_a8);
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                    (local_a0,local_98,&DAT_00123a4b,3);
  if (cVar1 == '\0') {
    local_b0._0_4_ = 0;
    local_b8 = (undefined  [8])0x0;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                      (local_a0,local_98,"mode",4);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                        (local_a0,local_98,"ownership",9);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                          (local_a0,local_98,&DAT_00123a37,10);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                            (local_a0,local_98,"context",7);
          if (cVar1 == '\0') {
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                              (local_a0,local_98,"link",4);
            if ((cVar1 == '\0') &&
               (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                                  (local_a0,local_98,&DAT_00123a41,5), cVar1 == '\0')) {
              cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                                (local_a0,local_98,&DAT_00123a46,5);
              if (cVar1 == '\0') {
                local_80 = 0;
                local_78 = local_a0;
                local_70 = local_98;
                local_68 = 1;
                local_90 = &local_80;
                local_88 = 
                PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
                ;
                local_48 = &PTR_s_invalid_attribute_0025e998;
                local_40 = 1;
                local_28 = 0;
                local_38 = &local_90;
                local_30 = 1;
                    /* try { // try from 0019e772 to 0019e780 has its CatchHandler @ 0019e7a6 */
                _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E
                          (&local_60,&local_48);
                param_1[3] = local_50;
                *(undefined4 *)(param_1 + 1) = local_60;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
                *(undefined4 *)(param_1 + 2) = uStack_58;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
                uVar3 = 0x8000000000000008;
                goto LAB_0019e6cb;
              }
              puVar2 = (undefined8 *)((long)local_b0 + 2);
            }
            else {
              puVar2 = (undefined8 *)local_b0;
            }
          }
          else {
            puVar2 = (undefined8 *)((long)local_b8 + 6);
          }
        }
        else {
          puVar2 = (undefined8 *)((long)local_b8 + 4);
        }
      }
    }
    else {
      puVar2 = (undefined8 *)((long)local_b8 + 2);
    }
    *(undefined2 *)puVar2 = 0x101;
    *(undefined4 *)(param_1 + 2) = local_b0._0_4_;
    param_1[1] = local_b8;
  }
  else {
    param_1[1] = 0x10101010101;
    *(undefined4 *)(param_1 + 2) = 0x10101;
  }
  uVar3 = 0x800000000000000c;
LAB_0019e6cb:
  *param_1 = uVar3;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(local_a8);
  return param_1;
}