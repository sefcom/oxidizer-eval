byte _ZN21ruff_python_formatter9statement5suite49should_insert_blank_line_after_class_in_stub_file17h5a93a285ad0ff8fdE
               (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  long local_50;
  long local_48;
  undefined local_40 [16];
  undefined8 *local_30;
  undefined local_28;
  
  bVar5 = 0;
  if ((param_3 != 0x5e) && (*(char *)(param_5 + 0x33) == '\x01')) {
    local_50 = param_1;
    local_48 = param_2;
    if (param_1 == 3) {
      uVar1 = *(undefined8 *)(param_5 + 0x10);
      cVar3 = _ZN21ruff_python_formatter9statement5suite25contains_only_an_ellipsis17hc074c7c945b43356E
                        (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),uVar1);
      if (cVar3 == '\0') {
        bVar5 = _ZN21ruff_python_formatter8comments8Comments21has_trailing_own_line17h8c381b2842dc94aaE
                          (uVar1,3,param_2);
        bVar5 = bVar5 ^ 1;
      }
      else {
        lVar2 = *(long *)(local_48 + 0x10);
        if (param_3 == 3) {
          cVar3 = _ZN21ruff_python_formatter9statement5suite25contains_only_an_ellipsis17hc074c7c945b43356E
                            (*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),uVar1);
          if (cVar3 == '\0') {
            return 1;
          }
          if (lVar2 != 0 || *(long *)(param_4 + 0x10) != 0) {
            return 1;
          }
        }
        else if (lVar2 != 0) {
          return 1;
        }
        bVar5 = param_3 == 2;
      }
    }
    else {
      local_40 = (*(code *)
                   PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_18last_child_in_body17h106de3f3c845d12eE_006bd958
                 )(&local_50);
      local_28 = 0;
      local_30 = (undefined8 *)(param_5 + 0x10);
      uVar4 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h639535931336adedE
                        (local_40);
      bVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                        (uVar4,1);
    }
  }
  return bVar5;
}