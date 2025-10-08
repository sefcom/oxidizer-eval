undefined8
_ZN21ruff_python_formatter10expression11binary_like23is_simple_power_operand17h106dbb259fc1f4c9E
          (undefined4 *param_1)

{
  long lVar1;
  
  do {
    lVar1 = 0x30;
    switch(*param_1) {
    case 3:
      lVar1 = 8;
      if (*(char *)(param_1 + 7) == '\x01') {
        return 0;
      }
switchD_00407b5a_caseD_19:
      param_1 = *(undefined4 **)((long)param_1 + lVar1);
      break;
    default:
      return 0;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1c:
      return 1;
    case 0x19:
      goto switchD_00407b5a_caseD_19;
    }
  } while( true );
}