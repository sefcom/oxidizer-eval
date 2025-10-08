void _ZN6uu_env14split_iterator13SplitIterator25state_delimiter_backslash17h697f23c15afc6017E
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_40;
  uint uStack_3c;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 local_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 local_20;
  int iStack_1c;
  
  iVar2 = _ZN6uu_env14split_iterator13SplitIterator16get_current_char17h29d2c0904606848aE(param_2);
  switch(iVar2) {
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x5c:
    _ZN6uu_env14split_iterator13SplitIterator8take_one17h1e0059af94c5f623E(&local_40,param_2);
    if (local_40 == 0xc) goto LAB_001708d7;
    goto LAB_0017093e;
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x60:
  case 0x61:
  case 0x62:
    goto switchD_001708c1_caseD_25;
  case 0x5f:
switchD_001708c1_caseD_5f:
    _ZN6uu_env14split_iterator13SplitIterator8skip_one17h26dcd237c4fe536eE(&local_40,param_2);
    if (local_40 == 0xc) {
      *param_1 = 0xc;
      return;
    }
LAB_0017093e:
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_1c,local_20);
    *(ulong *)(param_1 + 4) = CONCAT35(uStack_2b,local_30);
    *(ulong *)(param_1 + 6) = CONCAT35(uStack_23,uStack_28);
    *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
    *(ulong *)(param_1 + 2) = CONCAT35(uStack_33,uStack_38);
    return;
  case 99:
    *param_1 = 9;
    return;
  default:
    if (iVar2 == 10) goto switchD_001708c1_caseD_5f;
    if (iVar2 == 0x110000) {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
                (param_1 + 4,&DAT_0011e820,9);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
switchD_001708c1_caseD_25:
    _ZN6uu_env14split_iterator13SplitIterator35check_and_replace_ascii_escape_code17hbf4d9b34cfe30d19E
              (&local_40,param_2,iVar2);
    if (local_40 != 0xc) {
      param_1[9] = iStack_1c;
      *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_28,uStack_2b);
      *(ulong *)((long)param_1 + 0x1d) = CONCAT17((undefined)iStack_1c,CONCAT43(local_20,uStack_23))
      ;
      *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_38,uStack_3c._1_3_);
      *(ulong *)((long)param_1 + 0xd) = CONCAT53(local_30,uStack_33);
      *param_1 = local_40;
      *(undefined *)(param_1 + 1) = (undefined)uStack_3c;
      return;
    }
    if ((uStack_3c & 1) == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 3;
      param_1[1] = iVar2;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
LAB_001708d7:
    _ZN6uu_env14split_iterator13SplitIterator14state_unquoted17hb014e515ee06de9cE(param_1,param_2);
    return;
  }
}