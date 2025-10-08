void _ZN3bat7vscreen10Attributes15update_with_sgr17h0729c538a11aeff6E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68,0x3b,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  *(undefined *)(param_1 + 0x42) = 1;
  local_70 = param_3;
  uVar2 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h824c51f8052ebe40E
                    (&local_78);
  if ((char)uVar2 != '\x02') {
    local_80 = param_1 + 0x2a;
    local_88 = param_1 + 0x30;
    local_98 = param_1 + 6;
    local_90 = param_1 + 0xc;
    do {
      if ((uVar2 & 1) != 0) {
switchD_00544cfd_caseD_0:
        _ZN3bat7vscreen10Attributes9sgr_reset17h10a314ddbb9e99a7E(param_1);
        goto LAB_00544cd8;
      }
      uVar1 = (uint)uVar2;
      uVar3 = uVar2 >> 0x10 & 0xffff;
      switch((short)(uVar2 >> 0x10)) {
      case 0:
        goto switchD_00544cfd_caseD_0;
      case 1:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                  (&local_b0,&DAT_0018066c,4);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(param_1 + 0x1e)
        ;
        *(undefined8 *)(param_1 + 0x22) = local_a0;
        param_1[0x1e] = local_b0;
        param_1[0x1f] = uStack_ac;
        param_1[0x20] = uStack_a8;
        param_1[0x21] = uStack_a4;
        break;
      case 2:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                  (&local_b0,&DAT_001817dc,4);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(param_1 + 0x24)
        ;
        *(undefined8 *)(param_1 + 0x28) = local_a0;
        param_1[0x24] = local_b0;
        param_1[0x25] = uStack_ac;
        param_1[0x26] = uStack_a8;
        param_1[0x27] = uStack_a4;
        break;
      case 3:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                  (&local_b0,&DAT_001802a8,4);
        puVar4 = local_88;
        goto LAB_00544e51;
      case 4:
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
                  (&local_b0,&DAT_00180bb4,4);
        puVar4 = local_80;
LAB_00544e51:
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(puVar4);
        *(undefined8 *)(puVar4 + 4) = local_a0;
        *puVar4 = local_b0;
        puVar4[1] = uStack_ac;
        puVar4[2] = uStack_a8;
        puVar4[3] = uStack_a4;
        break;
      default:
        if (0x9ffff < uVar1 - 0x1e0000) {
          if (0x9ffff < uVar1 - 0x280000) {
            if ((uVar1 & 0xfffe0000) == 0x3a0000) {
              _ZN3bat7vscreen10Attributes11parse_color17h678d5e16d2ba0f94E
                        (&local_b0,uVar3,&local_78);
              puVar4 = local_90;
              goto LAB_00544e51;
            }
            if (uVar1 - 0x5a0000 < 0x80000) goto LAB_00544d42;
            if (0x7ffff < uVar1 - 0x640000) break;
          }
          _ZN3bat7vscreen10Attributes11parse_color17h678d5e16d2ba0f94E(&local_b0,uVar3,&local_78);
          puVar4 = local_98;
          goto LAB_00544e51;
        }
LAB_00544d42:
        _ZN3bat7vscreen10Attributes11parse_color17h678d5e16d2ba0f94E(&local_b0,uVar3,&local_78);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(param_1);
        *(undefined8 *)(param_1 + 4) = local_a0;
        *param_1 = local_b0;
        param_1[1] = uStack_ac;
        param_1[2] = uStack_a8;
        param_1[3] = uStack_a4;
        break;
      case 0x16:
        *(undefined8 *)(param_1 + 0x22) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        break;
      case 0x17:
        *(undefined8 *)(param_1 + 0x34) = 0;
        break;
      case 0x18:
        *(undefined8 *)(param_1 + 0x2e) = 0;
      }
LAB_00544cd8:
      uVar2 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h824c51f8052ebe40E
                        (&local_78);
    } while ((char)uVar2 != '\x02');
  }
  return;
}