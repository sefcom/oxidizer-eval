undefined8 *
_ZN6uu_env10EnvAppData28process_all_string_arguments17h37f9f42a31d85940E
          (undefined8 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_78 = 0;
  uStack_70 = 8;
  local_68 = 0;
  local_58 = *(long *)(param_3 + 8);
  local_50 = local_58 + *(long *)(param_3 + 0x10) * 0x18;
  local_80 = param_1;
  local_60 = param_3;
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h318b604434d12f7cE
                    (&local_58);
  if (lVar2 != 0) {
    do {
                    /* try { // try from 001cdd08 to 001cde4e has its CatchHandler @ 001cdea7 */
      _ZN6uu_env28check_and_handle_string_args17h2d9cfd9650b812c7E
                (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012492c,
                 0xe,&local_78,0);
      lVar3 = CONCAT44(uStack_94,local_98);
      if (lVar3 != 0) {
LAB_001cde6c:
        puVar1 = local_80;
        local_80[1] = lVar3;
        local_80[2] = CONCAT44(uStack_8c,uStack_90);
        *local_80 = 0x8000000000000000;
        _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17he51afd1c6657a772E
                  (&local_78);
        return puVar1;
      }
      if ((char)uStack_90 == '\0') {
        _ZN6uu_env28check_and_handle_string_args17h2d9cfd9650b812c7E
                  (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012493a,
                   2,&local_78,0);
        lVar3 = CONCAT44(uStack_94,local_98);
        if (lVar3 != 0) goto LAB_001cde6c;
        if ((char)uStack_90 != '\0') goto LAB_001cdd76;
        _ZN6uu_env28check_and_handle_string_args17h2d9cfd9650b812c7E
                  (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&DAT_0012493c,
                   3,&local_78,0);
        lVar3 = CONCAT44(uStack_94,local_98);
        if (lVar3 != 0) goto LAB_001cde6c;
        if ((char)uStack_90 == '\0') {
          _ZN6uu_env28check_and_handle_string_args17h2d9cfd9650b812c7E
                    (&local_98,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),"-vvSAuto",4
                     ,&local_78,local_60);
          lVar3 = CONCAT44(uStack_94,local_98);
          if (lVar3 != 0) goto LAB_001cde6c;
          if ((char)uStack_90 == '\0') {
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h220e028d5ab62681E
                      (&local_98,lVar2);
            local_38 = local_88;
            local_48 = local_98;
            uStack_44 = uStack_94;
            uStack_40 = uStack_90;
            uStack_3c = uStack_8c;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc5b0859d542897baE(&local_78,&local_48);
          }
          else {
            *param_2 = 0x101;
            *(undefined *)(param_2 + 1) = 0;
          }
        }
        else {
          *param_2 = 0x101;
        }
      }
      else {
LAB_001cdd76:
        *(undefined *)((long)param_2 + 1) = 1;
      }
      lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h318b604434d12f7cE
                        (&local_58);
    } while (lVar2 != 0);
  }
  local_80[2] = local_68;
  *local_80 = local_78;
  local_80[1] = uStack_70;
  return local_80;
}