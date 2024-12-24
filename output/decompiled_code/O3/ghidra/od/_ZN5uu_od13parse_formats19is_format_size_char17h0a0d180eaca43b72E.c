undefined8 __rustcall
uu_od::parse_formats::is_format_size_char(int param_1,char param_2,undefined *param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  
  if (param_2 == '\0') {
    return 0;
  }
  if (param_2 == '\x01') {
    uVar2 = 0;
    switch(param_1) {
    case 0x43:
      uVar1 = 1;
      break;
    default:
      goto switchD_001caee6_caseD_44;
    case 0x49:
      uVar1 = 4;
      break;
    case 0x4c:
switchD_001caee6_caseD_4c:
      uVar1 = 8;
      break;
    case 0x53:
      uVar1 = 2;
    }
  }
  else {
    if (param_1 == 0x44) goto switchD_001caee6_caseD_4c;
    uVar1 = 4;
    if (param_1 != 0x46) {
      return 0;
    }
  }
  *param_3 = uVar1;
  uVar2 = 1;
switchD_001caee6_caseD_44:
  return uVar2;
}