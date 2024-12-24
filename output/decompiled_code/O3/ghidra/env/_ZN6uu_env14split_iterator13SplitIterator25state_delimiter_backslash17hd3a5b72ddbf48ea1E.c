void __rustcall
uu_env::split_iterator::SplitIterator::state_delimiter_backslash(int *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = get_current_char(param_2);
  switch(iVar2) {
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x5c:
    take_one(&local_40,param_2);
    if (local_40 == 8) goto LAB_001d9bf7;
    goto LAB_001d9c5e;
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
    goto switchD_001d9be1_caseD_25;
  case 0x5f:
switchD_001d9be1_caseD_5f:
    skip_one(&local_40,param_2);
    if (local_40 == 8) {
      *param_1 = 8;
      return;
    }
LAB_001d9c5e:
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_1c,uStack_20);
    *(ulong *)(param_1 + 4) = CONCAT35(uStack_2b,uStack_30);
    *(ulong *)(param_1 + 6) = CONCAT35(uStack_23,uStack_28);
    *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
    *(ulong *)(param_1 + 2) = CONCAT35(uStack_33,uStack_38);
    return;
  case 99:
    *param_1 = 6;
    return;
  default:
    if (iVar2 == 10) goto switchD_001d9be1_caseD_5f;
    if (iVar2 == 0x110000) {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 4,"Delimiter",9);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
switchD_001d9be1_caseD_25:
    check_and_replace_ascii_escape_code(&local_40,param_2,iVar2);
    if (local_40 != 8) {
      param_1[9] = iStack_1c;
      *(ulong *)((long)param_1 + 0x15) = CONCAT53(uStack_28,uStack_2b);
      *(ulong *)((long)param_1 + 0x1d) =
           CONCAT17((undefined)iStack_1c,CONCAT43(uStack_20,uStack_23));
      *(ulong *)((long)param_1 + 5) = CONCAT53(uStack_38,uStack_3c._1_3_);
      *(ulong *)((long)param_1 + 0xd) = CONCAT53(uStack_30,uStack_33);
      *param_1 = local_40;
      *(char *)(param_1 + 1) = (char)uStack_3c;
      return;
    }
    if ((char)uStack_3c == '\0') {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      *param_1 = 3;
      param_1[1] = iVar2;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
LAB_001d9bf7:
    state_unquoted(param_1,param_2);
    return;
  }
}